
extern zend_class_entry *qt_core_qcryptographichash_qcryptographichash_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCryptographicHash_QCryptographicHash);

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, staticMetaObject);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, new_);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, swap);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, reset);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, algorithm);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, addData);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, addDataQIODevice);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, result);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, resultView);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, hash);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, hashLength);
PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, supportsAlgorithm);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_algorithm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_adddata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_adddataqiodevice, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_result, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_resultview, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_hash, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_hashlength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcryptographichash_qcryptographichash_supportsalgorithm, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcryptographichash_qcryptographichash_method_entry) {
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, staticMetaObject, arginfo_qt_core_qcryptographichash_qcryptographichash_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, qt_check_for_QGADGET_macro, arginfo_qt_core_qcryptographichash_qcryptographichash_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, new_, arginfo_qt_core_qcryptographichash_qcryptographichash_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, swap, arginfo_qt_core_qcryptographichash_qcryptographichash_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, reset, arginfo_qt_core_qcryptographichash_qcryptographichash_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, algorithm, arginfo_qt_core_qcryptographichash_qcryptographichash_algorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, addData, arginfo_qt_core_qcryptographichash_qcryptographichash_adddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, addDataQIODevice, arginfo_qt_core_qcryptographichash_qcryptographichash_adddataqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, result, arginfo_qt_core_qcryptographichash_qcryptographichash_result, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, resultView, arginfo_qt_core_qcryptographichash_qcryptographichash_resultview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, hash, arginfo_qt_core_qcryptographichash_qcryptographichash_hash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, hashLength, arginfo_qt_core_qcryptographichash_qcryptographichash_hashlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCryptographicHash_QCryptographicHash, supportsAlgorithm, arginfo_qt_core_qcryptographichash_qcryptographichash_supportsalgorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
