
extern zend_class_entry *qt_gui_qtextimageformat_qtextimageformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextImageFormat_QTextImageFormat);

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, new_);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, isValid);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setName);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, name);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setWidth);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, width);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setMaximumWidth);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, maximumWidth);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setHeight);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, height);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setQuality);
PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, quality);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_setname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_setmaximumwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxWidth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_maximumwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_setheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_setquality, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextimageformat_qtextimageformat_quality, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextimageformat_qtextimageformat_method_entry) {
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, new_, arginfo_qt_gui_qtextimageformat_qtextimageformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, isValid, arginfo_qt_gui_qtextimageformat_qtextimageformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, setName, arginfo_qt_gui_qtextimageformat_qtextimageformat_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, name, arginfo_qt_gui_qtextimageformat_qtextimageformat_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, setWidth, arginfo_qt_gui_qtextimageformat_qtextimageformat_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, width, arginfo_qt_gui_qtextimageformat_qtextimageformat_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, setMaximumWidth, arginfo_qt_gui_qtextimageformat_qtextimageformat_setmaximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, maximumWidth, arginfo_qt_gui_qtextimageformat_qtextimageformat_maximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, setHeight, arginfo_qt_gui_qtextimageformat_qtextimageformat_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, height, arginfo_qt_gui_qtextimageformat_qtextimageformat_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, setQuality, arginfo_qt_gui_qtextimageformat_qtextimageformat_setquality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextImageFormat_QTextImageFormat, quality, arginfo_qt_gui_qtextimageformat_qtextimageformat_quality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
