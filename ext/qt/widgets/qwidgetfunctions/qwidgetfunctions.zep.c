
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
#include "src/widgets-qwidgetfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QWidgetFunctions_QWidgetFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QWidgetFunctions, QWidgetFunctions, qt, widgets_qwidgetfunctions_qwidgetfunctions, qt_widgets_qwidgetfunctions_qwidgetfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QWidgetFunctions_QWidgetFunctions, qt_qwidget_data)
{
	zval *widget_param = NULL, _0;
	zend_long widget;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &widget_param);
	ZVAL_LONG(&_0, widget);
	RETURN_LONG(phpqt_qwidgetfunctions_qt_qwidget_data(&_0));
}

