
extern zend_class_entry *qt_core_qbytearraymatcher_qbytearraymatcher_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QByteArrayMatcher_QByteArrayMatcher);

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, new_);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArray);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayView);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newCharQsizetype);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayMatcher);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, setPattern);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexIn);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexInQByteArrayViewQsizetype);
PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, pattern);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearrayview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newcharqsizetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearraymatcher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_setpattern, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_indexin, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_indexinqbytearrayviewqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_pattern, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbytearraymatcher_qbytearraymatcher_method_entry) {
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, new_, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArray, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayView, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newCharQsizetype, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayMatcher, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_newqbytearraymatcher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, setPattern, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_setpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexIn, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_indexin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexInQByteArrayViewQsizetype, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_indexinqbytearrayviewqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, pattern, arginfo_qt_core_qbytearraymatcher_qbytearraymatcher_pattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
