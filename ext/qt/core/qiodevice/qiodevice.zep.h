
extern zend_class_entry *qt_core_qiodevice_qiodevice_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QIODevice_QIODevice);

PHP_METHOD(Qt_Core_QIODevice_QIODevice, staticMetaObject);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, tr);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, new_);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, newQObject);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, openMode);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, setTextModeEnabled);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isTextModeEnabled);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isOpen);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isReadable);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isWritable);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isSequential);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, readChannelCount);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, writeChannelCount);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, currentReadChannel);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, setCurrentReadChannel);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, currentWriteChannel);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, setCurrentWriteChannel);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, open);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, close);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, pos);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, size);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, seek);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, atEnd);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, reset);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, bytesAvailable);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, bytesToWrite);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, read);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, readAll);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, readLine);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, canReadLine);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, startTransaction);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, commitTransaction);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, rollbackTransaction);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, isTransactionStarted);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, write);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, writeChar);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, writeQByteArray);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, peek);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, skip);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, waitForReadyRead);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, waitForBytesWritten);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, ungetChar);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, putChar);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, errorString);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, readyRead);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, channelReadyRead);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, bytesWritten);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, channelBytesWritten);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, aboutToClose);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, readChannelFinished);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, skipData);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, writeData);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, setOpenMode);
PHP_METHOD(Qt_Core_QIODevice_QIODevice, setErrorString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_newqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_openmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_settextmodeenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_istextmodeenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_isopen, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_isreadable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_iswritable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_readchannelcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_writechannelcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_currentreadchannel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_setcurrentreadchannel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_currentwritechannel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_setcurrentwritechannel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_pos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_reset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_bytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_bytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_read, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_readall, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_readline, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_canreadline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_starttransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_committransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_rollbacktransaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_istransactionstarted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_write, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_writechar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_writeqbytearray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_peek, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_skip, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_waitforreadyread, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_waitforbyteswritten, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_ungetchar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_putchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_readyread, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_channelreadyread, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_byteswritten, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_channelbyteswritten, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_abouttoclose, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_readchannelfinished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_skipdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_setopenmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, openMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qiodevice_qiodevice_seterrorstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, errorString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qiodevice_qiodevice_method_entry) {
	PHP_ME(Qt_Core_QIODevice_QIODevice, staticMetaObject, arginfo_qt_core_qiodevice_qiodevice_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, tr, arginfo_qt_core_qiodevice_qiodevice_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, new_, arginfo_qt_core_qiodevice_qiodevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, newQObject, arginfo_qt_core_qiodevice_qiodevice_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, openMode, arginfo_qt_core_qiodevice_qiodevice_openmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, setTextModeEnabled, arginfo_qt_core_qiodevice_qiodevice_settextmodeenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isTextModeEnabled, arginfo_qt_core_qiodevice_qiodevice_istextmodeenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isOpen, arginfo_qt_core_qiodevice_qiodevice_isopen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isReadable, arginfo_qt_core_qiodevice_qiodevice_isreadable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isWritable, arginfo_qt_core_qiodevice_qiodevice_iswritable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isSequential, arginfo_qt_core_qiodevice_qiodevice_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, readChannelCount, arginfo_qt_core_qiodevice_qiodevice_readchannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, writeChannelCount, arginfo_qt_core_qiodevice_qiodevice_writechannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, currentReadChannel, arginfo_qt_core_qiodevice_qiodevice_currentreadchannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, setCurrentReadChannel, arginfo_qt_core_qiodevice_qiodevice_setcurrentreadchannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, currentWriteChannel, arginfo_qt_core_qiodevice_qiodevice_currentwritechannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, setCurrentWriteChannel, arginfo_qt_core_qiodevice_qiodevice_setcurrentwritechannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, open, arginfo_qt_core_qiodevice_qiodevice_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, close, arginfo_qt_core_qiodevice_qiodevice_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, pos, arginfo_qt_core_qiodevice_qiodevice_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, size, arginfo_qt_core_qiodevice_qiodevice_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, seek, arginfo_qt_core_qiodevice_qiodevice_seek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, atEnd, arginfo_qt_core_qiodevice_qiodevice_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, reset, arginfo_qt_core_qiodevice_qiodevice_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, bytesAvailable, arginfo_qt_core_qiodevice_qiodevice_bytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, bytesToWrite, arginfo_qt_core_qiodevice_qiodevice_bytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, read, arginfo_qt_core_qiodevice_qiodevice_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, readAll, arginfo_qt_core_qiodevice_qiodevice_readall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, readLine, arginfo_qt_core_qiodevice_qiodevice_readline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, canReadLine, arginfo_qt_core_qiodevice_qiodevice_canreadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, startTransaction, arginfo_qt_core_qiodevice_qiodevice_starttransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, commitTransaction, arginfo_qt_core_qiodevice_qiodevice_committransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, rollbackTransaction, arginfo_qt_core_qiodevice_qiodevice_rollbacktransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, isTransactionStarted, arginfo_qt_core_qiodevice_qiodevice_istransactionstarted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, write, arginfo_qt_core_qiodevice_qiodevice_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, writeChar, arginfo_qt_core_qiodevice_qiodevice_writechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, writeQByteArray, arginfo_qt_core_qiodevice_qiodevice_writeqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, peek, arginfo_qt_core_qiodevice_qiodevice_peek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, skip, arginfo_qt_core_qiodevice_qiodevice_skip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, waitForReadyRead, arginfo_qt_core_qiodevice_qiodevice_waitforreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, waitForBytesWritten, arginfo_qt_core_qiodevice_qiodevice_waitforbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, ungetChar, arginfo_qt_core_qiodevice_qiodevice_ungetchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, putChar, arginfo_qt_core_qiodevice_qiodevice_putchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, errorString, arginfo_qt_core_qiodevice_qiodevice_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, readyRead, arginfo_qt_core_qiodevice_qiodevice_readyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, channelReadyRead, arginfo_qt_core_qiodevice_qiodevice_channelreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, bytesWritten, arginfo_qt_core_qiodevice_qiodevice_byteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, channelBytesWritten, arginfo_qt_core_qiodevice_qiodevice_channelbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, aboutToClose, arginfo_qt_core_qiodevice_qiodevice_abouttoclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, readChannelFinished, arginfo_qt_core_qiodevice_qiodevice_readchannelfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, skipData, arginfo_qt_core_qiodevice_qiodevice_skipdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, writeData, arginfo_qt_core_qiodevice_qiodevice_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, setOpenMode, arginfo_qt_core_qiodevice_qiodevice_setopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIODevice_QIODevice, setErrorString, arginfo_qt_core_qiodevice_qiodevice_seterrorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
