
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
#include "src/gui-qtextformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextFormat_QTextFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextFormat, QTextFormat, qt, gui_qtextformat_qtextformat, qt_gui_qtextformat_qtextformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, staticMetaObject)
{

	RETURN_LONG(phpqt_qtextformat_static_meta_object());
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextformat_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, new_)
{

	RETURN_LONG(phpqt_qtextformat_new());
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, newInt)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qtextformat_new_int(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, newQTextFormat)
{
	zval *rhs_param = NULL, _0;
	zend_long rhs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rhs_param);
	ZVAL_LONG(&_0, rhs);
	RETURN_LONG(phpqt_qtextformat_new_q_text_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qtextformat_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, merge)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qtextformat_merge(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, objectIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_object_index(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setObjectIndex)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qtextformat_set_object_index(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, property)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *propertyId_param = NULL, result, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &propertyId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_property(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &propertyId_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_set_property(&_0, &_1, value);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_clear_property(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, hasProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	r = phpqt_qtextformat_has_property(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, boolProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	r = phpqt_qtextformat_bool_property(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, intProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_LONG(phpqt_qtextformat_int_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, doubleProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_DOUBLE(phpqt_qtextformat_double_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, stringProperty)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *propertyId_param = NULL, result, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &propertyId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_string_property(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, colorProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_LONG(phpqt_qtextformat_color_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, penProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_LONG(phpqt_qtextformat_pen_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, brushProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_LONG(phpqt_qtextformat_brush_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, lengthProperty)
{
	zval *handle_param = NULL, *propertyId_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &propertyId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	RETURN_LONG(phpqt_qtextformat_length_property(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, lengthVectorProperty)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *propertyId_param = NULL, result, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &propertyId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_length_vector_property(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setPropertyIntQListQTextLength)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval lengths;
	zval *handle_param = NULL, *propertyId_param = NULL, *lengths_param = NULL, _0, _1;
	zend_long handle, propertyId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&lengths);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(propertyId)
		Z_PARAM_ARRAY(lengths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &propertyId_param, &lengths_param);
	zephir_get_arrval(&lengths, lengths_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, propertyId);
	phpqt_qtextformat_set_property_int_q_list_q_text_length(&_0, &_1, &lengths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, properties)
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
	phpqt_qtextformat_properties(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, propertyCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_property_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setObjectType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qtextformat_set_object_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, objectType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_object_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isCharFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_char_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isBlockFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_block_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isListFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_list_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isFrameFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_frame_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isImageFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_image_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isTableFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_table_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, isTableCellFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextformat_is_table_cell_format(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toBlockFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_block_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toCharFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_char_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toListFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_list_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toTableFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_table_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toFrameFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_frame_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toImageFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_image_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, toTableCellFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_to_table_cell_format(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setLayoutDirection)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	phpqt_qtextformat_set_layout_direction(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, layoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_layout_direction(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setBackground)
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
	phpqt_qtextformat_set_background(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, background)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_background(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextformat_clear_background(&_0);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, setForeground)
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
	phpqt_qtextformat_set_foreground(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, foreground)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextformat_foreground(&_0));
}

PHP_METHOD(Qt_Gui_QTextFormat_QTextFormat, clearForeground)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextformat_clear_foreground(&_0);
}

