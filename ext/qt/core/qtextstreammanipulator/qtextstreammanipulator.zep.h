
extern zend_class_entry *qt_core_qtextstreammanipulator_qtextstreammanipulator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTextStreamManipulator_QTextStreamManipulator);

PHP_METHOD(Qt_Core_QTextStreamManipulator_QTextStreamManipulator, exec);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstreammanipulator_qtextstreammanipulator_exec, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtextstreammanipulator_qtextstreammanipulator_method_entry) {
	PHP_ME(Qt_Core_QTextStreamManipulator_QTextStreamManipulator, exec, arginfo_qt_core_qtextstreammanipulator_qtextstreammanipulator_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
