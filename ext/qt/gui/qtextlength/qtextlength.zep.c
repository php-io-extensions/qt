
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
#include "src/gui-qtextlength.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextLength_QTextLength)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextLength, QTextLength, qt, gui_qtextlength_qtextlength, qt_gui_qtextlength_qtextlength_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, new_)
{

	RETURN_LONG(phpqt_qtextlength_new());
}

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, newQTextLengthTypeQreal)
{
	double value;
	zval *type_param = NULL, *value_param = NULL, _0, _1;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &type_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, value);
	RETURN_LONG(phpqt_qtextlength_new_q_text_length_type_qreal(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlength_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, value)
{
	double maximumLength;
	zval *handle_param = NULL, *maximumLength_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(maximumLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximumLength_param);
	maximumLength = zephir_get_doubleval(maximumLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, maximumLength);
	RETURN_DOUBLE(phpqt_qtextlength_value(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, rawValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextlength_raw_value(&_0));
}

