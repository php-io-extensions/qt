
extern zend_class_entry *qt_core_qdatastream_qdatastream_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDataStream_QDataStream);

PHP_METHOD(Qt_Core_QDataStream_QDataStream, new_);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, newQIODevice);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, newQByteArrayQIODeviceBaseOpenMode);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, newQByteArray);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, device);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, setDevice);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, atEnd);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, status);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, setStatus);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, resetStatus);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, floatingPointPrecision);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, setFloatingPointPrecision);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, byteOrder);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, setByteOrder);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, version);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, setVersion);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, writeBytes);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, writeRawData);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, skipRawData);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, startTransaction);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, commitTransaction);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, rollbackTransaction);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, abortTransaction);
PHP_METHOD(Qt_Core_QDataStream_QDataStream, isDeviceTransactionStarted);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_newqbytearrayqiodevicebaseopenmode, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_newqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_setstatus, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_resetstatus, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_floatingpointprecision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_setfloatingpointprecision, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_byteorder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_setbyteorder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_setversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_writebytes, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_writerawdata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_skiprawdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_starttransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_committransaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_rollbacktransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_aborttransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatastream_qdatastream_isdevicetransactionstarted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdatastream_qdatastream_method_entry) {
	PHP_ME(Qt_Core_QDataStream_QDataStream, new_, arginfo_qt_core_qdatastream_qdatastream_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, newQIODevice, arginfo_qt_core_qdatastream_qdatastream_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, newQByteArrayQIODeviceBaseOpenMode, arginfo_qt_core_qdatastream_qdatastream_newqbytearrayqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, newQByteArray, arginfo_qt_core_qdatastream_qdatastream_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, device, arginfo_qt_core_qdatastream_qdatastream_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, setDevice, arginfo_qt_core_qdatastream_qdatastream_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, atEnd, arginfo_qt_core_qdatastream_qdatastream_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, status, arginfo_qt_core_qdatastream_qdatastream_status, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, setStatus, arginfo_qt_core_qdatastream_qdatastream_setstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, resetStatus, arginfo_qt_core_qdatastream_qdatastream_resetstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, floatingPointPrecision, arginfo_qt_core_qdatastream_qdatastream_floatingpointprecision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, setFloatingPointPrecision, arginfo_qt_core_qdatastream_qdatastream_setfloatingpointprecision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, byteOrder, arginfo_qt_core_qdatastream_qdatastream_byteorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, setByteOrder, arginfo_qt_core_qdatastream_qdatastream_setbyteorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, version, arginfo_qt_core_qdatastream_qdatastream_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, setVersion, arginfo_qt_core_qdatastream_qdatastream_setversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, writeBytes, arginfo_qt_core_qdatastream_qdatastream_writebytes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, writeRawData, arginfo_qt_core_qdatastream_qdatastream_writerawdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, skipRawData, arginfo_qt_core_qdatastream_qdatastream_skiprawdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, startTransaction, arginfo_qt_core_qdatastream_qdatastream_starttransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, commitTransaction, arginfo_qt_core_qdatastream_qdatastream_committransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, rollbackTransaction, arginfo_qt_core_qdatastream_qdatastream_rollbacktransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, abortTransaction, arginfo_qt_core_qdatastream_qdatastream_aborttransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDataStream_QDataStream, isDeviceTransactionStarted, arginfo_qt_core_qdatastream_qdatastream_isdevicetransactionstarted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
