/* phpqt-bridge.cpp — pump, signals, overrides, event filter. Hand-written. */
#include "phpqt-support.h"
#include "phpqt-types.h"
#include "phpqt-bridge.h"

#include <QtCore/QCoreApplication>
#include <QtCore/QEvent>
#include <QtCore/QEventLoop>
#include <QtCore/QMetaMethod>
#include <QtCore/QMetaObject>
#include <cstring>
#include <map>
#include <unordered_map>

namespace {

struct Connection {
    void *senderCanon;
    int signalIndex;
    zval callback;
};

/* Receives every connected signal. No Q_OBJECT, no moc: slot ids past QObject's
 * own method count are connection ids, dispatched from qt_metacall (PyQt's model). */
class PhpQtReceiver : public QObject {
public:
    int qt_metacall(QMetaObject::Call c, int id, void **argv) override
    {
        id = QObject::qt_metacall(c, id, argv);
        if (id < 0 || c != QMetaObject::InvokeMetaMethod) {
            return id;
        }
        dispatch(id, argv);
        return -1;
    }
    void dispatch(int connId, void **argv);
};

class PhpQtFilter : public QObject {
public:
    bool eventFilter(QObject *watched, QEvent *event) override;
};

std::map<int, Connection> g_connections;
std::unordered_map<void *, zval> g_filters;
int g_nextConn = 1;
PhpQtReceiver *g_receiver = nullptr;
PhpQtFilter *g_filter = nullptr;
bool g_inited = false;

int slot_index(int connId) { return QObject::staticMetaObject.methodCount() + connId; }

void PhpQtReceiver::dispatch(int connId, void **argv)
{
    auto it = g_connections.find(connId);
    if (it == g_connections.end()) {
        return;
    }
    QObject *sender = static_cast<QObject *>(it->second.senderCanon);
    QMetaMethod m = sender->metaObject()->method(it->second.signalIndex);
    int n = m.parameterCount();
    zval args[16];
    uint32_t argc = 0;
    ZVAL_LONG(&args[argc++], phpqt::reg_qobject(sender));
    for (int i = 0; i < n && argc < 16; ++i) {
        QMetaType mt = m.parameterMetaType(i);
        if (!mt.isValid() || argv[i + 1] == nullptr) {
            phpqt::warn_once(m.methodSignature().constData(), "signal %s: argument %d has no meta type; null passed", m.methodSignature().constData(), i);
            ZVAL_NULL(&args[argc++]);
            continue;
        }
        phpqt::ret_variant(&args[argc++], QVariant(mt, argv[i + 1]));
    }
    zval fn;
    ZVAL_COPY(&fn, &it->second.callback);   /* the callback may disconnect itself */
    phpqt::call(&fn, argc, args, nullptr);
    zval_ptr_dtor(&fn);
}

bool PhpQtFilter::eventFilter(QObject *watched, QEvent *event)
{
    auto it = g_filters.find(static_cast<void *>(watched));
    if (it == g_filters.end()) {
        return false;
    }
    phpqt::Temp<QEvent> ev(event, PHPQT_TAG_QEvent);
    zval args[2];
    ZVAL_LONG(&args[0], phpqt::reg_qobject(watched));
    ZVAL_LONG(&args[1], ev.h);
    zval ret;
    ZVAL_UNDEF(&ret);
    zval fn;
    ZVAL_COPY(&fn, &it->second);
    bool ok = phpqt::call(&fn, 2, args, &ret);
    zval_ptr_dtor(&fn);
    bool consumed = ok && phpqt::arg_bool(&ret);
    zval_ptr_dtor(&ret);
    return consumed;
}

void forget_listener(void *canon)
{
    for (auto it = g_connections.begin(); it != g_connections.end();) {
        if (it->second.senderCanon == canon) {
            zval_ptr_dtor(&it->second.callback);
            it = g_connections.erase(it);
        } else {
            ++it;
        }
    }
    auto f = g_filters.find(canon);
    if (f != g_filters.end()) {
        zval_ptr_dtor(&f->second);
        g_filters.erase(f);
    }
}

QObject *qobject_arg(zval *handle, const char *who)
{
    QObject *o = phpqt::as<QObject>(handle, phpqt::kQObjectTag);
    if (o == nullptr) {
        php_error_docref(NULL, E_WARNING, "%s: handle is not a registered QObject", who);
    }
    return o;
}

} // namespace

