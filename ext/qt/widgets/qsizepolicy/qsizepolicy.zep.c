
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
#include "src/widgets-qsizepolicy.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QSizePolicy_QSizePolicy)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QSizePolicy, QSizePolicy, qt, widgets_qsizepolicy_qsizepolicy, qt_widgets_qsizepolicy_qsizepolicy_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, staticMetaObject)
{

	RETURN_LONG(phpqt_qsizepolicy_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsizepolicy_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, new_)
{

	RETURN_LONG(phpqt_qsizepolicy_new());
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, newQSizePolicyPolicyQSizePolicyPolicyQSizePolicyControlType)
{
	zval *horizontal_param = NULL, *vertical_param = NULL, *type = NULL, type_sub, __$null, _0, _1;
	zend_long horizontal, vertical;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(horizontal)
		Z_PARAM_LONG(vertical)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &horizontal_param, &vertical_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, horizontal);
	ZVAL_LONG(&_1, vertical);
	RETURN_LONG(phpqt_qsizepolicy_new_q_size_policy_policy_q_size_policy_policy_q_size_policy_control_type(&_0, &_1, type));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_horizontal_policy(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, verticalPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_vertical_policy(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, controlType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_control_type(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalPolicy)
{
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle, d;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, d);
	phpqt_qsizepolicy_set_horizontal_policy(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalPolicy)
{
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle, d;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, d);
	phpqt_qsizepolicy_set_vertical_policy(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setControlType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qsizepolicy_set_control_type(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, expandingDirections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_expanding_directions(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHeightForWidth)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	phpqt_qsizepolicy_set_height_for_width(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, hasHeightForWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsizepolicy_has_height_for_width(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setWidthForHeight)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	phpqt_qsizepolicy_set_width_for_height(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, hasWidthForHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsizepolicy_has_width_for_height(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, horizontalStretch)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_horizontal_stretch(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, verticalStretch)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_vertical_stretch(&_0));
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setHorizontalStretch)
{
	zval *handle_param = NULL, *stretchFactor_param = NULL, _0, _1;
	zend_long handle, stretchFactor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stretchFactor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stretchFactor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stretchFactor);
	phpqt_qsizepolicy_set_horizontal_stretch(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setVerticalStretch)
{
	zval *handle_param = NULL, *stretchFactor_param = NULL, _0, _1;
	zend_long handle, stretchFactor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stretchFactor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stretchFactor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stretchFactor);
	phpqt_qsizepolicy_set_vertical_stretch(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, retainSizeWhenHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsizepolicy_retain_size_when_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, setRetainSizeWhenHidden)
{
	zend_bool retainSize;
	zval *handle_param = NULL, *retainSize_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(retainSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &retainSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (retainSize ? 1 : 0));
	phpqt_qsizepolicy_set_retain_size_when_hidden(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, transpose)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsizepolicy_transpose(&_0);
}

PHP_METHOD(Qt_Widgets_QSizePolicy_QSizePolicy, transposed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsizepolicy_transposed(&_0));
}

