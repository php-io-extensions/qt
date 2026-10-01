
extern zend_class_entry *qt_core_qmimetype_qmimetype_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMimeType_QMimeType);

PHP_METHOD(Qt_Core_QMimeType_QMimeType, staticMetaObject);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, new_);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, newQMimeType);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, swap);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, isValid);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, isDefault);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, name);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, comment);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, genericIconName);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, iconName);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, globPatterns);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, parentMimeTypes);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, allAncestors);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, aliases);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, suffixes);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, preferredSuffix);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, inherits);
PHP_METHOD(Qt_Core_QMimeType_QMimeType, filterString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_newqmimetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_isdefault, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_comment, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_genericiconname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_iconname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_globpatterns, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_parentmimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_allancestors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_aliases, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_suffixes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_preferredsuffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_inherits, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimeTypeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimetype_qmimetype_filterstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmimetype_qmimetype_method_entry) {
	PHP_ME(Qt_Core_QMimeType_QMimeType, staticMetaObject, arginfo_qt_core_qmimetype_qmimetype_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, qt_check_for_QGADGET_macro, arginfo_qt_core_qmimetype_qmimetype_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, new_, arginfo_qt_core_qmimetype_qmimetype_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, newQMimeType, arginfo_qt_core_qmimetype_qmimetype_newqmimetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, swap, arginfo_qt_core_qmimetype_qmimetype_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, isValid, arginfo_qt_core_qmimetype_qmimetype_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, isDefault, arginfo_qt_core_qmimetype_qmimetype_isdefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, name, arginfo_qt_core_qmimetype_qmimetype_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, comment, arginfo_qt_core_qmimetype_qmimetype_comment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, genericIconName, arginfo_qt_core_qmimetype_qmimetype_genericiconname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, iconName, arginfo_qt_core_qmimetype_qmimetype_iconname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, globPatterns, arginfo_qt_core_qmimetype_qmimetype_globpatterns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, parentMimeTypes, arginfo_qt_core_qmimetype_qmimetype_parentmimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, allAncestors, arginfo_qt_core_qmimetype_qmimetype_allancestors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, aliases, arginfo_qt_core_qmimetype_qmimetype_aliases, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, suffixes, arginfo_qt_core_qmimetype_qmimetype_suffixes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, preferredSuffix, arginfo_qt_core_qmimetype_qmimetype_preferredsuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, inherits, arginfo_qt_core_qmimetype_qmimetype_inherits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeType_QMimeType, filterString, arginfo_qt_core_qmimetype_qmimetype_filterstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
