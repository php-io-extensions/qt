
extern zend_class_entry *qt_core_qhashseed_qhashseed_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QHashSeed_QHashSeed);

PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, new_);
PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, globalSeed);
PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, setDeterministicGlobalSeed);
PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, resetRandomGlobalSeed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qhashseed_qhashseed_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qhashseed_qhashseed_globalseed, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qhashseed_qhashseed_setdeterministicglobalseed, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qhashseed_qhashseed_resetrandomglobalseed, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qhashseed_qhashseed_method_entry) {
	PHP_ME(Qt_Core_QHashSeed_QHashSeed, new_, arginfo_qt_core_qhashseed_qhashseed_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QHashSeed_QHashSeed, globalSeed, arginfo_qt_core_qhashseed_qhashseed_globalseed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QHashSeed_QHashSeed, setDeterministicGlobalSeed, arginfo_qt_core_qhashseed_qhashseed_setdeterministicglobalseed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QHashSeed_QHashSeed, resetRandomGlobalSeed, arginfo_qt_core_qhashseed_qhashseed_resetrandomglobalseed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
