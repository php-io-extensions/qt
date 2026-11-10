/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e9491371674909bfcdcd424cedf1219a080570e2 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QEventFilter___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, filter, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPaintDelegate___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, paint, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sizeHint, IS_CALLABLE, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, editorEvent, IS_CALLABLE, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QEventFilter, __construct);
ZEND_METHOD(QPaintDelegate, __construct);

static const zend_function_entry class_QEventFilter_methods[] = {
	ZEND_ME(QEventFilter, __construct, arginfo_class_QEventFilter___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPaintDelegate_methods[] = {
	ZEND_ME(QPaintDelegate, __construct, arginfo_class_QPaintDelegate___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QEventFilter(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QEventFilter", class_QEventFilter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPaintDelegate(zend_class_entry *class_entry_QStyledItemDelegate)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPaintDelegate", class_QPaintDelegate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QStyledItemDelegate, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
