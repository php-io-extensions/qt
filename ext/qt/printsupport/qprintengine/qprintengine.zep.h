
extern zend_class_entry *qt_printsupport_qprintengine_qprintengine_ce;

ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPrintEngine_QPrintEngine);

PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, setProperty);
PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, property);
PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, newPage);
PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, abort);
PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, metric);
PHP_METHOD(Qt_PrintSupport_QPrintEngine_QPrintEngine, printerState);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_setproperty, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_property, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_newpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_abort, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintengine_qprintengine_printerstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_printsupport_qprintengine_qprintengine_method_entry) {
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, setProperty, arginfo_qt_printsupport_qprintengine_qprintengine_setproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, property, arginfo_qt_printsupport_qprintengine_qprintengine_property, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, newPage, arginfo_qt_printsupport_qprintengine_qprintengine_newpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, abort, arginfo_qt_printsupport_qprintengine_qprintengine_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, metric, arginfo_qt_printsupport_qprintengine_qprintengine_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintEngine_QPrintEngine, printerState, arginfo_qt_printsupport_qprintengine_qprintengine_printerstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
