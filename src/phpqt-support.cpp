/* phpqt-support.cpp — see phpqt-support.h. Hand-written. */
#include "phpqt-support.h"
#include "phpqt-types.h"

#include <QtCore/QMetaObject>
#include <QtCore/QMetaType>
#include <cstdarg>
#include <cstring>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace phpqt {

namespace {

/* Single-thread expectation: one PHP thread talks to Qt (the CLI process model). */
std::unordered_map<void *, Entry> g_registry;
std::unordered_map<void *, std::unordered_map<std::string, zval>> g_overrides;
std::vector<void (*)(void *)> g_forget_listeners;
std::unordered_set<std::string> g_warned;
QObject *g_context = nullptr;

zend_long as_handle(void *canon) { return static_cast<zend_long>(reinterpret_cast<uintptr_t>(canon)); }
void *as_canon(zend_long h) { return reinterpret_cast<void *>(static_cast<uintptr_t>(h)); }

} // namespace

QObject *context()
{
    if (g_context == nullptr) {
        g_context = new QObject();
        g_context->setObjectName(QStringLiteral("phpqt.context"));
    }
    return g_context;
}

const TypeInfo *type_by_tag(int tag)
{
    return (tag >= 0 && tag < kTypeCount) ? &kTypes[tag] : nullptr;
}

const TypeInfo *type_by_name(const char *name)
{
    if (name == nullptr) {
        return nullptr;
    }
    for (int i = 0; i < kTypeCount; ++i) {
        if (std::strcmp(kTypes[i].name, name) == 0) {
            return &kTypes[i];
        }
    }
    return nullptr;
}

bool tag_is_a(int tag, int base)
{
    if (tag == base) {
        return true;
    }
    const TypeInfo *t = type_by_tag(tag);
    if (t == nullptr) {
        return false;
    }
    for (const int *b = t->bases; *b != -1; ++b) {
        if (*b == base) {
            return true;
        }
    }
    return false;
}

zend_long handle_register(void *canon, void *obj, int tag, bool owned, bool shell)
{
    if (canon == nullptr) {
        return 0;
    }
    const TypeInfo *t = type_by_tag(tag);
    if (t == nullptr) {
        php_error_docref(NULL, E_WARNING, "register: unknown type tag %d", tag);
        return 0;
    }
    if (!t->isQObject && t->del == nullptr) {
        owned = false;   /* nothing could free it */
    }
    auto it = g_registry.find(canon);
    if (it != g_registry.end()) {
        Entry &e = it->second;
        if (e.tag != tag && tag_is_a(tag, e.tag)) {   /* a more derived static type was seen */
            e.tag = tag;
            e.obj = obj;
        }
        e.owned = e.owned || owned;
        e.shell = e.shell || shell;
        return as_handle(canon);
    }
    g_registry.emplace(canon, Entry{canon, obj, tag, owned, shell});
    if (t->isQObject) {
        QObject *o = static_cast<QObject *>(t->cast(obj, kQObjectTag));
        QObject::connect(o, &QObject::destroyed, context(), [canon]() { forget_canon(canon); });
    }
    return as_handle(canon);
}

Entry *handle_lookup(zend_long h)
{
    if (h == 0) {
        return nullptr;
    }
    auto it = g_registry.find(as_canon(h));
    return it == g_registry.end() ? nullptr : &it->second;
}

void forget_canon(void *canon)
{
    for (auto listener : g_forget_listeners) {
        listener(canon);
    }
    auto ov = g_overrides.find(canon);
    if (ov != g_overrides.end()) {
        for (auto &kv : ov->second) {
            zval_ptr_dtor(&kv.second);
        }
        g_overrides.erase(ov);
    }
    g_registry.erase(canon);
}

void on_forget(void (*listener)(void *canon))
{
    g_forget_listeners.push_back(listener);
}

void handle_forget(zend_long h)
{
    if (h != 0) {
        forget_canon(as_canon(h));
    }
}

void handle_release(zend_long h)
{
    Entry *e = handle_lookup(h);
    if (e == nullptr) {
        return;
    }
    const TypeInfo *t = type_by_tag(e->tag);
    void *canon = e->canon;
    void *obj = e->obj;
    bool owned = e->owned;
    forget_canon(canon);   /* connections and overrides go first, so nothing is delivered to a dying object */
    if (t->isQObject) {
        static_cast<QObject *>(t->cast(obj, kQObjectTag))->deleteLater();
    } else if (owned && t->del != nullptr) {
        t->del(obj);
    }
}

