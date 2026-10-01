
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
#include "src/widgets-qscrollbarfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollbarFunctions_QScrollbarFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QScrollbarFunctions, QScrollbarFunctions, qt, widgets_qscrollbarfunctions_qscrollbarfunctions, qt_widgets_qscrollbarfunctions_qscrollbarfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QScrollbarFunctions_QScrollbarFunctions, qt_qscrollbarStyleOption)
{
	zval *scrollBar_param = NULL, _0;
	zend_long scrollBar;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scrollBar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scrollBar_param);
	ZVAL_LONG(&_0, scrollBar);
	RETURN_LONG(phpqt_qscrollbarfunctions_qt_qscrollbar_style_option(&_0));
}

