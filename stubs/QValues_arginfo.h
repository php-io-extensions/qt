/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9289f94dc16301d4a0cc39f5171ced88b46d33e3 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPoint___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPoint_x, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPoint_y arginfo_class_QPoint_x

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPoint_setX, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPoint_setY, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPoint_isNull, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPointF___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPointF_x, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPointF_y arginfo_class_QPointF_x

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPointF_setX, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPointF_setY, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPointF_isNull arginfo_class_QPoint_isNull

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSize___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSize_width arginfo_class_QPoint_x

#define arginfo_class_QSize_height arginfo_class_QPoint_x

#define arginfo_class_QSize_isValid arginfo_class_QPoint_isNull

#define arginfo_class_QSize_isEmpty arginfo_class_QPoint_isNull

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QRect___construct, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QRect_x arginfo_class_QPoint_x

#define arginfo_class_QRect_y arginfo_class_QPoint_x

#define arginfo_class_QRect_width arginfo_class_QPoint_x

#define arginfo_class_QRect_height arginfo_class_QPoint_x

#define arginfo_class_QRect_isValid arginfo_class_QPoint_isNull

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QDate___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QDate_year arginfo_class_QPoint_x

#define arginfo_class_QDate_month arginfo_class_QPoint_x

#define arginfo_class_QDate_day arginfo_class_QPoint_x

#define arginfo_class_QDate_isValid arginfo_class_QPoint_isNull

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDate_toString, 0, 0, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, format, Qt\\DateFormat, 0, "Qt\\DateFormat::TEXT_DATE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QDate_fromString, 0, 1, QDate, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, format, Qt\\DateFormat, 0, "Qt\\DateFormat::TEXT_DATE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QKeySequence___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, format, QKeySequence\\SequenceFormat, 0, "QKeySequence\\SequenceFormat::NATIVE_TEXT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QKeySequence_toString, 0, 0, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, format, QKeySequence\\SequenceFormat, 0, "QKeySequence\\SequenceFormat::PORTABLE_TEXT")
ZEND_END_ARG_INFO()

#define arginfo_class_QKeySequence_isEmpty arginfo_class_QPoint_isNull

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QKeySequence_fromString, 0, 1, QKeySequence, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, format, QKeySequence\\SequenceFormat, 0, "QKeySequence\\SequenceFormat::PORTABLE_TEXT")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QByteArray___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, size, IS_LONG, 0, "-1")
ZEND_END_ARG_INFO()

#define arginfo_class_QByteArray_size arginfo_class_QPoint_x

#define arginfo_class_QByteArray_pointer arginfo_class_QPoint_x

ZEND_METHOD(QPoint, __construct);
ZEND_METHOD(QPoint, x);
ZEND_METHOD(QPoint, y);
ZEND_METHOD(QPoint, setX);
ZEND_METHOD(QPoint, setY);
ZEND_METHOD(QPoint, isNull);
ZEND_METHOD(QPointF, __construct);
ZEND_METHOD(QPointF, x);
ZEND_METHOD(QPointF, y);
ZEND_METHOD(QPointF, setX);
ZEND_METHOD(QPointF, setY);
ZEND_METHOD(QPointF, isNull);
ZEND_METHOD(QSize, __construct);
ZEND_METHOD(QSize, width);
ZEND_METHOD(QSize, height);
ZEND_METHOD(QSize, isValid);
ZEND_METHOD(QSize, isEmpty);
ZEND_METHOD(QRect, __construct);
ZEND_METHOD(QRect, x);
ZEND_METHOD(QRect, y);
ZEND_METHOD(QRect, width);
ZEND_METHOD(QRect, height);
ZEND_METHOD(QRect, isValid);
ZEND_METHOD(QDate, __construct);
ZEND_METHOD(QDate, year);
ZEND_METHOD(QDate, month);
ZEND_METHOD(QDate, day);
ZEND_METHOD(QDate, isValid);
ZEND_METHOD(QDate, toString);
ZEND_METHOD(QDate, fromString);
ZEND_METHOD(QKeySequence, __construct);
ZEND_METHOD(QKeySequence, toString);
ZEND_METHOD(QKeySequence, isEmpty);
ZEND_METHOD(QKeySequence, fromString);
ZEND_METHOD(QByteArray, __construct);
ZEND_METHOD(QByteArray, size);
ZEND_METHOD(QByteArray, pointer);

