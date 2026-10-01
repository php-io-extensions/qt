
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
#include "src/gui-qoffscreensurface.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QOffscreenSurface_QOffscreenSurface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QOffscreenSurface, QOffscreenSurface, qt, gui_qoffscreensurface_qoffscreensurface, qt_gui_qoffscreensurface_qoffscreensurface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, staticMetaObject)
{

	RETURN_LONG(phpqt_qoffscreensurface_static_meta_object());
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, tr)
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
	phpqt_qoffscreensurface_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, new_)
{
	zval *screen_param = NULL, *parent__param = NULL, _0, _1;
	zend_long screen, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(screen)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &screen_param, &parent__param);
	if (!screen_param) {
		screen = 0;
	} else {
		}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, screen);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qoffscreensurface_new(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, surfaceType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoffscreensurface_surface_type(&_0));
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, create)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qoffscreensurface_create(&_0);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, destroy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qoffscreensurface_destroy(&_0);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qoffscreensurface_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setFormat)
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
	phpqt_qoffscreensurface_set_format(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoffscreensurface_format(&_0));
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, requestedFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoffscreensurface_requested_format(&_0));
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, size)
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
	phpqt_qoffscreensurface_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoffscreensurface_screen(&_0));
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setScreen)
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
	phpqt_qoffscreensurface_set_screen(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screenChanged)
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
	phpqt_qoffscreensurface_screen_changed(&_0, &_1);
}

