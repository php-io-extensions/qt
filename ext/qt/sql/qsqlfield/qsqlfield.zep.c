
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
#include "src/sql-qsqlfield.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlField_QSqlField)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlField, QSqlField, qt, sql_qsqlfield_qsqlfield, qt_sql_qsqlfield_qsqlfield_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, staticMetaObject)
{

	RETURN_LONG(phpqt_qsqlfield_static_meta_object());
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fieldName_param = NULL, *type = NULL, type_sub, *tableName_param = NULL, __$null;
	zval fieldName, tableName;

	ZVAL_UNDEF(&fieldName);
	ZVAL_UNDEF(&tableName);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 3)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(fieldName)
		Z_PARAM_ZVAL_OR_NULL(type)
		Z_PARAM_STR(tableName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 3, &fieldName_param, &type, &tableName_param);
	if (!fieldName_param) {
		ZEPHIR_INIT_VAR(&fieldName);
		ZVAL_STRING(&fieldName, "");
	} else {
		zephir_get_strval(&fieldName, fieldName_param);
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	if (!tableName_param) {
		ZEPHIR_INIT_VAR(&tableName);
		ZVAL_STRING(&tableName, "");
	} else {
		zephir_get_strval(&tableName, tableName_param);
	}
	RETURN_MM_LONG(phpqt_qsqlfield_new(&fieldName, type, &tableName));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, newQSqlField)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsqlfield_new_q_sql_field(&_0));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, swap)
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
	phpqt_qsqlfield_swap(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setValue)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_set_value(&_0, value);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, value)
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
	phpqt_qsqlfield_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_set_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, name)
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
	phpqt_qsqlfield_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setTableName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tableName;
	zval *handle_param = NULL, *tableName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tableName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tableName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tableName_param);
	zephir_get_strval(&tableName, tableName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_set_table_name(&_0, &tableName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, tableName)
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
	phpqt_qsqlfield_table_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlfield_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setReadOnly)
{
	zend_bool readOnly;
	zval *handle_param = NULL, *readOnly_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(readOnly)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &readOnly_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (readOnly ? 1 : 0));
	phpqt_qsqlfield_set_read_only(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isReadOnly)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlfield_is_read_only(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_clear(&_0);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isAutoValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlfield_is_auto_value(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, metaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqlfield_meta_type(&_0));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setMetaType)
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
	phpqt_qsqlfield_set_meta_type(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, newQStringQVariantTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long type;
	zval *fieldName_param = NULL, *type_param = NULL, *tableName_param = NULL, _0;
	zval fieldName, tableName;

	ZVAL_UNDEF(&fieldName);
	ZVAL_UNDEF(&tableName);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(fieldName)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(tableName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &fieldName_param, &type_param, &tableName_param);
	zephir_get_strval(&fieldName, fieldName_param);
	if (!tableName_param) {
		ZEPHIR_INIT_VAR(&tableName);
		ZVAL_STRING(&tableName, "");
	} else {
		zephir_get_strval(&tableName, tableName_param);
	}
	ZVAL_LONG(&_0, type);
	RETURN_MM_LONG(phpqt_qsqlfield_new_q_string_q_variant_type_q_string(&fieldName, &_0, &tableName));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setRequiredStatus)
{
	zval *handle_param = NULL, *status_param = NULL, _0, _1;
	zend_long handle, status;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(status)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &status_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, status);
	phpqt_qsqlfield_set_required_status(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setRequired)
{
	zend_bool required;
	zval *handle_param = NULL, *required_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(required)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &required_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (required ? 1 : 0));
	phpqt_qsqlfield_set_required(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setLength)
{
	zval *handle_param = NULL, *fieldLength_param = NULL, _0, _1;
	zend_long handle, fieldLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fieldLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fieldLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fieldLength);
	phpqt_qsqlfield_set_length(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setPrecision)
{
	zval *handle_param = NULL, *precision_param = NULL, _0, _1;
	zend_long handle, precision;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &precision_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, precision);
	phpqt_qsqlfield_set_precision(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setDefaultValue)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlfield_set_default_value(&_0, value);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setGenerated)
{
	zend_bool gen;
	zval *handle_param = NULL, *gen_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(gen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &gen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (gen ? 1 : 0));
	phpqt_qsqlfield_set_generated(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setAutoValue)
{
	zend_bool autoVal;
	zval *handle_param = NULL, *autoVal_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autoVal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autoVal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autoVal ? 1 : 0));
	phpqt_qsqlfield_set_auto_value(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, requiredStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqlfield_required_status(&_0));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqlfield_length(&_0));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, precision)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqlfield_precision(&_0));
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, defaultValue)
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
	phpqt_qsqlfield_default_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isGenerated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlfield_is_generated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlfield_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

