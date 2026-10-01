
extern zend_class_entry *qt_core_qprocessenvironment_qprocessenvironment_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QProcessEnvironment_QProcessEnvironment);

PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, new_);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, newQProcessEnvironmentInitialization);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, newQProcessEnvironment);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, swap);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, isEmpty);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, inheritsFromParent);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, clear);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, contains);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, insert);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, remove);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, value);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, toStringList);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, keys);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, insertQProcessEnvironment);
PHP_METHOD(Qt_Core_QProcessEnvironment_QProcessEnvironment, systemEnvironment);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_newqprocessenvironmentinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_newqprocessenvironment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_inheritsfromparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_insert, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_value, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_tostringlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_insertqprocessenvironment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessenvironment_qprocessenvironment_systemenvironment, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qprocessenvironment_qprocessenvironment_method_entry) {
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, new_, arginfo_qt_core_qprocessenvironment_qprocessenvironment_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, newQProcessEnvironmentInitialization, arginfo_qt_core_qprocessenvironment_qprocessenvironment_newqprocessenvironmentinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, newQProcessEnvironment, arginfo_qt_core_qprocessenvironment_qprocessenvironment_newqprocessenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, swap, arginfo_qt_core_qprocessenvironment_qprocessenvironment_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, isEmpty, arginfo_qt_core_qprocessenvironment_qprocessenvironment_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, inheritsFromParent, arginfo_qt_core_qprocessenvironment_qprocessenvironment_inheritsfromparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, clear, arginfo_qt_core_qprocessenvironment_qprocessenvironment_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, contains, arginfo_qt_core_qprocessenvironment_qprocessenvironment_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, insert, arginfo_qt_core_qprocessenvironment_qprocessenvironment_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, remove, arginfo_qt_core_qprocessenvironment_qprocessenvironment_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, value, arginfo_qt_core_qprocessenvironment_qprocessenvironment_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, toStringList, arginfo_qt_core_qprocessenvironment_qprocessenvironment_tostringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, keys, arginfo_qt_core_qprocessenvironment_qprocessenvironment_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, insertQProcessEnvironment, arginfo_qt_core_qprocessenvironment_qprocessenvironment_insertqprocessenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessEnvironment_QProcessEnvironment, systemEnvironment, arginfo_qt_core_qprocessenvironment_qprocessenvironment_systemenvironment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
