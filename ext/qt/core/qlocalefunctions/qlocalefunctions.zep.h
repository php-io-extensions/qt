
extern zend_class_entry *qt_core_qlocalefunctions_qlocalefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLocaleFunctions_QLocaleFunctions);

PHP_METHOD(Qt_Core_QLocaleFunctions_QLocaleFunctions, qHash);
PHP_METHOD(Qt_Core_QLocaleFunctions_QLocaleFunctions, swap);
PHP_METHOD(Qt_Core_QLocaleFunctions_QLocaleFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QLocaleFunctions_QLocaleFunctions, comparesEqualQLocaleQLocale);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlocalefunctions_qlocalefunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlocalefunctions_qlocalefunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlocalefunctions_qlocalefunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlocalefunctions_qlocalefunctions_comparesequalqlocaleqlocale, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlocalefunctions_qlocalefunctions_method_entry) {
	PHP_ME(Qt_Core_QLocaleFunctions_QLocaleFunctions, qHash, arginfo_qt_core_qlocalefunctions_qlocalefunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLocaleFunctions_QLocaleFunctions, swap, arginfo_qt_core_qlocalefunctions_qlocalefunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLocaleFunctions_QLocaleFunctions, comparesEqual, arginfo_qt_core_qlocalefunctions_qlocalefunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLocaleFunctions_QLocaleFunctions, comparesEqualQLocaleQLocale, arginfo_qt_core_qlocalefunctions_qlocalefunctions_comparesequalqlocaleqlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
