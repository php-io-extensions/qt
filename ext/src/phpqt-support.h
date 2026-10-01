/* phpqt-support.h — handle registry, marshalling, PHP callbacks. Hand-written.
 * Included by every generated binding .cpp, every shell, and phpqt-bridge.cpp.
 * Binding headers (the C prototypes Zephir includes) never include this file. */
#pragma once

#include <QtCore/QObject>
#include <QtCore/QVariant>
#include <QtCore/QString>
#include <QtCore/QByteArray>
#include <QtCore/QChar>
#include <QtCore/QPoint>
#include <QtCore/QPointF>
#include <QtCore/QSize>
#include <QtCore/QSizeF>
#include <QtCore/QRect>
#include <QtCore/QRectF>
#include <QtCore/QLine>
#include <QtCore/QLineF>
#include <QtCore/QMargins>
#include <QtCore/QMarginsF>
#include <QtCore/QList>
#include <QtCore/QSet>
#include <QtCore/QMap>
#include <QtCore/QHash>
#include <QtCore/QMultiMap>
#include <QtCore/QMultiHash>
#include <QtCore/QStringList>
#include <QtCore/QByteArrayList>
#include <type_traits>
#include <utility>

/* php_compat.h renames bundled-library symbols with object-like macros (lookup → php_lookup, …);
 * after it, Qt member names such as QDnsLookup::lookup would be rewritten. Nothing here links those
 * libraries, so skip the renames. zend.h still brings php_config.h. */
#ifndef PHP_COMPAT_H
#define PHP_COMPAT_H
#endif
#include "php.h"
#ifdef ZTS
ZEND_TSRMLS_CACHE_EXTERN()
#endif

