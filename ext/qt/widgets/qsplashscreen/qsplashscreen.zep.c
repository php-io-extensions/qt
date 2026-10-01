
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
#include "src/widgets-qsplashscreen.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QSplashScreen_QSplashScreen)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QSplashScreen, QSplashScreen, qt, widgets_qsplashscreen_qsplashscreen, qt_widgets_qsplashscreen_qsplashscreen_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, staticMetaObject)
{

	RETURN_LONG(phpqt_qsplashscreen_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, tr)
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
	phpqt_qsplashscreen_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, new_)
{
	zval *pixmap = NULL, pixmap_sub, *f = NULL, f_sub, __$null;

	ZVAL_UNDEF(&pixmap_sub);
	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pixmap)
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &pixmap, &f);
	if (!pixmap) {
		pixmap = &pixmap_sub;
		pixmap = &__$null;
	}
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	RETURN_LONG(phpqt_qsplashscreen_new(pixmap, f));
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, newQScreenQPixmapQtWindowFlags)
{
	zval *screen_param = NULL, *pixmap = NULL, pixmap_sub, *f = NULL, f_sub, __$null, _0;
	zend_long screen;

	ZVAL_UNDEF(&pixmap_sub);
	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(screen)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pixmap)
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &screen_param, &pixmap, &f);
	if (!pixmap) {
		pixmap = &pixmap_sub;
		pixmap = &__$null;
	}
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	ZVAL_LONG(&_0, screen);
	RETURN_LONG(phpqt_qsplashscreen_new_q_screen_q_pixmap_qt_window_flags(&_0, pixmap, f));
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, setPixmap)
{
	zval *handle_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long handle, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixmap);
	phpqt_qsplashscreen_set_pixmap(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, pixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsplashscreen_pixmap(&_0));
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, finish)
{
	zval *handle_param = NULL, *w_param = NULL, _0, _1;
	zend_long handle, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	phpqt_qsplashscreen_finish(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, repaint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsplashscreen_repaint(&_0);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, message)
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
	phpqt_qsplashscreen_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, showMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *handle_param = NULL, *message_param = NULL, *alignment = NULL, alignment_sub, *color = NULL, color_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&alignment_sub);
	ZVAL_UNDEF(&color_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(message)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(alignment)
		Z_PARAM_ZVAL_OR_NULL(color)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &message_param, &alignment, &color);
	zephir_get_strval(&message, message_param);
	if (!alignment) {
		alignment = &alignment_sub;
		alignment = &__$null;
	}
	if (!color) {
		color = &color_sub;
		color = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsplashscreen_show_message(&_0, &message, alignment, color);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, clearMessage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsplashscreen_clear_message(&_0);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, messageChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *handle_param = NULL, *message_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsplashscreen_message_changed(&_0, &message);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qsplashscreen_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, drawContents)
{
	zval *handle_param = NULL, *painter_param = NULL, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &painter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qsplashscreen_draw_contents(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, mousePressEvent)
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
	phpqt_qsplashscreen_mouse_press_event(&_0, &_1);
}

