
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
#include "src/gui-qcolorspace.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QColorSpace_QColorSpace)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QColorSpace, QColorSpace, qt, gui_qcolorspace_qcolorspace, qt_gui_qcolorspace_qcolorspace_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, staticMetaObject)
{

	RETURN_LONG(phpqt_qcolorspace_static_meta_object());
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolorspace_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, new_)
{

	RETURN_LONG(phpqt_qcolorspace_new());
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpaceNamedColorSpace)
{
	zval *namedColorSpace_param = NULL, _0;
	zend_long namedColorSpace;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(namedColorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &namedColorSpace_param);
	ZVAL_LONG(&_0, namedColorSpace);
	RETURN_LONG(phpqt_qcolorspace_new_q_color_space_named_color_space(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQPointFQColorSpaceTransferFunctionFloat)
{
	zend_long transferFunction;
	zval *whitePointX_param = NULL, *whitePointY_param = NULL, *transferFunction_param = NULL, *gamma_param = NULL, _0, _1, _2, _3;
	double whitePointX, whitePointY, gamma;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(whitePointX)
		Z_PARAM_ZVAL(whitePointY)
		Z_PARAM_LONG(transferFunction)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &whitePointX_param, &whitePointY_param, &transferFunction_param, &gamma_param);
	whitePointX = zephir_get_doubleval(whitePointX_param);
	whitePointY = zephir_get_doubleval(whitePointY_param);
	if (!gamma_param) {
		gamma = 0.0;
	} else {
		gamma = zephir_get_doubleval(gamma_param);
	}
	ZVAL_DOUBLE(&_0, whitePointX);
	ZVAL_DOUBLE(&_1, whitePointY);
	ZVAL_LONG(&_2, transferFunction);
	ZVAL_DOUBLE(&_3, gamma);
	RETURN_LONG(phpqt_qcolorspace_new_q_point_f_q_color_space_transfer_function_float(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesQColorSpaceTransferFunctionFloat)
{
	double gamma;
	zval *primaries_param = NULL, *transferFunction_param = NULL, *gamma_param = NULL, _0, _1, _2;
	zend_long primaries, transferFunction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(primaries)
		Z_PARAM_LONG(transferFunction)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &primaries_param, &transferFunction_param, &gamma_param);
	if (!gamma_param) {
		gamma = 0.0;
	} else {
		gamma = zephir_get_doubleval(gamma_param);
	}
	ZVAL_LONG(&_0, primaries);
	ZVAL_LONG(&_1, transferFunction);
	ZVAL_DOUBLE(&_2, gamma);
	RETURN_LONG(phpqt_qcolorspace_new_q_color_space_primaries_q_color_space_transfer_function_float(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesFloat)
{
	double gamma;
	zval *primaries_param = NULL, *gamma_param = NULL, _0, _1;
	zend_long primaries;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(primaries)
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &primaries_param, &gamma_param);
	gamma = zephir_get_doubleval(gamma_param);
	ZVAL_LONG(&_0, primaries);
	ZVAL_DOUBLE(&_1, gamma);
	RETURN_LONG(phpqt_qcolorspace_new_q_color_space_primaries_float(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQPointFQPointFQPointFQPointFQColorSpaceTransferFunctionFloat)
{
	zend_long transferFunction;
	zval *whitePointX_param = NULL, *whitePointY_param = NULL, *redPointX_param = NULL, *redPointY_param = NULL, *greenPointX_param = NULL, *greenPointY_param = NULL, *bluePointX_param = NULL, *bluePointY_param = NULL, *transferFunction_param = NULL, *gamma_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	double whitePointX, whitePointY, redPointX, redPointY, greenPointX, greenPointY, bluePointX, bluePointY, gamma;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(9, 10)
		Z_PARAM_ZVAL(whitePointX)
		Z_PARAM_ZVAL(whitePointY)
		Z_PARAM_ZVAL(redPointX)
		Z_PARAM_ZVAL(redPointY)
		Z_PARAM_ZVAL(greenPointX)
		Z_PARAM_ZVAL(greenPointY)
		Z_PARAM_ZVAL(bluePointX)
		Z_PARAM_ZVAL(bluePointY)
		Z_PARAM_LONG(transferFunction)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 1, &whitePointX_param, &whitePointY_param, &redPointX_param, &redPointY_param, &greenPointX_param, &greenPointY_param, &bluePointX_param, &bluePointY_param, &transferFunction_param, &gamma_param);
	whitePointX = zephir_get_doubleval(whitePointX_param);
	whitePointY = zephir_get_doubleval(whitePointY_param);
	redPointX = zephir_get_doubleval(redPointX_param);
	redPointY = zephir_get_doubleval(redPointY_param);
	greenPointX = zephir_get_doubleval(greenPointX_param);
	greenPointY = zephir_get_doubleval(greenPointY_param);
	bluePointX = zephir_get_doubleval(bluePointX_param);
	bluePointY = zephir_get_doubleval(bluePointY_param);
	if (!gamma_param) {
		gamma = 0.0;
	} else {
		gamma = zephir_get_doubleval(gamma_param);
	}
	ZVAL_DOUBLE(&_0, whitePointX);
	ZVAL_DOUBLE(&_1, whitePointY);
	ZVAL_DOUBLE(&_2, redPointX);
	ZVAL_DOUBLE(&_3, redPointY);
	ZVAL_DOUBLE(&_4, greenPointX);
	ZVAL_DOUBLE(&_5, greenPointY);
	ZVAL_DOUBLE(&_6, bluePointX);
	ZVAL_DOUBLE(&_7, bluePointY);
	ZVAL_LONG(&_8, transferFunction);
	ZVAL_DOUBLE(&_9, gamma);
	RETURN_LONG(phpqt_qcolorspace_new_q_point_f_q_point_f_q_point_f_q_point_f_q_color_space_transfer_function_float(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpace)
{
	zval *colorSpace_param = NULL, _0;
	zend_long colorSpace;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(colorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &colorSpace_param);
	ZVAL_LONG(&_0, colorSpace);
	RETURN_LONG(phpqt_qcolorspace_new_q_color_space(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, swap)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, _0, _1;
	zend_long handle, colorSpace;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorSpace_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	phpqt_qcolorspace_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, primaries)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolorspace_primaries(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transferFunction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolorspace_transfer_function(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, gamma)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolorspace_gamma(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, description)
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
	phpqt_qcolorspace_description(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *description_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolorspace_set_description(&_0, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setTransferFunction)
{
	double gamma;
	zval *handle_param = NULL, *transferFunction_param = NULL, *gamma_param = NULL, _0, _1, _2;
	zend_long handle, transferFunction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transferFunction)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &transferFunction_param, &gamma_param);
	if (!gamma_param) {
		gamma = 0.0;
	} else {
		gamma = zephir_get_doubleval(gamma_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transferFunction);
	ZVAL_DOUBLE(&_2, gamma);
	phpqt_qcolorspace_set_transfer_function(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, withTransferFunction)
{
	double gamma;
	zval *handle_param = NULL, *transferFunction_param = NULL, *gamma_param = NULL, _0, _1, _2;
	zend_long handle, transferFunction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transferFunction)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(gamma)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &transferFunction_param, &gamma_param);
	if (!gamma_param) {
		gamma = 0.0;
	} else {
		gamma = zephir_get_doubleval(gamma_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transferFunction);
	ZVAL_DOUBLE(&_2, gamma);
	RETURN_LONG(phpqt_qcolorspace_with_transfer_function(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setPrimaries)
{
	zval *handle_param = NULL, *primariesId_param = NULL, _0, _1;
	zend_long handle, primariesId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(primariesId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &primariesId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, primariesId);
	phpqt_qcolorspace_set_primaries(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setPrimariesQPointFQPointFQPointFQPointF)
{
	double whitePointX, whitePointY, redPointX, redPointY, greenPointX, greenPointY, bluePointX, bluePointY;
	zval *handle_param = NULL, *whitePointX_param = NULL, *whitePointY_param = NULL, *redPointX_param = NULL, *redPointY_param = NULL, *greenPointX_param = NULL, *greenPointY_param = NULL, *bluePointX_param = NULL, *bluePointY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle;

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
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(whitePointX)
		Z_PARAM_ZVAL(whitePointY)
		Z_PARAM_ZVAL(redPointX)
		Z_PARAM_ZVAL(redPointY)
		Z_PARAM_ZVAL(greenPointX)
		Z_PARAM_ZVAL(greenPointY)
		Z_PARAM_ZVAL(bluePointX)
		Z_PARAM_ZVAL(bluePointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &whitePointX_param, &whitePointY_param, &redPointX_param, &redPointY_param, &greenPointX_param, &greenPointY_param, &bluePointX_param, &bluePointY_param);
	whitePointX = zephir_get_doubleval(whitePointX_param);
	whitePointY = zephir_get_doubleval(whitePointY_param);
	redPointX = zephir_get_doubleval(redPointX_param);
	redPointY = zephir_get_doubleval(redPointY_param);
	greenPointX = zephir_get_doubleval(greenPointX_param);
	greenPointY = zephir_get_doubleval(greenPointY_param);
	bluePointX = zephir_get_doubleval(bluePointX_param);
	bluePointY = zephir_get_doubleval(bluePointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, whitePointX);
	ZVAL_DOUBLE(&_2, whitePointY);
	ZVAL_DOUBLE(&_3, redPointX);
	ZVAL_DOUBLE(&_4, redPointY);
	ZVAL_DOUBLE(&_5, greenPointX);
	ZVAL_DOUBLE(&_6, greenPointY);
	ZVAL_DOUBLE(&_7, bluePointX);
	ZVAL_DOUBLE(&_8, bluePointY);
	phpqt_qcolorspace_set_primaries_q_point_f_q_point_f_q_point_f_q_point_f(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setWhitePoint)
{
	double whitePointX, whitePointY;
	zval *handle_param = NULL, *whitePointX_param = NULL, *whitePointY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(whitePointX)
		Z_PARAM_ZVAL(whitePointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &whitePointX_param, &whitePointY_param);
	whitePointX = zephir_get_doubleval(whitePointX_param);
	whitePointY = zephir_get_doubleval(whitePointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, whitePointX);
	ZVAL_DOUBLE(&_2, whitePointY);
	phpqt_qcolorspace_set_white_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, whitePoint)
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
	phpqt_qcolorspace_white_point(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transformModel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolorspace_transform_model(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, colorModel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolorspace_color_model(&_0));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, detach)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolorspace_detach(&_0);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcolorspace_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, isValidTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcolorspace_is_valid_target(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, fromIccProfile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *iccProfile_param = NULL;
	zval iccProfile;

	ZVAL_UNDEF(&iccProfile);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(iccProfile)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &iccProfile_param);
	zephir_get_strval(&iccProfile, iccProfile_param);
	RETURN_MM_LONG(phpqt_qcolorspace_from_icc_profile(&iccProfile));
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, iccProfile)
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
	phpqt_qcolorspace_icc_profile(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transformationToColorSpace)
{
	zval *handle_param = NULL, *colorspace_param = NULL, _0, _1;
	zend_long handle, colorspace;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorspace_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorspace);
	RETURN_LONG(phpqt_qcolorspace_transformation_to_color_space(&_0, &_1));
}

