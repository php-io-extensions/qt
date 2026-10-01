
extern zend_class_entry *qt_widgets_qscroller_qscroller_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QScroller_QScroller);

PHP_METHOD(Qt_Widgets_QScroller_QScroller, staticMetaObject);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, tr);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, hasScroller);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, scroller);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, grabGesture);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, grabbedGesture);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, ungrabGesture);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, activeScrollers);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, target);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, state);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, handleInput);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, stop);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, velocity);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, finalPosition);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, pixelPerMeter);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollerProperties);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsX);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsXQrealQreal);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsY);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsYQrealQreal);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, setScrollerProperties);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollTo);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollToQPointFInt);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, ensureVisible);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, ensureVisibleQRectFQrealQrealInt);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, resendPrepareEvent);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, stateChanged);
PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollerPropertiesChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_hasscroller, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_scroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_grabgesture, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, gestureType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_grabbedgesture, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_ungrabgesture, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_activescrollers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_handleinput, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, positionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positionY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_velocity, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_finalposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_pixelpermeter, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_scrollerproperties, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_setsnappositionsx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, positions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_setsnappositionsxqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_setsnappositionsy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, positions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_setsnappositionsyqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_setscrollerproperties, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prop, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_scrollto, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_scrolltoqpointfint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scrollTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_ensurevisible, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xmargin, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ymargin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_ensurevisibleqrectfqrealqrealint, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xmargin, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ymargin, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scrollTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_resendprepareevent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_statechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newstate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscroller_qscroller_scrollerpropertieschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qscroller_qscroller_method_entry) {
	PHP_ME(Qt_Widgets_QScroller_QScroller, staticMetaObject, arginfo_qt_widgets_qscroller_qscroller_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, tr, arginfo_qt_widgets_qscroller_qscroller_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, hasScroller, arginfo_qt_widgets_qscroller_qscroller_hasscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, scroller, arginfo_qt_widgets_qscroller_qscroller_scroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, grabGesture, arginfo_qt_widgets_qscroller_qscroller_grabgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, grabbedGesture, arginfo_qt_widgets_qscroller_qscroller_grabbedgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, ungrabGesture, arginfo_qt_widgets_qscroller_qscroller_ungrabgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, activeScrollers, arginfo_qt_widgets_qscroller_qscroller_activescrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, target, arginfo_qt_widgets_qscroller_qscroller_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, state, arginfo_qt_widgets_qscroller_qscroller_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, handleInput, arginfo_qt_widgets_qscroller_qscroller_handleinput, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, stop, arginfo_qt_widgets_qscroller_qscroller_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, velocity, arginfo_qt_widgets_qscroller_qscroller_velocity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, finalPosition, arginfo_qt_widgets_qscroller_qscroller_finalposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, pixelPerMeter, arginfo_qt_widgets_qscroller_qscroller_pixelpermeter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, scrollerProperties, arginfo_qt_widgets_qscroller_qscroller_scrollerproperties, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, setSnapPositionsX, arginfo_qt_widgets_qscroller_qscroller_setsnappositionsx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, setSnapPositionsXQrealQreal, arginfo_qt_widgets_qscroller_qscroller_setsnappositionsxqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, setSnapPositionsY, arginfo_qt_widgets_qscroller_qscroller_setsnappositionsy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, setSnapPositionsYQrealQreal, arginfo_qt_widgets_qscroller_qscroller_setsnappositionsyqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, setScrollerProperties, arginfo_qt_widgets_qscroller_qscroller_setscrollerproperties, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, scrollTo, arginfo_qt_widgets_qscroller_qscroller_scrollto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, scrollToQPointFInt, arginfo_qt_widgets_qscroller_qscroller_scrolltoqpointfint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, ensureVisible, arginfo_qt_widgets_qscroller_qscroller_ensurevisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, ensureVisibleQRectFQrealQrealInt, arginfo_qt_widgets_qscroller_qscroller_ensurevisibleqrectfqrealqrealint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, resendPrepareEvent, arginfo_qt_widgets_qscroller_qscroller_resendprepareevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, stateChanged, arginfo_qt_widgets_qscroller_qscroller_statechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScroller_QScroller, scrollerPropertiesChanged, arginfo_qt_widgets_qscroller_qscroller_scrollerpropertieschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
