
extern zend_class_entry *qt_core_qcollatorsortkey_qcollatorsortkey_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCollatorSortKey_QCollatorSortKey);

PHP_METHOD(Qt_Core_QCollatorSortKey_QCollatorSortKey, new_);
PHP_METHOD(Qt_Core_QCollatorSortKey_QCollatorSortKey, swap);
PHP_METHOD(Qt_Core_QCollatorSortKey_QCollatorSortKey, compare);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcollatorsortkey_qcollatorsortkey_method_entry) {
	PHP_ME(Qt_Core_QCollatorSortKey_QCollatorSortKey, new_, arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollatorSortKey_QCollatorSortKey, swap, arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollatorSortKey_QCollatorSortKey, compare, arginfo_qt_core_qcollatorsortkey_qcollatorsortkey_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