namespace phpqt {

using Caster      = void *(*)(void *obj, int wantTag);   /* static_cast to a base tag, nullptr if not a base */
using Canon       = void *(*)(void *obj);                /* canonical address of the object */
using Deleter     = void (*)(void *obj);                 /* nullptr when the destructor is not public */
using FromQObject = void *(*)(QObject *o);               /* static_cast QObject* down to the type; nullptr unless QObject-derived */
using Downcast    = void *(*)(void *obj, int *tag);      /* most-derived bound type via dynamic_cast; nullptr when not polymorphic */

constexpr int kQObjectTag = 0;   /* gen-src guarantees QObject is tag 0 */

struct TypeInfo {
    const char *name;                 /* qualified C++ name, equals QMetaObject::className() for QObjects */
    int tag;
    bool isQObject;
    Caster cast;
    Canon canon;
    Deleter del;
    FromQObject fromQObject;
    Downcast downcast;
    const int *bases;                 /* transitive public base tags, -1 terminated */
    const char *const *overridable;   /* hookable virtual names, nullptr terminated; nullptr without a shell */
};
extern const TypeInfo kTypes[];       /* phpqt-types.cpp (generated), indexed by tag */
extern const int kTypeCount;

struct Entry {
    void *canon;
    void *obj;      /* as the registered static type (tag) */
    int tag;
    bool owned;
    bool shell;
};

const TypeInfo *type_by_tag(int tag);
const TypeInfo *type_by_name(const char *name);
bool tag_is_a(int tag, int base);

/* ---- registry ---- */
zend_long handle_register(void *canon, void *obj, int tag, bool owned, bool shell);
Entry *handle_lookup(zend_long h);
void handle_forget(zend_long h);          /* drop the entry; never frees */
void handle_release(zend_long h);         /* deleteLater() for QObjects, del() when owned, then forget */
bool handle_adopt(zend_long h);           /* mark owned; false when no deleter */
void *handle_as(zend_long h, int wantTag);/* nullptr when the handle is not a wantTag */
bool handle_is_shell(zend_long h);
void forget_canon(void *canon);           /* registry + overrides + registered listeners */
void on_forget(void (*listener)(void *canon));
QObject *context();                       /* the bridge's context QObject for destroyed() connections */

template <class T> void *canon_impl(T *p)
{
    if constexpr (std::is_base_of_v<QObject, T>) {
        return static_cast<QObject *>(p);
    } else if constexpr (std::is_polymorphic_v<T>) {
        return dynamic_cast<void *>(p);
    } else {
        return static_cast<void *>(p);
    }
}

template <class T> zend_long reg(T *p, int tag, bool owned, bool shell = false)
{
    if (p == nullptr) {
        return 0;
    }
    return handle_register(canon_impl(p), static_cast<void *>(p), tag, owned, shell);
}

/* By-value returns: heap-copy (or move) and own it. */
template <class T> zend_long reg_copy(T &&v, int tag)
{
    using U = std::remove_cv_t<std::remove_reference_t<T>>;
    return reg(new U(std::forward<T>(v)), tag, true);
}

zend_long reg_qobject(QObject *o);        /* most-derived bound class via metaObject(); unowned */
zend_long reg_dynamic(void *p, int staticTag);  /* most-derived bound class via TypeInfo::downcast; unowned */

/* Pointers coming out of Qt: pick the most-derived bound type. */
template <class T> zend_long reg_out(T *p, int staticTag)
{
    if (p == nullptr) {
        return 0;
    }
    if constexpr (std::is_base_of_v<QObject, T>) {
        return reg_qobject(static_cast<QObject *>(p));
    } else if constexpr (std::is_polymorphic_v<T>) {
        return reg_dynamic(static_cast<void *>(p), staticTag);
    } else {
        return reg(p, staticTag, false);
    }
}

zval *deref(zval *z);
bool is_null(zval *z);
zend_long arg_long(zval *z);

template <class T> T *as(zval *z, int tag) { return static_cast<T *>(handle_as(arg_long(z), tag)); }
template <class S, class T> S *as_shell(zval *z, int tag)
{
    zend_long h = arg_long(z);
    T *p = static_cast<T *>(handle_as(h, tag));
    return (p != nullptr && handle_is_shell(h)) ? static_cast<S *>(p) : nullptr;
}

template <class T> T deref_or_default(zval *z, int tag)
{
    T *p = as<T>(z, tag);
    return p != nullptr ? T(*p) : T();
}

/* A handle that lives for one PHP call (events, stack objects passed to hooks). */
template <class T> struct Temp {
    zend_long h;
    bool created;
    Temp(T *p, int tag) : h(0), created(false)
    {
        if (p == nullptr) { return; }
        created = handle_lookup(reinterpret_cast<zend_long>(canon_impl(p))) == nullptr;
        h = reg_out(p, tag);
    }
    ~Temp() { if (created) { handle_forget(h); } }
    Temp(const Temp &) = delete;
    Temp &operator=(const Temp &) = delete;
};

/* ---- scalars and strings ---- */
double arg_double(zval *z);
bool arg_bool(zval *z);
QString arg_qstring(zval *z);
QByteArray arg_bytes(zval *z);
const char *arg_cstr(zval *z);            /* nullptr for null */
QChar arg_qchar(zval *z);
QVariant arg_variant(zval *z);
void ret_qstring(zval *rv, const QString &s);
void ret_bytes(zval *rv, const QByteArray &b);
void ret_cstr(zval *rv, const char *s);
void ret_qchar(zval *rv, QChar c);
void ret_variant(zval *rv, const QVariant &v);

/* ---- geometry: assoc array out, assoc array in (list/map elements and hook returns) ---- */
void ret_geom(zval *rv, const QPoint &g);
void ret_geom(zval *rv, const QPointF &g);
void ret_geom(zval *rv, const QSize &g);
void ret_geom(zval *rv, const QSizeF &g);
void ret_geom(zval *rv, const QRect &g);
void ret_geom(zval *rv, const QRectF &g);
void ret_geom(zval *rv, const QLine &g);
void ret_geom(zval *rv, const QLineF &g);
void ret_geom(zval *rv, const QMargins &g);
void ret_geom(zval *rv, const QMarginsF &g);
QPoint arg_geom_QPoint(zval *z);
QPointF arg_geom_QPointF(zval *z);
QSize arg_geom_QSize(zval *z);
QSizeF arg_geom_QSizeF(zval *z);
QRect arg_geom_QRect(zval *z);
QRectF arg_geom_QRectF(zval *z);
QLine arg_geom_QLine(zval *z);
QLineF arg_geom_QLineF(zval *z);
QMargins arg_geom_QMargins(zval *z);
QMarginsF arg_geom_QMarginsF(zval *z);

/* ---- containers ---- */
void assoc_set(zval *arr, const QString &key, zval *v);

template <class C, class F> void ret_seq(zval *rv, const C &c, F each)
{
    array_init(rv);
    for (const auto &e : c) {
        zval z;
        each(&z, e);
        add_next_index_zval(rv, &z);
    }
}
template <class T, class F> QList<T> arg_seq(zval *z, F each)
{
    QList<T> out;
    z = deref(z);
    if (Z_TYPE_P(z) != IS_ARRAY) {
        return out;
    }
    zval *v;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(z), v) {
        out.append(each(v));
    } ZEND_HASH_FOREACH_END();
    return out;
}
template <class T> QSet<T> to_set(const QList<T> &l) { return QSet<T>(l.begin(), l.end()); }

