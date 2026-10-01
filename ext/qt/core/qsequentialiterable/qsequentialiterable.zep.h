
extern zend_class_entry *qt_core_qsequentialiterable_qsequentialiterable_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSequentialIterable_QSequentialIterable);

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, new_);
PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, at);
PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, set);
PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, addValue);
PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, removeValue);
PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, valueMetaType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_at, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_set, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_addvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_removevalue, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsequentialiterable_qsequentialiterable_valuemetatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsequentialiterable_qsequentialiterable_method_entry) {
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, new_, arginfo_qt_core_qsequentialiterable_qsequentialiterable_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, at, arginfo_qt_core_qsequentialiterable_qsequentialiterable_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, set, arginfo_qt_core_qsequentialiterable_qsequentialiterable_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, addValue, arginfo_qt_core_qsequentialiterable_qsequentialiterable_addvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, removeValue, arginfo_qt_core_qsequentialiterable_qsequentialiterable_removevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSequentialIterable_QSequentialIterable, valueMetaType, arginfo_qt_core_qsequentialiterable_qsequentialiterable_valuemetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
