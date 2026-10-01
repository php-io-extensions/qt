
extern zend_class_entry *qt_core_qbytearrayview_qbytearrayview_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QByteArrayView_QByteArrayView);

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, new_);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newCharQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newUnsignedCharQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newChar);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newQByteArray);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newQLatin1String);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toByteArray);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, size);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, data);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, constData);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, at);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, first);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, last);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, sliced);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, slicedQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, chopped);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, left);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, right);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, mid);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, truncate);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, chop);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, trimmed);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toShort);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toUShort);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toInt);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toUInt);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toLong);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toULong);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toLongLong);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toULongLong);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toFloat);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toDouble);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, startsWith);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, startsWithChar);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, endsWith);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, endsWithChar);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, indexOf);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, indexOfCharQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, contains);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, containsChar);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOf);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfQByteArrayViewQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfCharQsizetype);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, count);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, countChar);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, compare);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isValidUtf8);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, begin);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, end);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, cbegin);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, cend);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, empty_);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, front);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, back);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, max_size);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isNull);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isEmpty);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, length);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, first2);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, last2);
PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, maxSize);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_newcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_newunsignedcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_newchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_newqbytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_newqlatin1string, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_data, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_constdata, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_at, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_first, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_last, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_sliced, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_slicedqsizetypeqsizetype, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_chopped, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_left, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_right, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_mid, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_truncate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_chop, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_trimmed, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_toshort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_toushort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_toint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_touint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_tolong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_toulong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_tolonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_toulonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_tofloat, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_todouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_startswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_startswithchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_endswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_endswithchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_indexofcharqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_containschar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexofqbytearrayviewqsizetype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexofcharqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_countchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_isvalidutf8, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_begin, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_end, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_cbegin, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_cend, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_front, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_back, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_max_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_first2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_last2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearrayview_qbytearrayview_maxsize, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbytearrayview_qbytearrayview_method_entry) {
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, new_, arginfo_qt_core_qbytearrayview_qbytearrayview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, newCharQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_newcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, newUnsignedCharQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_newunsignedcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, newChar, arginfo_qt_core_qbytearrayview_qbytearrayview_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, newQByteArray, arginfo_qt_core_qbytearrayview_qbytearrayview_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, newQLatin1String, arginfo_qt_core_qbytearrayview_qbytearrayview_newqlatin1string, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toByteArray, arginfo_qt_core_qbytearrayview_qbytearrayview_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, size, arginfo_qt_core_qbytearrayview_qbytearrayview_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, data, arginfo_qt_core_qbytearrayview_qbytearrayview_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, constData, arginfo_qt_core_qbytearrayview_qbytearrayview_constdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, at, arginfo_qt_core_qbytearrayview_qbytearrayview_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, first, arginfo_qt_core_qbytearrayview_qbytearrayview_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, last, arginfo_qt_core_qbytearrayview_qbytearrayview_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, sliced, arginfo_qt_core_qbytearrayview_qbytearrayview_sliced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, slicedQsizetypeQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_slicedqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, chopped, arginfo_qt_core_qbytearrayview_qbytearrayview_chopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, left, arginfo_qt_core_qbytearrayview_qbytearrayview_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, right, arginfo_qt_core_qbytearrayview_qbytearrayview_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, mid, arginfo_qt_core_qbytearrayview_qbytearrayview_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, truncate, arginfo_qt_core_qbytearrayview_qbytearrayview_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, chop, arginfo_qt_core_qbytearrayview_qbytearrayview_chop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, trimmed, arginfo_qt_core_qbytearrayview_qbytearrayview_trimmed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toShort, arginfo_qt_core_qbytearrayview_qbytearrayview_toshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toUShort, arginfo_qt_core_qbytearrayview_qbytearrayview_toushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toInt, arginfo_qt_core_qbytearrayview_qbytearrayview_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toUInt, arginfo_qt_core_qbytearrayview_qbytearrayview_touint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toLong, arginfo_qt_core_qbytearrayview_qbytearrayview_tolong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toULong, arginfo_qt_core_qbytearrayview_qbytearrayview_toulong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toLongLong, arginfo_qt_core_qbytearrayview_qbytearrayview_tolonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toULongLong, arginfo_qt_core_qbytearrayview_qbytearrayview_toulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toFloat, arginfo_qt_core_qbytearrayview_qbytearrayview_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, toDouble, arginfo_qt_core_qbytearrayview_qbytearrayview_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, startsWith, arginfo_qt_core_qbytearrayview_qbytearrayview_startswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, startsWithChar, arginfo_qt_core_qbytearrayview_qbytearrayview_startswithchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, endsWith, arginfo_qt_core_qbytearrayview_qbytearrayview_endswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, endsWithChar, arginfo_qt_core_qbytearrayview_qbytearrayview_endswithchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, indexOf, arginfo_qt_core_qbytearrayview_qbytearrayview_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, indexOfCharQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_indexofcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, contains, arginfo_qt_core_qbytearrayview_qbytearrayview_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, containsChar, arginfo_qt_core_qbytearrayview_qbytearrayview_containschar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOf, arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfQByteArrayViewQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexofqbytearrayviewqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfCharQsizetype, arginfo_qt_core_qbytearrayview_qbytearrayview_lastindexofcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, count, arginfo_qt_core_qbytearrayview_qbytearrayview_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, countChar, arginfo_qt_core_qbytearrayview_qbytearrayview_countchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, compare, arginfo_qt_core_qbytearrayview_qbytearrayview_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, isValidUtf8, arginfo_qt_core_qbytearrayview_qbytearrayview_isvalidutf8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, begin, arginfo_qt_core_qbytearrayview_qbytearrayview_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, end, arginfo_qt_core_qbytearrayview_qbytearrayview_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, cbegin, arginfo_qt_core_qbytearrayview_qbytearrayview_cbegin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, cend, arginfo_qt_core_qbytearrayview_qbytearrayview_cend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, empty_, arginfo_qt_core_qbytearrayview_qbytearrayview_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, front, arginfo_qt_core_qbytearrayview_qbytearrayview_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, back, arginfo_qt_core_qbytearrayview_qbytearrayview_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, max_size, arginfo_qt_core_qbytearrayview_qbytearrayview_max_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, isNull, arginfo_qt_core_qbytearrayview_qbytearrayview_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, isEmpty, arginfo_qt_core_qbytearrayview_qbytearrayview_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, length, arginfo_qt_core_qbytearrayview_qbytearrayview_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, first2, arginfo_qt_core_qbytearrayview_qbytearrayview_first2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, last2, arginfo_qt_core_qbytearrayview_qbytearrayview_last2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayView_QByteArrayView, maxSize, arginfo_qt_core_qbytearrayview_qbytearrayview_maxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
