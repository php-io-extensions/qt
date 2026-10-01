
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
#include "src/gui-qsurfaceformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QSurfaceFormat_QSurfaceFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QSurfaceFormat, QSurfaceFormat, qt, gui_qsurfaceformat_qsurfaceformat, qt_gui_qsurfaceformat_qsurfaceformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, staticMetaObject)
{

	RETURN_LONG(phpqt_qsurfaceformat_static_meta_object());
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsurfaceformat_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, new_)
{

	RETURN_LONG(phpqt_qsurfaceformat_new());
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormatFormatOptions)
{
	zval *options_param = NULL, _0;
	zend_long options;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &options_param);
	ZVAL_LONG(&_0, options);
	RETURN_LONG(phpqt_qsurfaceformat_new_q_surface_format_format_options(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormat)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsurfaceformat_new_q_surface_format(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDepthBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_depth_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, depthBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_depth_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStencilBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_stencil_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stencilBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_stencil_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRedBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_red_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, redBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_red_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setGreenBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_green_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, greenBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_green_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setBlueBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_blue_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, blueBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_blue_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setAlphaBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsurfaceformat_set_alpha_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, alphaBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_alpha_buffer_size(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSamples)
{
	zval *handle_param = NULL, *numSamples_param = NULL, _0, _1;
	zend_long handle, numSamples;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(numSamples)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &numSamples_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numSamples);
	phpqt_qsurfaceformat_set_samples(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, samples)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_samples(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapBehavior)
{
	zval *handle_param = NULL, *behavior_param = NULL, _0, _1;
	zend_long handle, behavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &behavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, behavior);
	phpqt_qsurfaceformat_set_swap_behavior(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_swap_behavior(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, hasAlpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsurfaceformat_has_alpha(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setProfile)
{
	zval *handle_param = NULL, *profile_param = NULL, _0, _1;
	zend_long handle, profile;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(profile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &profile_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, profile);
	phpqt_qsurfaceformat_set_profile(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, profile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_profile(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRenderableType)
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
	phpqt_qsurfaceformat_set_renderable_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, renderableType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_renderable_type(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMajorVersion)
{
	zval *handle_param = NULL, *majorVersion_param = NULL, _0, _1;
	zend_long handle, majorVersion;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(majorVersion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &majorVersion_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, majorVersion);
	phpqt_qsurfaceformat_set_major_version(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, majorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_major_version(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMinorVersion)
{
	zval *handle_param = NULL, *minorVersion_param = NULL, _0, _1;
	zend_long handle, minorVersion;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(minorVersion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minorVersion_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, minorVersion);
	phpqt_qsurfaceformat_set_minor_version(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, minorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_minor_version(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, version)
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
	phpqt_qsurfaceformat_version(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setVersion)
{
	zval *handle_param = NULL, *major_param = NULL, *minor_param = NULL, _0, _1, _2;
	zend_long handle, major, minor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(major)
		Z_PARAM_LONG(minor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &major_param, &minor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, major);
	ZVAL_LONG(&_2, minor);
	phpqt_qsurfaceformat_set_version(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stereo)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsurfaceformat_stereo(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStereo)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qsurfaceformat_set_stereo(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qsurfaceformat_set_options(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOption)
{
	zend_bool on;
	zval *handle_param = NULL, *option_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &option_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qsurfaceformat_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, testOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	r = phpqt_qsurfaceformat_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, options)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_options(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_swap_interval(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapInterval)
{
	zval *handle_param = NULL, *interval_param = NULL, _0, _1;
	zend_long handle, interval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(interval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &interval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, interval);
	phpqt_qsurfaceformat_set_swap_interval(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, colorSpace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsurfaceformat_color_space(&_0));
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setColorSpace)
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
	phpqt_qsurfaceformat_set_color_space(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDefaultFormat)
{
	zval *format_param = NULL, _0;
	zend_long format;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format_param);
	ZVAL_LONG(&_0, format);
	phpqt_qsurfaceformat_set_default_format(&_0);
}

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, defaultFormat)
{

	RETURN_LONG(phpqt_qsurfaceformat_default_format());
}

