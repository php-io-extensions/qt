
extern zend_class_entry *qt_core_qsharedmemory_qsharedmemory_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSharedMemory_QSharedMemory);

PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, staticMetaObject);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, tr);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, new_);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, newQNativeIpcKeyQObject);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, newQStringQObject);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, setKey);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, key);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, setNativeKey);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, setNativeKeyQStringQNativeIpcKeyType);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, nativeKey);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, nativeIpcKey);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, create);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, size);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, attach);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, isAttached);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, detach);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, lock);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, unlock);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, error);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, errorString);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, isKeyTypeSupported);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, platformSafeKey);
PHP_METHOD(Qt_Core_QSharedMemory_QSharedMemory, legacyNativeKey);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_newqnativeipckeyqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_newqstringqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_setkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_key, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_setnativekey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_setnativekeyqstringqnativeipckeytype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_nativekey, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_nativeipckey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_create, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_attach, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_isattached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_detach, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_lock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_unlock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_iskeytypesupported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_platformsafekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsharedmemory_qsharedmemory_legacynativekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsharedmemory_qsharedmemory_method_entry) {
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, staticMetaObject, arginfo_qt_core_qsharedmemory_qsharedmemory_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, tr, arginfo_qt_core_qsharedmemory_qsharedmemory_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, new_, arginfo_qt_core_qsharedmemory_qsharedmemory_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, newQNativeIpcKeyQObject, arginfo_qt_core_qsharedmemory_qsharedmemory_newqnativeipckeyqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, newQStringQObject, arginfo_qt_core_qsharedmemory_qsharedmemory_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, setKey, arginfo_qt_core_qsharedmemory_qsharedmemory_setkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, key, arginfo_qt_core_qsharedmemory_qsharedmemory_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, setNativeKey, arginfo_qt_core_qsharedmemory_qsharedmemory_setnativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, setNativeKeyQStringQNativeIpcKeyType, arginfo_qt_core_qsharedmemory_qsharedmemory_setnativekeyqstringqnativeipckeytype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, nativeKey, arginfo_qt_core_qsharedmemory_qsharedmemory_nativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, nativeIpcKey, arginfo_qt_core_qsharedmemory_qsharedmemory_nativeipckey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, create, arginfo_qt_core_qsharedmemory_qsharedmemory_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, size, arginfo_qt_core_qsharedmemory_qsharedmemory_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, attach, arginfo_qt_core_qsharedmemory_qsharedmemory_attach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, isAttached, arginfo_qt_core_qsharedmemory_qsharedmemory_isattached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, detach, arginfo_qt_core_qsharedmemory_qsharedmemory_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, lock, arginfo_qt_core_qsharedmemory_qsharedmemory_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, unlock, arginfo_qt_core_qsharedmemory_qsharedmemory_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, error, arginfo_qt_core_qsharedmemory_qsharedmemory_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, errorString, arginfo_qt_core_qsharedmemory_qsharedmemory_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, isKeyTypeSupported, arginfo_qt_core_qsharedmemory_qsharedmemory_iskeytypesupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, platformSafeKey, arginfo_qt_core_qsharedmemory_qsharedmemory_platformsafekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedMemory_QSharedMemory, legacyNativeKey, arginfo_qt_core_qsharedmemory_qsharedmemory_legacynativekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
