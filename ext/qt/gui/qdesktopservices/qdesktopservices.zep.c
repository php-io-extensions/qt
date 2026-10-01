
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
#include "src/gui-qdesktopservices.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QDesktopServices_QDesktopServices)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QDesktopServices, QDesktopServices, qt, gui_qdesktopservices_qdesktopservices, qt_gui_qdesktopservices_qdesktopservices_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, openUrl)
{
	zval *url_param = NULL, _0;
	zend_long url, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	r = phpqt_qdesktopservices_open_url(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, setUrlHandler)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long receiver;
	zval *scheme_param = NULL, *receiver_param = NULL, *method = NULL, method_sub, _0;
	zval scheme;

	ZVAL_UNDEF(&scheme);
	ZVAL_UNDEF(&method_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(scheme)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &scheme_param, &receiver_param, &method);
	zephir_get_strval(&scheme, scheme_param);
	ZVAL_LONG(&_0, receiver);
	phpqt_qdesktopservices_set_url_handler(&scheme, &_0, method);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, unsetUrlHandler)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *scheme_param = NULL;
	zval scheme;

	ZVAL_UNDEF(&scheme);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(scheme)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &scheme_param);
	zephir_get_strval(&scheme, scheme_param);
	phpqt_qdesktopservices_unset_url_handler(&scheme);
	ZEPHIR_MM_RESTORE();
}

