
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
#include "src/gui-qresizeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QResizeEvent_QResizeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QResizeEvent, QResizeEvent, qt, gui_qresizeevent_qresizeevent, qt_gui_qresizeevent_qresizeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qresizeevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresizeevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, newQSizeQSize)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *oldSizeWidth_param = NULL, *oldSizeHeight_param = NULL, _0, _1, _2, _3;
	zend_long sizeWidth, sizeHeight, oldSizeWidth, oldSizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(oldSizeWidth)
		Z_PARAM_LONG(oldSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &sizeWidth_param, &sizeHeight_param, &oldSizeWidth_param, &oldSizeHeight_param);
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	ZVAL_LONG(&_2, oldSizeWidth);
	ZVAL_LONG(&_3, oldSizeHeight);
	RETURN_LONG(phpqt_qresizeevent_new_q_size_q_size(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qresizeevent_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, oldSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qresizeevent_old_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, m_size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qresizeevent_m_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, setM_size)
{
	zval *handle_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2;
	zend_long handle, valueWidth, valueHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueWidth)
		Z_PARAM_LONG(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueWidth_param, &valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueWidth);
	ZVAL_LONG(&_2, valueHeight);
	phpqt_qresizeevent_set_m_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, m_oldSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qresizeevent_m_old_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, setM_oldSize)
{
	zval *handle_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2;
	zend_long handle, valueWidth, valueHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueWidth)
		Z_PARAM_LONG(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueWidth_param, &valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueWidth);
	ZVAL_LONG(&_2, valueHeight);
	phpqt_qresizeevent_set_m_old_size(&_0, &_1, &_2);
}

