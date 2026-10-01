
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
#include "src/gui-qopenglcontext.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QOpenGLContext_QOpenGLContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QOpenGLContext, QOpenGLContext, qt, gui_qopenglcontext_qopenglcontext, qt_gui_qopenglcontext_qopenglcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, staticMetaObject)
{

	RETURN_LONG(phpqt_qopenglcontext_static_meta_object());
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, tr)
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
	phpqt_qopenglcontext_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qopenglcontext_new(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qopenglcontext_set_format(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setShareContext)
{
	zval *handle_param = NULL, *shareContext_param = NULL, _0, _1;
	zend_long handle, shareContext;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shareContext)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shareContext_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shareContext);
	phpqt_qopenglcontext_set_share_context(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setScreen)
{
	zval *handle_param = NULL, *screen_param = NULL, _0, _1;
	zend_long handle, screen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &screen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, screen);
	phpqt_qopenglcontext_set_screen(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, create)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglcontext_create(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglcontext_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_format(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, shareContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_share_context(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, shareGroup)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_share_group(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, screen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_screen(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, defaultFramebufferObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_default_framebuffer_object(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, makeCurrent)
{
	zval *handle_param = NULL, *surface_param = NULL, _0, _1;
	zend_long handle, surface, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(surface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &surface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, surface);
	r = phpqt_qopenglcontext_make_current(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, doneCurrent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglcontext_done_current(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, swapBuffers)
{
	zval *handle_param = NULL, *surface_param = NULL, _0, _1;
	zend_long handle, surface;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(surface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &surface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, surface);
	phpqt_qopenglcontext_swap_buffers(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, surface)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_surface(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, currentContext)
{

	RETURN_LONG(phpqt_qopenglcontext_current_context());
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, areSharing)
{
	zval *first_param = NULL, *second_param = NULL, _0, _1;
	zend_long first, second, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &first_param, &second_param);
	ZVAL_LONG(&_0, first);
	ZVAL_LONG(&_1, second);
	r = phpqt_qopenglcontext_are_sharing(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, functions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_functions(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, extraFunctions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglcontext_extra_functions(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, extensions)
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
	phpqt_qopenglcontext_extensions(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, hasExtension)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval extension;
	zval *handle_param = NULL, *extension_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&extension);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(extension)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &extension_param);
	zephir_get_strval(&extension, extension_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglcontext_has_extension(&_0, &extension);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, openGLModuleType)
{

	RETURN_LONG(phpqt_qopenglcontext_open_g_l_module_type());
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, isOpenGLES)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglcontext_is_open_g_l_e_s(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, supportsThreadedOpenGL)
{
	zend_long r = 0;
	r = phpqt_qopenglcontext_supports_threaded_open_g_l();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, globalShareContext)
{

	RETURN_LONG(phpqt_qopenglcontext_global_share_context());
}

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, aboutToBeDestroyed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglcontext_about_to_be_destroyed(&_0);
}

