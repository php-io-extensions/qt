
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
#include "src/gui-qaccessibleeditabletextinterface.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleEditableTextInterface_QAccessibleEditableTextInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleEditableTextInterface, QAccessibleEditableTextInterface, qt, gui_qaccessibleeditabletextinterface_qaccessibleeditabletextinterface, qt_gui_qaccessibleeditabletextinterface_qaccessibleeditabletextinterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleEditableTextInterface_QAccessibleEditableTextInterface, deleteText)
{
	zval *handle_param = NULL, *startOffset_param = NULL, *endOffset_param = NULL, _0, _1, _2;
	zend_long handle, startOffset, endOffset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startOffset)
		Z_PARAM_LONG(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &startOffset_param, &endOffset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startOffset);
	ZVAL_LONG(&_2, endOffset);
	phpqt_qaccessibleeditabletextinterface_delete_text(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAccessibleEditableTextInterface_QAccessibleEditableTextInterface, insertText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *offset_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &offset_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	phpqt_qaccessibleeditabletextinterface_insert_text(&_0, &_1, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QAccessibleEditableTextInterface_QAccessibleEditableTextInterface, replaceText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *startOffset_param = NULL, *endOffset_param = NULL, *text_param = NULL, _0, _1, _2;
	zend_long handle, startOffset, endOffset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startOffset)
		Z_PARAM_LONG(endOffset)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &startOffset_param, &endOffset_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startOffset);
	ZVAL_LONG(&_2, endOffset);
	phpqt_qaccessibleeditabletextinterface_replace_text(&_0, &_1, &_2, &text);
	ZEPHIR_MM_RESTORE();
}

