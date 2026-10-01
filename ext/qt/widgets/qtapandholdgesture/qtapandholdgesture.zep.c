
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
#include "src/widgets-qtapandholdgesture.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTapAndHoldGesture, QTapAndHoldGesture, qt, widgets_qtapandholdgesture_qtapandholdgesture, qt_widgets_qtapandholdgesture_qtapandholdgesture_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, staticMetaObject)
{

	RETURN_LONG(phpqt_qtapandholdgesture_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, tr)
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
	phpqt_qtapandholdgesture_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, new_)
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
	RETURN_LONG(phpqt_qtapandholdgesture_new(&_0));
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, position)
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
	phpqt_qtapandholdgesture_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setPosition)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qtapandholdgesture_set_position(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, setTimeout)
{
	zval *msecs_param = NULL, _0;
	zend_long msecs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &msecs_param);
	ZVAL_LONG(&_0, msecs);
	phpqt_qtapandholdgesture_set_timeout(&_0);
}

PHP_METHOD(Qt_Widgets_QTapAndHoldGesture_QTapAndHoldGesture, timeout)
{

	RETURN_LONG(phpqt_qtapandholdgesture_timeout());
}

