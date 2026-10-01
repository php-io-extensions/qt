
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
#include "src/widgets-qwhatsthis.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QWhatsThis_QWhatsThis)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QWhatsThis, QWhatsThis, qt, widgets_qwhatsthis_qwhatsthis, qt_widgets_qwhatsthis_qwhatsthis_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, enterWhatsThisMode)
{

	phpqt_qwhatsthis_enter_whats_this_mode();
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, inWhatsThisMode)
{
	zend_long r = 0;
	r = phpqt_qwhatsthis_in_whats_this_mode();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, leaveWhatsThisMode)
{

	phpqt_qwhatsthis_leave_whats_this_mode();
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, showText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *posX_param = NULL, *posY_param = NULL, *text_param = NULL, *w_param = NULL, _0, _1, _2;
	zend_long posX, posY, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &posX_param, &posY_param, &text_param, &w_param);
	zephir_get_strval(&text, text_param);
	if (!w_param) {
		w = 0;
	} else {
		}
	ZVAL_LONG(&_0, posX);
	ZVAL_LONG(&_1, posY);
	ZVAL_LONG(&_2, w);
	phpqt_qwhatsthis_show_text(&_0, &_1, &text, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, hideText)
{

	phpqt_qwhatsthis_hide_text();
}

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, createAction)
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
	RETURN_LONG(phpqt_qwhatsthis_create_action(&_0));
}

