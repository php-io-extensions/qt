
extern zend_class_entry *qt_core_qflag_qflag_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFlag_QFlag);

PHP_METHOD(Qt_Core_QFlag_QFlag, new_);
PHP_METHOD(Qt_Core_QFlag_QFlag, newUint);
PHP_METHOD(Qt_Core_QFlag_QFlag, newShortInt);
PHP_METHOD(Qt_Core_QFlag_QFlag, newUshort);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qflag_qflag_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qflag_qflag_newuint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qflag_qflag_newshortint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qflag_qflag_newushort, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qflag_qflag_method_entry) {
	PHP_ME(Qt_Core_QFlag_QFlag, new_, arginfo_qt_core_qflag_qflag_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFlag_QFlag, newUint, arginfo_qt_core_qflag_qflag_newuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFlag_QFlag, newShortInt, arginfo_qt_core_qflag_qflag_newshortint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFlag_QFlag, newUshort, arginfo_qt_core_qflag_qflag_newushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
