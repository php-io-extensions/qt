
extern zend_class_entry *qt_widgets_qpangesture_qpangesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QPanGesture_QPanGesture);

PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, tr);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, new_);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, lastOffset);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, offset);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, delta);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, acceleration);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, setLastOffset);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, setOffset);
PHP_METHOD(Qt_Widgets_QPanGesture_QPanGesture, setAcceleration);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_lastoffset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_offset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_delta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_acceleration, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_setlastoffset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_setoffset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpangesture_qpangesture_setacceleration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qpangesture_qpangesture_method_entry) {
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, staticMetaObject, arginfo_qt_widgets_qpangesture_qpangesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, tr, arginfo_qt_widgets_qpangesture_qpangesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, new_, arginfo_qt_widgets_qpangesture_qpangesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, lastOffset, arginfo_qt_widgets_qpangesture_qpangesture_lastoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, offset, arginfo_qt_widgets_qpangesture_qpangesture_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, delta, arginfo_qt_widgets_qpangesture_qpangesture_delta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, acceleration, arginfo_qt_widgets_qpangesture_qpangesture_acceleration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, setLastOffset, arginfo_qt_widgets_qpangesture_qpangesture_setlastoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, setOffset, arginfo_qt_widgets_qpangesture_qpangesture_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPanGesture_QPanGesture, setAcceleration, arginfo_qt_widgets_qpangesture_qpangesture_setacceleration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
