
extern zend_class_entry *qt_widgets_qtapandholdgesture_qtapandholdgesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture);

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, tr);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, new_);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, position);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setPosition);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setTimeout);
PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, timeout);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_setposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_settimeout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_timeout, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtapandholdgesture_qtapandholdgesture_method_entry) {
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, staticMetaObject, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, tr, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, new_, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, position, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setPosition, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setTimeout, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_settimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, timeout, arginfo_qt_widgets_qtapandholdgesture_qtapandholdgesture_timeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
