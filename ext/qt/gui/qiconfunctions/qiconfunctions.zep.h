
extern zend_class_entry *qt_gui_qiconfunctions_qiconfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIconFunctions_QIconFunctions);

PHP_METHOD(Qt_Gui_QIconFunctions_QIconFunctions, swap);
PHP_METHOD(Qt_Gui_QIconFunctions_QIconFunctions, qt_findAtNxFile);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconfunctions_qiconfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconfunctions_qiconfunctions_qt_findatnxfile, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, baseFileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, targetDevicePixelRatio, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, sourceDevicePixelRatio)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qiconfunctions_qiconfunctions_method_entry) {
	PHP_ME(Qt_Gui_QIconFunctions_QIconFunctions, swap, arginfo_qt_gui_qiconfunctions_qiconfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconFunctions_QIconFunctions, qt_findAtNxFile, arginfo_qt_gui_qiconfunctions_qiconfunctions_qt_findatnxfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
