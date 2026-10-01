
extern zend_class_entry *qt_widgets_qgesture_qgesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGesture_QGesture);

PHP_METHOD(Qt_Widgets_QGesture_QGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, tr);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, new_);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, gestureType);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, state);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, hotSpot);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, setHotSpot);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, hasHotSpot);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, unsetHotSpot);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, setGestureCancelPolicy);
PHP_METHOD(Qt_Widgets_QGesture_QGesture, gestureCancelPolicy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_gesturetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_hotspot, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_sethotspot, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_hashotspot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_unsethotspot, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_setgesturecancelpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgesture_qgesture_gesturecancelpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgesture_qgesture_method_entry) {
	PHP_ME(Qt_Widgets_QGesture_QGesture, staticMetaObject, arginfo_qt_widgets_qgesture_qgesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, tr, arginfo_qt_widgets_qgesture_qgesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, new_, arginfo_qt_widgets_qgesture_qgesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, gestureType, arginfo_qt_widgets_qgesture_qgesture_gesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, state, arginfo_qt_widgets_qgesture_qgesture_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, hotSpot, arginfo_qt_widgets_qgesture_qgesture_hotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, setHotSpot, arginfo_qt_widgets_qgesture_qgesture_sethotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, hasHotSpot, arginfo_qt_widgets_qgesture_qgesture_hashotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, unsetHotSpot, arginfo_qt_widgets_qgesture_qgesture_unsethotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, setGestureCancelPolicy, arginfo_qt_widgets_qgesture_qgesture_setgesturecancelpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGesture_QGesture, gestureCancelPolicy, arginfo_qt_widgets_qgesture_qgesture_gesturecancelpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
