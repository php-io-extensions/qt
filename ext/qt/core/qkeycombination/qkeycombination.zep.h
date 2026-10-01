
extern zend_class_entry *qt_core_qkeycombination_qkeycombination_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QKeyCombination_QKeyCombination);

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, new_);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, newQtModifiersQtKey);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, newQtKeyboardModifiersQtKey);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, keyboardModifiers);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, key);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, fromCombined);
PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, toCombined);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_newqtmodifiersqtkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_newqtkeyboardmodifiersqtkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_keyboardmodifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_fromcombined, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, combined, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qkeycombination_qkeycombination_tocombined, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qkeycombination_qkeycombination_method_entry) {
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, new_, arginfo_qt_core_qkeycombination_qkeycombination_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, newQtModifiersQtKey, arginfo_qt_core_qkeycombination_qkeycombination_newqtmodifiersqtkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, newQtKeyboardModifiersQtKey, arginfo_qt_core_qkeycombination_qkeycombination_newqtkeyboardmodifiersqtkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, keyboardModifiers, arginfo_qt_core_qkeycombination_qkeycombination_keyboardmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, key, arginfo_qt_core_qkeycombination_qkeycombination_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, fromCombined, arginfo_qt_core_qkeycombination_qkeycombination_fromcombined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QKeyCombination_QKeyCombination, toCombined, arginfo_qt_core_qkeycombination_qkeycombination_tocombined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
