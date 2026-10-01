
extern zend_class_entry *qt_core_qobjectfunctions_qobjectfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QObjectFunctions_QObjectFunctions);

PHP_METHOD(Qt_Core_QObjectFunctions_QObjectFunctions, qt_qFindChild_helper);
PHP_METHOD(Qt_Core_QObjectFunctions_QObjectFunctions, qGetBindingStorage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectfunctions_qobjectfunctions_qt_qfindchild_helper, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectfunctions_qobjectfunctions_qgetbindingstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qobjectfunctions_qobjectfunctions_method_entry) {
	PHP_ME(Qt_Core_QObjectFunctions_QObjectFunctions, qt_qFindChild_helper, arginfo_qt_core_qobjectfunctions_qobjectfunctions_qt_qfindchild_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectFunctions_QObjectFunctions, qGetBindingStorage, arginfo_qt_core_qobjectfunctions_qobjectfunctions_qgetbindingstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
