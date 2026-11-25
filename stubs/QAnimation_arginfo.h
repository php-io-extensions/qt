/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: bef92c7f20029490d97c24329697a9dde6083f85 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_start, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, policy, QAbstractAnimation\\DeletionPolicy, 0, "QAbstractAnimation\\DeletionPolicy::KEEP_WHEN_STOPPED")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_stop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAbstractAnimation_duration, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVariantAnimation_setStartValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QVariantAnimation_setEndValue arginfo_class_QVariantAnimation_setStartValue

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVariantAnimation_setDuration, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QVariantAnimation_easingCurve, 0, 0, QEasingCurve, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVariantAnimation_setEasingCurve, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, easing, QEasingCurve, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QEasingCurve___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, type, QEasingCurve\\Type, 0, "QEasingCurve\\Type::LINEAR")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QEasingCurve_type, 0, 0, QEasingCurve\\Type, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEasingCurve_setType, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, type, QEasingCurve\\Type, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEasingCurve_valueForProgress, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, progress, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEasingCurve_addCubicBezierSegment, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, c1, QPointF, 0)
	ZEND_ARG_OBJ_INFO(0, c2, QPointF, 0)
	ZEND_ARG_OBJ_INFO(0, endPoint, QPointF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEasingCurve_toCubicSpline, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPropertyAnimation___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, target, QObject, 0)
	ZEND_ARG_TYPE_INFO(0, propertyName, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QAbstractAnimation, start);
ZEND_METHOD(QAbstractAnimation, stop);
ZEND_METHOD(QAbstractAnimation, duration);
ZEND_METHOD(QVariantAnimation, setStartValue);
ZEND_METHOD(QVariantAnimation, setEndValue);
ZEND_METHOD(QVariantAnimation, setDuration);
ZEND_METHOD(QVariantAnimation, easingCurve);
ZEND_METHOD(QVariantAnimation, setEasingCurve);
ZEND_METHOD(QEasingCurve, __construct);
ZEND_METHOD(QEasingCurve, type);
ZEND_METHOD(QEasingCurve, setType);
ZEND_METHOD(QEasingCurve, valueForProgress);
ZEND_METHOD(QEasingCurve, addCubicBezierSegment);
ZEND_METHOD(QEasingCurve, toCubicSpline);
ZEND_METHOD(QPropertyAnimation, __construct);

