
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
#include "src/gui-qpagesize.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPageSize_QPageSize)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPageSize, QPageSize, qt, gui_qpagesize_qpagesize, qt_gui_qpagesize_qpagesize_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, new_)
{

	RETURN_LONG(phpqt_qpagesize_new());
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQPageSizePageSizeId)
{
	zval *pageSizeId_param = NULL, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pageSizeId_param);
	ZVAL_LONG(&_0, pageSizeId);
	RETURN_LONG(phpqt_qpagesize_new_q_page_size_page_size_id(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQSizeQStringQPageSizeSizeMatchPolicy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *pointSizeWidth_param = NULL, *pointSizeHeight_param = NULL, *name_param = NULL, *matchPolicy = NULL, matchPolicy_sub, __$null, _0, _1;
	zend_long pointSizeWidth, pointSizeHeight;

	ZVAL_UNDEF(&matchPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(pointSizeWidth)
		Z_PARAM_LONG(pointSizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL_OR_NULL(matchPolicy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &pointSizeWidth_param, &pointSizeHeight_param, &name_param, &matchPolicy);
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}
	if (!matchPolicy) {
		matchPolicy = &matchPolicy_sub;
		matchPolicy = &__$null;
	}
	ZVAL_LONG(&_0, pointSizeWidth);
	ZVAL_LONG(&_1, pointSizeHeight);
	RETURN_MM_LONG(phpqt_qpagesize_new_q_size_q_string_q_page_size_size_match_policy(&_0, &_1, &name, matchPolicy));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQSizeFQPageSizeUnitQStringQPageSizeSizeMatchPolicy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zend_long units;
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *units_param = NULL, *name_param = NULL, *matchPolicy = NULL, matchPolicy_sub, __$null, _0, _1, _2;
	double sizeWidth, sizeHeight;

	ZVAL_UNDEF(&matchPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&name);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
		Z_PARAM_LONG(units)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL_OR_NULL(matchPolicy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &sizeWidth_param, &sizeHeight_param, &units_param, &name_param, &matchPolicy);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}
	if (!matchPolicy) {
		matchPolicy = &matchPolicy_sub;
		matchPolicy = &__$null;
	}
	ZVAL_DOUBLE(&_0, sizeWidth);
	ZVAL_DOUBLE(&_1, sizeHeight);
	ZVAL_LONG(&_2, units);
	RETURN_MM_LONG(phpqt_qpagesize_new_q_size_f_q_page_size_unit_q_string_q_page_size_size_match_policy(&_0, &_1, &_2, &name, matchPolicy));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, newQPageSize)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpagesize_new_q_page_size(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, swap)
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
	phpqt_qpagesize_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, isEquivalentTo)
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
	r = phpqt_qpagesize_is_equivalent_to(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpagesize_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, key)
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
	phpqt_qpagesize_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, name)
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
	phpqt_qpagesize_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, id)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagesize_id(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, windowsId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagesize_windows_id(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionSize)
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
	phpqt_qpagesize_definition_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionUnits)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagesize_definition_units(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, size)
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
	phpqt_qpagesize_size(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePoints)
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
	phpqt_qpagesize_size_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePixels)
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
	phpqt_qpagesize_size_pixels(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rect)
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
	phpqt_qpagesize_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rectPoints)
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
	phpqt_qpagesize_rect_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, rectPixels)
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
	phpqt_qpagesize_rect_pixels(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, keyQPageSizePageSizeId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, result, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pageSizeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	phpqt_qpagesize_key_q_page_size_page_size_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, nameQPageSizePageSizeId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, result, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pageSizeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	phpqt_qpagesize_name_q_page_size_page_size_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idQSizeQPageSizeSizeMatchPolicy)
{
	zval *pointSizeWidth_param = NULL, *pointSizeHeight_param = NULL, *matchPolicy = NULL, matchPolicy_sub, __$null, _0, _1;
	zend_long pointSizeWidth, pointSizeHeight;

	ZVAL_UNDEF(&matchPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(pointSizeWidth)
		Z_PARAM_LONG(pointSizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matchPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &pointSizeWidth_param, &pointSizeHeight_param, &matchPolicy);
	if (!matchPolicy) {
		matchPolicy = &matchPolicy_sub;
		matchPolicy = &__$null;
	}
	ZVAL_LONG(&_0, pointSizeWidth);
	ZVAL_LONG(&_1, pointSizeHeight);
	RETURN_LONG(phpqt_qpagesize_id_q_size_q_page_size_size_match_policy(&_0, &_1, matchPolicy));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idQSizeFQPageSizeUnitQPageSizeSizeMatchPolicy)
{
	zend_long units;
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *units_param = NULL, *matchPolicy = NULL, matchPolicy_sub, __$null, _0, _1, _2;
	double sizeWidth, sizeHeight;

	ZVAL_UNDEF(&matchPolicy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
		Z_PARAM_LONG(units)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matchPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &sizeWidth_param, &sizeHeight_param, &units_param, &matchPolicy);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	if (!matchPolicy) {
		matchPolicy = &matchPolicy_sub;
		matchPolicy = &__$null;
	}
	ZVAL_DOUBLE(&_0, sizeWidth);
	ZVAL_DOUBLE(&_1, sizeHeight);
	ZVAL_LONG(&_2, units);
	RETURN_LONG(phpqt_qpagesize_id_q_size_f_q_page_size_unit_q_page_size_size_match_policy(&_0, &_1, &_2, matchPolicy));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, idInt)
{
	zval *windowsId_param = NULL, _0;
	zend_long windowsId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(windowsId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &windowsId_param);
	ZVAL_LONG(&_0, windowsId);
	RETURN_LONG(phpqt_qpagesize_id_int(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, windowsIdQPageSizePageSizeId)
{
	zval *pageSizeId_param = NULL, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pageSizeId_param);
	ZVAL_LONG(&_0, pageSizeId);
	RETURN_LONG(phpqt_qpagesize_windows_id_q_page_size_page_size_id(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionSizeQPageSizePageSizeId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, result, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pageSizeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	phpqt_qpagesize_definition_size_q_page_size_page_size_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, definitionUnitsQPageSizePageSizeId)
{
	zval *pageSizeId_param = NULL, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pageSizeId_param);
	ZVAL_LONG(&_0, pageSizeId);
	RETURN_LONG(phpqt_qpagesize_definition_units_q_page_size_page_size_id(&_0));
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizeQPageSizePageSizeIdQPageSizeUnit)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, *units_param = NULL, result, _0, _1;
	zend_long pageSizeId, units;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pageSizeId)
		Z_PARAM_LONG(units)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &pageSizeId_param, &units_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	ZVAL_LONG(&_1, units);
	phpqt_qpagesize_size_q_page_size_page_size_id_q_page_size_unit(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePointsQPageSizePageSizeId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, result, _0;
	zend_long pageSizeId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pageSizeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pageSizeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	phpqt_qpagesize_size_points_q_page_size_page_size_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPageSize_QPageSize, sizePixelsQPageSizePageSizeIdInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pageSizeId_param = NULL, *resolution_param = NULL, result, _0, _1;
	zend_long pageSizeId, resolution;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pageSizeId)
		Z_PARAM_LONG(resolution)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &pageSizeId_param, &resolution_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pageSizeId);
	ZVAL_LONG(&_1, resolution);
	phpqt_qpagesize_size_pixels_q_page_size_page_size_id_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

