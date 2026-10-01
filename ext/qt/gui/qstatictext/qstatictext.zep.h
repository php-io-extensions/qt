
extern zend_class_entry *qt_gui_qstatictext_qstatictext_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QStaticText_QStaticText);

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, new_);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, newQString);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, newQStaticText);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, swap);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setText);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, text);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextFormat);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textFormat);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextWidth);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textWidth);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextOption);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textOption);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, size);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, prepare);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setPerformanceHint);
PHP_METHOD(Qt_Gui_QStaticText_QStaticText, performanceHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_newqstatictext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_settextformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textFormat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_textformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_settextwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_textwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_settextoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_textoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_prepare, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, matrix)
	ZEND_ARG_INFO(0, font)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_setperformancehint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, performanceHint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatictext_qstatictext_performancehint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qstatictext_qstatictext_method_entry) {
	PHP_ME(Qt_Gui_QStaticText_QStaticText, new_, arginfo_qt_gui_qstatictext_qstatictext_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, newQString, arginfo_qt_gui_qstatictext_qstatictext_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, newQStaticText, arginfo_qt_gui_qstatictext_qstatictext_newqstatictext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, swap, arginfo_qt_gui_qstatictext_qstatictext_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, setText, arginfo_qt_gui_qstatictext_qstatictext_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, text, arginfo_qt_gui_qstatictext_qstatictext_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, setTextFormat, arginfo_qt_gui_qstatictext_qstatictext_settextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, textFormat, arginfo_qt_gui_qstatictext_qstatictext_textformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, setTextWidth, arginfo_qt_gui_qstatictext_qstatictext_settextwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, textWidth, arginfo_qt_gui_qstatictext_qstatictext_textwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, setTextOption, arginfo_qt_gui_qstatictext_qstatictext_settextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, textOption, arginfo_qt_gui_qstatictext_qstatictext_textoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, size, arginfo_qt_gui_qstatictext_qstatictext_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, prepare, arginfo_qt_gui_qstatictext_qstatictext_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, setPerformanceHint, arginfo_qt_gui_qstatictext_qstatictext_setperformancehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStaticText_QStaticText, performanceHint, arginfo_qt_gui_qstatictext_qstatictext_performancehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
