
extern zend_class_entry *qt_core_qstringview_qstringview_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStringView_QStringView);

PHP_METHOD(Qt_Core_QStringView_QStringView, new_);
PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16TQsizetype);
PHP_METHOD(Qt_Core_QStringView_QStringView, newQCharQsizetype);
PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16TChar16T);
PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16T);
PHP_METHOD(Qt_Core_QStringView_QStringView, newQString);
PHP_METHOD(Qt_Core_QStringView_QStringView, toString);
PHP_METHOD(Qt_Core_QStringView_QStringView, size);
PHP_METHOD(Qt_Core_QStringView_QStringView, toLatin1);
PHP_METHOD(Qt_Core_QStringView_QStringView, toUtf8);
PHP_METHOD(Qt_Core_QStringView_QStringView, toLocal8Bit);
PHP_METHOD(Qt_Core_QStringView_QStringView, toUcs4);
PHP_METHOD(Qt_Core_QStringView_QStringView, at);
PHP_METHOD(Qt_Core_QStringView_QStringView, mid);
PHP_METHOD(Qt_Core_QStringView_QStringView, left);
PHP_METHOD(Qt_Core_QStringView_QStringView, right);
PHP_METHOD(Qt_Core_QStringView_QStringView, first);
PHP_METHOD(Qt_Core_QStringView_QStringView, last);
PHP_METHOD(Qt_Core_QStringView_QStringView, sliced);
PHP_METHOD(Qt_Core_QStringView_QStringView, slicedQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QStringView_QStringView, chopped);
PHP_METHOD(Qt_Core_QStringView_QStringView, truncate);
PHP_METHOD(Qt_Core_QStringView_QStringView, chop);
PHP_METHOD(Qt_Core_QStringView_QStringView, trimmed);
PHP_METHOD(Qt_Core_QStringView_QStringView, compare);
PHP_METHOD(Qt_Core_QStringView_QStringView, compareQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, compareQChar);
PHP_METHOD(Qt_Core_QStringView_QStringView, compareQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, localeAwareCompare);
PHP_METHOD(Qt_Core_QStringView_QStringView, startsWith);
PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQChar);
PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, endsWith);
PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQChar);
PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, indexOf);
PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQStringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, contains);
PHP_METHOD(Qt_Core_QStringView_QStringView, containsQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, containsQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, count);
PHP_METHOD(Qt_Core_QStringView_QStringView, countQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, countQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOf);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQCharQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QStringView_QStringView, containsQRegularExpressionQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QStringView_QStringView, countQRegularExpression);
PHP_METHOD(Qt_Core_QStringView_QStringView, isRightToLeft);
PHP_METHOD(Qt_Core_QStringView_QStringView, isValidUtf16);
PHP_METHOD(Qt_Core_QStringView_QStringView, isUpper);
PHP_METHOD(Qt_Core_QStringView_QStringView, isLower);
PHP_METHOD(Qt_Core_QStringView_QStringView, toShort);
PHP_METHOD(Qt_Core_QStringView_QStringView, toUShort);
PHP_METHOD(Qt_Core_QStringView_QStringView, toInt);
PHP_METHOD(Qt_Core_QStringView_QStringView, toUInt);
PHP_METHOD(Qt_Core_QStringView_QStringView, toLong);
PHP_METHOD(Qt_Core_QStringView_QStringView, toULong);
PHP_METHOD(Qt_Core_QStringView_QStringView, toLongLong);
PHP_METHOD(Qt_Core_QStringView_QStringView, toULongLong);
PHP_METHOD(Qt_Core_QStringView_QStringView, toFloat);
PHP_METHOD(Qt_Core_QStringView_QStringView, toDouble);
PHP_METHOD(Qt_Core_QStringView_QStringView, toWCharArray);
PHP_METHOD(Qt_Core_QStringView_QStringView, split);
PHP_METHOD(Qt_Core_QStringView_QStringView, splitQCharQtSplitBehaviorQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringView_QStringView, splitQRegularExpressionQtSplitBehavior);
PHP_METHOD(Qt_Core_QStringView_QStringView, empty_);
PHP_METHOD(Qt_Core_QStringView_QStringView, front);
PHP_METHOD(Qt_Core_QStringView_QStringView, back);
PHP_METHOD(Qt_Core_QStringView_QStringView, max_size);
PHP_METHOD(Qt_Core_QStringView_QStringView, isNull);
PHP_METHOD(Qt_Core_QStringView_QStringView, isEmpty);
PHP_METHOD(Qt_Core_QStringView_QStringView, length);
PHP_METHOD(Qt_Core_QStringView_QStringView, first2);
PHP_METHOD(Qt_Core_QStringView_QStringView, last2);
PHP_METHOD(Qt_Core_QStringView_QStringView, maxSize);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_newchar16tqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_newqcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_newchar16tchar16t, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, f)
	ZEND_ARG_INFO(0, l)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_newchar16t, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_newqstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tolatin1, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toutf8, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tolocal8bit, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toucs4, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_at, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_mid, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_left, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_right, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_first, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_last, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_sliced, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_slicedqsizetypeqsizetype, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_chopped, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_truncate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_chop, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_trimmed, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_compareqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_compareqchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_compareqcharqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_localeawarecompare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_startswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_startswithqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_startswithqchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_startswithqcharqtcasesensitivity, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_endswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_endswithqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_endswithqchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_endswithqcharqtcasesensitivity, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_indexofqstringviewqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_indexofqlatin1stringviewqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_containsqstringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_containsqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_countqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_countqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqcharqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqstringviewqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqlatin1stringviewqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_indexofqregularexpressionqsizetypeqregularexpressionmatch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_lastindexofqregularexpressionqsizetypeqregularexpressionmatch, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_containsqregularexpressionqregularexpressionmatch, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_countqregularexpression, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_isrighttoleft, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_isvalidutf16, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_isupper, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_islower, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toshort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toushort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_touint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tolong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toulong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tolonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_toulonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_tofloat, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_todouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_towchararray, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, array_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_split, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_STRING, 0)
	ZEND_ARG_INFO(0, behavior)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_splitqcharqtsplitbehaviorqtcasesensitivity, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_STRING, 0)
	ZEND_ARG_INFO(0, behavior)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_splitqregularexpressionqtsplitbehavior, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_LONG, 0)
	ZEND_ARG_INFO(0, behavior)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_front, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_back, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_max_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_first2, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_last2, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringview_qstringview_maxsize, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstringview_qstringview_method_entry) {
	PHP_ME(Qt_Core_QStringView_QStringView, new_, arginfo_qt_core_qstringview_qstringview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, newChar16TQsizetype, arginfo_qt_core_qstringview_qstringview_newchar16tqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, newQCharQsizetype, arginfo_qt_core_qstringview_qstringview_newqcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, newChar16TChar16T, arginfo_qt_core_qstringview_qstringview_newchar16tchar16t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, newChar16T, arginfo_qt_core_qstringview_qstringview_newchar16t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, newQString, arginfo_qt_core_qstringview_qstringview_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toString, arginfo_qt_core_qstringview_qstringview_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, size, arginfo_qt_core_qstringview_qstringview_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toLatin1, arginfo_qt_core_qstringview_qstringview_tolatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toUtf8, arginfo_qt_core_qstringview_qstringview_toutf8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toLocal8Bit, arginfo_qt_core_qstringview_qstringview_tolocal8bit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toUcs4, arginfo_qt_core_qstringview_qstringview_toucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, at, arginfo_qt_core_qstringview_qstringview_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, mid, arginfo_qt_core_qstringview_qstringview_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, left, arginfo_qt_core_qstringview_qstringview_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, right, arginfo_qt_core_qstringview_qstringview_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, first, arginfo_qt_core_qstringview_qstringview_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, last, arginfo_qt_core_qstringview_qstringview_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, sliced, arginfo_qt_core_qstringview_qstringview_sliced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, slicedQsizetypeQsizetype, arginfo_qt_core_qstringview_qstringview_slicedqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, chopped, arginfo_qt_core_qstringview_qstringview_chopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, truncate, arginfo_qt_core_qstringview_qstringview_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, chop, arginfo_qt_core_qstringview_qstringview_chop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, trimmed, arginfo_qt_core_qstringview_qstringview_trimmed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, compare, arginfo_qt_core_qstringview_qstringview_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, compareQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_compareqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, compareQChar, arginfo_qt_core_qstringview_qstringview_compareqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, compareQCharQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_compareqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, localeAwareCompare, arginfo_qt_core_qstringview_qstringview_localeawarecompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, startsWith, arginfo_qt_core_qstringview_qstringview_startswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, startsWithQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_startswithqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, startsWithQChar, arginfo_qt_core_qstringview_qstringview_startswithqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, startsWithQCharQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_startswithqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, endsWith, arginfo_qt_core_qstringview_qstringview_endswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, endsWithQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_endswithqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, endsWithQChar, arginfo_qt_core_qstringview_qstringview_endswithqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, endsWithQCharQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_endswithqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, indexOf, arginfo_qt_core_qstringview_qstringview_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, indexOfQStringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_indexofqstringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_indexofqlatin1stringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, contains, arginfo_qt_core_qstringview_qstringview_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, containsQStringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_containsqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, containsQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_containsqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, count, arginfo_qt_core_qstringview_qstringview_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, countQStringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_countqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, countQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_countqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOf, arginfo_qt_core_qstringview_qstringview_lastindexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQCharQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_lastindexofqcharqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_lastindexofqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_lastindexofqstringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_lastindexofqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_lastindexofqlatin1stringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch, arginfo_qt_core_qstringview_qstringview_indexofqregularexpressionqsizetypeqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch, arginfo_qt_core_qstringview_qstringview_lastindexofqregularexpressionqsizetypeqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, containsQRegularExpressionQRegularExpressionMatch, arginfo_qt_core_qstringview_qstringview_containsqregularexpressionqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, countQRegularExpression, arginfo_qt_core_qstringview_qstringview_countqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isRightToLeft, arginfo_qt_core_qstringview_qstringview_isrighttoleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isValidUtf16, arginfo_qt_core_qstringview_qstringview_isvalidutf16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isUpper, arginfo_qt_core_qstringview_qstringview_isupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isLower, arginfo_qt_core_qstringview_qstringview_islower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toShort, arginfo_qt_core_qstringview_qstringview_toshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toUShort, arginfo_qt_core_qstringview_qstringview_toushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toInt, arginfo_qt_core_qstringview_qstringview_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toUInt, arginfo_qt_core_qstringview_qstringview_touint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toLong, arginfo_qt_core_qstringview_qstringview_tolong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toULong, arginfo_qt_core_qstringview_qstringview_toulong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toLongLong, arginfo_qt_core_qstringview_qstringview_tolonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toULongLong, arginfo_qt_core_qstringview_qstringview_toulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toFloat, arginfo_qt_core_qstringview_qstringview_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toDouble, arginfo_qt_core_qstringview_qstringview_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, toWCharArray, arginfo_qt_core_qstringview_qstringview_towchararray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, split, arginfo_qt_core_qstringview_qstringview_split, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, splitQCharQtSplitBehaviorQtCaseSensitivity, arginfo_qt_core_qstringview_qstringview_splitqcharqtsplitbehaviorqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, splitQRegularExpressionQtSplitBehavior, arginfo_qt_core_qstringview_qstringview_splitqregularexpressionqtsplitbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, empty_, arginfo_qt_core_qstringview_qstringview_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, front, arginfo_qt_core_qstringview_qstringview_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, back, arginfo_qt_core_qstringview_qstringview_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, max_size, arginfo_qt_core_qstringview_qstringview_max_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isNull, arginfo_qt_core_qstringview_qstringview_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, isEmpty, arginfo_qt_core_qstringview_qstringview_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, length, arginfo_qt_core_qstringview_qstringview_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, first2, arginfo_qt_core_qstringview_qstringview_first2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, last2, arginfo_qt_core_qstringview_qstringview_last2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringView_QStringView, maxSize, arginfo_qt_core_qstringview_qstringview_maxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
