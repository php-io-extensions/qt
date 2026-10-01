
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
#include "src/widgets-qstyle.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyle_QStyle)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyle, QStyle, qt, widgets_qstyle_qstyle, qt_widgets_qstyle_qstyle_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, staticMetaObject)
{

	RETURN_LONG(phpqt_qstyle_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, tr)
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
	phpqt_qstyle_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, new_)
{

	RETURN_LONG(phpqt_qstyle_new());
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, name)
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
	phpqt_qstyle_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, polish)
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
	phpqt_qstyle_polish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, unpolish)
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
	phpqt_qstyle_unpolish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, polishQApplication)
{
	zval *handle_param = NULL, *application_param = NULL, _0, _1;
	zend_long handle, application;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &application_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, application);
	phpqt_qstyle_polish_q_application(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, unpolishQApplication)
{
	zval *handle_param = NULL, *application_param = NULL, _0, _1;
	zend_long handle, application;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &application_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, application);
	phpqt_qstyle_unpolish_q_application(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, polishQPalette)
{
	zval *handle_param = NULL, *palette_param = NULL, _0, _1;
	zend_long handle, palette;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(palette)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &palette_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, palette);
	phpqt_qstyle_polish_q_palette(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, itemTextRect)
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
	phpqt_qstyle_item_text_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, itemPixmapRect)
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
	phpqt_qstyle_item_pixmap_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawItemText)
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
	phpqt_qstyle_draw_item_text(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &text, textRole);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawItemPixmap)
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
	phpqt_qstyle_draw_item_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardPalette)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyle_standard_palette(&_0));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawPrimitive)
{
	zval *handle_param = NULL, *pe_param = NULL, *opt_param = NULL, *p_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, pe, opt, p, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pe)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(p)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &pe_param, &opt_param, &p_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pe);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, p);
	ZVAL_LONG(&_4, w);
	phpqt_qstyle_draw_primitive(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawControl)
{
	zval *handle_param = NULL, *element_param = NULL, *opt_param = NULL, *p_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, element, opt, p, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(element)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(p)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &element_param, &opt_param, &p_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, element);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, p);
	ZVAL_LONG(&_4, w);
	phpqt_qstyle_draw_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, subElementRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *subElement_param = NULL, *option_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, subElement, option, widget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(subElement)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &subElement_param, &option_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, subElement);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qstyle_sub_element_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawComplexControl)
{
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *p_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, cc, opt, p, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cc)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(p)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &cc_param, &opt_param, &p_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, p);
	ZVAL_LONG(&_4, widget);
	phpqt_qstyle_draw_complex_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, hitTestComplexControl)
{
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, cc, opt, ptX, ptY, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cc)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &cc_param, &opt_param, &ptX_param, &ptY_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, ptX);
	ZVAL_LONG(&_4, ptY);
	ZVAL_LONG(&_5, widget);
	RETURN_LONG(phpqt_qstyle_hit_test_complex_control(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, subControlRect)
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
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cc)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(sc)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &cc_param, &opt_param, &sc_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, sc);
	ZVAL_LONG(&_4, widget);
	phpqt_qstyle_sub_control_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, pixelMetric)
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
	RETURN_LONG(phpqt_qstyle_pixel_metric(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, sizeFromContents)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *ct_param = NULL, *opt_param = NULL, *contentsSizeWidth_param = NULL, *contentsSizeHeight_param = NULL, *w_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, ct, opt, contentsSizeWidth, contentsSizeHeight, w;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ct)
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(contentsSizeWidth)
		Z_PARAM_LONG(contentsSizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &ct_param, &opt_param, &contentsSizeWidth_param, &contentsSizeHeight_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ct);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, contentsSizeWidth);
	ZVAL_LONG(&_4, contentsSizeHeight);
	ZVAL_LONG(&_5, w);
	phpqt_qstyle_size_from_contents(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, styleHint)
{
	zval *handle_param = NULL, *stylehint_param = NULL, *opt_param = NULL, *widget_param = NULL, *returnData_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, stylehint, opt, widget, returnData;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stylehint)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(widget)
		Z_PARAM_LONG(returnData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &handle_param, &stylehint_param, &opt_param, &widget_param, &returnData_param);
	if (!opt_param) {
		opt = 0;
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
	ZVAL_LONG(&_1, stylehint);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	ZVAL_LONG(&_4, returnData);
	RETURN_LONG(phpqt_qstyle_style_hint(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardPixmap)
{
	zval *handle_param = NULL, *standardPixmap_param = NULL, *opt_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, standardPixmap, opt, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(standardPixmap)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &standardPixmap_param, &opt_param, &widget_param);
	if (!opt_param) {
		opt = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, standardPixmap);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qstyle_standard_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardIcon)
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
	RETURN_LONG(phpqt_qstyle_standard_icon(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, generatedIconPixmap)
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
	RETURN_LONG(phpqt_qstyle_generated_icon_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *direction_param = NULL, *boundingRectX_param = NULL, *boundingRectY_param = NULL, *boundingRectWidth_param = NULL, *boundingRectHeight_param = NULL, *logicalRectX_param = NULL, *logicalRectY_param = NULL, *logicalRectWidth_param = NULL, *logicalRectHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long direction, boundingRectX, boundingRectY, boundingRectWidth, boundingRectHeight, logicalRectX, logicalRectY, logicalRectWidth, logicalRectHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(boundingRectX)
		Z_PARAM_LONG(boundingRectY)
		Z_PARAM_LONG(boundingRectWidth)
		Z_PARAM_LONG(boundingRectHeight)
		Z_PARAM_LONG(logicalRectX)
		Z_PARAM_LONG(logicalRectY)
		Z_PARAM_LONG(logicalRectWidth)
		Z_PARAM_LONG(logicalRectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 0, &direction_param, &boundingRectX_param, &boundingRectY_param, &boundingRectWidth_param, &boundingRectHeight_param, &logicalRectX_param, &logicalRectY_param, &logicalRectWidth_param, &logicalRectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, boundingRectX);
	ZVAL_LONG(&_2, boundingRectY);
	ZVAL_LONG(&_3, boundingRectWidth);
	ZVAL_LONG(&_4, boundingRectHeight);
	ZVAL_LONG(&_5, logicalRectX);
	ZVAL_LONG(&_6, logicalRectY);
	ZVAL_LONG(&_7, logicalRectWidth);
	ZVAL_LONG(&_8, logicalRectHeight);
	phpqt_qstyle_visual_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualPos)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *direction_param = NULL, *boundingRectX_param = NULL, *boundingRectY_param = NULL, *boundingRectWidth_param = NULL, *boundingRectHeight_param = NULL, *logicalPosX_param = NULL, *logicalPosY_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long direction, boundingRectX, boundingRectY, boundingRectWidth, boundingRectHeight, logicalPosX, logicalPosY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(boundingRectX)
		Z_PARAM_LONG(boundingRectY)
		Z_PARAM_LONG(boundingRectWidth)
		Z_PARAM_LONG(boundingRectHeight)
		Z_PARAM_LONG(logicalPosX)
		Z_PARAM_LONG(logicalPosY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &direction_param, &boundingRectX_param, &boundingRectY_param, &boundingRectWidth_param, &boundingRectHeight_param, &logicalPosX_param, &logicalPosY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, boundingRectX);
	ZVAL_LONG(&_2, boundingRectY);
	ZVAL_LONG(&_3, boundingRectWidth);
	ZVAL_LONG(&_4, boundingRectHeight);
	ZVAL_LONG(&_5, logicalPosX);
	ZVAL_LONG(&_6, logicalPosY);
	phpqt_qstyle_visual_pos(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, sliderPositionFromValue)
{
	zend_bool upsideDown;
	zval *min_param = NULL, *max_param = NULL, *val_param = NULL, *space_param = NULL, *upsideDown_param = NULL, _0, _1, _2, _3, _4;
	zend_long min, max, val, space;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
		Z_PARAM_LONG(val)
		Z_PARAM_LONG(space)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(upsideDown)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &min_param, &max_param, &val_param, &space_param, &upsideDown_param);
	if (!upsideDown_param) {
		upsideDown = 0;
	} else {
		}
	ZVAL_LONG(&_0, min);
	ZVAL_LONG(&_1, max);
	ZVAL_LONG(&_2, val);
	ZVAL_LONG(&_3, space);
	ZVAL_BOOL(&_4, (upsideDown ? 1 : 0));
	RETURN_LONG(phpqt_qstyle_slider_position_from_value(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, sliderValueFromPosition)
{
	zend_bool upsideDown;
	zval *min_param = NULL, *max_param = NULL, *pos_param = NULL, *space_param = NULL, *upsideDown_param = NULL, _0, _1, _2, _3, _4;
	zend_long min, max, pos, space;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(space)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(upsideDown)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &min_param, &max_param, &pos_param, &space_param, &upsideDown_param);
	if (!upsideDown_param) {
		upsideDown = 0;
	} else {
		}
	ZVAL_LONG(&_0, min);
	ZVAL_LONG(&_1, max);
	ZVAL_LONG(&_2, pos);
	ZVAL_LONG(&_3, space);
	ZVAL_BOOL(&_4, (upsideDown ? 1 : 0));
	RETURN_LONG(phpqt_qstyle_slider_value_from_position(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualAlignment)
{
	zval *direction_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long direction, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &direction_param, &alignment_param);
	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, alignment);
	RETURN_LONG(phpqt_qstyle_visual_alignment(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, alignedRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *direction_param = NULL, *alignment_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *rectangleX_param = NULL, *rectangleY_param = NULL, *rectangleWidth_param = NULL, *rectangleHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long direction, alignment, sizeWidth, sizeHeight, rectangleX, rectangleY, rectangleWidth, rectangleHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(alignment)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(rectangleX)
		Z_PARAM_LONG(rectangleY)
		Z_PARAM_LONG(rectangleWidth)
		Z_PARAM_LONG(rectangleHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &direction_param, &alignment_param, &sizeWidth_param, &sizeHeight_param, &rectangleX_param, &rectangleY_param, &rectangleWidth_param, &rectangleHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, alignment);
	ZVAL_LONG(&_2, sizeWidth);
	ZVAL_LONG(&_3, sizeHeight);
	ZVAL_LONG(&_4, rectangleX);
	ZVAL_LONG(&_5, rectangleY);
	ZVAL_LONG(&_6, rectangleWidth);
	ZVAL_LONG(&_7, rectangleHeight);
	phpqt_qstyle_aligned_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, layoutSpacing)
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
	RETURN_LONG(phpqt_qstyle_layout_spacing(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, combinedLayoutSpacing)
{
	zval *handle_param = NULL, *controls1_param = NULL, *controls2_param = NULL, *orientation_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, controls1, controls2, orientation, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(controls1)
		Z_PARAM_LONG(controls2)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 2, &handle_param, &controls1_param, &controls2_param, &orientation_param, &option_param, &widget_param);
	if (!option_param) {
		option = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, controls1);
	ZVAL_LONG(&_2, controls2);
	ZVAL_LONG(&_3, orientation);
	ZVAL_LONG(&_4, option);
	ZVAL_LONG(&_5, widget);
	RETURN_LONG(phpqt_qstyle_combined_layout_spacing(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QStyle_QStyle, proxy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyle_proxy(&_0));
}