bool handle_adopt(zend_long h)
{
    Entry *e = handle_lookup(h);
    if (e == nullptr) {
        return false;
    }
    const TypeInfo *t = type_by_tag(e->tag);
    if (!t->isQObject && t->del == nullptr) {
        return false;
    }
    e->owned = true;
    return true;
}

void *handle_as(zend_long h, int wantTag)
{
    Entry *e = handle_lookup(h);
    if (e == nullptr) {
        return nullptr;
    }
    const TypeInfo *t = type_by_tag(e->tag);
    if (tag_is_a(e->tag, wantTag)) {
        return t->cast(e->obj, wantTag);
    }
    const TypeInfo *w = type_by_tag(wantTag);
    if (w != nullptr && t->isQObject && w->isQObject) {   /* downcast by runtime class */
        QObject *o = static_cast<QObject *>(t->cast(e->obj, kQObjectTag));
        if (o->inherits(w->name)) {
            return w->fromQObject(o);
        }
    }
    return nullptr;
}

bool handle_is_shell(zend_long h)
{
    Entry *e = handle_lookup(h);
    return e != nullptr && e->shell;
}

zend_long reg_qobject(QObject *o)
{
    if (o == nullptr) {
        return 0;
    }
    for (const QMetaObject *mo = o->metaObject(); mo != nullptr; mo = mo->superClass()) {
        const TypeInfo *t = type_by_name(mo->className());
        if (t != nullptr) {
            return handle_register(static_cast<QObject *>(o), t->fromQObject(o), t->tag, false, false);
        }
    }
    return handle_register(static_cast<QObject *>(o), static_cast<void *>(o), kQObjectTag, false, false);
}

zend_long reg_dynamic(void *p, int staticTag)
{
    if (p == nullptr) {
        return 0;
    }
    const TypeInfo *t = type_by_tag(staticTag);
    int tag = staticTag;
    void *obj = p;
    if (t != nullptr && t->downcast != nullptr) {
        void *d = t->downcast(p, &tag);
        if (d != nullptr) {
            obj = d;
        }
    }
    const TypeInfo *r = type_by_tag(tag);
    return handle_register(r->canon(obj), obj, tag, false, false);
}

/* ---- scalars ---- */

zval *deref(zval *z)
{
    while (z != nullptr && Z_TYPE_P(z) == IS_REFERENCE) {
        z = Z_REFVAL_P(z);
    }
    return z;
}

bool is_null(zval *z)
{
    z = deref(z);
    return z == nullptr || Z_TYPE_P(z) == IS_NULL || Z_TYPE_P(z) == IS_UNDEF;
}

zend_long arg_long(zval *z)
{
    z = deref(z);
    if (z == nullptr) {
        return 0;
    }
    switch (Z_TYPE_P(z)) {
        case IS_LONG: return Z_LVAL_P(z);
        case IS_DOUBLE: return zend_dval_to_lval(Z_DVAL_P(z));
        case IS_TRUE: return 1;
        case IS_STRING: return ZEND_STRTOL(Z_STRVAL_P(z), nullptr, 10);
        default: return 0;
    }
}

double arg_double(zval *z)
{
    z = deref(z);
    if (z == nullptr) {
        return 0.0;
    }
    switch (Z_TYPE_P(z)) {
        case IS_DOUBLE: return Z_DVAL_P(z);
        case IS_LONG: return static_cast<double>(Z_LVAL_P(z));
        case IS_TRUE: return 1.0;
        case IS_STRING: return zend_strtod(Z_STRVAL_P(z), nullptr);
        default: return 0.0;
    }
}

bool arg_bool(zval *z)
{
    z = deref(z);
    return z != nullptr && zend_is_true(z);
}

QString arg_qstring(zval *z)
{
    z = deref(z);
    if (z == nullptr || Z_TYPE_P(z) == IS_NULL) {
        return QString();
    }
    if (Z_TYPE_P(z) == IS_STRING) {
        return QString::fromUtf8(Z_STRVAL_P(z), static_cast<qsizetype>(Z_STRLEN_P(z)));
    }
    zend_string *s = zval_get_string(z);
    QString out = QString::fromUtf8(ZSTR_VAL(s), static_cast<qsizetype>(ZSTR_LEN(s)));
    zend_string_release(s);
    return out;
}

QByteArray arg_bytes(zval *z)
{
    z = deref(z);
    if (z == nullptr || Z_TYPE_P(z) == IS_NULL) {
        return QByteArray();
    }
    if (Z_TYPE_P(z) == IS_STRING) {
        return QByteArray(Z_STRVAL_P(z), static_cast<qsizetype>(Z_STRLEN_P(z)));
    }
    zend_string *s = zval_get_string(z);
    QByteArray out(ZSTR_VAL(s), static_cast<qsizetype>(ZSTR_LEN(s)));
    zend_string_release(s);
    return out;
}

