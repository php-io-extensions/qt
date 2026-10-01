
extern zend_class_entry *qt_core_qassociativeiterable_qassociativeiterable_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAssociativeIterable_QAssociativeIterable);

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, new_);
PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, containsKey);
PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, insertKey);
PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, removeKey);
PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, value);
PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, setValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_containskey, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_insertkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_removekey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_value, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qassociativeiterable_qassociativeiterable_setvalue, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, mapped)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qassociativeiterable_qassociativeiterable_method_entry) {
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, new_, arginfo_qt_core_qassociativeiterable_qassociativeiterable_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, containsKey, arginfo_qt_core_qassociativeiterable_qassociativeiterable_containskey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, insertKey, arginfo_qt_core_qassociativeiterable_qassociativeiterable_insertkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, removeKey, arginfo_qt_core_qassociativeiterable_qassociativeiterable_removekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, value, arginfo_qt_core_qassociativeiterable_qassociativeiterable_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAssociativeIterable_QAssociativeIterable, setValue, arginfo_qt_core_qassociativeiterable_qassociativeiterable_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
