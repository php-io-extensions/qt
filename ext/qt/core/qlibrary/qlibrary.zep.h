
extern zend_class_entry *qt_core_qlibrary_qlibrary_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLibrary_QLibrary);

PHP_METHOD(Qt_Core_QLibrary_QLibrary, staticMetaObject);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, tr);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, new_);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, newQStringQObject);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, newQStringIntQObject);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, newQStringQStringQObject);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, load);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, unload);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, isLoaded);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, isLibrary);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, setFileName);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, fileName);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, setFileNameAndVersion);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, setFileNameAndVersionQStringQString);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, errorString);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, setLoadHints);
PHP_METHOD(Qt_Core_QLibrary_QLibrary, loadHints);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_newqstringqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_newqstringintqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, verNum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_newqstringqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_load, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_unload, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_isloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_islibrary, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_setfilenameandversion, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, verNum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_setfilenameandversionqstringqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_setloadhints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibrary_qlibrary_loadhints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlibrary_qlibrary_method_entry) {
	PHP_ME(Qt_Core_QLibrary_QLibrary, staticMetaObject, arginfo_qt_core_qlibrary_qlibrary_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, tr, arginfo_qt_core_qlibrary_qlibrary_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, new_, arginfo_qt_core_qlibrary_qlibrary_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, newQStringQObject, arginfo_qt_core_qlibrary_qlibrary_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, newQStringIntQObject, arginfo_qt_core_qlibrary_qlibrary_newqstringintqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, newQStringQStringQObject, arginfo_qt_core_qlibrary_qlibrary_newqstringqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, load, arginfo_qt_core_qlibrary_qlibrary_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, unload, arginfo_qt_core_qlibrary_qlibrary_unload, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, isLoaded, arginfo_qt_core_qlibrary_qlibrary_isloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, isLibrary, arginfo_qt_core_qlibrary_qlibrary_islibrary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, setFileName, arginfo_qt_core_qlibrary_qlibrary_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, fileName, arginfo_qt_core_qlibrary_qlibrary_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, setFileNameAndVersion, arginfo_qt_core_qlibrary_qlibrary_setfilenameandversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, setFileNameAndVersionQStringQString, arginfo_qt_core_qlibrary_qlibrary_setfilenameandversionqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, errorString, arginfo_qt_core_qlibrary_qlibrary_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, setLoadHints, arginfo_qt_core_qlibrary_qlibrary_setloadhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibrary_QLibrary, loadHints, arginfo_qt_core_qlibrary_qlibrary_loadhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
