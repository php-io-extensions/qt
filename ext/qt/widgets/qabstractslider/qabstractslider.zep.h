
extern zend_class_entry *qt_widgets_qabstractslider_qabstractslider_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractSlider_QAbstractSlider);

PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, staticMetaObject);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, tr);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, new_);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, orientation);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setMinimum);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, minimum);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setMaximum);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, maximum);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSingleStep);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, singleStep);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setPageStep);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, pageStep);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setTracking);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, hasTracking);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSliderDown);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, isSliderDown);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSliderPosition);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderPosition);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setInvertedAppearance);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, invertedAppearance);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setInvertedControls);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, invertedControls);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, value);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, triggerAction);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setValue);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setOrientation);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setRange);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, valueChanged);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderPressed);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderMoved);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderReleased);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, rangeChanged);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, actionTriggered);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, event);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, setRepeatAction);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, repeatAction);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderChange);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, keyPressEvent);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, timerEvent);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, wheelEvent);
PHP_METHOD(Qt_Widgets_QAbstractSlider_QAbstractSlider, changeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_minimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_maximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setsinglestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_singlestep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setpagestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_pagestep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_settracking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_hastracking, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setsliderdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_issliderdown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setsliderposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_sliderposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setinvertedappearance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_invertedappearance, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setinvertedcontrols, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_invertedcontrols, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_triggeraction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_valuechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_sliderpressed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_slidermoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_sliderreleased, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_rangechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_actiontriggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_setrepeataction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thresholdTime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, repeatTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_repeataction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_sliderchange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, change, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractslider_qabstractslider_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qabstractslider_qabstractslider_method_entry) {
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, staticMetaObject, arginfo_qt_widgets_qabstractslider_qabstractslider_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, tr, arginfo_qt_widgets_qabstractslider_qabstractslider_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, new_, arginfo_qt_widgets_qabstractslider_qabstractslider_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, orientation, arginfo_qt_widgets_qabstractslider_qabstractslider_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setMinimum, arginfo_qt_widgets_qabstractslider_qabstractslider_setminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, minimum, arginfo_qt_widgets_qabstractslider_qabstractslider_minimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setMaximum, arginfo_qt_widgets_qabstractslider_qabstractslider_setmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, maximum, arginfo_qt_widgets_qabstractslider_qabstractslider_maximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSingleStep, arginfo_qt_widgets_qabstractslider_qabstractslider_setsinglestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, singleStep, arginfo_qt_widgets_qabstractslider_qabstractslider_singlestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setPageStep, arginfo_qt_widgets_qabstractslider_qabstractslider_setpagestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, pageStep, arginfo_qt_widgets_qabstractslider_qabstractslider_pagestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setTracking, arginfo_qt_widgets_qabstractslider_qabstractslider_settracking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, hasTracking, arginfo_qt_widgets_qabstractslider_qabstractslider_hastracking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSliderDown, arginfo_qt_widgets_qabstractslider_qabstractslider_setsliderdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, isSliderDown, arginfo_qt_widgets_qabstractslider_qabstractslider_issliderdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setSliderPosition, arginfo_qt_widgets_qabstractslider_qabstractslider_setsliderposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderPosition, arginfo_qt_widgets_qabstractslider_qabstractslider_sliderposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setInvertedAppearance, arginfo_qt_widgets_qabstractslider_qabstractslider_setinvertedappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, invertedAppearance, arginfo_qt_widgets_qabstractslider_qabstractslider_invertedappearance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setInvertedControls, arginfo_qt_widgets_qabstractslider_qabstractslider_setinvertedcontrols, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, invertedControls, arginfo_qt_widgets_qabstractslider_qabstractslider_invertedcontrols, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, value, arginfo_qt_widgets_qabstractslider_qabstractslider_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, triggerAction, arginfo_qt_widgets_qabstractslider_qabstractslider_triggeraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setValue, arginfo_qt_widgets_qabstractslider_qabstractslider_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setOrientation, arginfo_qt_widgets_qabstractslider_qabstractslider_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setRange, arginfo_qt_widgets_qabstractslider_qabstractslider_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, valueChanged, arginfo_qt_widgets_qabstractslider_qabstractslider_valuechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderPressed, arginfo_qt_widgets_qabstractslider_qabstractslider_sliderpressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderMoved, arginfo_qt_widgets_qabstractslider_qabstractslider_slidermoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderReleased, arginfo_qt_widgets_qabstractslider_qabstractslider_sliderreleased, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, rangeChanged, arginfo_qt_widgets_qabstractslider_qabstractslider_rangechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, actionTriggered, arginfo_qt_widgets_qabstractslider_qabstractslider_actiontriggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, event, arginfo_qt_widgets_qabstractslider_qabstractslider_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, setRepeatAction, arginfo_qt_widgets_qabstractslider_qabstractslider_setrepeataction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, repeatAction, arginfo_qt_widgets_qabstractslider_qabstractslider_repeataction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, sliderChange, arginfo_qt_widgets_qabstractslider_qabstractslider_sliderchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, keyPressEvent, arginfo_qt_widgets_qabstractslider_qabstractslider_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, timerEvent, arginfo_qt_widgets_qabstractslider_qabstractslider_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, wheelEvent, arginfo_qt_widgets_qabstractslider_qabstractslider_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSlider_QAbstractSlider, changeEvent, arginfo_qt_widgets_qabstractslider_qabstractslider_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
