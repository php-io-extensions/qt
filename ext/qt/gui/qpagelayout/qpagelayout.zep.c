
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
#include "src/gui-qpagelayout.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPageLayout_QPageLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPageLayout, QPageLayout, qt, gui_qpagelayout_qpagelayout, qt_gui_qpagelayout_qpagelayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, new_)
{

	RETURN_LONG(phpqt_qpagelayout_new());
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, newQPageSizeQPageLayoutOrientationQMarginsFQPageLayoutUnitQMarginsF)
{
	double marginsLeft, marginsTop, marginsRight, marginsBottom;
	zval *pageSize_param = NULL, *orientation_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, *units = NULL, units_sub, *minMarginsLeft = NULL, minMarginsLeft_sub, *minMarginsTop = NULL, minMarginsTop_sub, *minMarginsRight = NULL, minMarginsRight_sub, *minMarginsBottom = NULL, minMarginsBottom_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long pageSize, orientation;

	ZVAL_UNDEF(&units_sub);
	ZVAL_UNDEF(&minMarginsLeft_sub);
	ZVAL_UNDEF(&minMarginsTop_sub);
	ZVAL_UNDEF(&minMarginsRight_sub);
	ZVAL_UNDEF(&minMarginsBottom_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 11)
		Z_PARAM_LONG(pageSize)
		Z_PARAM_LONG(orientation)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(units)
		Z_PARAM_ZVAL_OR_NULL(minMarginsLeft)
		Z_PARAM_ZVAL_OR_NULL(minMarginsTop)
		Z_PARAM_ZVAL_OR_NULL(minMarginsRight)
		Z_PARAM_ZVAL_OR_NULL(minMarginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 5, &pageSize_param, &orientation_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param, &units, &minMarginsLeft, &minMarginsTop, &minMarginsRight, &minMarginsBottom);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	if (!units) {
		units = &units_sub;
		units = &__$null;
	}
	if (!minMarginsLeft) {
		minMarginsLeft = &minMarginsLeft_sub;
		minMarginsLeft = &__$null;
	}
	if (!minMarginsTop) {
		minMarginsTop = &minMarginsTop_sub;
		minMarginsTop = &__$null;
	}
	if (!minMarginsRight) {
		minMarginsRight = &minMarginsRight_sub;
		minMarginsRight = &__$null;
	}
	if (!minMarginsBottom) {
		minMarginsBottom = &minMarginsBottom_sub;
		minMarginsBottom = &__$null;
	}
	ZVAL_LONG(&_0, pageSize);
	ZVAL_LONG(&_1, orientation);
	ZVAL_DOUBLE(&_2, marginsLeft);
	ZVAL_DOUBLE(&_3, marginsTop);
	ZVAL_DOUBLE(&_4, marginsRight);
	ZVAL_DOUBLE(&_5, marginsBottom);
	RETURN_LONG(phpqt_qpagelayout_new_q_page_size_q_page_layout_orientation_q_margins_f_q_page_layout_unit_q_margins_f(&_0, &_1, &_2, &_3, &_4, &_5, units, minMarginsLeft, minMarginsTop, minMarginsRight, minMarginsBottom));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, newQPageLayout)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpagelayout_new_q_page_layout(&_0));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qpagelayout_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, isEquivalentTo)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	r = phpqt_qpagelayout_is_equivalent_to(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpagelayout_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qpagelayout_set_mode(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, mode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagelayout_mode(&_0));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setPageSize)
{
	zval *handle_param = NULL, *pageSize_param = NULL, *minMarginsLeft = NULL, minMarginsLeft_sub, *minMarginsTop = NULL, minMarginsTop_sub, *minMarginsRight = NULL, minMarginsRight_sub, *minMarginsBottom = NULL, minMarginsBottom_sub, __$null, _0, _1;
	zend_long handle, pageSize;

	ZVAL_UNDEF(&minMarginsLeft_sub);
	ZVAL_UNDEF(&minMarginsTop_sub);
	ZVAL_UNDEF(&minMarginsRight_sub);
	ZVAL_UNDEF(&minMarginsBottom_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pageSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(minMarginsLeft)
		Z_PARAM_ZVAL_OR_NULL(minMarginsTop)
		Z_PARAM_ZVAL_OR_NULL(minMarginsRight)
		Z_PARAM_ZVAL_OR_NULL(minMarginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 4, &handle_param, &pageSize_param, &minMarginsLeft, &minMarginsTop, &minMarginsRight, &minMarginsBottom);
	if (!minMarginsLeft) {
		minMarginsLeft = &minMarginsLeft_sub;
		minMarginsLeft = &__$null;
	}
	if (!minMarginsTop) {
		minMarginsTop = &minMarginsTop_sub;
		minMarginsTop = &__$null;
	}
	if (!minMarginsRight) {
		minMarginsRight = &minMarginsRight_sub;
		minMarginsRight = &__$null;
	}
	if (!minMarginsBottom) {
		minMarginsBottom = &minMarginsBottom_sub;
		minMarginsBottom = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pageSize);
	phpqt_qpagelayout_set_page_size(&_0, &_1, minMarginsLeft, minMarginsTop, minMarginsRight, minMarginsBottom);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, pageSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagelayout_page_size(&_0));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qpagelayout_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagelayout_orientation(&_0));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setUnits)
{
	zval *handle_param = NULL, *units_param = NULL, _0, _1;
	zend_long handle, units;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(units)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &units_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, units);
	phpqt_qpagelayout_set_units(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, units)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagelayout_units(&_0));
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMargins)
{
	double marginsLeft, marginsTop, marginsRight, marginsBottom;
	zval *handle_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, *outOfBoundsPolicy = NULL, outOfBoundsPolicy_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&outOfBoundsPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(outOfBoundsPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param, &outOfBoundsPolicy);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	if (!outOfBoundsPolicy) {
		outOfBoundsPolicy = &outOfBoundsPolicy_sub;
		outOfBoundsPolicy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, marginsLeft);
	ZVAL_DOUBLE(&_2, marginsTop);
	ZVAL_DOUBLE(&_3, marginsRight);
	ZVAL_DOUBLE(&_4, marginsBottom);
	r = phpqt_qpagelayout_set_margins(&_0, &_1, &_2, &_3, &_4, outOfBoundsPolicy);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setLeftMargin)
{
	double leftMargin;
	zval *handle_param = NULL, *leftMargin_param = NULL, *outOfBoundsPolicy = NULL, outOfBoundsPolicy_sub, __$null, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&outOfBoundsPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(leftMargin)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(outOfBoundsPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &leftMargin_param, &outOfBoundsPolicy);
	leftMargin = zephir_get_doubleval(leftMargin_param);
	if (!outOfBoundsPolicy) {
		outOfBoundsPolicy = &outOfBoundsPolicy_sub;
		outOfBoundsPolicy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, leftMargin);
	r = phpqt_qpagelayout_set_left_margin(&_0, &_1, outOfBoundsPolicy);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setRightMargin)
{
	double rightMargin;
	zval *handle_param = NULL, *rightMargin_param = NULL, *outOfBoundsPolicy = NULL, outOfBoundsPolicy_sub, __$null, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&outOfBoundsPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rightMargin)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(outOfBoundsPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &rightMargin_param, &outOfBoundsPolicy);
	rightMargin = zephir_get_doubleval(rightMargin_param);
	if (!outOfBoundsPolicy) {
		outOfBoundsPolicy = &outOfBoundsPolicy_sub;
		outOfBoundsPolicy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rightMargin);
	r = phpqt_qpagelayout_set_right_margin(&_0, &_1, outOfBoundsPolicy);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setTopMargin)
{
	double topMargin;
	zval *handle_param = NULL, *topMargin_param = NULL, *outOfBoundsPolicy = NULL, outOfBoundsPolicy_sub, __$null, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&outOfBoundsPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(topMargin)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(outOfBoundsPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &topMargin_param, &outOfBoundsPolicy);
	topMargin = zephir_get_doubleval(topMargin_param);
	if (!outOfBoundsPolicy) {
		outOfBoundsPolicy = &outOfBoundsPolicy_sub;
		outOfBoundsPolicy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, topMargin);
	r = phpqt_qpagelayout_set_top_margin(&_0, &_1, outOfBoundsPolicy);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setBottomMargin)
{
	double bottomMargin;
	zval *handle_param = NULL, *bottomMargin_param = NULL, *outOfBoundsPolicy = NULL, outOfBoundsPolicy_sub, __$null, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&outOfBoundsPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bottomMargin)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(outOfBoundsPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &bottomMargin_param, &outOfBoundsPolicy);
	bottomMargin = zephir_get_doubleval(bottomMargin_param);
	if (!outOfBoundsPolicy) {
		outOfBoundsPolicy = &outOfBoundsPolicy_sub;
		outOfBoundsPolicy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bottomMargin);
	r = phpqt_qpagelayout_set_bottom_margin(&_0, &_1, outOfBoundsPolicy);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, margins)
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
	phpqt_qpagelayout_margins(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsQPageLayoutUnit)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *units_param = NULL, result, _0, _1;
	zend_long handle, units;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(units)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &units_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, units);
	phpqt_qpagelayout_margins_q_page_layout_unit(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsPoints)
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
	phpqt_qpagelayout_margins_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsPixels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *resolution_param = NULL, result, _0, _1;
	zend_long handle, resolution;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resolution)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &resolution_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resolution);
	phpqt_qpagelayout_margins_pixels(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMinimumMargins)
{
	double minMarginsLeft, minMarginsTop, minMarginsRight, minMarginsBottom;
	zval *handle_param = NULL, *minMarginsLeft_param = NULL, *minMarginsTop_param = NULL, *minMarginsRight_param = NULL, *minMarginsBottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minMarginsLeft)
		Z_PARAM_ZVAL(minMarginsTop)
		Z_PARAM_ZVAL(minMarginsRight)
		Z_PARAM_ZVAL(minMarginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &minMarginsLeft_param, &minMarginsTop_param, &minMarginsRight_param, &minMarginsBottom_param);
	minMarginsLeft = zephir_get_doubleval(minMarginsLeft_param);
	minMarginsTop = zephir_get_doubleval(minMarginsTop_param);
	minMarginsRight = zephir_get_doubleval(minMarginsRight_param);
	minMarginsBottom = zephir_get_doubleval(minMarginsBottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minMarginsLeft);
	ZVAL_DOUBLE(&_2, minMarginsTop);
	ZVAL_DOUBLE(&_3, minMarginsRight);
	ZVAL_DOUBLE(&_4, minMarginsBottom);
	phpqt_qpagelayout_set_minimum_margins(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, minimumMargins)
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
	phpqt_qpagelayout_minimum_margins(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, maximumMargins)
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
	phpqt_qpagelayout_maximum_margins(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRect)
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
	phpqt_qpagelayout_full_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectQPageLayoutUnit)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *units_param = NULL, result, _0, _1;
	zend_long handle, units;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(units)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &units_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, units);
	phpqt_qpagelayout_full_rect_q_page_layout_unit(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectPoints)
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
	phpqt_qpagelayout_full_rect_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectPixels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *resolution_param = NULL, result, _0, _1;
	zend_long handle, resolution;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resolution)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &resolution_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resolution);
	phpqt_qpagelayout_full_rect_pixels(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRect)
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
	phpqt_qpagelayout_paint_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectQPageLayoutUnit)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *units_param = NULL, result, _0, _1;
	zend_long handle, units;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(units)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &units_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, units);
	phpqt_qpagelayout_paint_rect_q_page_layout_unit(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectPoints)
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
	phpqt_qpagelayout_paint_rect_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectPixels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *resolution_param = NULL, result, _0, _1;
	zend_long handle, resolution;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resolution)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &resolution_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resolution);
	phpqt_qpagelayout_paint_rect_pixels(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

