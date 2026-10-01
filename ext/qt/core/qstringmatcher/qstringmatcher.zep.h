
extern zend_class_entry *qt_core_qstringmatcher_qstringmatcher_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStringMatcher_QStringMatcher);

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, new_);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQCharQsizetypeQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringViewQtCaseSensitivity);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringMatcher);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, setPattern);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, setCaseSensitivity);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexIn);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexInQCharQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexInQStringViewQsizetype);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, pattern);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, patternView);
PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, caseSensitivity);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringqtcasesensitivity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_newqcharqsizetypeqtcasesensitivity, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, uc)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringviewqtcasesensitivity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
	ZEND_ARG_INFO(0, cs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringmatcher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_setpattern, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_setcasesensitivity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_indexin, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_indexinqcharqsizetypeqsizetype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_indexinqstringviewqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_pattern, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_patternview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringmatcher_qstringmatcher_casesensitivity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstringmatcher_qstringmatcher_method_entry) {
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, new_, arginfo_qt_core_qstringmatcher_qstringmatcher_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, newQStringQtCaseSensitivity, arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, newQCharQsizetypeQtCaseSensitivity, arginfo_qt_core_qstringmatcher_qstringmatcher_newqcharqsizetypeqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, newQStringViewQtCaseSensitivity, arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringviewqtcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, newQStringMatcher, arginfo_qt_core_qstringmatcher_qstringmatcher_newqstringmatcher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, setPattern, arginfo_qt_core_qstringmatcher_qstringmatcher_setpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, setCaseSensitivity, arginfo_qt_core_qstringmatcher_qstringmatcher_setcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, indexIn, arginfo_qt_core_qstringmatcher_qstringmatcher_indexin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, indexInQCharQsizetypeQsizetype, arginfo_qt_core_qstringmatcher_qstringmatcher_indexinqcharqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, indexInQStringViewQsizetype, arginfo_qt_core_qstringmatcher_qstringmatcher_indexinqstringviewqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, pattern, arginfo_qt_core_qstringmatcher_qstringmatcher_pattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, patternView, arginfo_qt_core_qstringmatcher_qstringmatcher_patternview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringMatcher_QStringMatcher, caseSensitivity, arginfo_qt_core_qstringmatcher_qstringmatcher_casesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
