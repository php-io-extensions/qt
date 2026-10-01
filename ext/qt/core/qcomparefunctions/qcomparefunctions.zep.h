
extern zend_class_entry *qt_core_qcomparefunctions_qcomparefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCompareFunctions_QCompareFunctions);

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_gteq);
PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_gt);
PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_lteq);
PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_lt);
PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_neq);
PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_eq);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_gteq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_gt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_lteq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_lt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_neq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_eq, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcomparefunctions_qcomparefunctions_method_entry) {
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_gteq, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_gteq, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_gt, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_gt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_lteq, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_lteq, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_lt, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_lt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_neq, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_neq, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCompareFunctions_QCompareFunctions, is_eq, arginfo_qt_core_qcomparefunctions_qcomparefunctions_is_eq, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
