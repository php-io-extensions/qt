
extern zend_class_entry *qt_core_qvariantanimation_qvariantanimation_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QVariantAnimation_QVariantAnimation);

PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, staticMetaObject);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, tr);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, new_);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, startValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setStartValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, endValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setEndValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, keyValueAt);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setKeyValueAt);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, keyValues);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setKeyValues);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, currentValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, duration);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setDuration);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, easingCurve);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, setEasingCurve);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, valueChanged);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, event);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, updateCurrentTime);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, updateState);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, updateCurrentValue);
PHP_METHOD(Qt_Core_QVariantAnimation_QVariantAnimation, interpolated);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_startvalue, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_setstartvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_endvalue, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_setendvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_keyvalueat, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_setkeyvalueat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_keyvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_setkeyvalues, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, values, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_currentvalue, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_duration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_setduration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_easingcurve, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_seteasingcurve, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, easing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_valuechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_updatecurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_updatestate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_updatecurrentvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariantanimation_qvariantanimation_interpolated, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, from)
	ZEND_ARG_INFO(0, to)
	ZEND_ARG_TYPE_INFO(0, progress, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qvariantanimation_qvariantanimation_method_entry) {
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, staticMetaObject, arginfo_qt_core_qvariantanimation_qvariantanimation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, tr, arginfo_qt_core_qvariantanimation_qvariantanimation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, new_, arginfo_qt_core_qvariantanimation_qvariantanimation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, startValue, arginfo_qt_core_qvariantanimation_qvariantanimation_startvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setStartValue, arginfo_qt_core_qvariantanimation_qvariantanimation_setstartvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, endValue, arginfo_qt_core_qvariantanimation_qvariantanimation_endvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setEndValue, arginfo_qt_core_qvariantanimation_qvariantanimation_setendvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, keyValueAt, arginfo_qt_core_qvariantanimation_qvariantanimation_keyvalueat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setKeyValueAt, arginfo_qt_core_qvariantanimation_qvariantanimation_setkeyvalueat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, keyValues, arginfo_qt_core_qvariantanimation_qvariantanimation_keyvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setKeyValues, arginfo_qt_core_qvariantanimation_qvariantanimation_setkeyvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, currentValue, arginfo_qt_core_qvariantanimation_qvariantanimation_currentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, duration, arginfo_qt_core_qvariantanimation_qvariantanimation_duration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setDuration, arginfo_qt_core_qvariantanimation_qvariantanimation_setduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, easingCurve, arginfo_qt_core_qvariantanimation_qvariantanimation_easingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, setEasingCurve, arginfo_qt_core_qvariantanimation_qvariantanimation_seteasingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, valueChanged, arginfo_qt_core_qvariantanimation_qvariantanimation_valuechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, event, arginfo_qt_core_qvariantanimation_qvariantanimation_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, updateCurrentTime, arginfo_qt_core_qvariantanimation_qvariantanimation_updatecurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, updateState, arginfo_qt_core_qvariantanimation_qvariantanimation_updatestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, updateCurrentValue, arginfo_qt_core_qvariantanimation_qvariantanimation_updatecurrentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantAnimation_QVariantAnimation, interpolated, arginfo_qt_core_qvariantanimation_qvariantanimation_interpolated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
