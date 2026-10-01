
extern zend_class_entry *qt_core_qstring_qstring_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QString_QString);

PHP_METHOD(Qt_Core_QString_QString, new_);
PHP_METHOD(Qt_Core_QString_QString, newQCharQsizetype);
PHP_METHOD(Qt_Core_QString_QString, newQChar);
PHP_METHOD(Qt_Core_QString_QString, newQsizetypeQChar);
PHP_METHOD(Qt_Core_QString_QString, newQLatin1StringView);
PHP_METHOD(Qt_Core_QString_QString, newQStringView);
PHP_METHOD(Qt_Core_QString_QString, newQString);
PHP_METHOD(Qt_Core_QString_QString, swap);
PHP_METHOD(Qt_Core_QString_QString, maxSize);
PHP_METHOD(Qt_Core_QString_QString, size);
PHP_METHOD(Qt_Core_QString_QString, length);
PHP_METHOD(Qt_Core_QString_QString, isEmpty);
PHP_METHOD(Qt_Core_QString_QString, resize);
PHP_METHOD(Qt_Core_QString_QString, resizeQsizetypeQChar);
PHP_METHOD(Qt_Core_QString_QString, resizeForOverwrite);
PHP_METHOD(Qt_Core_QString_QString, truncate);
PHP_METHOD(Qt_Core_QString_QString, chop);
PHP_METHOD(Qt_Core_QString_QString, capacity);
PHP_METHOD(Qt_Core_QString_QString, reserve);
PHP_METHOD(Qt_Core_QString_QString, squeeze);
PHP_METHOD(Qt_Core_QString_QString, detach);
PHP_METHOD(Qt_Core_QString_QString, isDetached);
PHP_METHOD(Qt_Core_QString_QString, isSharedWith);
PHP_METHOD(Qt_Core_QString_QString, clear);
PHP_METHOD(Qt_Core_QString_QString, at);
PHP_METHOD(Qt_Core_QString_QString, front);
PHP_METHOD(Qt_Core_QString_QString, back);
PHP_METHOD(Qt_Core_QString_QString, arg);
PHP_METHOD(Qt_Core_QString_QString, argQulonglongIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argLongIntIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argUlongIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argIntIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argUintIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argShortIntIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argUshortIntIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argDoubleIntCharIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argCharIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argQCharIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argQStringIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argQStringViewIntQChar);
PHP_METHOD(Qt_Core_QString_QString, argQLatin1StringViewIntQChar);
PHP_METHOD(Qt_Core_QString_QString, asprintf);
PHP_METHOD(Qt_Core_QString_QString, indexOf);
PHP_METHOD(Qt_Core_QString_QString, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, indexOfQStringQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, indexOfQStringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOf);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQCharQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringViewQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, contains);
PHP_METHOD(Qt_Core_QString_QString, containsQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, containsQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, containsQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, count);
PHP_METHOD(Qt_Core_QString_QString, countQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, countQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QString_QString, containsQRegularExpressionQRegularExpressionMatch);
PHP_METHOD(Qt_Core_QString_QString, countQRegularExpression);
PHP_METHOD(Qt_Core_QString_QString, section);
PHP_METHOD(Qt_Core_QString_QString, sectionQStringQsizetypeQsizetypeQStringSectionFlags);
PHP_METHOD(Qt_Core_QString_QString, sectionQRegularExpressionQsizetypeQsizetypeQStringSectionFlags);
PHP_METHOD(Qt_Core_QString_QString, left);
PHP_METHOD(Qt_Core_QString_QString, right);
PHP_METHOD(Qt_Core_QString_QString, mid);
PHP_METHOD(Qt_Core_QString_QString, first);
PHP_METHOD(Qt_Core_QString_QString, last);
PHP_METHOD(Qt_Core_QString_QString, sliced);
PHP_METHOD(Qt_Core_QString_QString, slicedQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QString_QString, chopped);
PHP_METHOD(Qt_Core_QString_QString, startsWith);
PHP_METHOD(Qt_Core_QString_QString, startsWithQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, startsWithQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, startsWithQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, endsWith);
PHP_METHOD(Qt_Core_QString_QString, endsWithQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, endsWithQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, endsWithQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, isUpper);
PHP_METHOD(Qt_Core_QString_QString, isLower);
PHP_METHOD(Qt_Core_QString_QString, leftJustified);
PHP_METHOD(Qt_Core_QString_QString, rightJustified);
PHP_METHOD(Qt_Core_QString_QString, toLower);
PHP_METHOD(Qt_Core_QString_QString, toUpper);
PHP_METHOD(Qt_Core_QString_QString, toCaseFolded);
PHP_METHOD(Qt_Core_QString_QString, trimmed);
PHP_METHOD(Qt_Core_QString_QString, simplified);
PHP_METHOD(Qt_Core_QString_QString, toHtmlEscaped);
PHP_METHOD(Qt_Core_QString_QString, split);
PHP_METHOD(Qt_Core_QString_QString, splitQCharQtSplitBehaviorQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, splitQRegularExpressionQtSplitBehavior);
PHP_METHOD(Qt_Core_QString_QString, normalized);
PHP_METHOD(Qt_Core_QString_QString, repeated);
PHP_METHOD(Qt_Core_QString_QString, toLatin1);
PHP_METHOD(Qt_Core_QString_QString, toUtf8);
PHP_METHOD(Qt_Core_QString_QString, toLocal8Bit);
PHP_METHOD(Qt_Core_QString_QString, toUcs4);
PHP_METHOD(Qt_Core_QString_QString, fromLatin1);
PHP_METHOD(Qt_Core_QString_QString, fromLatin1CharQsizetype);
PHP_METHOD(Qt_Core_QString_QString, fromUtf8);
PHP_METHOD(Qt_Core_QString_QString, fromUtf8CharQsizetype);
PHP_METHOD(Qt_Core_QString_QString, fromLocal8Bit);
PHP_METHOD(Qt_Core_QString_QString, fromLocal8BitCharQsizetype);
PHP_METHOD(Qt_Core_QString_QString, fromUtf16);
PHP_METHOD(Qt_Core_QString_QString, fromUcs4);
PHP_METHOD(Qt_Core_QString_QString, fromRawData);
PHP_METHOD(Qt_Core_QString_QString, toWCharArray);
PHP_METHOD(Qt_Core_QString_QString, fromWCharArray);
PHP_METHOD(Qt_Core_QString_QString, compare);
PHP_METHOD(Qt_Core_QString_QString, compareQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQCharQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQStringQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQStringQLatin1StringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQLatin1StringViewQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQStringQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, compareQStringViewQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QString_QString, localeAwareCompare);
PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringView);
PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringQString);
PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringViewQStringView);
PHP_METHOD(Qt_Core_QString_QString, toShort);
PHP_METHOD(Qt_Core_QString_QString, toUShort);
PHP_METHOD(Qt_Core_QString_QString, toInt);
PHP_METHOD(Qt_Core_QString_QString, toUInt);
PHP_METHOD(Qt_Core_QString_QString, toLong);
PHP_METHOD(Qt_Core_QString_QString, toULong);
PHP_METHOD(Qt_Core_QString_QString, toLongLong);
PHP_METHOD(Qt_Core_QString_QString, toULongLong);
PHP_METHOD(Qt_Core_QString_QString, toFloat);
PHP_METHOD(Qt_Core_QString_QString, toDouble);
PHP_METHOD(Qt_Core_QString_QString, number);
PHP_METHOD(Qt_Core_QString_QString, numberUintInt);
PHP_METHOD(Qt_Core_QString_QString, numberLongIntInt);
PHP_METHOD(Qt_Core_QString_QString, numberUlongInt);
PHP_METHOD(Qt_Core_QString_QString, numberQlonglongInt);
PHP_METHOD(Qt_Core_QString_QString, numberQulonglongInt);
PHP_METHOD(Qt_Core_QString_QString, numberDoubleCharInt);
PHP_METHOD(Qt_Core_QString_QString, newChar);
PHP_METHOD(Qt_Core_QString_QString, newQByteArray);
PHP_METHOD(Qt_Core_QString_QString, push_back);
PHP_METHOD(Qt_Core_QString_QString, push_backQString);
PHP_METHOD(Qt_Core_QString_QString, push_front);
PHP_METHOD(Qt_Core_QString_QString, push_frontQString);
PHP_METHOD(Qt_Core_QString_QString, shrink_to_fit);
PHP_METHOD(Qt_Core_QString_QString, max_size);
PHP_METHOD(Qt_Core_QString_QString, isNull);
PHP_METHOD(Qt_Core_QString_QString, isRightToLeft);
PHP_METHOD(Qt_Core_QString_QString, isValidUtf16);
PHP_METHOD(Qt_Core_QString_QString, newQsizetypeQtInitialization);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqcharqsizetype, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, unicode)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqsizetypeqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqlatin1stringview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, latin1, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqstringview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sv, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_swap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_maxsize, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_resize, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_resizeqsizetypeqchar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fillChar, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_resizeforoverwrite, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_truncate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_chop, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_capacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_reserve, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_squeeze, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_detach, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_issharedwith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_clear, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_at, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_front, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_back, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_arg, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldwidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argqulonglongintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldwidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_arglongintintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldwidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argulongintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldwidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argintintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_arguintintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argshortintintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argushortintintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argdoubleintcharintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argcharintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argqcharintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argqstringintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argqstringviewintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_argqlatin1stringviewintqchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fieldWidth, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillChar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_asprintf, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_indexofqlatin1stringviewqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_indexofqstringqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_indexofqstringviewqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqcharqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqlatin1stringviewqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqstringqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqstringqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqstringviewqsizetypeqtcasesensitivity, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_containsqstringqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_containsqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_containsqstringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_countqstringqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_countqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_indexofqregularexpressionqsizetypeqregularexpressionmatch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_lastindexofqregularexpressionqsizetypeqregularexpressionmatch, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_containsqregularexpressionqregularexpressionmatch, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rmatch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_countqregularexpression, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_section, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_sectionqstringqsizetypeqsizetypeqstringsectionflags, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, in_sep, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_sectionqregularexpressionqsizetypeqsizetypeqstringsectionflags, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_left, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_right, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_mid, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_first, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_last, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_sliced, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_slicedqsizetypeqsizetype, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_chopped, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_startswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_startswithqstringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_startswithqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_startswithqcharqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_endswith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_endswithqstringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_endswithqlatin1stringviewqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_endswithqcharqtcasesensitivity, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isupper, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_islower, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_leftjustified, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_INFO(0, fill)
	ZEND_ARG_TYPE_INFO(0, trunc, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_rightjustified, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_INFO(0, fill)
	ZEND_ARG_TYPE_INFO(0, trunc, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tolower, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toupper, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tocasefolded, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_trimmed, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_simplified, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tohtmlescaped, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_split, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_STRING, 0)
	ZEND_ARG_INFO(0, behavior)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_splitqcharqtsplitbehaviorqtcasesensitivity, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_STRING, 0)
	ZEND_ARG_INFO(0, behavior)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_splitqregularexpressionqtsplitbehavior, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sep, IS_LONG, 0)
	ZEND_ARG_INFO(0, behavior)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_normalized, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_INFO(0, version)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_repeated, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, times, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tolatin1, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toutf8, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tolocal8bit, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toucs4, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromlatin1, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromlatin1charqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromutf8, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, utf8, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromutf8charqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, utf8)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromlocal8bit, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromlocal8bitcharqsizetype, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromutf16, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromucs4, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromrawdata, 0, 2, IS_STRING, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_towchararray, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, array_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_fromwchararray, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, string_)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqcharqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqstringqstringqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqstringqlatin1stringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqlatin1stringviewqstringqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqstringqstringviewqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_compareqstringviewqstringqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_localeawarecompare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_localeawarecompareqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_localeawarecompareqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_localeawarecompareqstringviewqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toshort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toushort, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_touint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tolong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toulong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tolonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_toulonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_tofloat, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_todouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_number, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberuintint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberlongintint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberulongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberqlonglongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberqulonglongint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_numberdoublecharint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, ch)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqbytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_push_back, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_push_backqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_push_front, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_push_frontqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_shrink_to_fit, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_max_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isrighttoleft, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_isvalidutf16, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstring_qstring_newqsizetypeqtinitialization, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstring_qstring_method_entry) {
	PHP_ME(Qt_Core_QString_QString, new_, arginfo_qt_core_qstring_qstring_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQCharQsizetype, arginfo_qt_core_qstring_qstring_newqcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQChar, arginfo_qt_core_qstring_qstring_newqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQsizetypeQChar, arginfo_qt_core_qstring_qstring_newqsizetypeqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQLatin1StringView, arginfo_qt_core_qstring_qstring_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQStringView, arginfo_qt_core_qstring_qstring_newqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQString, arginfo_qt_core_qstring_qstring_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, swap, arginfo_qt_core_qstring_qstring_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, maxSize, arginfo_qt_core_qstring_qstring_maxsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, size, arginfo_qt_core_qstring_qstring_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, length, arginfo_qt_core_qstring_qstring_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isEmpty, arginfo_qt_core_qstring_qstring_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, resize, arginfo_qt_core_qstring_qstring_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, resizeQsizetypeQChar, arginfo_qt_core_qstring_qstring_resizeqsizetypeqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, resizeForOverwrite, arginfo_qt_core_qstring_qstring_resizeforoverwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, truncate, arginfo_qt_core_qstring_qstring_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, chop, arginfo_qt_core_qstring_qstring_chop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, capacity, arginfo_qt_core_qstring_qstring_capacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, reserve, arginfo_qt_core_qstring_qstring_reserve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, squeeze, arginfo_qt_core_qstring_qstring_squeeze, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, detach, arginfo_qt_core_qstring_qstring_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isDetached, arginfo_qt_core_qstring_qstring_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isSharedWith, arginfo_qt_core_qstring_qstring_issharedwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, clear, arginfo_qt_core_qstring_qstring_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, at, arginfo_qt_core_qstring_qstring_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, front, arginfo_qt_core_qstring_qstring_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, back, arginfo_qt_core_qstring_qstring_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, arg, arginfo_qt_core_qstring_qstring_arg, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argQulonglongIntIntQChar, arginfo_qt_core_qstring_qstring_argqulonglongintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argLongIntIntIntQChar, arginfo_qt_core_qstring_qstring_arglongintintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argUlongIntIntQChar, arginfo_qt_core_qstring_qstring_argulongintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argIntIntIntQChar, arginfo_qt_core_qstring_qstring_argintintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argUintIntIntQChar, arginfo_qt_core_qstring_qstring_arguintintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argShortIntIntIntQChar, arginfo_qt_core_qstring_qstring_argshortintintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argUshortIntIntQChar, arginfo_qt_core_qstring_qstring_argushortintintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argDoubleIntCharIntQChar, arginfo_qt_core_qstring_qstring_argdoubleintcharintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argCharIntQChar, arginfo_qt_core_qstring_qstring_argcharintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argQCharIntQChar, arginfo_qt_core_qstring_qstring_argqcharintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argQStringIntQChar, arginfo_qt_core_qstring_qstring_argqstringintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argQStringViewIntQChar, arginfo_qt_core_qstring_qstring_argqstringviewintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, argQLatin1StringViewIntQChar, arginfo_qt_core_qstring_qstring_argqlatin1stringviewintqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, asprintf, arginfo_qt_core_qstring_qstring_asprintf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, indexOf, arginfo_qt_core_qstring_qstring_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_indexofqlatin1stringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, indexOfQStringQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_indexofqstringqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, indexOfQStringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_indexofqstringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOf, arginfo_qt_core_qstring_qstring_lastindexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQCharQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqcharqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqlatin1stringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQStringQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqstringqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQStringViewQsizetypeQtCaseSensitivity, arginfo_qt_core_qstring_qstring_lastindexofqstringviewqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, contains, arginfo_qt_core_qstring_qstring_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, containsQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_containsqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, containsQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_containsqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, containsQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_containsqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, count, arginfo_qt_core_qstring_qstring_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, countQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_countqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, countQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_countqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch, arginfo_qt_core_qstring_qstring_indexofqregularexpressionqsizetypeqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch, arginfo_qt_core_qstring_qstring_lastindexofqregularexpressionqsizetypeqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, containsQRegularExpressionQRegularExpressionMatch, arginfo_qt_core_qstring_qstring_containsqregularexpressionqregularexpressionmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, countQRegularExpression, arginfo_qt_core_qstring_qstring_countqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, section, arginfo_qt_core_qstring_qstring_section, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, sectionQStringQsizetypeQsizetypeQStringSectionFlags, arginfo_qt_core_qstring_qstring_sectionqstringqsizetypeqsizetypeqstringsectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, sectionQRegularExpressionQsizetypeQsizetypeQStringSectionFlags, arginfo_qt_core_qstring_qstring_sectionqregularexpressionqsizetypeqsizetypeqstringsectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, left, arginfo_qt_core_qstring_qstring_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, right, arginfo_qt_core_qstring_qstring_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, mid, arginfo_qt_core_qstring_qstring_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, first, arginfo_qt_core_qstring_qstring_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, last, arginfo_qt_core_qstring_qstring_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, sliced, arginfo_qt_core_qstring_qstring_sliced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, slicedQsizetypeQsizetype, arginfo_qt_core_qstring_qstring_slicedqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, chopped, arginfo_qt_core_qstring_qstring_chopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, startsWith, arginfo_qt_core_qstring_qstring_startswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, startsWithQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_startswithqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, startsWithQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_startswithqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, startsWithQCharQtCaseSensitivity, arginfo_qt_core_qstring_qstring_startswithqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, endsWith, arginfo_qt_core_qstring_qstring_endswith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, endsWithQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_endswithqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, endsWithQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_endswithqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, endsWithQCharQtCaseSensitivity, arginfo_qt_core_qstring_qstring_endswithqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isUpper, arginfo_qt_core_qstring_qstring_isupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isLower, arginfo_qt_core_qstring_qstring_islower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, leftJustified, arginfo_qt_core_qstring_qstring_leftjustified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, rightJustified, arginfo_qt_core_qstring_qstring_rightjustified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toLower, arginfo_qt_core_qstring_qstring_tolower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toUpper, arginfo_qt_core_qstring_qstring_toupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toCaseFolded, arginfo_qt_core_qstring_qstring_tocasefolded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, trimmed, arginfo_qt_core_qstring_qstring_trimmed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, simplified, arginfo_qt_core_qstring_qstring_simplified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toHtmlEscaped, arginfo_qt_core_qstring_qstring_tohtmlescaped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, split, arginfo_qt_core_qstring_qstring_split, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, splitQCharQtSplitBehaviorQtCaseSensitivity, arginfo_qt_core_qstring_qstring_splitqcharqtsplitbehaviorqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, splitQRegularExpressionQtSplitBehavior, arginfo_qt_core_qstring_qstring_splitqregularexpressionqtsplitbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, normalized, arginfo_qt_core_qstring_qstring_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, repeated, arginfo_qt_core_qstring_qstring_repeated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toLatin1, arginfo_qt_core_qstring_qstring_tolatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toUtf8, arginfo_qt_core_qstring_qstring_toutf8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toLocal8Bit, arginfo_qt_core_qstring_qstring_tolocal8bit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toUcs4, arginfo_qt_core_qstring_qstring_toucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromLatin1, arginfo_qt_core_qstring_qstring_fromlatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromLatin1CharQsizetype, arginfo_qt_core_qstring_qstring_fromlatin1charqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromUtf8, arginfo_qt_core_qstring_qstring_fromutf8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromUtf8CharQsizetype, arginfo_qt_core_qstring_qstring_fromutf8charqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromLocal8Bit, arginfo_qt_core_qstring_qstring_fromlocal8bit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromLocal8BitCharQsizetype, arginfo_qt_core_qstring_qstring_fromlocal8bitcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromUtf16, arginfo_qt_core_qstring_qstring_fromutf16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromUcs4, arginfo_qt_core_qstring_qstring_fromucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromRawData, arginfo_qt_core_qstring_qstring_fromrawdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toWCharArray, arginfo_qt_core_qstring_qstring_towchararray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, fromWCharArray, arginfo_qt_core_qstring_qstring_fromwchararray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compare, arginfo_qt_core_qstring_qstring_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQCharQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqcharqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQStringQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqstringqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQStringQLatin1StringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqstringqlatin1stringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQLatin1StringViewQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqlatin1stringviewqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQStringQStringViewQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqstringqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, compareQStringViewQStringQtCaseSensitivity, arginfo_qt_core_qstring_qstring_compareqstringviewqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, localeAwareCompare, arginfo_qt_core_qstring_qstring_localeawarecompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, localeAwareCompareQStringView, arginfo_qt_core_qstring_qstring_localeawarecompareqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, localeAwareCompareQStringQString, arginfo_qt_core_qstring_qstring_localeawarecompareqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, localeAwareCompareQStringViewQStringView, arginfo_qt_core_qstring_qstring_localeawarecompareqstringviewqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toShort, arginfo_qt_core_qstring_qstring_toshort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toUShort, arginfo_qt_core_qstring_qstring_toushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toInt, arginfo_qt_core_qstring_qstring_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toUInt, arginfo_qt_core_qstring_qstring_touint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toLong, arginfo_qt_core_qstring_qstring_tolong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toULong, arginfo_qt_core_qstring_qstring_toulong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toLongLong, arginfo_qt_core_qstring_qstring_tolonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toULongLong, arginfo_qt_core_qstring_qstring_toulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toFloat, arginfo_qt_core_qstring_qstring_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, toDouble, arginfo_qt_core_qstring_qstring_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, number, arginfo_qt_core_qstring_qstring_number, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberUintInt, arginfo_qt_core_qstring_qstring_numberuintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberLongIntInt, arginfo_qt_core_qstring_qstring_numberlongintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberUlongInt, arginfo_qt_core_qstring_qstring_numberulongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberQlonglongInt, arginfo_qt_core_qstring_qstring_numberqlonglongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberQulonglongInt, arginfo_qt_core_qstring_qstring_numberqulonglongint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, numberDoubleCharInt, arginfo_qt_core_qstring_qstring_numberdoublecharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newChar, arginfo_qt_core_qstring_qstring_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQByteArray, arginfo_qt_core_qstring_qstring_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, push_back, arginfo_qt_core_qstring_qstring_push_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, push_backQString, arginfo_qt_core_qstring_qstring_push_backqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, push_front, arginfo_qt_core_qstring_qstring_push_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, push_frontQString, arginfo_qt_core_qstring_qstring_push_frontqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, shrink_to_fit, arginfo_qt_core_qstring_qstring_shrink_to_fit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, max_size, arginfo_qt_core_qstring_qstring_max_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isNull, arginfo_qt_core_qstring_qstring_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isRightToLeft, arginfo_qt_core_qstring_qstring_isrighttoleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, isValidUtf16, arginfo_qt_core_qstring_qstring_isvalidutf16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QString_QString, newQsizetypeQtInitialization, arginfo_qt_core_qstring_qstring_newqsizetypeqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
