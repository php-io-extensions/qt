
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
#include "src/gui-qicondragevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QIconDragEvent_QIconDragEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QIconDragEvent, QIconDragEvent, qt, gui_qicondragevent_qicondragevent, qt_gui_qicondragevent_qicondragevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qicondragevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qicondragevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QIconDragEvent_QIconDragEvent, new2)
{

	RETURN_LONG(phpqt_qicondragevent_new2());
}

