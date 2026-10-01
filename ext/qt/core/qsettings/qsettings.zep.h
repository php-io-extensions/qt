
extern zend_class_entry *qt_core_qsettings_qsettings_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSettings_QSettings);

PHP_METHOD(Qt_Core_QSettings_QSettings, staticMetaObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, tr);
PHP_METHOD(Qt_Core_QSettings_QSettings, new_);
PHP_METHOD(Qt_Core_QSettings_QSettings, newQSettingsScopeQStringQStringQObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, newQSettingsFormatQSettingsScopeQStringQStringQObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, newQStringQSettingsFormatQObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, newQObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, newQSettingsScopeQObject);
PHP_METHOD(Qt_Core_QSettings_QSettings, clear);
PHP_METHOD(Qt_Core_QSettings_QSettings, sync);
PHP_METHOD(Qt_Core_QSettings_QSettings, status);
PHP_METHOD(Qt_Core_QSettings_QSettings, isAtomicSyncRequired);
PHP_METHOD(Qt_Core_QSettings_QSettings, setAtomicSyncRequired);
PHP_METHOD(Qt_Core_QSettings_QSettings, beginGroup);
PHP_METHOD(Qt_Core_QSettings_QSettings, endGroup);
PHP_METHOD(Qt_Core_QSettings_QSettings, group);
PHP_METHOD(Qt_Core_QSettings_QSettings, beginReadArray);
PHP_METHOD(Qt_Core_QSettings_QSettings, beginWriteArray);
PHP_METHOD(Qt_Core_QSettings_QSettings, endArray);
PHP_METHOD(Qt_Core_QSettings_QSettings, setArrayIndex);
PHP_METHOD(Qt_Core_QSettings_QSettings, allKeys);
PHP_METHOD(Qt_Core_QSettings_QSettings, childKeys);
PHP_METHOD(Qt_Core_QSettings_QSettings, childGroups);
PHP_METHOD(Qt_Core_QSettings_QSettings, isWritable);
PHP_METHOD(Qt_Core_QSettings_QSettings, setValue);
PHP_METHOD(Qt_Core_QSettings_QSettings, value);
PHP_METHOD(Qt_Core_QSettings_QSettings, valueQAnyStringView);
PHP_METHOD(Qt_Core_QSettings_QSettings, remove);
PHP_METHOD(Qt_Core_QSettings_QSettings, contains);
PHP_METHOD(Qt_Core_QSettings_QSettings, setFallbacksEnabled);
PHP_METHOD(Qt_Core_QSettings_QSettings, fallbacksEnabled);
PHP_METHOD(Qt_Core_QSettings_QSettings, fileName);
PHP_METHOD(Qt_Core_QSettings_QSettings, format);
PHP_METHOD(Qt_Core_QSettings_QSettings, scope);
PHP_METHOD(Qt_Core_QSettings_QSettings, organizationName);
PHP_METHOD(Qt_Core_QSettings_QSettings, applicationName);
PHP_METHOD(Qt_Core_QSettings_QSettings, setDefaultFormat);
PHP_METHOD(Qt_Core_QSettings_QSettings, defaultFormat);
PHP_METHOD(Qt_Core_QSettings_QSettings, setPath);
PHP_METHOD(Qt_Core_QSettings_QSettings, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, organization, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_newqsettingsscopeqstringqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, organization, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_newqsettingsformatqsettingsscopeqstringqstringqobject, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, organization, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_newqstringqsettingsformatqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_newqobject, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_newqsettingsscopeqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_sync, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_isatomicsyncrequired, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setatomicsyncrequired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_begingroup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_endgroup, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_group, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_beginreadarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_beginwritearray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_endarray, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setarrayindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_allkeys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_childkeys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_childgroups, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_iswritable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setvalue, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qsettings_qsettings_value, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qsettings_qsettings_valueqanystringview, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setfallbacksenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_fallbacksenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_scope, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_organizationname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_applicationname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setdefaultformat, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_defaultformat, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_setpath, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsettings_qsettings_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsettings_qsettings_method_entry) {
	PHP_ME(Qt_Core_QSettings_QSettings, staticMetaObject, arginfo_qt_core_qsettings_qsettings_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, tr, arginfo_qt_core_qsettings_qsettings_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, new_, arginfo_qt_core_qsettings_qsettings_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, newQSettingsScopeQStringQStringQObject, arginfo_qt_core_qsettings_qsettings_newqsettingsscopeqstringqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, newQSettingsFormatQSettingsScopeQStringQStringQObject, arginfo_qt_core_qsettings_qsettings_newqsettingsformatqsettingsscopeqstringqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, newQStringQSettingsFormatQObject, arginfo_qt_core_qsettings_qsettings_newqstringqsettingsformatqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, newQObject, arginfo_qt_core_qsettings_qsettings_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, newQSettingsScopeQObject, arginfo_qt_core_qsettings_qsettings_newqsettingsscopeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, clear, arginfo_qt_core_qsettings_qsettings_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, sync, arginfo_qt_core_qsettings_qsettings_sync, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, status, arginfo_qt_core_qsettings_qsettings_status, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, isAtomicSyncRequired, arginfo_qt_core_qsettings_qsettings_isatomicsyncrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setAtomicSyncRequired, arginfo_qt_core_qsettings_qsettings_setatomicsyncrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, beginGroup, arginfo_qt_core_qsettings_qsettings_begingroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, endGroup, arginfo_qt_core_qsettings_qsettings_endgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, group, arginfo_qt_core_qsettings_qsettings_group, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, beginReadArray, arginfo_qt_core_qsettings_qsettings_beginreadarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, beginWriteArray, arginfo_qt_core_qsettings_qsettings_beginwritearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, endArray, arginfo_qt_core_qsettings_qsettings_endarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setArrayIndex, arginfo_qt_core_qsettings_qsettings_setarrayindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, allKeys, arginfo_qt_core_qsettings_qsettings_allkeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, childKeys, arginfo_qt_core_qsettings_qsettings_childkeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, childGroups, arginfo_qt_core_qsettings_qsettings_childgroups, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, isWritable, arginfo_qt_core_qsettings_qsettings_iswritable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setValue, arginfo_qt_core_qsettings_qsettings_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, value, arginfo_qt_core_qsettings_qsettings_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, valueQAnyStringView, arginfo_qt_core_qsettings_qsettings_valueqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, remove, arginfo_qt_core_qsettings_qsettings_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, contains, arginfo_qt_core_qsettings_qsettings_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setFallbacksEnabled, arginfo_qt_core_qsettings_qsettings_setfallbacksenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, fallbacksEnabled, arginfo_qt_core_qsettings_qsettings_fallbacksenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, fileName, arginfo_qt_core_qsettings_qsettings_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, format, arginfo_qt_core_qsettings_qsettings_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, scope, arginfo_qt_core_qsettings_qsettings_scope, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, organizationName, arginfo_qt_core_qsettings_qsettings_organizationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, applicationName, arginfo_qt_core_qsettings_qsettings_applicationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setDefaultFormat, arginfo_qt_core_qsettings_qsettings_setdefaultformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, defaultFormat, arginfo_qt_core_qsettings_qsettings_defaultformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, setPath, arginfo_qt_core_qsettings_qsettings_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSettings_QSettings, event, arginfo_qt_core_qsettings_qsettings_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
