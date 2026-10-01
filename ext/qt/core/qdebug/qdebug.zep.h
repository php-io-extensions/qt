
extern zend_class_entry *qt_core_qdebug_qdebug_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDebug_QDebug);

PHP_METHOD(Qt_Core_QDebug_QDebug, new_);
PHP_METHOD(Qt_Core_QDebug_QDebug, newQString);
PHP_METHOD(Qt_Core_QDebug_QDebug, newQtMsgType);
PHP_METHOD(Qt_Core_QDebug_QDebug, newQDebug);
PHP_METHOD(Qt_Core_QDebug_QDebug, swap);
PHP_METHOD(Qt_Core_QDebug_QDebug, resetFormat);
PHP_METHOD(Qt_Core_QDebug_QDebug, space);
PHP_METHOD(Qt_Core_QDebug_QDebug, nospace);
PHP_METHOD(Qt_Core_QDebug_QDebug, maybeSpace);
PHP_METHOD(Qt_Core_QDebug_QDebug, verbosity);
PHP_METHOD(Qt_Core_QDebug_QDebug, verbosity2);
PHP_METHOD(Qt_Core_QDebug_QDebug, setVerbosity);
PHP_METHOD(Qt_Core_QDebug_QDebug, autoInsertSpaces);
PHP_METHOD(Qt_Core_QDebug_QDebug, setAutoInsertSpaces);
PHP_METHOD(Qt_Core_QDebug_QDebug, quoteStrings);
PHP_METHOD(Qt_Core_QDebug_QDebug, setQuoteStrings);
PHP_METHOD(Qt_Core_QDebug_QDebug, quote);
PHP_METHOD(Qt_Core_QDebug_QDebug, noquote);
PHP_METHOD(Qt_Core_QDebug_QDebug, maybeQuote);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_newqstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, string_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_newqtmsgtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_newqdebug, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_resetformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_space, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_nospace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_maybespace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_verbosity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verbosityLevel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_verbosity2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_setverbosity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verbosityLevel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_autoinsertspaces, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_setautoinsertspaces, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_quotestrings, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_setquotestrings, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_quote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_noquote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebug_qdebug_maybequote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, c)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdebug_qdebug_method_entry) {
	PHP_ME(Qt_Core_QDebug_QDebug, new_, arginfo_qt_core_qdebug_qdebug_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, newQString, arginfo_qt_core_qdebug_qdebug_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, newQtMsgType, arginfo_qt_core_qdebug_qdebug_newqtmsgtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, newQDebug, arginfo_qt_core_qdebug_qdebug_newqdebug, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, swap, arginfo_qt_core_qdebug_qdebug_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, resetFormat, arginfo_qt_core_qdebug_qdebug_resetformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, space, arginfo_qt_core_qdebug_qdebug_space, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, nospace, arginfo_qt_core_qdebug_qdebug_nospace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, maybeSpace, arginfo_qt_core_qdebug_qdebug_maybespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, verbosity, arginfo_qt_core_qdebug_qdebug_verbosity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, verbosity2, arginfo_qt_core_qdebug_qdebug_verbosity2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, setVerbosity, arginfo_qt_core_qdebug_qdebug_setverbosity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, autoInsertSpaces, arginfo_qt_core_qdebug_qdebug_autoinsertspaces, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, setAutoInsertSpaces, arginfo_qt_core_qdebug_qdebug_setautoinsertspaces, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, quoteStrings, arginfo_qt_core_qdebug_qdebug_quotestrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, setQuoteStrings, arginfo_qt_core_qdebug_qdebug_setquotestrings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, quote, arginfo_qt_core_qdebug_qdebug_quote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, noquote, arginfo_qt_core_qdebug_qdebug_noquote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebug_QDebug, maybeQuote, arginfo_qt_core_qdebug_qdebug_maybequote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
