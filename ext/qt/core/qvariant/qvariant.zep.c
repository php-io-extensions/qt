
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
#include "src/core-qvariant.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QVariant_QVariant)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QVariant, QVariant, qt, core_qvariant_qvariant, qt_core_qvariant_qvariant_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QVariant_QVariant, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *other = NULL, other_sub, result;

	ZVAL_UNDEF(&other_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(other)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &other);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_variant(&result, other);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *i_param = NULL, result, _0;
	zend_long i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, i);
	phpqt_qvariant_new_int(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newUint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ui_param = NULL, result, _0;
	zend_long ui;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ui)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ui_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ui);
	phpqt_qvariant_new_uint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQlonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ll_param = NULL, result, _0;
	zend_long ll;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ll)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ll_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ll);
	phpqt_qvariant_new_qlonglong(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQulonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ull_param = NULL, result, _0;
	zend_long ull;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ull)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ull_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ull);
	phpqt_qvariant_new_qulonglong(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *b_param = NULL, result, _0;
	zend_bool b;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &b_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_BOOL(&_0, (b ? 1 : 0));
	phpqt_qvariant_new_bool(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *d_param = NULL, result, _0;
	double d;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, d);
	phpqt_qvariant_new_double(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *f_param = NULL, result, _0;
	double f;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, f);
	phpqt_qvariant_new_float(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *qchar_param = NULL, result;
	zval qchar;

	ZVAL_UNDEF(&qchar);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(qchar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &qchar_param);
	zephir_get_strval(&qchar, qchar_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_char(&result, &qchar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQDate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *date_param = NULL, result, _0;
	zend_long date;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(date)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &date_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, date);
	phpqt_qvariant_new_q_date(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *time_param = NULL, result, _0;
	zend_long time;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &time_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, time);
	phpqt_qvariant_new_q_time(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQBitArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bitarray_param = NULL, result, _0;
	zend_long bitarray;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bitarray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &bitarray_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, bitarray);
	phpqt_qvariant_new_q_bit_array(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bytearray_param = NULL, result;
	zval bytearray;

	ZVAL_UNDEF(&bytearray);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(bytearray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &bytearray_param);
	zephir_get_strval(&bytearray, bytearray_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_byte_array(&result, &bytearray);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQDateTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *datetime_param = NULL, result, _0;
	zend_long datetime;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(datetime)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &datetime_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, datetime);
	phpqt_qvariant_new_q_date_time(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQHashQStringQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hash_param = NULL, result;
	zval hash;

	ZVAL_UNDEF(&hash);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(hash)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hash_param);
	zephir_get_arrval(&hash, hash_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_hash_q_string_q_variant(&result, &hash);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *jsonArray_param = NULL, result, _0;
	zend_long jsonArray;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(jsonArray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &jsonArray_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, jsonArray);
	phpqt_qvariant_new_q_json_array(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *jsonObject_param = NULL, result, _0;
	zend_long jsonObject;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(jsonObject)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &jsonObject_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, jsonObject);
	phpqt_qvariant_new_q_json_object(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQListQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *list__param = NULL, result;
	zval list_;

	ZVAL_UNDEF(&list_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(list_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &list__param);
	zephir_get_arrval(&list_, list__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_list_q_variant(&result, &list_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQLocale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *locale_param = NULL, result, _0;
	zend_long locale;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &locale_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, locale);
	phpqt_qvariant_new_q_locale(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQMapQStringQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *map_param = NULL, result;
	zval map;

	ZVAL_UNDEF(&map);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(map)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &map_param);
	zephir_get_arrval(&map, map_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_map_q_string_q_variant(&result, &map);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQRegularExpression)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *re_param = NULL, result, _0;
	zend_long re;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &re_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, re);
	phpqt_qvariant_new_q_regular_expression(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, result;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_string(&result, &string_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQStringList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *stringlist_param = NULL, result;
	zval stringlist;

	ZVAL_UNDEF(&stringlist);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(stringlist)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &stringlist_param);
	zephir_get_arrval(&stringlist, stringlist_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_string_list(&result, &stringlist);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *url_param = NULL, result, _0;
	zend_long url;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &url_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, url);
	phpqt_qvariant_new_q_url(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *jsonValue_param = NULL, result, _0;
	zend_long jsonValue;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(jsonValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &jsonValue_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, jsonValue);
	phpqt_qvariant_new_q_json_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQModelIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *modelIndex_param = NULL, result, _0;
	zend_long modelIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(modelIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &modelIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, modelIndex);
	phpqt_qvariant_new_q_model_index(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQUuid)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *uuid_param = NULL, result, _0;
	zend_long uuid;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(uuid)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &uuid_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, uuid);
	phpqt_qvariant_new_q_uuid(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, result, _0, _1;
	zend_long sizeWidth, sizeHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &sizeWidth_param, &sizeHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	phpqt_qvariant_new_q_size(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQSizeF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, result, _0, _1;
	double sizeWidth, sizeHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, sizeWidth);
	ZVAL_DOUBLE(&_1, sizeHeight);
	phpqt_qvariant_new_q_size_f(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ptX_param = NULL, *ptY_param = NULL, result, _0, _1;
	zend_long ptX, ptY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &ptX_param, &ptY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ptX);
	ZVAL_LONG(&_1, ptY);
	phpqt_qvariant_new_q_point(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ptX_param = NULL, *ptY_param = NULL, result, _0, _1;
	double ptX, ptY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(ptX)
		Z_PARAM_ZVAL(ptY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &ptX_param, &ptY_param);
	ptX = zephir_get_doubleval(ptX_param);
	ptY = zephir_get_doubleval(ptY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, ptX);
	ZVAL_DOUBLE(&_1, ptY);
	phpqt_qvariant_new_q_point_f(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, result, _0, _1, _2, _3;
	zend_long lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(lineX1)
		Z_PARAM_LONG(lineY1)
		Z_PARAM_LONG(lineX2)
		Z_PARAM_LONG(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, lineX1);
	ZVAL_LONG(&_1, lineY1);
	ZVAL_LONG(&_2, lineX2);
	ZVAL_LONG(&_3, lineY2);
	phpqt_qvariant_new_q_line(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQLineF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, result, _0, _1, _2, _3;
	double lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, lineX1);
	ZVAL_DOUBLE(&_1, lineY1);
	ZVAL_DOUBLE(&_2, lineX2);
	ZVAL_DOUBLE(&_3, lineY2);
	phpqt_qvariant_new_q_line_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rectX);
	ZVAL_LONG(&_1, rectY);
	ZVAL_LONG(&_2, rectWidth);
	ZVAL_LONG(&_3, rectHeight);
	phpqt_qvariant_new_q_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3;
	double rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, rectX);
	ZVAL_DOUBLE(&_1, rectY);
	ZVAL_DOUBLE(&_2, rectWidth);
	ZVAL_DOUBLE(&_3, rectHeight);
	phpqt_qvariant_new_q_rect_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQEasingCurve)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *easing_param = NULL, result, _0;
	zend_long easing;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(easing)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &easing_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, easing);
	phpqt_qvariant_new_q_easing_curve(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonDocument)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *jsonDocument_param = NULL, result, _0;
	zend_long jsonDocument;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(jsonDocument)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &jsonDocument_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, jsonDocument);
	phpqt_qvariant_new_q_json_document(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQPersistentModelIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *modelIndex_param = NULL, result, _0;
	zend_long modelIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(modelIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &modelIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, modelIndex);
	phpqt_qvariant_new_q_persistent_model_index(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str = NULL, str_sub, result;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_char(&result, str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, result;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_new_q_latin1_string_view(&result, &string_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, swap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_swap(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, userType)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_user_type(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, typeId)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_type_id(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, typeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_type_name(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, metaType)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_meta_type(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, canConvert)
{
	zend_long targetType, r = 0;
	zval *self_ = NULL, self__sub, *targetType_param = NULL, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(targetType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &self_, &targetType_param);
	ZVAL_LONG(&_0, targetType);
	r = phpqt_qvariant_can_convert(self_, &_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, convert)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long type;
	zval *self_ = NULL, self__sub, *type_param = NULL, result, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self_, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qvariant_convert(&result, self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, canView)
{
	zend_long targetType, r = 0;
	zval *self_ = NULL, self__sub, *targetType_param = NULL, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(targetType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &self_, &targetType_param);
	ZVAL_LONG(&_0, targetType);
	r = phpqt_qvariant_can_view(self_, &_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, canConvertInt)
{
	zend_long targetTypeId, r = 0;
	zval *self_ = NULL, self__sub, *targetTypeId_param = NULL, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(targetTypeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &self_, &targetTypeId_param);
	ZVAL_LONG(&_0, targetTypeId);
	r = phpqt_qvariant_can_convert_int(self_, &_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, convertInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long targetTypeId;
	zval *self_ = NULL, self__sub, *targetTypeId_param = NULL, result, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(targetTypeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self_, &targetTypeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, targetTypeId);
	phpqt_qvariant_convert_int(&result, self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, isValid)
{
	zend_long r = 0;
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	r = phpqt_qvariant_is_valid(self_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, isNull)
{
	zend_long r = 0;
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	r = phpqt_qvariant_is_null(self_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, clear)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_clear(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, detach)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_detach(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, isDetached)
{
	zend_long r = 0;
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	r = phpqt_qvariant_is_detached(self_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_int(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toUInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_u_int(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toLongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_long_long(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toULongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_u_long_long(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toBool)
{
	zend_long r = 0;
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	r = phpqt_qvariant_to_bool(self_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_double(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_float(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toReal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self_, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_real(&result, self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_byte_array(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toBitArray)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_bit_array(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_string(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toStringList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_string_list(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_char(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toDate)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_date(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toTime)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_time(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toDateTime)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_date_time(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_list(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_map(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toHash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_hash(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_point(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_point_f(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_rect(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_size(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toSizeF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_size_f(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_line(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toLineF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_line_f(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_to_rect_f(&result, self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toLocale)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_locale(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toRegularExpression)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_regular_expression(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toEasingCurve)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_easing_curve(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toUuid)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_uuid(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toUrl)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_url(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonValue)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_json_value(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonObject)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_json_object(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonArray)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_json_array(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonDocument)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_json_document(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toModelIndex)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_model_index(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, toPersistentModelIndex)
{
	zval *self_ = NULL, self__sub;

	ZVAL_UNDEF(&self__sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &self_);
	RETURN_LONG(phpqt_qvariant_to_persistent_model_index(self_));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, load)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ds;
	zval *self_ = NULL, self__sub, *ds_param = NULL, result, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(ds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self_, &ds_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, ds);
	phpqt_qvariant_load(&result, self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, save)
{
	zend_long ds;
	zval *self_ = NULL, self__sub, *ds_param = NULL, _0;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_LONG(ds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &self_, &ds_param);
	ZVAL_LONG(&_0, ds);
	phpqt_qvariant_save(self_, &_0);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, newQVariantType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, result, _0;
	zend_long type;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qvariant_new_q_variant_type(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, typeToName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *typeId_param = NULL, result, _0;
	zend_long typeId;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(typeId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &typeId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, typeId);
	phpqt_qvariant_type_to_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, nameToType)
{
	zval *name = NULL, name_sub;

	ZVAL_UNDEF(&name_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &name);
	RETURN_LONG(phpqt_qvariant_name_to_type(name));
}

PHP_METHOD(Qt_Core_QVariant_QVariant, setValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self_ = NULL, self__sub, *avalue = NULL, avalue_sub, result;

	ZVAL_UNDEF(&self__sub);
	ZVAL_UNDEF(&avalue_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(self_)
		Z_PARAM_ZVAL(avalue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self_, &avalue);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariant_set_value(&result, self_, avalue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariant_QVariant, compare)
{
	zval *lhs = NULL, lhs_sub, *rhs = NULL, rhs_sub;

	ZVAL_UNDEF(&lhs_sub);
	ZVAL_UNDEF(&rhs_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs, &rhs);
	RETURN_LONG(phpqt_qvariant_compare(lhs, rhs));
}