template <class M, class F> void ret_map(zval *rv, const M &m, F val)
{
    array_init(rv);
    for (auto it = m.cbegin(); it != m.cend(); ++it) {
        zval z;
        val(&z, it.value());
        if constexpr (std::is_same_v<typename M::key_type, QString>) {
            assoc_set(rv, it.key(), &z);
        } else if constexpr (std::is_same_v<typename M::key_type, QByteArray>) {
            add_assoc_zval_ex(rv, it.key().constData(), static_cast<size_t>(it.key().size()), &z);
        } else {
            add_index_zval(rv, static_cast<zend_ulong>(it.key()), &z);
        }
    }
}
template <class M, class F> M arg_map(zval *z, F val)
{
    M out;
    z = deref(z);
    if (Z_TYPE_P(z) != IS_ARRAY) {
        return out;
    }
    zend_string *skey;
    zend_ulong ikey;
    zval *v;
    ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(z), ikey, skey, v) {
        if constexpr (std::is_same_v<typename M::key_type, QString>) {
            out.insert(skey ? QString::fromUtf8(ZSTR_VAL(skey), static_cast<qsizetype>(ZSTR_LEN(skey))) : QString::number(ikey), val(v));
        } else if constexpr (std::is_same_v<typename M::key_type, QByteArray>) {
            out.insert(skey ? QByteArray(ZSTR_VAL(skey), static_cast<qsizetype>(ZSTR_LEN(skey))) : QByteArray::number(static_cast<qulonglong>(ikey)), val(v));
        } else {
            out.insert(static_cast<typename M::key_type>(skey ? ZEND_STRTOL(ZSTR_VAL(skey), nullptr, 10) : ikey), val(v));
        }
    } ZEND_HASH_FOREACH_END();
    return out;
}
template <class P, class FA, class FB> void ret_pair(zval *rv, const P &p, FA a, FB b)
{
    array_init(rv);
    zval za, zb;
    a(&za, p.first);
    b(&zb, p.second);
    add_next_index_zval(rv, &za);
    add_next_index_zval(rv, &zb);
}
template <class P, class FA, class FB> P arg_pair(zval *z, FA a, FB b)
{
    P out{};
    z = deref(z);
    if (Z_TYPE_P(z) != IS_ARRAY) {
        return out;
    }
    zval *za = zend_hash_index_find(Z_ARRVAL_P(z), 0);
    zval *zb = zend_hash_index_find(Z_ARRVAL_P(z), 1);
    if (za != nullptr) { out.first = a(za); }
    if (zb != nullptr) { out.second = b(zb); }
    return out;
}

/* ---- callbacks and overrides ---- */
bool call(zval *fn, uint32_t argc, zval *argv, zval *ret);   /* frees argv; ret may be nullptr; false on failure or exception */
zval *override_lookup(void *canon, const char *member);
void override_set(void *canon, const char *member, zval *fn);
void override_clear(void *canon, const char *member);
void warn_once(const char *key, const char *fmt, ...);

} // namespace phpqt
