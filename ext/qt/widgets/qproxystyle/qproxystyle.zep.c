
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
#include "src/widgets-qproxystyle.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QProxyStyle_QProxyStyle)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QProxyStyle, QProxyStyle, qt, widgets_qproxystyle_qproxystyle, qt_widgets_qproxystyle_qproxystyle_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, staticMetaObject)
{

	RETURN_LONG(phpqt_qproxystyle_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qproxystyle_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, new_)
{
	zval *style_param = NULL, _0;
	zend_long style;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &style_param);
	if (!style_param) {
		style = 0;
	} else {
		}
	ZVAL_LONG(&_0, style);
	RETURN_LONG(phpqt_qproxystyle_new(&_0));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL;
	zval key;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &key_param);
	zephir_get_strval(&key, key_param);
	RETURN_MM_LONG(phpqt_qproxystyle_new_q_string(&key));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, baseStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qproxystyle_base_style(&_0));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, setBaseStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	phpqt_qproxystyle_set_base_style(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawPrimitive)
{
	zval *handle_param = NULL, *element_param = NULL, *option_param = NULL, *painter_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, element, option, painter, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(element)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &element_param, &option_param, &painter_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, element);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, painter);
	ZVAL_LONG(&_4, widget);
	phpqt_qproxystyle_draw_primitive(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawControl)
{
	zval *handle_param = NULL, *element_param = NULL, *option_param = NULL, *painter_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, element, option, painter, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(element)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &element_param, &option_param, &painter_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, element);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, painter);
	ZVAL_LONG(&_4, widget);
	phpqt_qproxystyle_draw_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawComplexControl)
{
	zval *handle_param = NULL, *control_param = NULL, *option_param = NULL, *painter_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, control, option, painter, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &control_param, &option_param, &painter_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, control);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, painter);
	ZVAL_LONG(&_4, widget);
	phpqt_qproxystyle_draw_complex_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zend_bool enabled;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *flags_param = NULL, *pal_param = NULL, *enabled_param = NULL, *text_param = NULL, *textRole = NULL, textRole_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, flags, pal;

	ZVAL_UNDEF(&textRole_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(10, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(pal)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(textRole)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 10, 1, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &flags_param, &pal_param, &enabled_param, &text_param, &textRole);
	zephir_get_strval(&text, text_param);
	if (!textRole) {
		textRole = &textRole_sub;
		textRole = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, flags);
	ZVAL_LONG(&_7, pal);
	ZVAL_BOOL(&_8, (enabled ? 1 : 0));
	phpqt_qproxystyle_draw_item_text(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &text, textRole);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemPixmap)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *alignment_param = NULL, *pixmap_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, alignment, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(alignment)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &alignment_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, alignment);
	ZVAL_LONG(&_7, pixmap);
	phpqt_qproxystyle_draw_item_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, sizeFromContents)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *type_param = NULL, *option_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, type, option, sizeWidth, sizeHeight, widget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &type_param, &option_param, &sizeWidth_param, &sizeHeight_param, &widget_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, sizeWidth);
	ZVAL_LONG(&_4, sizeHeight);
	ZVAL_LONG(&_5, widget);
	phpqt_qproxystyle_size_from_contents(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, subElementRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *element_param = NULL, *option_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, element, option, widget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(element)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &element_param, &option_param, &widget_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, element);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qproxystyle_sub_element_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, subControlRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *sc_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, cc, opt, sc, widget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cc)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(sc)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &cc_param, &opt_param, &sc_param, &widget_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, sc);
	ZVAL_LONG(&_4, widget);
	phpqt_qproxystyle_sub_control_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, itemTextRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zend_bool enabled;
	zval *handle_param = NULL, *fm_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *enabled_param = NULL, *text_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, fm, rX, rY, rWidth, rHeight, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fm)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 0, &handle_param, &fm_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &enabled_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fm);
	ZVAL_LONG(&_2, rX);
	ZVAL_LONG(&_3, rY);
	ZVAL_LONG(&_4, rWidth);
	ZVAL_LONG(&_5, rHeight);
	ZVAL_LONG(&_6, flags);
	ZVAL_BOOL(&_7, (enabled ? 1 : 0));
	phpqt_qproxystyle_item_text_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, itemPixmapRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *pixmap_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, rX, rY, rWidth, rHeight, flags, pixmap;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &pixmap_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	ZVAL_LONG(&_6, pixmap);
	phpqt_qproxystyle_item_pixmap_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, hitTestComplexControl)
{
	zval *handle_param = NULL, *control_param = NULL, *option_param = NULL, *posX_param = NULL, *posY_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, control, option, posX, posY, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &control_param, &option_param, &posX_param, &posY_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, control);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, posX);
	ZVAL_LONG(&_4, posY);
	ZVAL_LONG(&_5, widget);
	RETURN_LONG(phpqt_qproxystyle_hit_test_complex_control(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, styleHint)
{
	zval *handle_param = NULL, *hint_param = NULL, *option_param = NULL, *widget_param = NULL, *returnData_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, hint, option, widget, returnData;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hint)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
		Z_PARAM_LONG(returnData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &handle_param, &hint_param, &option_param, &widget_param, &returnData_param);
	if (!option_param) {
		option = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	if (!returnData_param) {
		returnData = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hint);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	ZVAL_LONG(&_4, returnData);
	RETURN_LONG(phpqt_qproxystyle_style_hint(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, pixelMetric)
{
	zval *handle_param = NULL, *metric_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, metric, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metric)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &metric_param, &option_param, &widget_param);
	if (!option_param) {
		option = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metric);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qproxystyle_pixel_metric(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, layoutSpacing)
{
	zval *handle_param = NULL, *control1_param = NULL, *control2_param = NULL, *orientation_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, control1, control2, orientation, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(control1)
		Z_PARAM_LONG(control2)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 2, &handle_param, &control1_param, &control2_param, &orientation_param, &option_param, &widget_param);
	if (!option_param) {
		option = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, control1);
	ZVAL_LONG(&_2, control2);
	ZVAL_LONG(&_3, orientation);
	ZVAL_LONG(&_4, option);
	ZVAL_LONG(&_5, widget);
	RETURN_LONG(phpqt_qproxystyle_layout_spacing(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardIcon)
{
	zval *handle_param = NULL, *standardIcon_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, standardIcon, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(standardIcon)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &standardIcon_param, &option_param, &widget_param);
	if (!option_param) {
		option = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, standardIcon);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qproxystyle_standard_icon(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardPixmap)
{
	zval *handle_param = NULL, *standardPixmap_param = NULL, *opt_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, standardPixmap, opt, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(standardPixmap)
		Z_PARAM_LONG(opt)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &standardPixmap_param, &opt_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, standardPixmap);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qproxystyle_standard_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, generatedIconPixmap)
{
	zval *handle_param = NULL, *iconMode_param = NULL, *pixmap_param = NULL, *opt_param = NULL, _0, _1, _2, _3;
	zend_long handle, iconMode, pixmap, opt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iconMode)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_LONG(opt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &iconMode_param, &pixmap_param, &opt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iconMode);
	ZVAL_LONG(&_2, pixmap);
	ZVAL_LONG(&_3, opt);
	RETURN_LONG(phpqt_qproxystyle_generated_icon_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardPalette)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qproxystyle_standard_palette(&_0));
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polish)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qproxystyle_polish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polishQPalette)
{
	zval *handle_param = NULL, *pal_param = NULL, _0, _1;
	zend_long handle, pal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pal);
	phpqt_qproxystyle_polish_q_palette(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polishQApplication)
{
	zval *handle_param = NULL, *app_param = NULL, _0, _1;
	zend_long handle, app;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(app)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &app_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, app);
	phpqt_qproxystyle_polish_q_application(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, unpolish)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qproxystyle_unpolish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, unpolishQApplication)
{
	zval *handle_param = NULL, *app_param = NULL, _0, _1;
	zend_long handle, app;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(app)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &app_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, app);
	phpqt_qproxystyle_unpolish_q_application(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qproxystyle_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

