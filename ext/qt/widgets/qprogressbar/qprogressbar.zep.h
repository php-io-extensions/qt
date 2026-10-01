
extern zend_class_entry *qt_widgets_qprogressbar_qprogressbar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QProgressBar_QProgressBar);

PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, tr);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, new_);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, minimum);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, maximum);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, value);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, text);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setTextVisible);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, isTextVisible);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, alignment);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setAlignment);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, sizeHint);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, orientation);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setInvertedAppearance);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, invertedAppearance);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setTextDirection);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, textDirection);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setFormat);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, resetFormat);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, format);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, reset);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setRange);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setMinimum);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setMaximum);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setValue);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, setOrientation);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, valueChanged);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, event);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, paintEvent);
PHP_METHOD(Qt_Widgets_QProgressBar_QProgressBar, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_minimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_maximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_settextvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_istextvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setinvertedappearance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, invert, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_invertedappearance, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_settextdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_textdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_resetformat, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_valuechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressbar_qprogressbar_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qprogressbar_qprogressbar_method_entry) {
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, staticMetaObject, arginfo_qt_widgets_qprogressbar_qprogressbar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, tr, arginfo_qt_widgets_qprogressbar_qprogressbar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, new_, arginfo_qt_widgets_qprogressbar_qprogressbar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, minimum, arginfo_qt_widgets_qprogressbar_qprogressbar_minimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, maximum, arginfo_qt_widgets_qprogressbar_qprogressbar_maximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, value, arginfo_qt_widgets_qprogressbar_qprogressbar_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, text, arginfo_qt_widgets_qprogressbar_qprogressbar_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setTextVisible, arginfo_qt_widgets_qprogressbar_qprogressbar_settextvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, isTextVisible, arginfo_qt_widgets_qprogressbar_qprogressbar_istextvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, alignment, arginfo_qt_widgets_qprogressbar_qprogressbar_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setAlignment, arginfo_qt_widgets_qprogressbar_qprogressbar_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, sizeHint, arginfo_qt_widgets_qprogressbar_qprogressbar_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, minimumSizeHint, arginfo_qt_widgets_qprogressbar_qprogressbar_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, orientation, arginfo_qt_widgets_qprogressbar_qprogressbar_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setInvertedAppearance, arginfo_qt_widgets_qprogressbar_qprogressbar_setinvertedappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, invertedAppearance, arginfo_qt_widgets_qprogressbar_qprogressbar_invertedappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setTextDirection, arginfo_qt_widgets_qprogressbar_qprogressbar_settextdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, textDirection, arginfo_qt_widgets_qprogressbar_qprogressbar_textdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setFormat, arginfo_qt_widgets_qprogressbar_qprogressbar_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, resetFormat, arginfo_qt_widgets_qprogressbar_qprogressbar_resetformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, format, arginfo_qt_widgets_qprogressbar_qprogressbar_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, reset, arginfo_qt_widgets_qprogressbar_qprogressbar_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setRange, arginfo_qt_widgets_qprogressbar_qprogressbar_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setMinimum, arginfo_qt_widgets_qprogressbar_qprogressbar_setminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setMaximum, arginfo_qt_widgets_qprogressbar_qprogressbar_setmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setValue, arginfo_qt_widgets_qprogressbar_qprogressbar_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, setOrientation, arginfo_qt_widgets_qprogressbar_qprogressbar_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, valueChanged, arginfo_qt_widgets_qprogressbar_qprogressbar_valuechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, event, arginfo_qt_widgets_qprogressbar_qprogressbar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, paintEvent, arginfo_qt_widgets_qprogressbar_qprogressbar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressBar_QProgressBar, initStyleOption, arginfo_qt_widgets_qprogressbar_qprogressbar_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
