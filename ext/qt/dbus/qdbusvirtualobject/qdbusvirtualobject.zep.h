
extern zend_class_entry *qt_dbus_qdbusvirtualobject_qdbusvirtualobject_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject);

PHP_METHOD(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, tr);
PHP_METHOD(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, new_);
PHP_METHOD(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, introspect);
PHP_METHOD(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, handleMessage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_introspect, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_handlemessage, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusvirtualobject_qdbusvirtualobject_method_entry) {
	PHP_ME(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, staticMetaObject, arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, tr, arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, new_, arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, introspect, arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_introspect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVirtualObject_QDBusVirtualObject, handleMessage, arginfo_qt_dbus_qdbusvirtualobject_qdbusvirtualobject_handlemessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
