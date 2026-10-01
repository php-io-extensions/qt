
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
#include "src/widgets-qstylepainter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStylePainter_QStylePainter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStylePainter, QStylePainter, qt, widgets_qstylepainter_qstylepainter, qt_widgets_qstylepainter_qstylepainter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, new_)
{

	RETURN_LONG(phpqt_qstylepainter_new());
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, newQWidget)
{
	zval *w_param = NULL, _0;
	zend_long w;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &w_param);
	ZVAL_LONG(&_0, w);
	RETURN_LONG(phpqt_qstylepainter_new_q_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, newQPaintDeviceQWidget)
{
	zval *pd_param = NULL, *w_param = NULL, _0, _1;
	zend_long pd, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pd)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pd_param, &w_param);
	ZVAL_LONG(&_0, pd);
	ZVAL_LONG(&_1, w);
	RETURN_LONG(phpqt_qstylepainter_new_q_paint_device_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, begin)
{
	zval *handle_param = NULL, *w_param = NULL, _0, _1;
	zend_long handle, w, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	r = phpqt_qstylepainter_begin(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, beginQPaintDeviceQWidget)
{
	zval *handle_param = NULL, *pd_param = NULL, *w_param = NULL, _0, _1, _2;
	zend_long handle, pd, w, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pd)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pd_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pd);
	ZVAL_LONG(&_2, w);
	r = phpqt_qstylepainter_begin_q_paint_device_q_widget(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawPrimitive)
{
	zval *handle_param = NULL, *pe_param = NULL, *opt_param = NULL, _0, _1, _2;
	zend_long handle, pe, opt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pe)
		Z_PARAM_LONG(opt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pe_param, &opt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pe);
	ZVAL_LONG(&_2, opt);
	phpqt_qstylepainter_draw_primitive(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawControl)
{
	zval *handle_param = NULL, *ce_param = NULL, *opt_param = NULL, _0, _1, _2;
	zend_long handle, ce, opt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ce)
		Z_PARAM_LONG(opt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ce_param, &opt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ce);
	ZVAL_LONG(&_2, opt);
	phpqt_qstylepainter_draw_control(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawComplexControl)
{
	zval *handle_param = NULL, *cc_param = NULL, *opt_param = NULL, _0, _1, _2;
	zend_long handle, cc, opt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cc)
		Z_PARAM_LONG(opt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cc_param, &opt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cc);
	ZVAL_LONG(&_2, opt);
	phpqt_qstylepainter_draw_complex_control(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawItemText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zend_bool enabled;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *pal_param = NULL, *enabled_param = NULL, *text_param = NULL, *textRole = NULL, textRole_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, rX, rY, rWidth, rHeight, flags, pal;

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
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(9, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(pal)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(textRole)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 1, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &pal_param, &enabled_param, &text_param, &textRole);
	zephir_get_strval(&text, text_param);
	if (!textRole) {
		textRole = &textRole_sub;
		textRole = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	ZVAL_LONG(&_6, pal);
	ZVAL_BOOL(&_7, (enabled ? 1 : 0));
	phpqt_qstylepainter_draw_item_text(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &text, textRole);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawItemPixmap)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *pixmap_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, rX, rY, rWidth, rHeight, flags, pixmap;

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
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	ZVAL_LONG(&_6, pixmap);
	phpqt_qstylepainter_draw_item_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylepainter_style(&_0));
}

