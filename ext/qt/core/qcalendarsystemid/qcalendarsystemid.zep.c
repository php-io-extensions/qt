
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
#include "src/core-qcalendarsystemid.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCalendarSystemId_QCalendarSystemId)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCalendarSystemId, QCalendarSystemId, qt, core_qcalendarsystemid_qcalendarsystemid, qt_core_qcalendarsystemid_qcalendarsystemid_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, new_)
{

	RETURN_LONG(phpqt_qcalendarsystemid_new());
}

PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, index)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarsystemid_index(&_0));
}

PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendarsystemid_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

