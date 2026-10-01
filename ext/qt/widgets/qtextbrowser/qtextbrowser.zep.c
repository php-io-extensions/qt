
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
#include "src/widgets-qtextbrowser.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTextBrowser_QTextBrowser)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTextBrowser, QTextBrowser, qt, widgets_qtextbrowser_qtextbrowser, qt_widgets_qtextbrowser_qtextbrowser_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, staticMetaObject)
{

	RETURN_LONG(phpqt_qtextbrowser_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, tr)
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
	phpqt_qtextbrowser_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, new_)
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
	RETURN_LONG(phpqt_qtextbrowser_new(&_0));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextbrowser_source(&_0));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, sourceType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextbrowser_source_type(&_0));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, searchPaths)
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
	phpqt_qtextbrowser_search_paths(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setSearchPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval paths;
	zval *handle_param = NULL, *paths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&paths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(paths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &paths_param);
	zephir_get_arrval(&paths, paths_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_set_search_paths(&_0, &paths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, loadResource)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *type_param = NULL, *name_param = NULL, result, _0, _1, _2;
	zend_long handle, type, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, name);
	phpqt_qtextbrowser_load_resource(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, isBackwardAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextbrowser_is_backward_available(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, isForwardAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextbrowser_is_forward_available(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, clearHistory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_clear_history(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qtextbrowser_history_title(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyUrl)
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
	RETURN_LONG(phpqt_qtextbrowser_history_url(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backwardHistoryCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextbrowser_backward_history_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forwardHistoryCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextbrowser_forward_history_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, openExternalLinks)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextbrowser_open_external_links(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenExternalLinks)
{
	zend_bool open;
	zval *handle_param = NULL, *open_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(open)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &open_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (open ? 1 : 0));
	phpqt_qtextbrowser_set_open_external_links(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, openLinks)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextbrowser_open_links(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenLinks)
{
	zend_bool open;
	zval *handle_param = NULL, *open_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(open)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &open_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (open ? 1 : 0));
	phpqt_qtextbrowser_set_open_links(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setSource)
{
	zval *handle_param = NULL, *name_param = NULL, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &name_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qtextbrowser_set_source(&_0, &_1, type);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backward)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_backward(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forward)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_forward(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, home)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_home(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, reload)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_reload(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backwardAvailable)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qtextbrowser_backward_available(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forwardAvailable)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qtextbrowser_forward_available(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextbrowser_history_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, sourceChanged)
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
	phpqt_qtextbrowser_source_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, highlighted)
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
	phpqt_qtextbrowser_highlighted(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, anchorClicked)
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
	phpqt_qtextbrowser_anchor_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, event)
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
	r = phpqt_qtextbrowser_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, keyPressEvent)
{
	zval *handle_param = NULL, *ev_param = NULL, _0, _1;
	zend_long handle, ev;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ev);
	phpqt_qtextbrowser_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mouseMoveEvent)
{
	zval *handle_param = NULL, *ev_param = NULL, _0, _1;
	zend_long handle, ev;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ev);
	phpqt_qtextbrowser_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mousePressEvent)
{
	zval *handle_param = NULL, *ev_param = NULL, _0, _1;
	zend_long handle, ev;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ev);
	phpqt_qtextbrowser_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mouseReleaseEvent)
{
	zval *handle_param = NULL, *ev_param = NULL, _0, _1;
	zend_long handle, ev;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ev);
	phpqt_qtextbrowser_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, focusOutEvent)
{
	zval *handle_param = NULL, *ev_param = NULL, _0, _1;
	zend_long handle, ev;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ev);
	phpqt_qtextbrowser_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, focusNextPrevChild)
{
	zend_bool next;
	zval *handle_param = NULL, *next_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(next)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &next_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (next ? 1 : 0));
	r = phpqt_qtextbrowser_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, paintEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qtextbrowser_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, doSetSource)
{
	zval *handle_param = NULL, *name_param = NULL, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &name_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qtextbrowser_do_set_source(&_0, &_1, type);
}

