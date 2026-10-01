
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
#include "src/gui-qbrushfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QBrushFunctions_QBrushFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QBrushFunctions, QBrushFunctions, qt, gui_qbrushfunctions_qbrushfunctions, qt_gui_qbrushfunctions_qbrushfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QBrushFunctions_QBrushFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qbrushfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrushFunctions_QBrushFunctions, qHasPixmapTexture)
{
	zval *brush_param = NULL, _0;
	zend_long brush, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &brush_param);
	ZVAL_LONG(&_0, brush);
	r = phpqt_qbrushfunctions_q_has_pixmap_texture(&_0);
	RETURN_BOOL(r == 1);
}

