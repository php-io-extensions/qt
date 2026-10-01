
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
#include "src/widgets-qtooltip.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QToolTip_QToolTip)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QToolTip, QToolTip, qt, widgets_qtooltip_qtooltip, qt_widgets_qtooltip_qtooltip_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, showText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *posX_param = NULL, *posY_param = NULL, *text_param = NULL, *w_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, *msecShowTime_param = NULL, __$null, _0, _1, _2, _3;
	zend_long posX, posY, w, msecShowTime;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 9)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(w)
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
		Z_PARAM_LONG(msecShowTime)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 6, &posX_param, &posY_param, &text_param, &w_param, &rectX, &rectY, &rectWidth, &rectHeight, &msecShowTime_param);
	zephir_get_strval(&text, text_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	if (!msecShowTime_param) {
		msecShowTime = -1;
	} else {
		}
	ZVAL_LONG(&_0, posX);
	ZVAL_LONG(&_1, posY);
	ZVAL_LONG(&_2, w);
	ZVAL_LONG(&_3, msecShowTime);
	phpqt_qtooltip_show_text(&_0, &_1, &text, &_2, rectX, rectY, rectWidth, rectHeight, &_3);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, hideText)
{

	phpqt_qtooltip_hide_text();
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, isVisible)
{
	zend_long r = 0;
	r = phpqt_qtooltip_is_visible();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, text)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtooltip_text(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, palette)
{

	RETURN_LONG(phpqt_qtooltip_palette());
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, setPalette)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qtooltip_set_palette(&_0);
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, font)
{

	RETURN_LONG(phpqt_qtooltip_font());
}

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, setFont)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qtooltip_set_font(&_0);
}