extern "C" zend_long phpqt_bridge_init(void)
{
    if (!g_inited) {
        g_inited = true;
        g_receiver = new PhpQtReceiver();
        g_receiver->setObjectName(QStringLiteral("phpqt.receiver"));
        g_filter = new PhpQtFilter();
        g_filter->setObjectName(QStringLiteral("phpqt.filter"));
        phpqt::context();
        phpqt::on_forget(forget_listener);
    }
    return 1;
}

extern "C" void phpqt_bridge_pump(zval *p_maxTimeMs)
{
    zend_long ms = phpqt::arg_long(p_maxTimeMs);
    if (QCoreApplication::instance() == nullptr) {
        php_error_docref(NULL, E_WARNING, "pump: no QCoreApplication instance");
        return;
    }
    if (ms <= 0) {
        QCoreApplication::processEvents(QEventLoop::AllEvents);
    } else {
        QCoreApplication::processEvents(QEventLoop::AllEvents, static_cast<int>(ms));
    }
}

extern "C" void phpqt_bridge_release(zval *p_handle)
{
    phpqt::handle_release(phpqt::arg_long(p_handle));
}

extern "C" zend_long phpqt_bridge_adopt(zval *p_handle)
{
    return phpqt::handle_adopt(phpqt::arg_long(p_handle)) ? 1 : 0;
}

extern "C" zend_long phpqt_bridge_is_valid(zval *p_handle)
{
    return phpqt::handle_lookup(phpqt::arg_long(p_handle)) != nullptr ? 1 : 0;
}

extern "C" zend_long phpqt_bridge_is_shell(zval *p_handle)
{
    return phpqt::handle_is_shell(phpqt::arg_long(p_handle)) ? 1 : 0;
}

extern "C" void phpqt_bridge_type_name(zval *return_value, zval *p_handle)
{
    phpqt::Entry *e = phpqt::handle_lookup(phpqt::arg_long(p_handle));
    if (e == nullptr) {
        ZVAL_NULL(return_value);
        return;
    }
    const phpqt::TypeInfo *t = phpqt::type_by_tag(e->tag);
    if (t->isQObject) {
        QObject *o = static_cast<QObject *>(t->cast(e->obj, phpqt::kQObjectTag));
        phpqt::ret_cstr(return_value, o->metaObject()->className());
        return;
    }
    phpqt::ret_cstr(return_value, t->name);
}

extern "C" zend_long phpqt_bridge_is_a(zval *p_handle, zval *p_typeName)
{
    phpqt::Entry *e = phpqt::handle_lookup(phpqt::arg_long(p_handle));
    const char *name = phpqt::arg_cstr(p_typeName);
    if (e == nullptr || name == nullptr) {
        return 0;
    }
    const phpqt::TypeInfo *t = phpqt::type_by_tag(e->tag);
    if (t->isQObject) {
        QObject *o = static_cast<QObject *>(t->cast(e->obj, phpqt::kQObjectTag));
        return o->inherits(name) ? 1 : 0;
    }
    const phpqt::TypeInfo *w = phpqt::type_by_name(name);
    return (w != nullptr && phpqt::tag_is_a(e->tag, w->tag)) ? 1 : 0;
}

extern "C" zend_long phpqt_bridge_connect(zval *p_handle, zval *p_signature, zval *p_callback)
{
    QObject *sender = qobject_arg(p_handle, "connect");
    if (sender == nullptr) {
        return 0;
    }
    const char *sig = phpqt::arg_cstr(p_signature);
    if (sig == nullptr || sig[0] == '\0') {
        php_error_docref(NULL, E_WARNING, "connect: signature is empty");
        return 0;
    }
    if (!zend_is_callable(p_callback, 0, nullptr)) {
        php_error_docref(NULL, E_WARNING, "connect: callback is not callable");
        return 0;
    }
    QByteArray norm = QMetaObject::normalizedSignature(sig);
    int idx = sender->metaObject()->indexOfSignal(norm.constData());
    if (idx < 0) {
        php_error_docref(NULL, E_WARNING, "connect: %s has no signal \"%s\"", sender->metaObject()->className(), sig);
        return 0;
    }
    int connId = g_nextConn++;
    QMetaObject::Connection c = QMetaObject::connect(sender, idx, g_receiver, slot_index(connId), Qt::AutoConnection);
    if (!c) {
        php_error_docref(NULL, E_WARNING, "connect: QMetaObject::connect failed for \"%s\"", sig);
        return 0;
    }
    Connection entry{static_cast<void *>(sender), idx, {}};
    ZVAL_COPY(&entry.callback, phpqt::deref(p_callback));
    g_connections.emplace(connId, entry);
    return connId;
}

