
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
#include "src/dbus-qdbusreplyfunctions.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDbusreplyFunctions_QDbusreplyFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDbusreplyFunctions, QDbusreplyFunctions, qt, dbus_qdbusreplyfunctions_qdbusreplyfunctions, qt_dbus_qdbusreplyfunctions_qdbusreplyfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDbusreplyFunctions_QDbusreplyFunctions, qDBusReplyFill)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *reply_param = NULL, *error_param = NULL, result, _0, _1;
	zend_long reply, error;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(reply)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &reply_param, &error_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, reply);
	ZVAL_LONG(&_1, error);
	phpqt_qdbusreplyfunctions_q_d_bus_reply_fill(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

