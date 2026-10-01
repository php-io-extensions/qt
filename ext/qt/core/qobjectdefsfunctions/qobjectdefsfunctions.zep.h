
extern zend_class_entry *qt_core_qobjectdefsfunctions_qobjectdefsfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions);

PHP_METHOD(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, qFlagLocation);
PHP_METHOD(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, swap);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qobjectdefsfunctions_qobjectdefsfunctions_qflaglocation, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobjectdefsfunctions_qobjectdefsfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qobjectdefsfunctions_qobjectdefsfunctions_method_entry) {
	PHP_ME(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, qFlagLocation, arginfo_qt_core_qobjectdefsfunctions_qobjectdefsfunctions_qflaglocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, swap, arginfo_qt_core_qobjectdefsfunctions_qobjectdefsfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
