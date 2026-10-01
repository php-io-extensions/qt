
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
#include "src/core-qchar.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QChar_QChar)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QChar, QChar, qt, core_qchar_qchar, qt_core_qchar_qchar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QChar_QChar, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newUshort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rc_param = NULL, result, _0;
	zend_long rc;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rc_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rc);
	phpqt_qchar_new_ushort(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newUcharUchar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, *r_param = NULL, result, _0, _1;
	zend_long c, r;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(c)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &c_param, &r_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	ZVAL_LONG(&_1, r);
	phpqt_qchar_new_uchar_uchar(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newShortInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rc_param = NULL, result, _0;
	zend_long rc;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rc_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rc);
	phpqt_qchar_new_short_int(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newUint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rc_param = NULL, result, _0;
	zend_long rc;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rc_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rc);
	phpqt_qchar_new_uint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rc_param = NULL, result, _0;
	zend_long rc;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rc_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rc);
	phpqt_qchar_new_int(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newQCharSpecialCharacter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL, result, _0;
	zend_long s;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, s);
	phpqt_qchar_new_q_char_special_character(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newQLatin1Char)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ch_param = NULL, result, _0;
	zend_long ch;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ch_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ch);
	phpqt_qchar_new_q_latin1_char(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newChar16T)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ch_param = NULL, result, _0;
	zend_long ch;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ch_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ch);
	phpqt_qchar_new_char16_t(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, result, _0;
	zend_long c;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qchar_new_char(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, newUchar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, result, _0;
	zend_long c;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qchar_new_uchar(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, fromUcs2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, result, _0;
	zend_long c;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qchar_from_ucs2(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, category)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_category(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, direction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_direction(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, joiningType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_joining_type(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, combiningClass)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_combining_class(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, mirroredChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_mirrored_char(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, hasMirrored)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_has_mirrored(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, decomposition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_decomposition(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, decompositionTag)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_decomposition_tag(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, digitValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_digit_value(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, toLower)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_to_lower(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, toUpper)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_to_upper(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, toTitleCase)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_to_title_case(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, toCaseFolded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qchar_to_case_folded(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, script)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_script(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, unicodeVersion)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_unicode_version(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, toLatin1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_to_latin1(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, unicode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_unicode(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, fromLatin1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, result, _0;
	zend_long c;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qchar_from_latin1(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, isNull)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isPrint)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_print(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSpace)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_space(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isMark)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_mark(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isPunct)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_punct(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSymbol)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_symbol(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLetter)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_letter(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isNumber)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_number(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLetterOrNumber)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_letter_or_number(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isDigit)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_digit(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLower)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_lower(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isUpper)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_upper(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isTitleCase)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_title_case(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isNonCharacter)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_non_character(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isHighSurrogate)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_high_surrogate(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLowSurrogate)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_low_surrogate(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSurrogate)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qchar_is_surrogate(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, cell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_cell(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, row)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qchar_row(&self_));
}

PHP_METHOD(Qt_Core_QChar_QChar, setCell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long acell;
	zval *self__param = NULL, *acell_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(acell)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &acell_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, acell);
	phpqt_qchar_set_cell(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, setRow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long arow;
	zval *self__param = NULL, *arow_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(arow)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &arow_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arow);
	phpqt_qchar_set_row(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, isNonCharacterChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_non_character_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isHighSurrogateChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_high_surrogate_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLowSurrogateChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_low_surrogate_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSurrogateChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_surrogate_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, requiresSurrogates)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_requires_surrogates(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, surrogateToUcs4)
{
	zval *high_param = NULL, *low_param = NULL, _0, _1;
	zend_long high, low;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(high)
		Z_PARAM_LONG(low)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &high_param, &low_param);
	ZVAL_LONG(&_0, high);
	ZVAL_LONG(&_1, low);
	RETURN_LONG(phpqt_qchar_surrogate_to_ucs4(&_0, &_1));
}

PHP_METHOD(Qt_Core_QChar_QChar, surrogateToUcs4QCharQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *high_param = NULL, *low_param = NULL;
	zval high, low;

	ZVAL_UNDEF(&high);
	ZVAL_UNDEF(&low);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(high)
		Z_PARAM_STR(low)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &high_param, &low_param);
	zephir_get_strval(&high, high_param);
	zephir_get_strval(&low, low_param);
	RETURN_MM_LONG(phpqt_qchar_surrogate_to_ucs4_q_char_q_char(&high, &low));
}

PHP_METHOD(Qt_Core_QChar_QChar, highSurrogate)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_high_surrogate(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, lowSurrogate)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_low_surrogate(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, categoryChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_category_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, directionChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_direction_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, joiningTypeChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_joining_type_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, combiningClassChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_combining_class_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, mirroredCharChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_mirrored_char_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, hasMirroredChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_has_mirrored_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, decompositionChar32T)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ucs4_param = NULL, result, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ucs4_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ucs4);
	phpqt_qchar_decomposition_char32_t(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QChar_QChar, decompositionTagChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_decomposition_tag_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, digitValueChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_digit_value_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, toLowerChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_to_lower_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, toUpperChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_to_upper_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, toTitleCaseChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_to_title_case_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, toCaseFoldedChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_to_case_folded_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, scriptChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_script_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, unicodeVersionChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	RETURN_LONG(phpqt_qchar_unicode_version_char32_t(&_0));
}

PHP_METHOD(Qt_Core_QChar_QChar, currentUnicodeVersion)
{

	RETURN_LONG(phpqt_qchar_current_unicode_version());
}

PHP_METHOD(Qt_Core_QChar_QChar, isPrintChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_print_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSpaceChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_space_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isMarkChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_mark_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isPunctChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_punct_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isSymbolChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_symbol_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLetterChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_letter_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isNumberChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_number_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLetterOrNumberChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_letter_or_number_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isDigitChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_digit_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isLowerChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_lower_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isUpperChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_upper_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QChar_QChar, isTitleCaseChar32T)
{
	zval *ucs4_param = NULL, _0;
	zend_long ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ucs4_param);
	ZVAL_LONG(&_0, ucs4);
	r = phpqt_qchar_is_title_case_char32_t(&_0);
	RETURN_BOOL(r == 1);
}

