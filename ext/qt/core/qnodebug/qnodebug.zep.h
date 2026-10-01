
extern zend_class_entry *qt_core_qnodebug_qnodebug_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QNoDebug_QNoDebug);

PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, space);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, nospace);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, maybeSpace);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, quote);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, noquote);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, maybeQuote);
PHP_METHOD(Qt_Core_QNoDebug_QNoDebug, verbosity);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_space, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_nospace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_maybespace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_quote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_noquote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_maybequote, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnodebug_qnodebug_verbosity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qnodebug_qnodebug_method_entry) {
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, space, arginfo_qt_core_qnodebug_qnodebug_space, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, nospace, arginfo_qt_core_qnodebug_qnodebug_nospace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, maybeSpace, arginfo_qt_core_qnodebug_qnodebug_maybespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, quote, arginfo_qt_core_qnodebug_qnodebug_quote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, noquote, arginfo_qt_core_qnodebug_qnodebug_noquote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, maybeQuote, arginfo_qt_core_qnodebug_qnodebug_maybequote, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNoDebug_QNoDebug, verbosity, arginfo_qt_core_qnodebug_qnodebug_verbosity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
