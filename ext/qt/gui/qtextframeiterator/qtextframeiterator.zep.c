
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
#include "src/gui-qtextframeiterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextFrameiterator_QTextFrameiterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextFrameiterator, QTextFrameiterator, qt, gui_qtextframeiterator_qtextframeiterator, qt_gui_qtextframeiterator_qtextframeiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextFrameiterator_QTextFrameiterator, new_)
{

	RETURN_LONG(phpqt_qtextframeiterator_new());
}

PHP_METHOD(Qt_Gui_QTextFrameiterator_QTextFrameiterator, parentFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeiterator_parent_frame(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameiterator_QTextFrameiterator, currentFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeiterator_current_frame(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameiterator_QTextFrameiterator, currentBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeiterator_current_block(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameiterator_QTextFrameiterator, atEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextframeiterator_at_end(&_0);
	RETURN_BOOL(r == 1);
}