static const zend_function_entry class_QPoint_methods[] = {
	ZEND_ME(QPoint, __construct, arginfo_class_QPoint___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QPoint, x, arginfo_class_QPoint_x, ZEND_ACC_PUBLIC)
	ZEND_ME(QPoint, y, arginfo_class_QPoint_y, ZEND_ACC_PUBLIC)
	ZEND_ME(QPoint, setX, arginfo_class_QPoint_setX, ZEND_ACC_PUBLIC)
	ZEND_ME(QPoint, setY, arginfo_class_QPoint_setY, ZEND_ACC_PUBLIC)
	ZEND_ME(QPoint, isNull, arginfo_class_QPoint_isNull, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPointF_methods[] = {
	ZEND_ME(QPointF, __construct, arginfo_class_QPointF___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QPointF, x, arginfo_class_QPointF_x, ZEND_ACC_PUBLIC)
	ZEND_ME(QPointF, y, arginfo_class_QPointF_y, ZEND_ACC_PUBLIC)
	ZEND_ME(QPointF, setX, arginfo_class_QPointF_setX, ZEND_ACC_PUBLIC)
	ZEND_ME(QPointF, setY, arginfo_class_QPointF_setY, ZEND_ACC_PUBLIC)
	ZEND_ME(QPointF, isNull, arginfo_class_QPointF_isNull, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QSize_methods[] = {
	ZEND_ME(QSize, __construct, arginfo_class_QSize___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QSize, width, arginfo_class_QSize_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QSize, height, arginfo_class_QSize_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QSize, isValid, arginfo_class_QSize_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(QSize, isEmpty, arginfo_class_QSize_isEmpty, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QRect_methods[] = {
	ZEND_ME(QRect, __construct, arginfo_class_QRect___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QRect, x, arginfo_class_QRect_x, ZEND_ACC_PUBLIC)
	ZEND_ME(QRect, y, arginfo_class_QRect_y, ZEND_ACC_PUBLIC)
	ZEND_ME(QRect, width, arginfo_class_QRect_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QRect, height, arginfo_class_QRect_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QRect, isValid, arginfo_class_QRect_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QDate_methods[] = {
	ZEND_ME(QDate, __construct, arginfo_class_QDate___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, year, arginfo_class_QDate_year, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, month, arginfo_class_QDate_month, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, day, arginfo_class_QDate_day, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, isValid, arginfo_class_QDate_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, toString, arginfo_class_QDate_toString, ZEND_ACC_PUBLIC)
	ZEND_ME(QDate, fromString, arginfo_class_QDate_fromString, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QKeySequence_methods[] = {
	ZEND_ME(QKeySequence, __construct, arginfo_class_QKeySequence___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeySequence, toString, arginfo_class_QKeySequence_toString, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeySequence, isEmpty, arginfo_class_QKeySequence_isEmpty, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeySequence, fromString, arginfo_class_QKeySequence_fromString, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QByteArray_methods[] = {
	ZEND_ME(QByteArray, __construct, arginfo_class_QByteArray___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QByteArray, size, arginfo_class_QByteArray_size, ZEND_ACC_PUBLIC)
	ZEND_ME(QByteArray, pointer, arginfo_class_QByteArray_pointer, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QKeySequence_SequenceFormat(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QKeySequence\\SequenceFormat", IS_LONG, NULL);

	zval enum_case_NATIVE_TEXT_value;
	ZVAL_LONG(&enum_case_NATIVE_TEXT_value, 0);
	zend_enum_add_case_cstr(class_entry, "NATIVE_TEXT", &enum_case_NATIVE_TEXT_value);

	zval enum_case_PORTABLE_TEXT_value;
	ZVAL_LONG(&enum_case_PORTABLE_TEXT_value, 1);
	zend_enum_add_case_cstr(class_entry, "PORTABLE_TEXT", &enum_case_PORTABLE_TEXT_value);

	return class_entry;
}

static zend_class_entry *register_class_QPoint(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPoint", class_QPoint_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPointF(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPointF", class_QPointF_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QSize(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSize", class_QSize_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QRect(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QRect", class_QRect_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QDate(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QDate", class_QDate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QKeySequence(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QKeySequence", class_QKeySequence_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QByteArray(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QByteArray", class_QByteArray_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
