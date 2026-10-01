
extern zend_class_entry *qt_core_qnativeipckey_qnativeipckey_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QNativeIpcKey_QNativeIpcKey);

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, staticMetaObject);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, DefaultTypeForOs);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, legacyDefaultTypeForOs);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, new_);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKeyType);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQStringQNativeIpcKeyType);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKey);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, swap);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, isEmpty);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, isValid);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, type);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, setType);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, nativeKey);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, setNativeKey);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, toString);
PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, fromString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_defaulttypeforos, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_legacydefaulttypeforos, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_newqnativeipckeytype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_newqstringqnativeipckeytype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_newqnativeipckey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_nativekey, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_setnativekey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newKey, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnativeipckey_qnativeipckey_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qnativeipckey_qnativeipckey_method_entry) {
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, staticMetaObject, arginfo_qt_core_qnativeipckey_qnativeipckey_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, qt_check_for_QGADGET_macro, arginfo_qt_core_qnativeipckey_qnativeipckey_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, DefaultTypeForOs, arginfo_qt_core_qnativeipckey_qnativeipckey_defaulttypeforos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, legacyDefaultTypeForOs, arginfo_qt_core_qnativeipckey_qnativeipckey_legacydefaulttypeforos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, new_, arginfo_qt_core_qnativeipckey_qnativeipckey_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKeyType, arginfo_qt_core_qnativeipckey_qnativeipckey_newqnativeipckeytype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQStringQNativeIpcKeyType, arginfo_qt_core_qnativeipckey_qnativeipckey_newqstringqnativeipckeytype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKey, arginfo_qt_core_qnativeipckey_qnativeipckey_newqnativeipckey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, swap, arginfo_qt_core_qnativeipckey_qnativeipckey_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, isEmpty, arginfo_qt_core_qnativeipckey_qnativeipckey_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, isValid, arginfo_qt_core_qnativeipckey_qnativeipckey_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, type, arginfo_qt_core_qnativeipckey_qnativeipckey_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, setType, arginfo_qt_core_qnativeipckey_qnativeipckey_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, nativeKey, arginfo_qt_core_qnativeipckey_qnativeipckey_nativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, setNativeKey, arginfo_qt_core_qnativeipckey_qnativeipckey_setnativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, toString, arginfo_qt_core_qnativeipckey_qnativeipckey_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNativeIpcKey_QNativeIpcKey, fromString, arginfo_qt_core_qnativeipckey_qnativeipckey_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