const char *arg_cstr(zval *z)
{
    z = deref(z);
    if (z == nullptr || Z_TYPE_P(z) == IS_NULL) {
        return nullptr;
    }
    if (Z_TYPE_P(z) != IS_STRING) {
        convert_to_string(z);
    }
    return Z_STRVAL_P(z);
}

QChar arg_qchar(zval *z)
{
    QString s = arg_qstring(z);
    return s.isEmpty() ? QChar() : s.at(0);
}

void ret_qstring(zval *rv, const QString &s)
{
    QByteArray u = s.toUtf8();
    ZVAL_STRINGL(rv, u.constData(), static_cast<size_t>(u.size()));
}

void ret_bytes(zval *rv, const QByteArray &b)
{
    ZVAL_STRINGL(rv, b.constData(), static_cast<size_t>(b.size()));
}

void ret_cstr(zval *rv, const char *s)
{
    if (s == nullptr) {
        ZVAL_NULL(rv);
    } else {
        ZVAL_STRING(rv, s);
    }
}

void ret_qchar(zval *rv, QChar c)
{
    ret_qstring(rv, QString(c));
}

/* ---- geometry ---- */

namespace {
zval *field(zval *z, const char *name)
{
    z = deref(z);
    if (z == nullptr || Z_TYPE_P(z) != IS_ARRAY) {
        return nullptr;
    }
    return zend_hash_str_find(Z_ARRVAL_P(z), name, std::strlen(name));
}
zend_long fi(zval *z, const char *name) { zval *f = field(z, name); return f ? arg_long(f) : 0; }
double fd(zval *z, const char *name) { zval *f = field(z, name); return f ? arg_double(f) : 0.0; }
void put(zval *rv, const char *name, zend_long v) { add_assoc_long(rv, name, v); }
void put(zval *rv, const char *name, double v) { add_assoc_double(rv, name, v); }
} // namespace

void ret_geom(zval *rv, const QPoint &g) { array_init(rv); put(rv, "x", static_cast<zend_long>(g.x())); put(rv, "y", static_cast<zend_long>(g.y())); }
void ret_geom(zval *rv, const QPointF &g) { array_init(rv); put(rv, "x", g.x()); put(rv, "y", g.y()); }
void ret_geom(zval *rv, const QSize &g) { array_init(rv); put(rv, "width", static_cast<zend_long>(g.width())); put(rv, "height", static_cast<zend_long>(g.height())); }
void ret_geom(zval *rv, const QSizeF &g) { array_init(rv); put(rv, "width", g.width()); put(rv, "height", g.height()); }
void ret_geom(zval *rv, const QRect &g) { array_init(rv); put(rv, "x", static_cast<zend_long>(g.x())); put(rv, "y", static_cast<zend_long>(g.y())); put(rv, "width", static_cast<zend_long>(g.width())); put(rv, "height", static_cast<zend_long>(g.height())); }
void ret_geom(zval *rv, const QRectF &g) { array_init(rv); put(rv, "x", g.x()); put(rv, "y", g.y()); put(rv, "width", g.width()); put(rv, "height", g.height()); }
void ret_geom(zval *rv, const QLine &g) { array_init(rv); put(rv, "x1", static_cast<zend_long>(g.x1())); put(rv, "y1", static_cast<zend_long>(g.y1())); put(rv, "x2", static_cast<zend_long>(g.x2())); put(rv, "y2", static_cast<zend_long>(g.y2())); }
void ret_geom(zval *rv, const QLineF &g) { array_init(rv); put(rv, "x1", g.x1()); put(rv, "y1", g.y1()); put(rv, "x2", g.x2()); put(rv, "y2", g.y2()); }
void ret_geom(zval *rv, const QMargins &g) { array_init(rv); put(rv, "left", static_cast<zend_long>(g.left())); put(rv, "top", static_cast<zend_long>(g.top())); put(rv, "right", static_cast<zend_long>(g.right())); put(rv, "bottom", static_cast<zend_long>(g.bottom())); }
void ret_geom(zval *rv, const QMarginsF &g) { array_init(rv); put(rv, "left", g.left()); put(rv, "top", g.top()); put(rv, "right", g.right()); put(rv, "bottom", g.bottom()); }

