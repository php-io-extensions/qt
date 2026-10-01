
extern zend_class_entry *qt_core_quntypedbindable_quntypedbindable_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUntypedBindable_QUntypedBindable);

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, new_);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isValid);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isBindable);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isReadOnly);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, makeBinding);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, takeBinding);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, observe);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, binding);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, setBinding);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, hasBinding);
PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, metaType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_isbindable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_isreadonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_makebinding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, location)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_takebinding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_observe, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, observer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_binding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_setbinding, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, binding, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_hasbinding, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quntypedbindable_quntypedbindable_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_quntypedbindable_quntypedbindable_method_entry) {
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, new_, arginfo_qt_core_quntypedbindable_quntypedbindable_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, isValid, arginfo_qt_core_quntypedbindable_quntypedbindable_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, isBindable, arginfo_qt_core_quntypedbindable_quntypedbindable_isbindable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, isReadOnly, arginfo_qt_core_quntypedbindable_quntypedbindable_isreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, makeBinding, arginfo_qt_core_quntypedbindable_quntypedbindable_makebinding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, takeBinding, arginfo_qt_core_quntypedbindable_quntypedbindable_takebinding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, observe, arginfo_qt_core_quntypedbindable_quntypedbindable_observe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, binding, arginfo_qt_core_quntypedbindable_quntypedbindable_binding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, setBinding, arginfo_qt_core_quntypedbindable_quntypedbindable_setbinding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, hasBinding, arginfo_qt_core_quntypedbindable_quntypedbindable_hasbinding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUntypedBindable_QUntypedBindable, metaType, arginfo_qt_core_quntypedbindable_quntypedbindable_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
