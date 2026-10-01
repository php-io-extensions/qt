
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
#include "src/gui-qstandarditem.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QStandardItem_QStandardItem)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QStandardItem, QStandardItem, qt, gui_qstandarditem_qstandarditem, qt_gui_qstandarditem_qstandarditem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, new_)
{

	RETURN_LONG(phpqt_qstandarditem_new());
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *text_param = NULL;
	zval text;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &text_param);
	zephir_get_strval(&text, text_param);
	RETURN_MM_LONG(phpqt_qstandarditem_new_q_string(&text));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, newQIconQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *icon_param = NULL, *text_param = NULL, _0;
	zend_long icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &icon_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, icon);
	RETURN_MM_LONG(phpqt_qstandarditem_new_q_icon_q_string(&_0, &text));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, newIntInt)
{
	zval *rows_param = NULL, *columns_param = NULL, _0, _1;
	zend_long rows, columns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(rows)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(columns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &rows_param, &columns_param);
	if (!columns_param) {
		columns = 1;
	} else {
		}
	ZVAL_LONG(&_0, rows);
	ZVAL_LONG(&_1, columns);
	RETURN_LONG(phpqt_qstandarditem_new_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *role = NULL, role_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_data(&result, &_0, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, multiData)
{
	zval *handle_param = NULL, *roleDataSpan_param = NULL, _0, _1;
	zend_long handle, roleDataSpan;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(roleDataSpan)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &roleDataSpan_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, roleDataSpan);
	phpqt_qstandarditem_multi_data(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setData)
{
	zval *handle_param = NULL, *value = NULL, value_sub, *role = NULL, role_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &value, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_data(&_0, value, role);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, clearData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_clear_data(&_0);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, text)
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
	phpqt_qstandarditem_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, icon)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_icon(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setIcon)
{
	zval *handle_param = NULL, *icon_param = NULL, _0, _1;
	zend_long handle, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &icon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	phpqt_qstandarditem_set_icon(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, toolTip)
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
	phpqt_qstandarditem_tool_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval toolTip;
	zval *handle_param = NULL, *toolTip_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&toolTip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(toolTip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &toolTip_param);
	zephir_get_strval(&toolTip, toolTip_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_tool_tip(&_0, &toolTip);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, statusTip)
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
	phpqt_qstandarditem_status_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setStatusTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval statusTip;
	zval *handle_param = NULL, *statusTip_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&statusTip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(statusTip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &statusTip_param);
	zephir_get_strval(&statusTip, statusTip_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_status_tip(&_0, &statusTip);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, whatsThis)
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
	phpqt_qstandarditem_whats_this(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setWhatsThis)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval whatsThis;
	zval *handle_param = NULL, *whatsThis_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&whatsThis);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(whatsThis)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &whatsThis_param);
	zephir_get_strval(&whatsThis, whatsThis_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_whats_this(&_0, &whatsThis);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, sizeHint)
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
	phpqt_qstandarditem_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setSizeHint)
{
	zval *handle_param = NULL, *sizeHintWidth_param = NULL, *sizeHintHeight_param = NULL, _0, _1, _2;
	zend_long handle, sizeHintWidth, sizeHintHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeHintWidth)
		Z_PARAM_LONG(sizeHintHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeHintWidth_param, &sizeHintHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeHintWidth);
	ZVAL_LONG(&_2, sizeHintHeight);
	phpqt_qstandarditem_set_size_hint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_font(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setFont)
{
	zval *handle_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	phpqt_qstandarditem_set_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, textAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_text_alignment(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setTextAlignment)
{
	zval *handle_param = NULL, *textAlignment_param = NULL, _0, _1;
	zend_long handle, textAlignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textAlignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textAlignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textAlignment);
	phpqt_qstandarditem_set_text_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, background)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_background(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setBackground)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qstandarditem_set_background(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, foreground)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_foreground(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setForeground)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qstandarditem_set_foreground(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, checkState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_check_state(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setCheckState)
{
	zval *handle_param = NULL, *checkState_param = NULL, _0, _1;
	zend_long handle, checkState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(checkState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &checkState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, checkState);
	phpqt_qstandarditem_set_check_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, accessibleText)
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
	phpqt_qstandarditem_accessible_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setAccessibleText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval accessibleText;
	zval *handle_param = NULL, *accessibleText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&accessibleText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(accessibleText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &accessibleText_param);
	zephir_get_strval(&accessibleText, accessibleText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_accessible_text(&_0, &accessibleText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, accessibleDescription)
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
	phpqt_qstandarditem_accessible_description(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setAccessibleDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval accessibleDescription;
	zval *handle_param = NULL, *accessibleDescription_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&accessibleDescription);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(accessibleDescription)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &accessibleDescription_param);
	zephir_get_strval(&accessibleDescription, accessibleDescription_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_set_accessible_description(&_0, &accessibleDescription);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_flags(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setFlags)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	phpqt_qstandarditem_set_flags(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setEnabled)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qstandarditem_set_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setEditable)
{
	zend_bool editable;
	zval *handle_param = NULL, *editable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (editable ? 1 : 0));
	phpqt_qstandarditem_set_editable(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isSelectable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_selectable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setSelectable)
{
	zend_bool selectable;
	zval *handle_param = NULL, *selectable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selectable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selectable ? 1 : 0));
	phpqt_qstandarditem_set_selectable(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isCheckable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_checkable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setCheckable)
{
	zend_bool checkable;
	zval *handle_param = NULL, *checkable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(checkable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &checkable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (checkable ? 1 : 0));
	phpqt_qstandarditem_set_checkable(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isAutoTristate)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_auto_tristate(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setAutoTristate)
{
	zend_bool tristate;
	zval *handle_param = NULL, *tristate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(tristate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tristate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (tristate ? 1 : 0));
	phpqt_qstandarditem_set_auto_tristate(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isUserTristate)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_user_tristate(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setUserTristate)
{
	zend_bool tristate;
	zval *handle_param = NULL, *tristate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(tristate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tristate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (tristate ? 1 : 0));
	phpqt_qstandarditem_set_user_tristate(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isDragEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_drag_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setDragEnabled)
{
	zend_bool dragEnabled;
	zval *handle_param = NULL, *dragEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(dragEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dragEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (dragEnabled ? 1 : 0));
	phpqt_qstandarditem_set_drag_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, isDropEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_is_drop_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setDropEnabled)
{
	zend_bool dropEnabled;
	zval *handle_param = NULL, *dropEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(dropEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dropEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (dropEnabled ? 1 : 0));
	phpqt_qstandarditem_set_drop_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, parent_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_parent(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, row)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_row(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, column)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_column(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, index)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_index(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, model)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_model(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, rowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_row_count(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setRowCount)
{
	zval *handle_param = NULL, *rows_param = NULL, _0, _1;
	zend_long handle, rows;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rows);
	phpqt_qstandarditem_set_row_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, columnCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_column_count(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setColumnCount)
{
	zval *handle_param = NULL, *columns_param = NULL, _0, _1;
	zend_long handle, columns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(columns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &columns_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columns);
	phpqt_qstandarditem_set_column_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, hasChildren)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstandarditem_has_children(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, child)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &row_param, &column_param);
	if (!column_param) {
		column = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qstandarditem_child(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setChild)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *item_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, column, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &column_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, item);
	phpqt_qstandarditem_set_child(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, setChildIntQStandardItem)
{
	zval *handle_param = NULL, *row_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, row, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, item);
	phpqt_qstandarditem_set_child_int_q_standard_item(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *row_param = NULL, *items_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &row_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qstandarditem_insert_row(&_0, &_1, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertColumn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *column_param = NULL, *items_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &column_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qstandarditem_insert_column(&_0, &_1, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertRows)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *row_param = NULL, *items_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &row_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qstandarditem_insert_rows(&_0, &_1, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertRowsIntInt)
{
	zval *handle_param = NULL, *row_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, row, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, count);
	phpqt_qstandarditem_insert_rows_int_int(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertColumns)
{
	zval *handle_param = NULL, *column_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, column, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, count);
	phpqt_qstandarditem_insert_columns(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, removeRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qstandarditem_remove_row(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, removeColumn)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qstandarditem_remove_column(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, removeRows)
{
	zval *handle_param = NULL, *row_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, row, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, count);
	phpqt_qstandarditem_remove_rows(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, removeColumns)
{
	zval *handle_param = NULL, *column_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, column, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, count);
	phpqt_qstandarditem_remove_columns(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, appendRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_append_row(&_0, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, appendRows)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_append_rows(&_0, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, appendColumn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_append_column(&_0, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, insertRowIntQStandardItem)
{
	zval *handle_param = NULL, *row_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, row, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, item);
	phpqt_qstandarditem_insert_row_int_q_standard_item(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, appendRowQStandardItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qstandarditem_append_row_q_standard_item(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, takeChild)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &row_param, &column_param);
	if (!column_param) {
		column = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qstandarditem_take_child(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, takeRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *row_param = NULL, result, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &row_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qstandarditem_take_row(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, takeColumn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *column_param = NULL, result, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &column_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qstandarditem_take_column(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, sortChildren)
{
	zval *handle_param = NULL, *column_param = NULL, *order = NULL, order_sub, __$null, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &column_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qstandarditem_sort_children(&_0, &_1, order);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_clone(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstandarditem_type(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, read)
{
	zval *handle_param = NULL, *in__param = NULL, _0, _1;
	zend_long handle, in_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(in_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &in__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, in_);
	phpqt_qstandarditem_read(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, write)
{
	zval *handle_param = NULL, *out_param = NULL, _0, _1;
	zend_long handle, out;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(out)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &out_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, out);
	phpqt_qstandarditem_write(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, newQStandardItem)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstandarditem_new_q_standard_item(&_0));
}

PHP_METHOD(Qt_Gui_QStandardItem_QStandardItem, emitDataChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandarditem_emit_data_changed(&_0);
}

