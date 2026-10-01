
extern zend_class_entry *qt_core_qitemselection_qitemselection_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QItemSelection_QItemSelection);

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, new_);
PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, select);
PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, contains);
PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, indexes);
PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, merge);
PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, split);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_select, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_indexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_merge, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselection_qitemselection_split, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, range, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qitemselection_qitemselection_method_entry) {
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, new_, arginfo_qt_core_qitemselection_qitemselection_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, select, arginfo_qt_core_qitemselection_qitemselection_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, contains, arginfo_qt_core_qitemselection_qitemselection_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, indexes, arginfo_qt_core_qitemselection_qitemselection_indexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, merge, arginfo_qt_core_qitemselection_qitemselection_merge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelection_QItemSelection, split, arginfo_qt_core_qitemselection_qitemselection_split, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
