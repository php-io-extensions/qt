
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
#include "src/widgets-qsliderfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QSliderFunctions_QSliderFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QSliderFunctions, QSliderFunctions, qt, widgets_qsliderfunctions_qsliderfunctions, qt_widgets_qsliderfunctions_qsliderfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QSliderFunctions_QSliderFunctions, qt_qsliderStyleOption)
{
	zval *slider_param = NULL, _0;
	zend_long slider;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(slider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &slider_param);
	ZVAL_LONG(&_0, slider);
	RETURN_LONG(phpqt_qsliderfunctions_qt_qslider_style_option(&_0));
}

