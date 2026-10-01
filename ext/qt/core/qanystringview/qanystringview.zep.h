
extern zend_class_entry *qt_core_qanystringview_qanystringview_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAnyStringView_QAnyStringView);

PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, new_);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newQCharQsizetype);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newCharQsizetype);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newChar);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newQByteArray);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newQString);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newQLatin1StringView);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, newQStringView);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, mid);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, left);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, right);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, sliced);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, slicedQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, first);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, last);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, chopped);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, truncate);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, chop);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, toString);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, size);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, compare);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, equal);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, detects_US_ASCII_at_compile_time);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, front);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, back);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, empty_);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, size_bytes);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, max_size);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, isNull);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, isEmpty);
PHP_METHOD(Qt_Core_QAnyStringView_QAnyStringView, length);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newqcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newqbytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newqstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newqlatin1stringview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_newqstringview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_mid, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_left, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_right, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_sliced, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_slicedqsizetypeqsizetype, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_first, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_last, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_chopped, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_truncate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_chop, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_equal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_detects_us_ascii_at_compile_time, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_front, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_back, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_size_bytes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_max_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanystringview_qanystringview_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qanystringview_qanystringview_method_entry) {
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, new_, arginfo_qt_core_qanystringview_qanystringview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newQCharQsizetype, arginfo_qt_core_qanystringview_qanystringview_newqcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newCharQsizetype, arginfo_qt_core_qanystringview_qanystringview_newcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newChar, arginfo_qt_core_qanystringview_qanystringview_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newQByteArray, arginfo_qt_core_qanystringview_qanystringview_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newQString, arginfo_qt_core_qanystringview_qanystringview_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newQLatin1StringView, arginfo_qt_core_qanystringview_qanystringview_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, newQStringView, arginfo_qt_core_qanystringview_qanystringview_newqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, mid, arginfo_qt_core_qanystringview_qanystringview_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, left, arginfo_qt_core_qanystringview_qanystringview_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, right, arginfo_qt_core_qanystringview_qanystringview_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, sliced, arginfo_qt_core_qanystringview_qanystringview_sliced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, slicedQsizetypeQsizetype, arginfo_qt_core_qanystringview_qanystringview_slicedqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, first, arginfo_qt_core_qanystringview_qanystringview_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, last, arginfo_qt_core_qanystringview_qanystringview_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, chopped, arginfo_qt_core_qanystringview_qanystringview_chopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, truncate, arginfo_qt_core_qanystringview_qanystringview_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, chop, arginfo_qt_core_qanystringview_qanystringview_chop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, toString, arginfo_qt_core_qanystringview_qanystringview_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, size, arginfo_qt_core_qanystringview_qanystringview_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, compare, arginfo_qt_core_qanystringview_qanystringview_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, equal, arginfo_qt_core_qanystringview_qanystringview_equal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, detects_US_ASCII_at_compile_time, arginfo_qt_core_qanystringview_qanystringview_detects_us_ascii_at_compile_time, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, front, arginfo_qt_core_qanystringview_qanystringview_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, back, arginfo_qt_core_qanystringview_qanystringview_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, empty_, arginfo_qt_core_qanystringview_qanystringview_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, size_bytes, arginfo_qt_core_qanystringview_qanystringview_size_bytes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, max_size, arginfo_qt_core_qanystringview_qanystringview_max_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, isNull, arginfo_qt_core_qanystringview_qanystringview_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, isEmpty, arginfo_qt_core_qanystringview_qanystringview_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnyStringView_QAnyStringView, length, arginfo_qt_core_qanystringview_qanystringview_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