static const zend_function_entry class_QAbstractAnimation_methods[] = {
	ZEND_ME(QAbstractAnimation, start, arginfo_class_QAbstractAnimation_start, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractAnimation, stop, arginfo_class_QAbstractAnimation_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QAbstractAnimation, duration, arginfo_class_QAbstractAnimation_duration, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QVariantAnimation_methods[] = {
	ZEND_ME(QVariantAnimation, setStartValue, arginfo_class_QVariantAnimation_setStartValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, setEndValue, arginfo_class_QVariantAnimation_setEndValue, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, setDuration, arginfo_class_QVariantAnimation_setDuration, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, easingCurve, arginfo_class_QVariantAnimation_easingCurve, ZEND_ACC_PUBLIC)
	ZEND_ME(QVariantAnimation, setEasingCurve, arginfo_class_QVariantAnimation_setEasingCurve, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QEasingCurve_methods[] = {
	ZEND_ME(QEasingCurve, __construct, arginfo_class_QEasingCurve___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QEasingCurve, type, arginfo_class_QEasingCurve_type, ZEND_ACC_PUBLIC)
	ZEND_ME(QEasingCurve, setType, arginfo_class_QEasingCurve_setType, ZEND_ACC_PUBLIC)
	ZEND_ME(QEasingCurve, valueForProgress, arginfo_class_QEasingCurve_valueForProgress, ZEND_ACC_PUBLIC)
	ZEND_ME(QEasingCurve, addCubicBezierSegment, arginfo_class_QEasingCurve_addCubicBezierSegment, ZEND_ACC_PUBLIC)
	ZEND_ME(QEasingCurve, toCubicSpline, arginfo_class_QEasingCurve_toCubicSpline, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPropertyAnimation_methods[] = {
	ZEND_ME(QPropertyAnimation, __construct, arginfo_class_QPropertyAnimation___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QAbstractAnimation_DeletionPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAbstractAnimation\\DeletionPolicy", IS_LONG, NULL);

	zval enum_case_KEEP_WHEN_STOPPED_value;
	ZVAL_LONG(&enum_case_KEEP_WHEN_STOPPED_value, 0);
	zend_enum_add_case_cstr(class_entry, "KEEP_WHEN_STOPPED", &enum_case_KEEP_WHEN_STOPPED_value);

	zval enum_case_DELETE_WHEN_STOPPED_value;
	ZVAL_LONG(&enum_case_DELETE_WHEN_STOPPED_value, 1);
	zend_enum_add_case_cstr(class_entry, "DELETE_WHEN_STOPPED", &enum_case_DELETE_WHEN_STOPPED_value);

	return class_entry;
}

static zend_class_entry *register_class_QEasingCurve_Type(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QEasingCurve\\Type", IS_LONG, NULL);

	zval enum_case_LINEAR_value;
	ZVAL_LONG(&enum_case_LINEAR_value, 0);
	zend_enum_add_case_cstr(class_entry, "LINEAR", &enum_case_LINEAR_value);

	zval enum_case_IN_QUAD_value;
	ZVAL_LONG(&enum_case_IN_QUAD_value, 1);
	zend_enum_add_case_cstr(class_entry, "IN_QUAD", &enum_case_IN_QUAD_value);

	zval enum_case_OUT_QUAD_value;
	ZVAL_LONG(&enum_case_OUT_QUAD_value, 2);
	zend_enum_add_case_cstr(class_entry, "OUT_QUAD", &enum_case_OUT_QUAD_value);

	zval enum_case_IN_OUT_QUAD_value;
	ZVAL_LONG(&enum_case_IN_OUT_QUAD_value, 3);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_QUAD", &enum_case_IN_OUT_QUAD_value);

	zval enum_case_OUT_IN_QUAD_value;
	ZVAL_LONG(&enum_case_OUT_IN_QUAD_value, 4);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_QUAD", &enum_case_OUT_IN_QUAD_value);

	zval enum_case_IN_CUBIC_value;
	ZVAL_LONG(&enum_case_IN_CUBIC_value, 5);
	zend_enum_add_case_cstr(class_entry, "IN_CUBIC", &enum_case_IN_CUBIC_value);

	zval enum_case_OUT_CUBIC_value;
	ZVAL_LONG(&enum_case_OUT_CUBIC_value, 6);
	zend_enum_add_case_cstr(class_entry, "OUT_CUBIC", &enum_case_OUT_CUBIC_value);

	zval enum_case_IN_OUT_CUBIC_value;
	ZVAL_LONG(&enum_case_IN_OUT_CUBIC_value, 7);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_CUBIC", &enum_case_IN_OUT_CUBIC_value);

	zval enum_case_OUT_IN_CUBIC_value;
	ZVAL_LONG(&enum_case_OUT_IN_CUBIC_value, 8);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_CUBIC", &enum_case_OUT_IN_CUBIC_value);

	zval enum_case_IN_QUART_value;
	ZVAL_LONG(&enum_case_IN_QUART_value, 9);
	zend_enum_add_case_cstr(class_entry, "IN_QUART", &enum_case_IN_QUART_value);

	zval enum_case_OUT_QUART_value;
	ZVAL_LONG(&enum_case_OUT_QUART_value, 10);
	zend_enum_add_case_cstr(class_entry, "OUT_QUART", &enum_case_OUT_QUART_value);

	zval enum_case_IN_OUT_QUART_value;
	ZVAL_LONG(&enum_case_IN_OUT_QUART_value, 11);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_QUART", &enum_case_IN_OUT_QUART_value);

	zval enum_case_OUT_IN_QUART_value;
	ZVAL_LONG(&enum_case_OUT_IN_QUART_value, 12);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_QUART", &enum_case_OUT_IN_QUART_value);

	zval enum_case_IN_QUINT_value;
	ZVAL_LONG(&enum_case_IN_QUINT_value, 13);
	zend_enum_add_case_cstr(class_entry, "IN_QUINT", &enum_case_IN_QUINT_value);

	zval enum_case_OUT_QUINT_value;
	ZVAL_LONG(&enum_case_OUT_QUINT_value, 14);
	zend_enum_add_case_cstr(class_entry, "OUT_QUINT", &enum_case_OUT_QUINT_value);

	zval enum_case_IN_OUT_QUINT_value;
	ZVAL_LONG(&enum_case_IN_OUT_QUINT_value, 15);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_QUINT", &enum_case_IN_OUT_QUINT_value);

	zval enum_case_OUT_IN_QUINT_value;
	ZVAL_LONG(&enum_case_OUT_IN_QUINT_value, 16);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_QUINT", &enum_case_OUT_IN_QUINT_value);

	zval enum_case_IN_SINE_value;
	ZVAL_LONG(&enum_case_IN_SINE_value, 17);
	zend_enum_add_case_cstr(class_entry, "IN_SINE", &enum_case_IN_SINE_value);

	zval enum_case_OUT_SINE_value;
	ZVAL_LONG(&enum_case_OUT_SINE_value, 18);
	zend_enum_add_case_cstr(class_entry, "OUT_SINE", &enum_case_OUT_SINE_value);

	zval enum_case_IN_OUT_SINE_value;
	ZVAL_LONG(&enum_case_IN_OUT_SINE_value, 19);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_SINE", &enum_case_IN_OUT_SINE_value);

	zval enum_case_OUT_IN_SINE_value;
	ZVAL_LONG(&enum_case_OUT_IN_SINE_value, 20);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_SINE", &enum_case_OUT_IN_SINE_value);

	zval enum_case_IN_EXPO_value;
	ZVAL_LONG(&enum_case_IN_EXPO_value, 21);
	zend_enum_add_case_cstr(class_entry, "IN_EXPO", &enum_case_IN_EXPO_value);

	zval enum_case_OUT_EXPO_value;
	ZVAL_LONG(&enum_case_OUT_EXPO_value, 22);
	zend_enum_add_case_cstr(class_entry, "OUT_EXPO", &enum_case_OUT_EXPO_value);

	zval enum_case_IN_OUT_EXPO_value;
	ZVAL_LONG(&enum_case_IN_OUT_EXPO_value, 23);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_EXPO", &enum_case_IN_OUT_EXPO_value);

	zval enum_case_OUT_IN_EXPO_value;
	ZVAL_LONG(&enum_case_OUT_IN_EXPO_value, 24);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_EXPO", &enum_case_OUT_IN_EXPO_value);

	zval enum_case_IN_CIRC_value;
	ZVAL_LONG(&enum_case_IN_CIRC_value, 25);
	zend_enum_add_case_cstr(class_entry, "IN_CIRC", &enum_case_IN_CIRC_value);

	zval enum_case_OUT_CIRC_value;
	ZVAL_LONG(&enum_case_OUT_CIRC_value, 26);
	zend_enum_add_case_cstr(class_entry, "OUT_CIRC", &enum_case_OUT_CIRC_value);

	zval enum_case_IN_OUT_CIRC_value;
	ZVAL_LONG(&enum_case_IN_OUT_CIRC_value, 27);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_CIRC", &enum_case_IN_OUT_CIRC_value);

	zval enum_case_OUT_IN_CIRC_value;
	ZVAL_LONG(&enum_case_OUT_IN_CIRC_value, 28);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_CIRC", &enum_case_OUT_IN_CIRC_value);

	zval enum_case_IN_ELASTIC_value;
	ZVAL_LONG(&enum_case_IN_ELASTIC_value, 29);
	zend_enum_add_case_cstr(class_entry, "IN_ELASTIC", &enum_case_IN_ELASTIC_value);

	zval enum_case_OUT_ELASTIC_value;
	ZVAL_LONG(&enum_case_OUT_ELASTIC_value, 30);
	zend_enum_add_case_cstr(class_entry, "OUT_ELASTIC", &enum_case_OUT_ELASTIC_value);

	zval enum_case_IN_OUT_ELASTIC_value;
	ZVAL_LONG(&enum_case_IN_OUT_ELASTIC_value, 31);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_ELASTIC", &enum_case_IN_OUT_ELASTIC_value);

	zval enum_case_OUT_IN_ELASTIC_value;
	ZVAL_LONG(&enum_case_OUT_IN_ELASTIC_value, 32);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_ELASTIC", &enum_case_OUT_IN_ELASTIC_value);

	zval enum_case_IN_BACK_value;
	ZVAL_LONG(&enum_case_IN_BACK_value, 33);
	zend_enum_add_case_cstr(class_entry, "IN_BACK", &enum_case_IN_BACK_value);

	zval enum_case_OUT_BACK_value;
	ZVAL_LONG(&enum_case_OUT_BACK_value, 34);
	zend_enum_add_case_cstr(class_entry, "OUT_BACK", &enum_case_OUT_BACK_value);

	zval enum_case_IN_OUT_BACK_value;
	ZVAL_LONG(&enum_case_IN_OUT_BACK_value, 35);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_BACK", &enum_case_IN_OUT_BACK_value);

	zval enum_case_OUT_IN_BACK_value;
	ZVAL_LONG(&enum_case_OUT_IN_BACK_value, 36);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_BACK", &enum_case_OUT_IN_BACK_value);

	zval enum_case_IN_BOUNCE_value;
	ZVAL_LONG(&enum_case_IN_BOUNCE_value, 37);
	zend_enum_add_case_cstr(class_entry, "IN_BOUNCE", &enum_case_IN_BOUNCE_value);

	zval enum_case_OUT_BOUNCE_value;
	ZVAL_LONG(&enum_case_OUT_BOUNCE_value, 38);
	zend_enum_add_case_cstr(class_entry, "OUT_BOUNCE", &enum_case_OUT_BOUNCE_value);

	zval enum_case_IN_OUT_BOUNCE_value;
	ZVAL_LONG(&enum_case_IN_OUT_BOUNCE_value, 39);
	zend_enum_add_case_cstr(class_entry, "IN_OUT_BOUNCE", &enum_case_IN_OUT_BOUNCE_value);

	zval enum_case_OUT_IN_BOUNCE_value;
	ZVAL_LONG(&enum_case_OUT_IN_BOUNCE_value, 40);
	zend_enum_add_case_cstr(class_entry, "OUT_IN_BOUNCE", &enum_case_OUT_IN_BOUNCE_value);

	zval enum_case_IN_CURVE_value;
	ZVAL_LONG(&enum_case_IN_CURVE_value, 41);
	zend_enum_add_case_cstr(class_entry, "IN_CURVE", &enum_case_IN_CURVE_value);

	zval enum_case_OUT_CURVE_value;
	ZVAL_LONG(&enum_case_OUT_CURVE_value, 42);
	zend_enum_add_case_cstr(class_entry, "OUT_CURVE", &enum_case_OUT_CURVE_value);

	zval enum_case_SINE_CURVE_value;
	ZVAL_LONG(&enum_case_SINE_CURVE_value, 43);
	zend_enum_add_case_cstr(class_entry, "SINE_CURVE", &enum_case_SINE_CURVE_value);

	zval enum_case_COSINE_CURVE_value;
	ZVAL_LONG(&enum_case_COSINE_CURVE_value, 44);
	zend_enum_add_case_cstr(class_entry, "COSINE_CURVE", &enum_case_COSINE_CURVE_value);

	zval enum_case_BEZIER_SPLINE_value;
	ZVAL_LONG(&enum_case_BEZIER_SPLINE_value, 45);
	zend_enum_add_case_cstr(class_entry, "BEZIER_SPLINE", &enum_case_BEZIER_SPLINE_value);

	zval enum_case_TCB_SPLINE_value;
	ZVAL_LONG(&enum_case_TCB_SPLINE_value, 46);
	zend_enum_add_case_cstr(class_entry, "TCB_SPLINE", &enum_case_TCB_SPLINE_value);

	return class_entry;
}

static zend_class_entry *register_class_QAbstractAnimation(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAbstractAnimation", class_QAbstractAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QVariantAnimation(zend_class_entry *class_entry_QAbstractAnimation)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QVariantAnimation", class_QVariantAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QAbstractAnimation, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QEasingCurve(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QEasingCurve", class_QEasingCurve_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPropertyAnimation(zend_class_entry *class_entry_QVariantAnimation)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPropertyAnimation", class_QPropertyAnimation_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QVariantAnimation, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
