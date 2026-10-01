
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
#include "src/widgets-qstyleoptionrubberband.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleOptionRubberBand, QStyleOptionRubberBand, qt, widgets_qstyleoptionrubberband_qstyleoptionrubberband, qt_widgets_qstyleoptionrubberband_qstyleoptionrubberband_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, shape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyleoptionrubberband_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, setShape)
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
	phpqt_qstyleoptionrubberband_set_shape(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, opaque)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstyleoptionrubberband_opaque(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, setOpaque)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qstyleoptionrubberband_set_opaque(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, new_)
{

	RETURN_LONG(phpqt_qstyleoptionrubberband_new());
}

PHP_METHOD(Qt_Widgets_QStyleOptionRubberBand_QStyleOptionRubberBand, newQStyleOptionRubberBand)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstyleoptionrubberband_new_q_style_option_rubber_band(&_0));
}

