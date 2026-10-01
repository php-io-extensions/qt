
extern zend_class_entry *qt_core_qchar_qchar_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QChar_QChar);

PHP_METHOD(Qt_Core_QChar_QChar, new_);
PHP_METHOD(Qt_Core_QChar_QChar, newUshort);
PHP_METHOD(Qt_Core_QChar_QChar, newUcharUchar);
PHP_METHOD(Qt_Core_QChar_QChar, newShortInt);
PHP_METHOD(Qt_Core_QChar_QChar, newUint);
PHP_METHOD(Qt_Core_QChar_QChar, newInt);
PHP_METHOD(Qt_Core_QChar_QChar, newQCharSpecialCharacter);
PHP_METHOD(Qt_Core_QChar_QChar, newQLatin1Char);
PHP_METHOD(Qt_Core_QChar_QChar, newChar16T);
PHP_METHOD(Qt_Core_QChar_QChar, newChar);
PHP_METHOD(Qt_Core_QChar_QChar, newUchar);
PHP_METHOD(Qt_Core_QChar_QChar, fromUcs2);
PHP_METHOD(Qt_Core_QChar_QChar, category);
PHP_METHOD(Qt_Core_QChar_QChar, direction);
PHP_METHOD(Qt_Core_QChar_QChar, joiningType);
PHP_METHOD(Qt_Core_QChar_QChar, combiningClass);
PHP_METHOD(Qt_Core_QChar_QChar, mirroredChar);
PHP_METHOD(Qt_Core_QChar_QChar, hasMirrored);
PHP_METHOD(Qt_Core_QChar_QChar, decomposition);
PHP_METHOD(Qt_Core_QChar_QChar, decompositionTag);
PHP_METHOD(Qt_Core_QChar_QChar, digitValue);
PHP_METHOD(Qt_Core_QChar_QChar, toLower);
PHP_METHOD(Qt_Core_QChar_QChar, toUpper);
PHP_METHOD(Qt_Core_QChar_QChar, toTitleCase);
PHP_METHOD(Qt_Core_QChar_QChar, toCaseFolded);
PHP_METHOD(Qt_Core_QChar_QChar, script);
PHP_METHOD(Qt_Core_QChar_QChar, unicodeVersion);
PHP_METHOD(Qt_Core_QChar_QChar, toLatin1);
PHP_METHOD(Qt_Core_QChar_QChar, unicode);
PHP_METHOD(Qt_Core_QChar_QChar, fromLatin1);
PHP_METHOD(Qt_Core_QChar_QChar, isNull);
PHP_METHOD(Qt_Core_QChar_QChar, isPrint);
PHP_METHOD(Qt_Core_QChar_QChar, isSpace);
PHP_METHOD(Qt_Core_QChar_QChar, isMark);
PHP_METHOD(Qt_Core_QChar_QChar, isPunct);
PHP_METHOD(Qt_Core_QChar_QChar, isSymbol);
PHP_METHOD(Qt_Core_QChar_QChar, isLetter);
PHP_METHOD(Qt_Core_QChar_QChar, isNumber);
PHP_METHOD(Qt_Core_QChar_QChar, isLetterOrNumber);
PHP_METHOD(Qt_Core_QChar_QChar, isDigit);
PHP_METHOD(Qt_Core_QChar_QChar, isLower);
PHP_METHOD(Qt_Core_QChar_QChar, isUpper);
PHP_METHOD(Qt_Core_QChar_QChar, isTitleCase);
PHP_METHOD(Qt_Core_QChar_QChar, isNonCharacter);
PHP_METHOD(Qt_Core_QChar_QChar, isHighSurrogate);
PHP_METHOD(Qt_Core_QChar_QChar, isLowSurrogate);
PHP_METHOD(Qt_Core_QChar_QChar, isSurrogate);
PHP_METHOD(Qt_Core_QChar_QChar, cell);
PHP_METHOD(Qt_Core_QChar_QChar, row);
PHP_METHOD(Qt_Core_QChar_QChar, setCell);
PHP_METHOD(Qt_Core_QChar_QChar, setRow);
PHP_METHOD(Qt_Core_QChar_QChar, isNonCharacterChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isHighSurrogateChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isLowSurrogateChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isSurrogateChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, requiresSurrogates);
PHP_METHOD(Qt_Core_QChar_QChar, surrogateToUcs4);
PHP_METHOD(Qt_Core_QChar_QChar, surrogateToUcs4QCharQChar);
PHP_METHOD(Qt_Core_QChar_QChar, highSurrogate);
PHP_METHOD(Qt_Core_QChar_QChar, lowSurrogate);
PHP_METHOD(Qt_Core_QChar_QChar, categoryChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, directionChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, joiningTypeChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, combiningClassChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, mirroredCharChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, hasMirroredChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, decompositionChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, decompositionTagChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, digitValueChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, toLowerChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, toUpperChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, toTitleCaseChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, toCaseFoldedChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, scriptChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, unicodeVersionChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, currentUnicodeVersion);
PHP_METHOD(Qt_Core_QChar_QChar, isPrintChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isSpaceChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isMarkChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isPunctChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isSymbolChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isLetterChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isNumberChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isLetterOrNumberChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isDigitChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isLowerChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isUpperChar32T);
PHP_METHOD(Qt_Core_QChar_QChar, isTitleCaseChar32T);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_new_, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newushort, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newucharuchar, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newshortint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newuint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newint, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newqcharspecialcharacter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newqlatin1char, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newchar16t, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_newuchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_fromucs2, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_category, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_direction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_joiningtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_combiningclass, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_mirroredchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_hasmirrored, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_decomposition, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_decompositiontag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_digitvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_tolower, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_toupper, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_totitlecase, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_tocasefolded, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_script, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_unicodeversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_tolatin1, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_unicode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_fromlatin1, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isprint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isspace, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ismark, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ispunct, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_issymbol, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isletter, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isnumber, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isletterornumber, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isdigit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_islower, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isupper, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_istitlecase, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isnoncharacter, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ishighsurrogate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_islowsurrogate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_issurrogate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_cell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_setcell, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, acell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_setrow, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, self_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isnoncharacterchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ishighsurrogatechar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_islowsurrogatechar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_issurrogatechar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_requiressurrogates, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_surrogatetoucs4, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, high, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, low, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_surrogatetoucs4qcharqchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, high, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, low, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_highsurrogate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_lowsurrogate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_categorychar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_directionchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_joiningtypechar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_combiningclasschar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_mirroredcharchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_hasmirroredchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_decompositionchar32t, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_decompositiontagchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_digitvaluechar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_tolowerchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_toupperchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_totitlecasechar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_tocasefoldedchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_scriptchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_unicodeversionchar32t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_currentunicodeversion, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isprintchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isspacechar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ismarkchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_ispunctchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_issymbolchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isletterchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isnumberchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isletterornumberchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isdigitchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_islowerchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_isupperchar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchar_qchar_istitlecasechar32t, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qchar_qchar_method_entry) {
	PHP_ME(Qt_Core_QChar_QChar, new_, arginfo_qt_core_qchar_qchar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newUshort, arginfo_qt_core_qchar_qchar_newushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newUcharUchar, arginfo_qt_core_qchar_qchar_newucharuchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newShortInt, arginfo_qt_core_qchar_qchar_newshortint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newUint, arginfo_qt_core_qchar_qchar_newuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newInt, arginfo_qt_core_qchar_qchar_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newQCharSpecialCharacter, arginfo_qt_core_qchar_qchar_newqcharspecialcharacter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newQLatin1Char, arginfo_qt_core_qchar_qchar_newqlatin1char, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newChar16T, arginfo_qt_core_qchar_qchar_newchar16t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newChar, arginfo_qt_core_qchar_qchar_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, newUchar, arginfo_qt_core_qchar_qchar_newuchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, fromUcs2, arginfo_qt_core_qchar_qchar_fromucs2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, category, arginfo_qt_core_qchar_qchar_category, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, direction, arginfo_qt_core_qchar_qchar_direction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, joiningType, arginfo_qt_core_qchar_qchar_joiningtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, combiningClass, arginfo_qt_core_qchar_qchar_combiningclass, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, mirroredChar, arginfo_qt_core_qchar_qchar_mirroredchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, hasMirrored, arginfo_qt_core_qchar_qchar_hasmirrored, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, decomposition, arginfo_qt_core_qchar_qchar_decomposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, decompositionTag, arginfo_qt_core_qchar_qchar_decompositiontag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, digitValue, arginfo_qt_core_qchar_qchar_digitvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toLower, arginfo_qt_core_qchar_qchar_tolower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toUpper, arginfo_qt_core_qchar_qchar_toupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toTitleCase, arginfo_qt_core_qchar_qchar_totitlecase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toCaseFolded, arginfo_qt_core_qchar_qchar_tocasefolded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, script, arginfo_qt_core_qchar_qchar_script, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, unicodeVersion, arginfo_qt_core_qchar_qchar_unicodeversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toLatin1, arginfo_qt_core_qchar_qchar_tolatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, unicode, arginfo_qt_core_qchar_qchar_unicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, fromLatin1, arginfo_qt_core_qchar_qchar_fromlatin1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isNull, arginfo_qt_core_qchar_qchar_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isPrint, arginfo_qt_core_qchar_qchar_isprint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSpace, arginfo_qt_core_qchar_qchar_isspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isMark, arginfo_qt_core_qchar_qchar_ismark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isPunct, arginfo_qt_core_qchar_qchar_ispunct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSymbol, arginfo_qt_core_qchar_qchar_issymbol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLetter, arginfo_qt_core_qchar_qchar_isletter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isNumber, arginfo_qt_core_qchar_qchar_isnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLetterOrNumber, arginfo_qt_core_qchar_qchar_isletterornumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isDigit, arginfo_qt_core_qchar_qchar_isdigit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLower, arginfo_qt_core_qchar_qchar_islower, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isUpper, arginfo_qt_core_qchar_qchar_isupper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isTitleCase, arginfo_qt_core_qchar_qchar_istitlecase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isNonCharacter, arginfo_qt_core_qchar_qchar_isnoncharacter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isHighSurrogate, arginfo_qt_core_qchar_qchar_ishighsurrogate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLowSurrogate, arginfo_qt_core_qchar_qchar_islowsurrogate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSurrogate, arginfo_qt_core_qchar_qchar_issurrogate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, cell, arginfo_qt_core_qchar_qchar_cell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, row, arginfo_qt_core_qchar_qchar_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, setCell, arginfo_qt_core_qchar_qchar_setcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, setRow, arginfo_qt_core_qchar_qchar_setrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isNonCharacterChar32T, arginfo_qt_core_qchar_qchar_isnoncharacterchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isHighSurrogateChar32T, arginfo_qt_core_qchar_qchar_ishighsurrogatechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLowSurrogateChar32T, arginfo_qt_core_qchar_qchar_islowsurrogatechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSurrogateChar32T, arginfo_qt_core_qchar_qchar_issurrogatechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, requiresSurrogates, arginfo_qt_core_qchar_qchar_requiressurrogates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, surrogateToUcs4, arginfo_qt_core_qchar_qchar_surrogatetoucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, surrogateToUcs4QCharQChar, arginfo_qt_core_qchar_qchar_surrogatetoucs4qcharqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, highSurrogate, arginfo_qt_core_qchar_qchar_highsurrogate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, lowSurrogate, arginfo_qt_core_qchar_qchar_lowsurrogate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, categoryChar32T, arginfo_qt_core_qchar_qchar_categorychar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, directionChar32T, arginfo_qt_core_qchar_qchar_directionchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, joiningTypeChar32T, arginfo_qt_core_qchar_qchar_joiningtypechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, combiningClassChar32T, arginfo_qt_core_qchar_qchar_combiningclasschar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, mirroredCharChar32T, arginfo_qt_core_qchar_qchar_mirroredcharchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, hasMirroredChar32T, arginfo_qt_core_qchar_qchar_hasmirroredchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, decompositionChar32T, arginfo_qt_core_qchar_qchar_decompositionchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, decompositionTagChar32T, arginfo_qt_core_qchar_qchar_decompositiontagchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, digitValueChar32T, arginfo_qt_core_qchar_qchar_digitvaluechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toLowerChar32T, arginfo_qt_core_qchar_qchar_tolowerchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toUpperChar32T, arginfo_qt_core_qchar_qchar_toupperchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toTitleCaseChar32T, arginfo_qt_core_qchar_qchar_totitlecasechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, toCaseFoldedChar32T, arginfo_qt_core_qchar_qchar_tocasefoldedchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, scriptChar32T, arginfo_qt_core_qchar_qchar_scriptchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, unicodeVersionChar32T, arginfo_qt_core_qchar_qchar_unicodeversionchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, currentUnicodeVersion, arginfo_qt_core_qchar_qchar_currentunicodeversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isPrintChar32T, arginfo_qt_core_qchar_qchar_isprintchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSpaceChar32T, arginfo_qt_core_qchar_qchar_isspacechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isMarkChar32T, arginfo_qt_core_qchar_qchar_ismarkchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isPunctChar32T, arginfo_qt_core_qchar_qchar_ispunctchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isSymbolChar32T, arginfo_qt_core_qchar_qchar_issymbolchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLetterChar32T, arginfo_qt_core_qchar_qchar_isletterchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isNumberChar32T, arginfo_qt_core_qchar_qchar_isnumberchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLetterOrNumberChar32T, arginfo_qt_core_qchar_qchar_isletterornumberchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isDigitChar32T, arginfo_qt_core_qchar_qchar_isdigitchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isLowerChar32T, arginfo_qt_core_qchar_qchar_islowerchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isUpperChar32T, arginfo_qt_core_qchar_qchar_isupperchar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChar_QChar, isTitleCaseChar32T, arginfo_qt_core_qchar_qchar_istitlecasechar32t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