QPoint arg_geom_QPoint(zval *z) { return QPoint(static_cast<int>(fi(z, "x")), static_cast<int>(fi(z, "y"))); }
QPointF arg_geom_QPointF(zval *z) { return QPointF(fd(z, "x"), fd(z, "y")); }
QSize arg_geom_QSize(zval *z) { return QSize(static_cast<int>(fi(z, "width")), static_cast<int>(fi(z, "height"))); }
QSizeF arg_geom_QSizeF(zval *z) { return QSizeF(fd(z, "width"), fd(z, "height")); }
QRect arg_geom_QRect(zval *z) { return QRect(static_cast<int>(fi(z, "x")), static_cast<int>(fi(z, "y")), static_cast<int>(fi(z, "width")), static_cast<int>(fi(z, "height"))); }
QRectF arg_geom_QRectF(zval *z) { return QRectF(fd(z, "x"), fd(z, "y"), fd(z, "width"), fd(z, "height")); }
QLine arg_geom_QLine(zval *z) { return QLine(static_cast<int>(fi(z, "x1")), static_cast<int>(fi(z, "y1")), static_cast<int>(fi(z, "x2")), static_cast<int>(fi(z, "y2"))); }
QLineF arg_geom_QLineF(zval *z) { return QLineF(fd(z, "x1"), fd(z, "y1"), fd(z, "x2"), fd(z, "y2")); }
QMargins arg_geom_QMargins(zval *z) { return QMargins(static_cast<int>(fi(z, "left")), static_cast<int>(fi(z, "top")), static_cast<int>(fi(z, "right")), static_cast<int>(fi(z, "bottom"))); }
QMarginsF arg_geom_QMarginsF(zval *z) { return QMarginsF(fd(z, "left"), fd(z, "top"), fd(z, "right"), fd(z, "bottom")); }

void assoc_set(zval *arr, const QString &key, zval *v)
{
    QByteArray k = key.toUtf8();
    add_assoc_zval_ex(arr, k.constData(), static_cast<size_t>(k.size()), v);
}

/* ---- QVariant ---- */

QVariant arg_variant(zval *z)
{
    z = deref(z);
    if (z == nullptr) {
        return QVariant();
    }
    switch (Z_TYPE_P(z)) {
        case IS_TRUE: return QVariant(true);
        case IS_FALSE: return QVariant(false);
        case IS_LONG: return QVariant(static_cast<qlonglong>(Z_LVAL_P(z)));
        case IS_DOUBLE: return QVariant(Z_DVAL_P(z));
        case IS_STRING: return QVariant(arg_qstring(z));
        case IS_ARRAY: {
            if (zend_array_is_list(Z_ARRVAL_P(z))) {
                QVariantList l;
                zval *v;
                ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), v) { l.append(arg_variant(v)); } ZEND_HASH_FOREACH_END();
                return QVariant(l);
            }
            QVariantMap m;
            zend_string *skey;
            zend_ulong ikey;
            zval *v;
            ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(z), ikey, skey, v) {
                m.insert(skey ? QString::fromUtf8(ZSTR_VAL(skey), static_cast<qsizetype>(ZSTR_LEN(skey))) : QString::number(ikey), arg_variant(v));
            } ZEND_HASH_FOREACH_END();
            return QVariant(m);
        }
        default: return QVariant();
    }
}

