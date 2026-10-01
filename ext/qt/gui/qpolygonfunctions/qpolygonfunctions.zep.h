
extern zend_class_entry *qt_gui_qpolygonfunctions_qpolygonfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPolygonFunctions_QPolygonFunctions);

PHP_METHOD(Qt_Gui_QPolygonFunctions_QPolygonFunctions, swap);
PHP_METHOD(Qt_Gui_QPolygonFunctions_QPolygonFunctions, swapQPolygonFQPolygonF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonfunctions_qpolygonfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygonfunctions_qpolygonfunctions_swapqpolygonfqpolygonf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpolygonfunctions_qpolygonfunctions_method_entry) {
	PHP_ME(Qt_Gui_QPolygonFunctions_QPolygonFunctions, swap, arginfo_qt_gui_qpolygonfunctions_qpolygonfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygonFunctions_QPolygonFunctions, swapQPolygonFQPolygonF, arginfo_qt_gui_qpolygonfunctions_qpolygonfunctions_swapqpolygonfqpolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
