
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
#include "src/core-qdebugstatesaver.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDebugStateSaver_QDebugStateSaver)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDebugStateSaver, QDebugStateSaver, qt, core_qdebugstatesaver_qdebugstatesaver, qt_core_qdebugstatesaver_qdebugstatesaver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDebugStateSaver_QDebugStateSaver, new_)
{
	zval *dbg_param = NULL, _0;
	zend_long dbg;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dbg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dbg_param);
	ZVAL_LONG(&_0, dbg);
	RETURN_LONG(phpqt_qdebugstatesaver_new(&_0));
}