void ret_variant(zval *rv, const QVariant &v)
{
    switch (v.typeId()) {
        case QMetaType::UnknownType:
        case QMetaType::Nullptr: ZVAL_NULL(rv); return;
        case QMetaType::Bool: ZVAL_BOOL(rv, v.toBool()); return;
        case QMetaType::Int: case QMetaType::UInt: case QMetaType::LongLong: case QMetaType::ULongLong:
        case QMetaType::Short: case QMetaType::UShort: case QMetaType::Long: case QMetaType::ULong:
        case QMetaType::Char: case QMetaType::UChar: case QMetaType::SChar:
            ZVAL_LONG(rv, static_cast<zend_long>(v.toLongLong())); return;
        case QMetaType::Double: case QMetaType::Float: ZVAL_DOUBLE(rv, v.toDouble()); return;
        case QMetaType::QString: ret_qstring(rv, v.toString()); return;
        case QMetaType::QByteArray: ret_bytes(rv, v.toByteArray()); return;
        case QMetaType::QChar: ret_qchar(rv, v.toChar()); return;
        case QMetaType::QStringList: ret_seq(rv, v.toStringList(), [](zval *z, const QString &s) { ret_qstring(z, s); }); return;
        case QMetaType::QVariantList: ret_seq(rv, v.toList(), [](zval *z, const QVariant &e) { ret_variant(z, e); }); return;
        case QMetaType::QVariantMap: ret_map(rv, v.toMap(), [](zval *z, const QVariant &e) { ret_variant(z, e); }); return;
        case QMetaType::QVariantHash: ret_map(rv, v.toHash(), [](zval *z, const QVariant &e) { ret_variant(z, e); }); return;
        case QMetaType::QPoint: ret_geom(rv, v.toPoint()); return;
        case QMetaType::QPointF: ret_geom(rv, v.toPointF()); return;
        case QMetaType::QSize: ret_geom(rv, v.toSize()); return;
        case QMetaType::QSizeF: ret_geom(rv, v.toSizeF()); return;
        case QMetaType::QRect: ret_geom(rv, v.toRect()); return;
        case QMetaType::QRectF: ret_geom(rv, v.toRectF()); return;
        case QMetaType::QLine: ret_geom(rv, v.toLine()); return;
        case QMetaType::QLineF: ret_geom(rv, v.toLineF()); return;
        default: break;
    }
    QMetaType mt = v.metaType();
    if (mt.flags() & QMetaType::IsEnumeration) {
        ZVAL_LONG(rv, static_cast<zend_long>(v.toLongLong()));
        return;
    }
    if (mt.flags() & QMetaType::PointerToQObject) {
        ZVAL_LONG(rv, reg_qobject(v.value<QObject *>()));
        return;
    }
    if (!(mt.flags() & QMetaType::IsPointer) && v.canConvert<QVariantList>()) {
        ret_seq(rv, v.toList(), [](zval *z, const QVariant &e) { ret_variant(z, e); });
        return;
    }
    if (!(mt.flags() & QMetaType::IsPointer) && v.canConvert<QVariantMap>()) {
        ret_map(rv, v.toMap(), [](zval *z, const QVariant &e) { ret_variant(z, e); });
        return;
    }
    QByteArray n = mt.name();
    bool ptr = n.endsWith('*');
    if (ptr) {
        n.chop(1);
        n = n.trimmed();
    }
    const TypeInfo *t = type_by_name(n.constData());
    if (t == nullptr) {
        warn_once(mt.name(), "QVariant of type %s is not representable; null returned", mt.name());
        ZVAL_NULL(rv);
        return;
    }
    if (ptr) {
        void *p = *static_cast<void *const *>(v.constData());
        ZVAL_LONG(rv, reg_dynamic(p, t->tag));
        return;
    }
    void *copy = mt.create(v.constData());
    ZVAL_LONG(rv, handle_register(t->canon(copy), copy, t->tag, true, false));
}

/* ---- callbacks ---- */

bool call(zval *fn, uint32_t argc, zval *argv, zval *ret)
{
    zval rv;
    ZVAL_UNDEF(&rv);
    zend_fcall_info fci;
    zend_fcall_info_cache fcc;
    bool ok = false;
    if (zend_fcall_info_init(fn, 0, &fci, &fcc, nullptr, nullptr) == SUCCESS) {
        fci.retval = ret != nullptr ? ret : &rv;
        fci.param_count = argc;
        fci.params = argv;
        ok = zend_call_function(&fci, &fcc) == SUCCESS && EG(exception) == nullptr;
    } else {
        php_error_docref(NULL, E_WARNING, "callback is not callable");
    }
    for (uint32_t i = 0; i < argc; ++i) {
        zval_ptr_dtor(&argv[i]);
    }
    if (ret == nullptr) {
        zval_ptr_dtor(&rv);
    }
    return ok;
}

zval *override_lookup(void *canon, const char *member)
{
    auto it = g_overrides.find(canon);
    if (it == g_overrides.end()) {
        return nullptr;
    }
    auto m = it->second.find(member);
    return m == it->second.end() ? nullptr : &m->second;
}

void override_set(void *canon, const char *member, zval *fn)
{
    override_clear(canon, member);
    zval copy;
    ZVAL_COPY(&copy, deref(fn));
    g_overrides[canon].emplace(member, copy);
}

void override_clear(void *canon, const char *member)
{
    auto it = g_overrides.find(canon);
    if (it == g_overrides.end()) {
        return;
    }
    auto m = it->second.find(member);
    if (m != it->second.end()) {
        zval_ptr_dtor(&m->second);
        it->second.erase(m);
    }
    if (it->second.empty()) {
        g_overrides.erase(it);
    }
}

void warn_once(const char *key, const char *fmt, ...)
{
    if (!g_warned.insert(key).second) {
        return;
    }
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    php_error_docref(NULL, E_WARNING, "%s", buf);
}

} // namespace phpqt
