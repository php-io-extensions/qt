/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5aa69fce38fc85b5cbfa4b61ee8ac907dbb39ec9 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QObject___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_objectName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_setObjectName, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_inherits, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QObject_parent, 0, 0, QObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_setParent, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, parent, QObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_deleteLater, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_pointer, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QObject_connect, 0, 3, QMetaObject\\Connection, 0)
	ZEND_ARG_OBJ_INFO(0, sender, QObject, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, functor, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QObject_disconnect, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, connection, QMetaObject\\Connection, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QObject, __construct);
ZEND_METHOD(QObject, objectName);
ZEND_METHOD(QObject, setObjectName);
ZEND_METHOD(QObject, inherits);
ZEND_METHOD(QObject, parent);
ZEND_METHOD(QObject, setParent);
ZEND_METHOD(QObject, deleteLater);
ZEND_METHOD(QObject, pointer);
ZEND_METHOD(QObject, connect);
ZEND_METHOD(QObject, disconnect);

static const zend_function_entry class_QObject_methods[] = {
	ZEND_ME(QObject, __construct, arginfo_class_QObject___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, objectName, arginfo_class_QObject_objectName, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, setObjectName, arginfo_class_QObject_setObjectName, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, inherits, arginfo_class_QObject_inherits, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, parent, arginfo_class_QObject_parent, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, setParent, arginfo_class_QObject_setParent, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, deleteLater, arginfo_class_QObject_deleteLater, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, pointer, arginfo_class_QObject_pointer, ZEND_ACC_PUBLIC)
	ZEND_ME(QObject, connect, arginfo_class_QObject_connect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QObject, disconnect, arginfo_class_QObject_disconnect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QObject(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QObject", class_QObject_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
