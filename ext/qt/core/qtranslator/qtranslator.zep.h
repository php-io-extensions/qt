
extern zend_class_entry *qt_core_qtranslator_qtranslator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTranslator_QTranslator);

PHP_METHOD(Qt_Core_QTranslator_QTranslator, staticMetaObject);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, tr);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, new_);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, translate);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, isEmpty);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, language);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, filePath);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, load);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, loadQLocaleQStringQStringQStringQString);
PHP_METHOD(Qt_Core_QTranslator_QTranslator, loadUcharIntQString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_translate, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, context)
	ZEND_ARG_INFO(0, sourceText)
	ZEND_ARG_INFO(0, disambiguation)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_language, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_filepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_load, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, search_delimiters, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_loadqlocaleqstringqstringqstringqstring, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtranslator_qtranslator_loaducharintqstring, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtranslator_qtranslator_method_entry) {
	PHP_ME(Qt_Core_QTranslator_QTranslator, staticMetaObject, arginfo_qt_core_qtranslator_qtranslator_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, tr, arginfo_qt_core_qtranslator_qtranslator_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, new_, arginfo_qt_core_qtranslator_qtranslator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, translate, arginfo_qt_core_qtranslator_qtranslator_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, isEmpty, arginfo_qt_core_qtranslator_qtranslator_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, language, arginfo_qt_core_qtranslator_qtranslator_language, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, filePath, arginfo_qt_core_qtranslator_qtranslator_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, load, arginfo_qt_core_qtranslator_qtranslator_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, loadQLocaleQStringQStringQStringQString, arginfo_qt_core_qtranslator_qtranslator_loadqlocaleqstringqstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTranslator_QTranslator, loadUcharIntQString, arginfo_qt_core_qtranslator_qtranslator_loaducharintqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
