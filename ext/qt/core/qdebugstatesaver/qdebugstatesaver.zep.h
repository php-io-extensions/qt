
extern zend_class_entry *qt_core_qdebugstatesaver_qdebugstatesaver_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDebugStateSaver_QDebugStateSaver);

PHP_METHOD(Qt_Core_QDebugStateSaver_QDebugStateSaver, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebugstatesaver_qdebugstatesaver_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dbg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdebugstatesaver_qdebugstatesaver_method_entry) {
	PHP_ME(Qt_Core_QDebugStateSaver_QDebugStateSaver, new_, arginfo_qt_core_qdebugstatesaver_qdebugstatesaver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
