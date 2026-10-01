
extern zend_class_entry *qt_core_qbytearray_qbytearray_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QByteArray_QByteArray);

PHP_METHOD(Qt_Core_QByteArray_QByteArray, new_);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, newCharQsizetype);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQsizetypeChar);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQsizetypeQtInitialization);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQByteArray);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, swap);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isEmpty);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, resize);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, resizeQsizetypeChar);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, resizeForOverwrite);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, capacity);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, reserve);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, squeeze);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, data);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, constData);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, detach);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isDetached);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isSharedWith);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, clear);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, at);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, front);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, back);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, indexOf);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, indexOfQByteArrayViewQsizetype);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOf);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayViewQsizetype);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, contains);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, containsQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, count);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, countQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, compare);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, left);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, right);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, mid);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, first);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, last);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, sliced);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, slicedQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, chopped);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, startsWith);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, startsWithChar);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, endsWith);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, endsWithQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isUpper);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isLower);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isValidUtf8);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, truncate);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, chop);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLower);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUpper);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, trimmed);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, simplified);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, leftJustified);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, rightJustified);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, split);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, repeated);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toShort);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUShort);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLong);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toULong);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLongLong);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toULongLong);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toFloat);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toDouble);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toBase64);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toHex);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, toPercentEncoding);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, percentDecoded);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, number);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberUintInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberLongIntInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberUlongInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberQlonglongInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberQulonglongInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberDoubleCharInt);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromRawData);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromBase64Encoding);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromBase64);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromHex);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromPercentEncoding);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, begin);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, cbegin);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, constBegin);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, end);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, cend);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, constEnd);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_back);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backChar);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backQByteArray);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_front);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontChar);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontQByteArray);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontQByteArrayView);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, shrink_to_fit);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, max_size);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, maxSize);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, size);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, length);
PHP_METHOD(Qt_Core_QByteArray_QByteArray, isNull);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_newcharqsizetype, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_newqsizetypechar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_newqsizetypeqtinitialization, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_newqbytearrayview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_newqbytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_swap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_resize, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_resizeqsizetypechar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_resizeforoverwrite, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_capacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_reserve, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_squeeze, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_data, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_constdata, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_detach, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_issharedwith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_clear, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_at, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_front, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_back, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_indexofqbytearrayviewqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_lastindexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_lastindexofqbytearrayview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_lastindexofqbytearrayviewqsizetype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_containsqbytearrayview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_countqbytearrayview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_left, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_right, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_mid, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_first, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_last, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_sliced, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_slicedqsizetypeqsizetype, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_chopped, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_startswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_startswithchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_endswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_endswithqbytearrayview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_isupper, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_islower, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_isvalidutf8, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_truncate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_chop, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tolower, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toupper, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_trimmed, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_simplified, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_leftjustified, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_INFO(0, fill)
	ZEND_ARG_TYPE_INFO(0, truncate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_rightjustified, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_INFO(0, fill)
	ZEND_ARG_TYPE_INFO(0, truncate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_split, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_repeated, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, times, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toshort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toushort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_touint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tolong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toulong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tolonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_toulonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tofloat, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_todouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tobase64, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_tohex, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, separator)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_topercentencoding, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, exclude, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, include_, IS_STRING, 0)
	ZEND_ARG_INFO(0, percent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_percentdecoded, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, percent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_number, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberuintint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberlongintint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberulongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberqlonglongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberqulonglongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_numberdoublecharint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_fromrawdata, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_frombase64encoding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base64, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_frombase64, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, base64, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_fromhex, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, hexEncoded, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_frompercentencoding, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pctEncoded, IS_STRING, 0)
	ZEND_ARG_INFO(0, percent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_begin, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_cbegin, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_constbegin, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_end, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_cend, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_constend, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_back, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_backchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_backqbytearray, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_backqbytearrayview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_front, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_frontchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, c)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_frontqbytearray, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_push_frontqbytearrayview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_shrink_to_fit, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_max_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_maxsize, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearray_qbytearray_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbytearray_qbytearray_method_entry) {
	PHP_ME(Qt_Core_QByteArray_QByteArray, new_, arginfo_qt_core_qbytearray_qbytearray_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, newCharQsizetype, arginfo_qt_core_qbytearray_qbytearray_newcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, newQsizetypeChar, arginfo_qt_core_qbytearray_qbytearray_newqsizetypechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, newQsizetypeQtInitialization, arginfo_qt_core_qbytearray_qbytearray_newqsizetypeqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, newQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_newqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, newQByteArray, arginfo_qt_core_qbytearray_qbytearray_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, swap, arginfo_qt_core_qbytearray_qbytearray_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isEmpty, arginfo_qt_core_qbytearray_qbytearray_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, resize, arginfo_qt_core_qbytearray_qbytearray_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, resizeQsizetypeChar, arginfo_qt_core_qbytearray_qbytearray_resizeqsizetypechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, resizeForOverwrite, arginfo_qt_core_qbytearray_qbytearray_resizeforoverwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, capacity, arginfo_qt_core_qbytearray_qbytearray_capacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, reserve, arginfo_qt_core_qbytearray_qbytearray_reserve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, squeeze, arginfo_qt_core_qbytearray_qbytearray_squeeze, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, data, arginfo_qt_core_qbytearray_qbytearray_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, constData, arginfo_qt_core_qbytearray_qbytearray_constdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, detach, arginfo_qt_core_qbytearray_qbytearray_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isDetached, arginfo_qt_core_qbytearray_qbytearray_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isSharedWith, arginfo_qt_core_qbytearray_qbytearray_issharedwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, clear, arginfo_qt_core_qbytearray_qbytearray_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, at, arginfo_qt_core_qbytearray_qbytearray_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, front, arginfo_qt_core_qbytearray_qbytearray_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, back, arginfo_qt_core_qbytearray_qbytearray_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, indexOf, arginfo_qt_core_qbytearray_qbytearray_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, indexOfQByteArrayViewQsizetype, arginfo_qt_core_qbytearray_qbytearray_indexofqbytearrayviewqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, lastIndexOf, arginfo_qt_core_qbytearray_qbytearray_lastindexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_lastindexofqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayViewQsizetype, arginfo_qt_core_qbytearray_qbytearray_lastindexofqbytearrayviewqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, contains, arginfo_qt_core_qbytearray_qbytearray_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, containsQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_containsqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, count, arginfo_qt_core_qbytearray_qbytearray_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, countQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_countqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, compare, arginfo_qt_core_qbytearray_qbytearray_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, left, arginfo_qt_core_qbytearray_qbytearray_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, right, arginfo_qt_core_qbytearray_qbytearray_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, mid, arginfo_qt_core_qbytearray_qbytearray_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, first, arginfo_qt_core_qbytearray_qbytearray_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, last, arginfo_qt_core_qbytearray_qbytearray_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, sliced, arginfo_qt_core_qbytearray_qbytearray_sliced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, slicedQsizetypeQsizetype, arginfo_qt_core_qbytearray_qbytearray_slicedqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, chopped, arginfo_qt_core_qbytearray_qbytearray_chopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, startsWith, arginfo_qt_core_qbytearray_qbytearray_startswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, startsWithChar, arginfo_qt_core_qbytearray_qbytearray_startswithchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, endsWith, arginfo_qt_core_qbytearray_qbytearray_endswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, endsWithQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_endswithqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isUpper, arginfo_qt_core_qbytearray_qbytearray_isupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isLower, arginfo_qt_core_qbytearray_qbytearray_islower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isValidUtf8, arginfo_qt_core_qbytearray_qbytearray_isvalidutf8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, truncate, arginfo_qt_core_qbytearray_qbytearray_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, chop, arginfo_qt_core_qbytearray_qbytearray_chop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toLower, arginfo_qt_core_qbytearray_qbytearray_tolower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toUpper, arginfo_qt_core_qbytearray_qbytearray_toupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, trimmed, arginfo_qt_core_qbytearray_qbytearray_trimmed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, simplified, arginfo_qt_core_qbytearray_qbytearray_simplified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, leftJustified, arginfo_qt_core_qbytearray_qbytearray_leftjustified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, rightJustified, arginfo_qt_core_qbytearray_qbytearray_rightjustified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, split, arginfo_qt_core_qbytearray_qbytearray_split, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, repeated, arginfo_qt_core_qbytearray_qbytearray_repeated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toShort, arginfo_qt_core_qbytearray_qbytearray_toshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toUShort, arginfo_qt_core_qbytearray_qbytearray_toushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toInt, arginfo_qt_core_qbytearray_qbytearray_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toUInt, arginfo_qt_core_qbytearray_qbytearray_touint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toLong, arginfo_qt_core_qbytearray_qbytearray_tolong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toULong, arginfo_qt_core_qbytearray_qbytearray_toulong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toLongLong, arginfo_qt_core_qbytearray_qbytearray_tolonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toULongLong, arginfo_qt_core_qbytearray_qbytearray_toulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toFloat, arginfo_qt_core_qbytearray_qbytearray_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toDouble, arginfo_qt_core_qbytearray_qbytearray_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toBase64, arginfo_qt_core_qbytearray_qbytearray_tobase64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toHex, arginfo_qt_core_qbytearray_qbytearray_tohex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, toPercentEncoding, arginfo_qt_core_qbytearray_qbytearray_topercentencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, percentDecoded, arginfo_qt_core_qbytearray_qbytearray_percentdecoded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, number, arginfo_qt_core_qbytearray_qbytearray_number, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberUintInt, arginfo_qt_core_qbytearray_qbytearray_numberuintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberLongIntInt, arginfo_qt_core_qbytearray_qbytearray_numberlongintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberUlongInt, arginfo_qt_core_qbytearray_qbytearray_numberulongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberQlonglongInt, arginfo_qt_core_qbytearray_qbytearray_numberqlonglongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberQulonglongInt, arginfo_qt_core_qbytearray_qbytearray_numberqulonglongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, numberDoubleCharInt, arginfo_qt_core_qbytearray_qbytearray_numberdoublecharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, fromRawData, arginfo_qt_core_qbytearray_qbytearray_fromrawdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, fromBase64Encoding, arginfo_qt_core_qbytearray_qbytearray_frombase64encoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, fromBase64, arginfo_qt_core_qbytearray_qbytearray_frombase64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, fromHex, arginfo_qt_core_qbytearray_qbytearray_fromhex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, fromPercentEncoding, arginfo_qt_core_qbytearray_qbytearray_frompercentencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, begin, arginfo_qt_core_qbytearray_qbytearray_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, cbegin, arginfo_qt_core_qbytearray_qbytearray_cbegin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, constBegin, arginfo_qt_core_qbytearray_qbytearray_constbegin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, end, arginfo_qt_core_qbytearray_qbytearray_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, cend, arginfo_qt_core_qbytearray_qbytearray_cend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, constEnd, arginfo_qt_core_qbytearray_qbytearray_constend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_back, arginfo_qt_core_qbytearray_qbytearray_push_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_backChar, arginfo_qt_core_qbytearray_qbytearray_push_backchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_backQByteArray, arginfo_qt_core_qbytearray_qbytearray_push_backqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_backQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_push_backqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_front, arginfo_qt_core_qbytearray_qbytearray_push_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_frontChar, arginfo_qt_core_qbytearray_qbytearray_push_frontchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_frontQByteArray, arginfo_qt_core_qbytearray_qbytearray_push_frontqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, push_frontQByteArrayView, arginfo_qt_core_qbytearray_qbytearray_push_frontqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, shrink_to_fit, arginfo_qt_core_qbytearray_qbytearray_shrink_to_fit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, max_size, arginfo_qt_core_qbytearray_qbytearray_max_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, maxSize, arginfo_qt_core_qbytearray_qbytearray_maxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, size, arginfo_qt_core_qbytearray_qbytearray_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, length, arginfo_qt_core_qbytearray_qbytearray_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArray_QByteArray, isNull, arginfo_qt_core_qbytearray_qbytearray_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
