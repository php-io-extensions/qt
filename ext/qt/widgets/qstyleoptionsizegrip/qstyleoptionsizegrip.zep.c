
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
#include "src/widgets-qstyleoptionsizegrip.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionSizeGrip_QStyleOptionSizeGrip)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleOptionSizeGrip, QStyleOptionSizeGrip, qt, widgets_qstyleoptionsizegrip_qstyleoptionsizegrip, qt_widgets_qstyleoptionsizegrip_qstyleoptionsizegrip_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleOptionSizeGrip_QStyleOptionSizeGrip, corner)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyleoptionsizegrip_corner(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleOptionSizeGrip_QStyleOptionSizeGrip, setCorner)
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
	phpqt_qstyleoptionsizegrip_set_corner(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionSizeGrip_QStyleOptionSizeGrip, new_)
{

	RETURN_LONG(phpqt_qstyleoptionsizegrip_new());
}

PHP_METHOD(Qt_Widgets_QStyleOptionSizeGrip_QStyleOptionSizeGrip, newQStyleOptionSizeGrip)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstyleoptionsizegrip_new_q_style_option_size_grip(&_0));
}

