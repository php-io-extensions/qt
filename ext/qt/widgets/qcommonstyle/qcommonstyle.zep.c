
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
#include "src/widgets-qcommonstyle.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QCommonStyle_QCommonStyle)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QCommonStyle, QCommonStyle, qt, widgets_qcommonstyle_qcommonstyle, qt_widgets_qcommonstyle_qcommonstyle_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, staticMetaObject)
{

	RETURN_LONG(phpqt_qcommonstyle_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, tr)
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
	phpqt_qcommonstyle_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, new_)
{

	RETURN_LONG(phpqt_qcommonstyle_new());
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawPrimitive)
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
	phpqt_qcommonstyle_draw_primitive(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawControl)
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
	phpqt_qcommonstyle_draw_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, subElementRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *r_param = NULL, *opt_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, r, opt, widget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(opt)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &r_param, &opt_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	phpqt_qcommonstyle_sub_element_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawComplexControl)
{
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *p_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, cc, opt, p, w;

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
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &cc_param, &opt_param, &p_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, p);
	ZVAL_LONG(&_4, w);
	phpqt_qcommonstyle_draw_complex_control(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, hitTestComplexControl)
{
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, cc, opt, ptX, ptY, w;

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
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &cc_param, &opt_param, &ptX_param, &ptY_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, ptX);
	ZVAL_LONG(&_4, ptY);
	ZVAL_LONG(&_5, w);
	RETURN_LONG(phpqt_qcommonstyle_hit_test_complex_control(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, subControlRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, *sc_param = NULL, *w_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, cc, opt, sc, w;

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
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &cc_param, &opt_param, &sc_param, &w_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, sc);
	ZVAL_LONG(&_4, w);
	phpqt_qcommonstyle_sub_control_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, sizeFromContents)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *ct_param = NULL, *opt_param = NULL, *contentsSizeWidth_param = NULL, *contentsSizeHeight_param = NULL, *widget_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, ct, opt, contentsSizeWidth, contentsSizeHeight, widget;

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
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &ct_param, &opt_param, &contentsSizeWidth_param, &contentsSizeHeight_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ct);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, contentsSizeWidth);
	ZVAL_LONG(&_4, contentsSizeHeight);
	ZVAL_LONG(&_5, widget);
	phpqt_qcommonstyle_size_from_contents(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, pixelMetric)
{
	zval *handle_param = NULL, *m_param = NULL, *opt_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, m, opt, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(m)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &m_param, &opt_param, &widget_param);
	if (!opt_param) {
		opt = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qcommonstyle_pixel_metric(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, styleHint)
{
	zval *handle_param = NULL, *sh_param = NULL, *opt_param = NULL, *w_param = NULL, *shret_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, sh, opt, w, shret;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sh)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(shret)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &handle_param, &sh_param, &opt_param, &w_param, &shret_param);
	if (!opt_param) {
		opt = 0;
	} else {
		}
	if (!w_param) {
		w = 0;
	} else {
		}
	if (!shret_param) {
		shret = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sh);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, shret);
	RETURN_LONG(phpqt_qcommonstyle_style_hint(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, standardIcon)
{
	zval *handle_param = NULL, *standardIcon_param = NULL, *opt_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, standardIcon, opt, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(standardIcon)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &standardIcon_param, &opt_param, &widget_param);
	if (!opt_param) {
		opt = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, standardIcon);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qcommonstyle_standard_icon(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, standardPixmap)
{
	zval *handle_param = NULL, *sp_param = NULL, *opt_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, sp, opt, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sp)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(opt)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &sp_param, &opt_param, &widget_param);
	if (!opt_param) {
		opt = 0;
	} else {
		}
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sp);
	ZVAL_LONG(&_2, opt);
	ZVAL_LONG(&_3, widget);
	RETURN_LONG(phpqt_qcommonstyle_standard_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, generatedIconPixmap)
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
	RETURN_LONG(phpqt_qcommonstyle_generated_icon_pixmap(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, layoutSpacing)
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
	RETURN_LONG(phpqt_qcommonstyle_layout_spacing(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polish)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qcommonstyle_polish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polishQApplication)
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
	phpqt_qcommonstyle_polish_q_application(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polishQWidget)
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
	phpqt_qcommonstyle_polish_q_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, unpolish)
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
	phpqt_qcommonstyle_unpolish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, unpolishQApplication)
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
	phpqt_qcommonstyle_unpolish_q_application(&_0, &_1);
}

