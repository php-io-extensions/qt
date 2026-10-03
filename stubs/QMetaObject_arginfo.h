/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b536f1e6473e072d77cf681c22a638d59d85e127 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMetaObject_Connection___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMetaObject_Connection_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMetaObject___construct arginfo_class_QMetaObject_Connection___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMetaObject_invokeMethod, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, object, QObject, 0)
	ZEND_ARG_TYPE_INFO(0, member, IS_STRING, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(0, args, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QMetaObject_Connection, __construct);
ZEND_METHOD(QMetaObject_Connection, isValid);
ZEND_METHOD(QMetaObject, __construct);
ZEND_METHOD(QMetaObject, invokeMethod);

static const zend_function_entry class_QMetaObject_Connection_methods[] = {
	ZEND_ME(QMetaObject_Connection, __construct, arginfo_class_QMetaObject_Connection___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QMetaObject_Connection, isValid, arginfo_class_QMetaObject_Connection_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QMetaObject_methods[] = {
	ZEND_ME(QMetaObject, __construct, arginfo_class_QMetaObject___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QMetaObject, invokeMethod, arginfo_class_QMetaObject_invokeMethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QMetaObject_Connection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "QMetaObject", "Connection", class_QMetaObject_Connection_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QMetaObject(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMetaObject", class_QMetaObject_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
