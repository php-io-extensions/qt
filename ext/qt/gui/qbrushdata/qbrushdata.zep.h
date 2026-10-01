
extern zend_class_entry *qt_gui_qbrushdata_qbrushdata_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QBrushData_QBrushData);

PHP_METHOD(Qt_Gui_QBrushData_QBrushData, ref);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, setRef);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, style);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, setStyle);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, color);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, setColor);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, transform);
PHP_METHOD(Qt_Gui_QBrushData_QBrushData, setTransform);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_ref, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_setref, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_transform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushdata_qbrushdata_settransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qbrushdata_qbrushdata_method_entry) {
	PHP_ME(Qt_Gui_QBrushData_QBrushData, ref, arginfo_qt_gui_qbrushdata_qbrushdata_ref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, setRef, arginfo_qt_gui_qbrushdata_qbrushdata_setref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, style, arginfo_qt_gui_qbrushdata_qbrushdata_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, setStyle, arginfo_qt_gui_qbrushdata_qbrushdata_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, color, arginfo_qt_gui_qbrushdata_qbrushdata_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, setColor, arginfo_qt_gui_qbrushdata_qbrushdata_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, transform, arginfo_qt_gui_qbrushdata_qbrushdata_transform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushData_QBrushData, setTransform, arginfo_qt_gui_qbrushdata_qbrushdata_settransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
