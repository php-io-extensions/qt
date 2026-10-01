
extern zend_class_entry *qt_core_qassertfunctions_qassertfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAssertFunctions_QAssertFunctions);

PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert);
PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert_x);
PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_check_pointer);
PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qBadAlloc);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassertfunctions_qassertfunctions_qt_assert, 0, 3, IS_VOID, 0)

	ZEND_ARG_INFO(0, assertion)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassertfunctions_qassertfunctions_qt_assert_x, 0, 4, IS_VOID, 0)

	ZEND_ARG_INFO(0, where)
	ZEND_ARG_INFO(0, what)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassertfunctions_qassertfunctions_qt_check_pointer, 0, 2, IS_VOID, 0)

	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassertfunctions_qassertfunctions_qbadalloc, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qassertfunctions_qassertfunctions_method_entry) {
	PHP_ME(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert, arginfo_qt_core_qassertfunctions_qassertfunctions_qt_assert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert_x, arginfo_qt_core_qassertfunctions_qassertfunctions_qt_assert_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssertFunctions_QAssertFunctions, qt_check_pointer, arginfo_qt_core_qassertfunctions_qassertfunctions_qt_check_pointer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssertFunctions_QAssertFunctions, qBadAlloc, arginfo_qt_core_qassertfunctions_qassertfunctions_qbadalloc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
