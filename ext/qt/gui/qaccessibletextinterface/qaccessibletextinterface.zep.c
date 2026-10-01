
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
#include "src/gui-qaccessibletextinterface.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleTextInterface, QAccessibleTextInterface, qt, gui_qaccessibletextinterface_qaccessibletextinterface, qt_gui_qaccessibletextinterface_qaccessibletextinterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selection)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *selectionIndex_param = NULL, *startOffset = NULL, startOffset_sub, *endOffset = NULL, endOffset_sub, result, _0, _1;
	zend_long handle, selectionIndex;

	ZVAL_UNDEF(&startOffset_sub);
	ZVAL_UNDEF(&endOffset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionIndex)
		Z_PARAM_ZVAL(startOffset)
		Z_PARAM_ZVAL(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &selectionIndex_param, &startOffset, &endOffset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionIndex);
	phpqt_qaccessibletextinterface_selection(&result, &_0, &_1, startOffset, endOffset);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, selectionCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextinterface_selection_count(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, addSelection)
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
	phpqt_qaccessibletextinterface_add_selection(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, removeSelection)
{
	zval *handle_param = NULL, *selectionIndex_param = NULL, _0, _1;
	zend_long handle, selectionIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionIndex);
	phpqt_qaccessibletextinterface_remove_selection(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setSelection)
{
	zval *handle_param = NULL, *selectionIndex_param = NULL, *startOffset_param = NULL, *endOffset_param = NULL, _0, _1, _2, _3;
	zend_long handle, selectionIndex, startOffset, endOffset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionIndex)
		Z_PARAM_LONG(startOffset)
		Z_PARAM_LONG(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &selectionIndex_param, &startOffset_param, &endOffset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionIndex);
	ZVAL_LONG(&_2, startOffset);
	ZVAL_LONG(&_3, endOffset);
	phpqt_qaccessibletextinterface_set_selection(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, cursorPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextinterface_cursor_position(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, setCursorPosition)
{
	zval *handle_param = NULL, *position_param = NULL, _0, _1;
	zend_long handle, position;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &position_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, position);
	phpqt_qaccessibletextinterface_set_cursor_position(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, text)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *startOffset_param = NULL, *endOffset_param = NULL, result, _0, _1, _2;
	zend_long handle, startOffset, endOffset;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startOffset)
		Z_PARAM_LONG(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &startOffset_param, &endOffset_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startOffset);
	ZVAL_LONG(&_2, endOffset);
	phpqt_qaccessibletextinterface_text(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textBeforeOffset)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, *boundaryType_param = NULL, *startOffset = NULL, startOffset_sub, *endOffset = NULL, endOffset_sub, result, _0, _1, _2;
	zend_long handle, offset, boundaryType;

	ZVAL_UNDEF(&startOffset_sub);
	ZVAL_UNDEF(&endOffset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(boundaryType)
		Z_PARAM_ZVAL(startOffset)
		Z_PARAM_ZVAL(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &offset_param, &boundaryType_param, &startOffset, &endOffset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, boundaryType);
	phpqt_qaccessibletextinterface_text_before_offset(&result, &_0, &_1, &_2, startOffset, endOffset);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAfterOffset)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, *boundaryType_param = NULL, *startOffset = NULL, startOffset_sub, *endOffset = NULL, endOffset_sub, result, _0, _1, _2;
	zend_long handle, offset, boundaryType;

	ZVAL_UNDEF(&startOffset_sub);
	ZVAL_UNDEF(&endOffset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(boundaryType)
		Z_PARAM_ZVAL(startOffset)
		Z_PARAM_ZVAL(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &offset_param, &boundaryType_param, &startOffset, &endOffset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, boundaryType);
	phpqt_qaccessibletextinterface_text_after_offset(&result, &_0, &_1, &_2, startOffset, endOffset);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, textAtOffset)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, *boundaryType_param = NULL, *startOffset = NULL, startOffset_sub, *endOffset = NULL, endOffset_sub, result, _0, _1, _2;
	zend_long handle, offset, boundaryType;

	ZVAL_UNDEF(&startOffset_sub);
	ZVAL_UNDEF(&endOffset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(boundaryType)
		Z_PARAM_ZVAL(startOffset)
		Z_PARAM_ZVAL(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &offset_param, &boundaryType_param, &startOffset, &endOffset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, boundaryType);
	phpqt_qaccessibletextinterface_text_at_offset(&result, &_0, &_1, &_2, startOffset, endOffset);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextinterface_character_count(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, characterRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, result, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &offset_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	phpqt_qaccessibletextinterface_character_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, offsetAtPoint)
{
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2;
	zend_long handle, pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pointX_param, &pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointX);
	ZVAL_LONG(&_2, pointY);
	RETURN_LONG(phpqt_qaccessibletextinterface_offset_at_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, scrollToSubstring)
{
	zval *handle_param = NULL, *startIndex_param = NULL, *endIndex_param = NULL, _0, _1, _2;
	zend_long handle, startIndex, endIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startIndex)
		Z_PARAM_LONG(endIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &startIndex_param, &endIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startIndex);
	ZVAL_LONG(&_2, endIndex);
	phpqt_qaccessibletextinterface_scroll_to_substring(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAccessibleTextInterface_QAccessibleTextInterface, attributes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, *startOffset = NULL, startOffset_sub, *endOffset = NULL, endOffset_sub, result, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&startOffset_sub);
	ZVAL_UNDEF(&endOffset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_ZVAL(startOffset)
		Z_PARAM_ZVAL(endOffset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &offset_param, &startOffset, &endOffset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	phpqt_qaccessibletextinterface_attributes(&result, &_0, &_1, startOffset, endOffset);
	RETURN_CCTOR(&result);
}

