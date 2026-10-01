
extern zend_class_entry *qt_core_qitemselectionmodel_qitemselectionmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QItemSelectionModel_QItemSelectionModel);

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, staticMetaObject);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, tr);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, new_);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, newQAbstractItemModelQObject);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentIndex);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isSelected);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isRowSelected);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isColumnSelected);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, rowIntersectsSelection);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, columnIntersectsSelection);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, hasSelection);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedIndexes);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedRows);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedColumns);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selection);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, model);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, setModel);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, setCurrentIndex);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, select);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectQItemSelectionQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clear);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, reset);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearSelection);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearCurrentIndex);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectionChanged);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentChanged);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentRowChanged);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentColumnChanged);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, modelChanged);
PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, emitSelectionChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_newqabstractitemmodelqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_isselected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_isrowselected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_iscolumnselected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_rowintersectsselection, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_columnintersectsselection, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_hasselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedindexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedrows, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedcolumns, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_setmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_setcurrentindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_select, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectqitemselectionqitemselectionmodelselectionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clearselection, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clearcurrentindex, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectionchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deselected, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentrowchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentcolumnchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_modelchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_emitselectionchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSelection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldSelection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qitemselectionmodel_qitemselectionmodel_method_entry) {
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, staticMetaObject, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, tr, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, new_, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, newQAbstractItemModelQObject, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_newqabstractitemmodelqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentIndex, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, isSelected, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, isRowSelected, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_isrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, isColumnSelected, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_iscolumnselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, rowIntersectsSelection, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_rowintersectsselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, columnIntersectsSelection, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_columnintersectsselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, hasSelection, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_hasselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedIndexes, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedRows, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedColumns, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectedcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selection, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, model, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, setModel, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_setmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, setCurrentIndex, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, select, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectQItemSelectionQItemSelectionModelSelectionFlags, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectqitemselectionqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, clear, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, reset, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearSelection, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clearselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearCurrentIndex, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_clearcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectionChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_selectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentRowChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentrowchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentColumnChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_currentcolumnchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, modelChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_modelchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QItemSelectionModel_QItemSelectionModel, emitSelectionChanged, arginfo_qt_core_qitemselectionmodel_qitemselectionmodel_emitselectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
