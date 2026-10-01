/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5ad3d11bcce6c8ab4160131a6e63c8332ad0d43c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QEventFilter___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, filter, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, types, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QEventFilter, __construct);

static const zend_function_entry class_QEventFilter_methods[] = {
	ZEND_ME(QEventFilter, __construct, arginfo_class_QEventFilter___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QEventFilter(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QEventFilter", class_QEventFilter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
