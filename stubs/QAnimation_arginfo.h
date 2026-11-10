/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 77b3cf736f6290085995c7fa5330abcb66823018 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_start, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, policy, QAbstractAnimation\\DeletionPolicy, 0, "QAbstractAnimation\\DeletionPolicy::KEEP_WHEN_STOPPED")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_stop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_duration, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVariantAnimation_setStartValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QVariantAnimation_setEndValue arginfo_class_QVariantAnimation_setStartValue

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVariantAnimation_setDuration, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPropertyAnimation___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, target, QObject, 0)
	ZEND_ARG_TYPE_INFO(0, propertyName, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QAbstractAnimation, start);
ZEND_METHOD(QAbstractAnimation, stop);
ZEND_METHOD(QAbstractAnimation, duration);
ZEND_METHOD(QVariantAnimation, setStartValue);
ZEND_METHOD(QVariantAnimation, setEndValue);
ZEND_METHOD(QVariantAnimation, setDuration);
ZEND_METHOD(QPropertyAnimation, __construct);

static const zend_function_entry class_QAbstractAnimation_methods[] = {
	ZEND_ME(QAbstractAnimation, start, arginfo_class_QAbstractAnimation_start, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractAnimation, stop, arginfo_class_QAbstractAnimation_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractAnimation, duration, arginfo_class_QAbstractAnimation_duration, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QVariantAnimation_methods[] = {
	ZEND_ME(QVariantAnimation, setStartValue, arginfo_class_QVariantAnimation_setStartValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, setEndValue, arginfo_class_QVariantAnimation_setEndValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, setDuration, arginfo_class_QVariantAnimation_setDuration, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPropertyAnimation_methods[] = {
	ZEND_ME(QPropertyAnimation, __construct, arginfo_class_QPropertyAnimation___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QAbstractAnimation_DeletionPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAbstractAnimation\\DeletionPolicy", IS_LONG, NULL);

	zval enum_case_KEEP_WHEN_STOPPED_value;
	ZVAL_LONG(&enum_case_KEEP_WHEN_STOPPED_value, 0);
	zend_enum_add_case_cstr(class_entry, "KEEP_WHEN_STOPPED", &enum_case_KEEP_WHEN_STOPPED_value);

	zval enum_case_DELETE_WHEN_STOPPED_value;
	ZVAL_LONG(&enum_case_DELETE_WHEN_STOPPED_value, 1);
	zend_enum_add_case_cstr(class_entry, "DELETE_WHEN_STOPPED", &enum_case_DELETE_WHEN_STOPPED_value);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractAnimation(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractAnimation", class_QAbstractAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QVariantAnimation(zend_class_entry *class_entry_QAbstractAnimation)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QVariantAnimation", class_QVariantAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractAnimation, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPropertyAnimation(zend_class_entry *class_entry_QVariantAnimation)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPropertyAnimation", class_QPropertyAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QVariantAnimation, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
