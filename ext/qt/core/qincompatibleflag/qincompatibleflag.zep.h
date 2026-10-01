
extern zend_class_entry *qt_core_qincompatibleflag_qincompatibleflag_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QIncompatibleFlag_QIncompatibleFlag);

PHP_METHOD(Qt_Core_QIncompatibleFlag_QIncompatibleFlag, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qincompatibleflag_qincompatibleflag_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qincompatibleflag_qincompatibleflag_method_entry) {
	PHP_ME(Qt_Core_QIncompatibleFlag_QIncompatibleFlag, new_, arginfo_qt_core_qincompatibleflag_qincompatibleflag_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
