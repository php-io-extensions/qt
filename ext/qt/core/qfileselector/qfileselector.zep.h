
extern zend_class_entry *qt_core_qfileselector_qfileselector_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFileSelector_QFileSelector);

PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, staticMetaObject);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, tr);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, new_);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, select);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, selectQUrl);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, extraSelectors);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, setExtraSelectors);
PHP_METHOD(Qt_Core_QFileSelector_QFileSelector, allSelectors);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_select, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filePath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_selectqurl, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filePath, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_extraselectors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_setextraselectors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileselector_qfileselector_allselectors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfileselector_qfileselector_method_entry) {
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, staticMetaObject, arginfo_qt_core_qfileselector_qfileselector_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, tr, arginfo_qt_core_qfileselector_qfileselector_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, new_, arginfo_qt_core_qfileselector_qfileselector_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, select, arginfo_qt_core_qfileselector_qfileselector_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, selectQUrl, arginfo_qt_core_qfileselector_qfileselector_selectqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, extraSelectors, arginfo_qt_core_qfileselector_qfileselector_extraselectors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, setExtraSelectors, arginfo_qt_core_qfileselector_qfileselector_setextraselectors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSelector_QFileSelector, allSelectors, arginfo_qt_core_qfileselector_qfileselector_allselectors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
