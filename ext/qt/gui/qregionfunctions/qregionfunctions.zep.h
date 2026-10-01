
extern zend_class_entry *qt_gui_qregionfunctions_qregionfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRegionFunctions_QRegionFunctions);

PHP_METHOD(Qt_Gui_QRegionFunctions_QRegionFunctions, swap);
PHP_METHOD(Qt_Gui_QRegionFunctions_QRegionFunctions, qt_region_strictContains);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregionfunctions_qregionfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregionfunctions_qregionfunctions_qt_region_strictcontains, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qregionfunctions_qregionfunctions_method_entry) {
	PHP_ME(Qt_Gui_QRegionFunctions_QRegionFunctions, swap, arginfo_qt_gui_qregionfunctions_qregionfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegionFunctions_QRegionFunctions, qt_region_strictContains, arginfo_qt_gui_qregionfunctions_qregionfunctions_qt_region_strictcontains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
