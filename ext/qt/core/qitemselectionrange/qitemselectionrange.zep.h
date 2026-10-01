
extern zend_class_entry *qt_core_qitemselectionrange_qitemselectionrange_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QItemSelectionRange_QItemSelectionRange);

PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, new_);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, newQModelIndexQModelIndex);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, newQModelIndex);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, swap);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, top);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, left);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, bottom);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, right);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, width);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, height);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, topLeft);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, bottomRight);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, parent_);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, model);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, contains);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, containsIntIntQModelIndex);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, intersects);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, intersected);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, isValid);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, isEmpty);
PHP_METHOD(Qt_Core_QItemSelectionRange_QItemSelectionRange, indexes);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_newqmodelindexqmodelindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topL, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomR, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_newqmodelindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_top, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_left, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_bottom, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_right, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_topleft, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_bottomright, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_containsintintqmodelindex, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parentIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_intersects, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_intersected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionrange_qitemselectionrange_indexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qitemselectionrange_qitemselectionrange_method_entry) {
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, new_, arginfo_qt_core_qitemselectionrange_qitemselectionrange_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, newQModelIndexQModelIndex, arginfo_qt_core_qitemselectionrange_qitemselectionrange_newqmodelindexqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, newQModelIndex, arginfo_qt_core_qitemselectionrange_qitemselectionrange_newqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, swap, arginfo_qt_core_qitemselectionrange_qitemselectionrange_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, top, arginfo_qt_core_qitemselectionrange_qitemselectionrange_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, left, arginfo_qt_core_qitemselectionrange_qitemselectionrange_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, bottom, arginfo_qt_core_qitemselectionrange_qitemselectionrange_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, right, arginfo_qt_core_qitemselectionrange_qitemselectionrange_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, width, arginfo_qt_core_qitemselectionrange_qitemselectionrange_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, height, arginfo_qt_core_qitemselectionrange_qitemselectionrange_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, topLeft, arginfo_qt_core_qitemselectionrange_qitemselectionrange_topleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, bottomRight, arginfo_qt_core_qitemselectionrange_qitemselectionrange_bottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, parent_, arginfo_qt_core_qitemselectionrange_qitemselectionrange_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, model, arginfo_qt_core_qitemselectionrange_qitemselectionrange_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, contains, arginfo_qt_core_qitemselectionrange_qitemselectionrange_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, containsIntIntQModelIndex, arginfo_qt_core_qitemselectionrange_qitemselectionrange_containsintintqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, intersects, arginfo_qt_core_qitemselectionrange_qitemselectionrange_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, intersected, arginfo_qt_core_qitemselectionrange_qitemselectionrange_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, isValid, arginfo_qt_core_qitemselectionrange_qitemselectionrange_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, isEmpty, arginfo_qt_core_qitemselectionrange_qitemselectionrange_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionRange_QItemSelectionRange, indexes, arginfo_qt_core_qitemselectionrange_qitemselectionrange_indexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
