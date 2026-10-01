
extern zend_class_entry *qt_widgets_qswipegesture_qswipegesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSwipeGesture_QSwipeGesture);

PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, tr);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, new_);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, horizontalDirection);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, verticalDirection);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, swipeAngle);
PHP_METHOD(Qt_Widgets_QSwipeGesture_QSwipeGesture, setSwipeAngle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_horizontaldirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_verticaldirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_swipeangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qswipegesture_qswipegesture_setswipeangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qswipegesture_qswipegesture_method_entry) {
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, staticMetaObject, arginfo_qt_widgets_qswipegesture_qswipegesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, tr, arginfo_qt_widgets_qswipegesture_qswipegesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, new_, arginfo_qt_widgets_qswipegesture_qswipegesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, horizontalDirection, arginfo_qt_widgets_qswipegesture_qswipegesture_horizontaldirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, verticalDirection, arginfo_qt_widgets_qswipegesture_qswipegesture_verticaldirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, swipeAngle, arginfo_qt_widgets_qswipegesture_qswipegesture_swipeangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSwipeGesture_QSwipeGesture, setSwipeAngle, arginfo_qt_widgets_qswipegesture_qswipegesture_setswipeangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
