
extern zend_class_entry *qt_core_qsystemsemaphore_qsystemsemaphore_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSystemSemaphore_QSystemSemaphore);

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, staticMetaObject);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, tr);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, new_);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKey);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKeyQStringIntQSystemSemaphoreAccessModeQNativeIpcKeyType);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, nativeIpcKey);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, newQStringIntQSystemSemaphoreAccessMode);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setKey);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, key);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, acquire);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, release);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, error);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, errorString);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, isKeyTypeSupported);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, platformSafeKey);
PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, legacyNativeKey);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, sourceText)
	ZEND_ARG_INFO(0, disambiguation)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setnativekey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setnativekeyqstringintqsystemsemaphoreaccessmodeqnativeipckeytype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_nativeipckey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_newqstringintqsystemsemaphoreaccessmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, initialValue, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_key, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_acquire, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_release, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_iskeytypesupported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_platformsafekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_legacynativekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsystemsemaphore_qsystemsemaphore_method_entry) {
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, staticMetaObject, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, qt_check_for_QGADGET_macro, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, tr, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, new_, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKey, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setnativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKeyQStringIntQSystemSemaphoreAccessModeQNativeIpcKeyType, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setnativekeyqstringintqsystemsemaphoreaccessmodeqnativeipckeytype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, nativeIpcKey, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_nativeipckey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, newQStringIntQSystemSemaphoreAccessMode, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_newqstringintqsystemsemaphoreaccessmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, setKey, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_setkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, key, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, acquire, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_acquire, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, release, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, error, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, errorString, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, isKeyTypeSupported, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_iskeytypesupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, platformSafeKey, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_platformsafekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSystemSemaphore_QSystemSemaphore, legacyNativeKey, arginfo_qt_core_qsystemsemaphore_qsystemsemaphore_legacynativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
