
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
#include "src/gui-qtextblockiterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextBlockiterator_QTextBlockiterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextBlockiterator, QTextBlockiterator, qt, gui_qtextblockiterator_qtextblockiterator, qt_gui_qtextblockiterator_qtextblockiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextBlockiterator_QTextBlockiterator, new_)
{

	RETURN_LONG(phpqt_qtextblockiterator_new());
}

PHP_METHOD(Qt_Gui_QTextBlockiterator_QTextBlockiterator, fragment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockiterator_fragment(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockiterator_QTextBlockiterator, atEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextblockiterator_at_end(&_0);
	RETURN_BOOL(r == 1);
}

