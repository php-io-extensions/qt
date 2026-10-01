
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
#include "src/core-qtextboundaryfinder.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTextBoundaryFinder, QTextBoundaryFinder, qt, core_qtextboundaryfinder_qtextboundaryfinder, qt_core_qtextboundaryfinder_qtextboundaryfinder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, new_)
{

	RETURN_LONG(phpqt_qtextboundaryfinder_new());
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, newQTextBoundaryFinder)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qtextboundaryfinder_new_q_text_boundary_finder(&_0));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, newQTextBoundaryFinderBoundaryTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *type_param = NULL, *string__param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &type_param, &string__param);
	zephir_get_strval(&string_, string__param);
	ZVAL_LONG(&_0, type);
	RETURN_MM_LONG(phpqt_qtextboundaryfinder_new_q_text_boundary_finder_boundary_type_q_string(&_0, &string_));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, newQTextBoundaryFinderBoundaryTypeQCharQsizetypeUnsignedCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, *chars = NULL, chars_sub, *length_param = NULL, *buffer = NULL, buffer_sub, *bufferSize_param = NULL, __$null, result, _0, _1, _2;
	zend_long type, length, bufferSize;

	ZVAL_UNDEF(&chars_sub);
	ZVAL_UNDEF(&buffer_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(chars)
		Z_PARAM_LONG(length)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buffer)
		Z_PARAM_LONG(bufferSize)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &type_param, &chars, &length_param, &buffer, &bufferSize_param);
	if (!buffer) {
		buffer = &buffer_sub;
		buffer = &__$null;
	}
	if (!bufferSize_param) {
		bufferSize = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, length);
	ZVAL_LONG(&_2, bufferSize);
	phpqt_qtextboundaryfinder_new_q_text_boundary_finder_boundary_type_q_char_qsizetype_unsigned_char_qsizetype(&result, &_0, chars, &_1, buffer, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, newQTextBoundaryFinderBoundaryTypeQStringViewUnsignedCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *type_param = NULL, *str_param = NULL, *buffer = NULL, buffer_sub, *bufferSize_param = NULL, __$null, result, _0, _1;
	zend_long type, bufferSize;

	ZVAL_UNDEF(&buffer_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&str);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buffer)
		Z_PARAM_LONG(bufferSize)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &type_param, &str_param, &buffer, &bufferSize_param);
	zephir_get_strval(&str, str_param);
	if (!buffer) {
		buffer = &buffer_sub;
		buffer = &__$null;
	}
	if (!bufferSize_param) {
		bufferSize = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, bufferSize);
	phpqt_qtextboundaryfinder_new_q_text_boundary_finder_boundary_type_q_string_view_unsigned_char_qsizetype(&result, &_0, &str, buffer, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextboundaryfinder_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextboundaryfinder_type(&_0));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, string_)
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
	phpqt_qtextboundaryfinder_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, toStart)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextboundaryfinder_to_start(&_0);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, toEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextboundaryfinder_to_end(&_0);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, position)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextboundaryfinder_position(&_0));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, setPosition)
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
	phpqt_qtextboundaryfinder_set_position(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, toNextBoundary)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextboundaryfinder_to_next_boundary(&_0));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, toPreviousBoundary)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextboundaryfinder_to_previous_boundary(&_0));
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, isAtBoundary)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextboundaryfinder_is_at_boundary(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextBoundaryFinder_QTextBoundaryFinder, boundaryReasons)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextboundaryfinder_boundary_reasons(&_0));
}