extern "C" void phpqt_bridge_disconnect(zval *p_handle, zval *p_connectionId)
{
    int connId = static_cast<int>(phpqt::arg_long(p_connectionId));
    auto it = g_connections.find(connId);
    if (it == g_connections.end()) {
        return;
    }
    QObject *sender = qobject_arg(p_handle, "disconnect");
    if (sender == nullptr || static_cast<void *>(sender) != it->second.senderCanon) {
        return;
    }
    QMetaObject::disconnect(sender, it->second.signalIndex, g_receiver, slot_index(connId));
    zval_ptr_dtor(&it->second.callback);
    g_connections.erase(it);
}

extern "C" zend_long phpqt_bridge_override(zval *p_handle, zval *p_member, zval *p_callback)
{
    zend_long h = phpqt::arg_long(p_handle);
    phpqt::Entry *e = phpqt::handle_lookup(h);
    const char *member = phpqt::arg_cstr(p_member);
    if (e == nullptr || member == nullptr) {
        php_error_docref(NULL, E_WARNING, "override: bad handle or member");
        return 0;
    }
    if (!e->shell) {
        php_error_docref(NULL, E_WARNING, "override: handle was not constructed through the extension; use installEventFilter");
        return 0;
    }
    const phpqt::TypeInfo *t = phpqt::type_by_tag(e->tag);
    bool known = false;
    for (const char *const *n = t->overridable; n != nullptr && *n != nullptr; ++n) {
        if (std::strcmp(*n, member) == 0) {
            known = true;
            break;
        }
    }
    if (!known) {
        php_error_docref(NULL, E_WARNING, "override: %s has no hookable virtual \"%s\"", t->name, member);
        return 0;
    }
    if (!zend_is_callable(p_callback, 0, nullptr)) {
        php_error_docref(NULL, E_WARNING, "override: callback is not callable");
        return 0;
    }
    phpqt::override_set(e->canon, member, p_callback);
    return 1;
}

extern "C" void phpqt_bridge_clear_override(zval *p_handle, zval *p_member)
{
    phpqt::Entry *e = phpqt::handle_lookup(phpqt::arg_long(p_handle));
    const char *member = phpqt::arg_cstr(p_member);
    if (e != nullptr && member != nullptr) {
        phpqt::override_clear(e->canon, member);
    }
}

extern "C" void phpqt_bridge_install_event_filter(zval *p_handle, zval *p_callback)
{
    QObject *o = qobject_arg(p_handle, "installEventFilter");
    if (o == nullptr) {
        return;
    }
    if (!zend_is_callable(p_callback, 0, nullptr)) {
        php_error_docref(NULL, E_WARNING, "installEventFilter: callback is not callable");
        return;
    }
    auto it = g_filters.find(static_cast<void *>(o));
    if (it != g_filters.end()) {
        zval_ptr_dtor(&it->second);
        g_filters.erase(it);
    } else {
        o->installEventFilter(g_filter);
    }
    zval copy;
    ZVAL_COPY(&copy, phpqt::deref(p_callback));
    g_filters.emplace(static_cast<void *>(o), copy);
}

extern "C" void phpqt_bridge_remove_event_filter(zval *p_handle)
{
    QObject *o = qobject_arg(p_handle, "removeEventFilter");
    if (o == nullptr) {
        return;
    }
    auto it = g_filters.find(static_cast<void *>(o));
    if (it == g_filters.end()) {
        return;
    }
    o->removeEventFilter(g_filter);
    zval_ptr_dtor(&it->second);
    g_filters.erase(it);
}
