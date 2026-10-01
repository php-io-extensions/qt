
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
#include "src/gui-qinputmethodeventattribute.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QInputMethodEventAttribute, QInputMethodEventAttribute, qt, gui_qinputmethodeventattribute_qinputmethodeventattribute, qt_gui_qinputmethodeventattribute_qinputmethodeventattribute_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, new_)
{
	zval *typ_param = NULL, *s_param = NULL, *l_param = NULL, *val = NULL, val_sub, _0, _1, _2;
	zend_long typ, s, l;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(typ)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(l)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &typ_param, &s_param, &l_param, &val);
	ZVAL_LONG(&_0, typ);
	ZVAL_LONG(&_1, s);
	ZVAL_LONG(&_2, l);
	RETURN_LONG(phpqt_qinputmethodeventattribute_new(&_0, &_1, &_2, val));
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, newQInputMethodEventAttributeTypeIntInt)
{
	zval *typ_param = NULL, *s_param = NULL, *l_param = NULL, _0, _1, _2;
	zend_long typ, s, l;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(typ)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(l)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &typ_param, &s_param, &l_param);
	ZVAL_LONG(&_0, typ);
	ZVAL_LONG(&_1, s);
	ZVAL_LONG(&_2, l);
	RETURN_LONG(phpqt_qinputmethodeventattribute_new_q_input_method_event_attribute_type_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputmethodeventattribute_type(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, setType)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qinputmethodeventattribute_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, start)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputmethodeventattribute_start(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, setStart)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qinputmethodeventattribute_set_start(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputmethodeventattribute_length(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, setLength)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qinputmethodeventattribute_set_length(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, value)
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
	phpqt_qinputmethodeventattribute_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputMethodEventAttribute_QInputMethodEventAttribute, setValue)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qinputmethodeventattribute_set_value(&_0, value);
}

