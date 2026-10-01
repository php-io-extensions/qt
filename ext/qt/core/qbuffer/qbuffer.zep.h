
extern zend_class_entry *qt_core_qbuffer_qbuffer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBuffer_QBuffer);

PHP_METHOD(Qt_Core_QBuffer_QBuffer, staticMetaObject);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, tr);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, new_);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, newQByteArrayQObject);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, buffer);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, setBuffer);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, setData);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, setDataCharQsizetype);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, data);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, open);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, close);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, size);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, pos);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, seek);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, atEnd);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, canReadLine);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, connectNotify);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, disconnectNotify);
PHP_METHOD(Qt_Core_QBuffer_QBuffer, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_newqbytearrayqobject, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, buf)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_buffer, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_setbuffer, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_setdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_setdatacharqsizetype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_data, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, openMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_pos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, off, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_canreadline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_connectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_disconnectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbuffer_qbuffer_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbuffer_qbuffer_method_entry) {
	PHP_ME(Qt_Core_QBuffer_QBuffer, staticMetaObject, arginfo_qt_core_qbuffer_qbuffer_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, tr, arginfo_qt_core_qbuffer_qbuffer_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, new_, arginfo_qt_core_qbuffer_qbuffer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, newQByteArrayQObject, arginfo_qt_core_qbuffer_qbuffer_newqbytearrayqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, buffer, arginfo_qt_core_qbuffer_qbuffer_buffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, setBuffer, arginfo_qt_core_qbuffer_qbuffer_setbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, setData, arginfo_qt_core_qbuffer_qbuffer_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, setDataCharQsizetype, arginfo_qt_core_qbuffer_qbuffer_setdatacharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, data, arginfo_qt_core_qbuffer_qbuffer_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, open, arginfo_qt_core_qbuffer_qbuffer_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, close, arginfo_qt_core_qbuffer_qbuffer_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, size, arginfo_qt_core_qbuffer_qbuffer_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, pos, arginfo_qt_core_qbuffer_qbuffer_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, seek, arginfo_qt_core_qbuffer_qbuffer_seek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, atEnd, arginfo_qt_core_qbuffer_qbuffer_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, canReadLine, arginfo_qt_core_qbuffer_qbuffer_canreadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, connectNotify, arginfo_qt_core_qbuffer_qbuffer_connectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, disconnectNotify, arginfo_qt_core_qbuffer_qbuffer_disconnectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBuffer_QBuffer, writeData, arginfo_qt_core_qbuffer_qbuffer_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
