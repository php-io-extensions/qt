
extern zend_class_entry *qt_gui_qrgba64functions_qrgba64functions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRgba64Functions_QRgba64Functions);

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64Quint64);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qPremultiply);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qUnpremultiply);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRed);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qGreen);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qBlue);
PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qAlpha);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qrgba64, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qrgba64quint64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qpremultiply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qunpremultiply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qred, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qgreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qblue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64functions_qrgba64functions_qalpha, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrgba64functions_qrgba64functions_method_entry) {
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64, arginfo_qt_gui_qrgba64functions_qrgba64functions_qrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64Quint64, arginfo_qt_gui_qrgba64functions_qrgba64functions_qrgba64quint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qPremultiply, arginfo_qt_gui_qrgba64functions_qrgba64functions_qpremultiply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qUnpremultiply, arginfo_qt_gui_qrgba64functions_qrgba64functions_qunpremultiply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qRed, arginfo_qt_gui_qrgba64functions_qrgba64functions_qred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qGreen, arginfo_qt_gui_qrgba64functions_qrgba64functions_qgreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qBlue, arginfo_qt_gui_qrgba64functions_qrgba64functions_qblue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64Functions_QRgba64Functions, qAlpha, arginfo_qt_gui_qrgba64functions_qrgba64functions_qalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
