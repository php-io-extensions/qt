
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/network-qhttp2configuration.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHttp2Configuration_QHttp2Configuration)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHttp2Configuration, QHttp2Configuration, qt, network_qhttp2configuration_qhttp2configuration, qt_network_qhttp2configuration_qhttp2configuration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, new_)
{

	RETURN_LONG(phpqt_qhttp2configuration_new());
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, newQHttp2Configuration)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qhttp2configuration_new_q_http2_configuration(&_0));
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, setServerPushEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qhttp2configuration_set_server_push_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, serverPushEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttp2configuration_server_push_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, setHuffmanCompressionEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qhttp2configuration_set_huffman_compression_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, huffmanCompressionEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttp2configuration_huffman_compression_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, setSessionReceiveWindowSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	r = phpqt_qhttp2configuration_set_session_receive_window_size(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, sessionReceiveWindowSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhttp2configuration_session_receive_window_size(&_0));
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, setStreamReceiveWindowSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	r = phpqt_qhttp2configuration_set_stream_receive_window_size(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, streamReceiveWindowSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhttp2configuration_stream_receive_window_size(&_0));
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, setMaxFrameSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	r = phpqt_qhttp2configuration_set_max_frame_size(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, maxFrameSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhttp2configuration_max_frame_size(&_0));
}

PHP_METHOD(Qt_Network_QHttp2Configuration_QHttp2Configuration, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qhttp2configuration_swap(&_0, &_1);
}

