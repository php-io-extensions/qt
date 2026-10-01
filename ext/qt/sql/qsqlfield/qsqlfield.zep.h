
extern zend_class_entry *qt_sql_qsqlfield_qsqlfield_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlField_QSqlField);

PHP_METHOD(Qt_Sql_QSqlField_QSqlField, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, new_);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, newQSqlField);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, swap);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setValue);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, value);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setName);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, name);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setTableName);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, tableName);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isNull);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setReadOnly);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isReadOnly);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, clear);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isAutoValue);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, metaType);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setMetaType);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, newQStringQVariantTypeQString);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setRequiredStatus);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setRequired);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setLength);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setPrecision);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setDefaultValue);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setGenerated);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, setAutoValue);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, requiredStatus);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, length);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, precision);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, defaultValue);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isGenerated);
PHP_METHOD(Qt_Sql_QSqlField_QSqlField, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldName, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_newqsqlfield, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_value, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_settablename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_tablename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setreadonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, readOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_isreadonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_isautovalue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setmetatype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_newqstringqvarianttypeqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setrequiredstatus, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setrequired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, required, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setlength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setprecision, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setdefaultvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setgenerated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gen, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_setautovalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autoVal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_requiredstatus, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_precision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_defaultvalue, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_isgenerated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlfield_qsqlfield_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlfield_qsqlfield_method_entry) {
	PHP_ME(Qt_Sql_QSqlField_QSqlField, staticMetaObject, arginfo_qt_sql_qsqlfield_qsqlfield_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, qt_check_for_QGADGET_macro, arginfo_qt_sql_qsqlfield_qsqlfield_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, new_, arginfo_qt_sql_qsqlfield_qsqlfield_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, newQSqlField, arginfo_qt_sql_qsqlfield_qsqlfield_newqsqlfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, swap, arginfo_qt_sql_qsqlfield_qsqlfield_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setValue, arginfo_qt_sql_qsqlfield_qsqlfield_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, value, arginfo_qt_sql_qsqlfield_qsqlfield_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setName, arginfo_qt_sql_qsqlfield_qsqlfield_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, name, arginfo_qt_sql_qsqlfield_qsqlfield_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setTableName, arginfo_qt_sql_qsqlfield_qsqlfield_settablename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, tableName, arginfo_qt_sql_qsqlfield_qsqlfield_tablename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, isNull, arginfo_qt_sql_qsqlfield_qsqlfield_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setReadOnly, arginfo_qt_sql_qsqlfield_qsqlfield_setreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, isReadOnly, arginfo_qt_sql_qsqlfield_qsqlfield_isreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, clear, arginfo_qt_sql_qsqlfield_qsqlfield_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, isAutoValue, arginfo_qt_sql_qsqlfield_qsqlfield_isautovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, metaType, arginfo_qt_sql_qsqlfield_qsqlfield_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setMetaType, arginfo_qt_sql_qsqlfield_qsqlfield_setmetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, newQStringQVariantTypeQString, arginfo_qt_sql_qsqlfield_qsqlfield_newqstringqvarianttypeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setRequiredStatus, arginfo_qt_sql_qsqlfield_qsqlfield_setrequiredstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setRequired, arginfo_qt_sql_qsqlfield_qsqlfield_setrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setLength, arginfo_qt_sql_qsqlfield_qsqlfield_setlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setPrecision, arginfo_qt_sql_qsqlfield_qsqlfield_setprecision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setDefaultValue, arginfo_qt_sql_qsqlfield_qsqlfield_setdefaultvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setGenerated, arginfo_qt_sql_qsqlfield_qsqlfield_setgenerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, setAutoValue, arginfo_qt_sql_qsqlfield_qsqlfield_setautovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, requiredStatus, arginfo_qt_sql_qsqlfield_qsqlfield_requiredstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, length, arginfo_qt_sql_qsqlfield_qsqlfield_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, precision, arginfo_qt_sql_qsqlfield_qsqlfield_precision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, defaultValue, arginfo_qt_sql_qsqlfield_qsqlfield_defaultvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, isGenerated, arginfo_qt_sql_qsqlfield_qsqlfield_isgenerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlField_QSqlField, isValid, arginfo_qt_sql_qsqlfield_qsqlfield_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
