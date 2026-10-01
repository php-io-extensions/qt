
extern zend_class_entry *qt_gui_qrgbfunctions_qrgbfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRgbFunctions_QRgbFunctions);

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRed);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGreen);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qBlue);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qAlpha);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgb);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgba);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGray);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGrayQRgb);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qIsGray);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qPremultiply);
PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qUnpremultiply);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qred, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qblue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qalpha, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qrgb, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qrgba, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgrayqrgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qisgray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qpremultiply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qunpremultiply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrgbfunctions_qrgbfunctions_method_entry) {
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qRed, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qGreen, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qBlue, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qblue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qAlpha, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgb, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgba, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qGray, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qGrayQRgb, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qgrayqrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qIsGray, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qisgray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qPremultiply, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qpremultiply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgbFunctions_QRgbFunctions, qUnpremultiply, arginfo_qt_gui_qrgbfunctions_qrgbfunctions_qunpremultiply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
