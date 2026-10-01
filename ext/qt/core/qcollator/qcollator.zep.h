
extern zend_class_entry *qt_core_qcollator_qcollator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCollator_QCollator);

PHP_METHOD(Qt_Core_QCollator_QCollator, new_);
PHP_METHOD(Qt_Core_QCollator_QCollator, newQLocale);
PHP_METHOD(Qt_Core_QCollator_QCollator, newQCollator);
PHP_METHOD(Qt_Core_QCollator_QCollator, swap);
PHP_METHOD(Qt_Core_QCollator_QCollator, setLocale);
PHP_METHOD(Qt_Core_QCollator_QCollator, locale);
PHP_METHOD(Qt_Core_QCollator_QCollator, caseSensitivity);
PHP_METHOD(Qt_Core_QCollator_QCollator, setCaseSensitivity);
PHP_METHOD(Qt_Core_QCollator_QCollator, setNumericMode);
PHP_METHOD(Qt_Core_QCollator_QCollator, numericMode);
PHP_METHOD(Qt_Core_QCollator_QCollator, setIgnorePunctuation);
PHP_METHOD(Qt_Core_QCollator_QCollator, ignorePunctuation);
PHP_METHOD(Qt_Core_QCollator_QCollator, compare);
PHP_METHOD(Qt_Core_QCollator_QCollator, compareQCharQsizetypeQCharQsizetype);
PHP_METHOD(Qt_Core_QCollator_QCollator, compareQStringViewQStringView);
PHP_METHOD(Qt_Core_QCollator_QCollator, sortKey);
PHP_METHOD(Qt_Core_QCollator_QCollator, defaultCompare);
PHP_METHOD(Qt_Core_QCollator_QCollator, defaultSortKey);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_newqlocale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_newqcollator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_casesensitivity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_setcasesensitivity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_setnumericmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_numericmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_setignorepunctuation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_ignorepunctuation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_compare, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_compareqcharqsizetypeqcharqsizetype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, s1)
	ZEND_ARG_TYPE_INFO(0, len1, IS_LONG, 0)
	ZEND_ARG_INFO(0, s2)
	ZEND_ARG_TYPE_INFO(0, len2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_compareqstringviewqstringview, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_sortkey, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_defaultcompare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, s2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollator_qcollator_defaultsortkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcollator_qcollator_method_entry) {
	PHP_ME(Qt_Core_QCollator_QCollator, new_, arginfo_qt_core_qcollator_qcollator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, newQLocale, arginfo_qt_core_qcollator_qcollator_newqlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, newQCollator, arginfo_qt_core_qcollator_qcollator_newqcollator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, swap, arginfo_qt_core_qcollator_qcollator_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, setLocale, arginfo_qt_core_qcollator_qcollator_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, locale, arginfo_qt_core_qcollator_qcollator_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, caseSensitivity, arginfo_qt_core_qcollator_qcollator_casesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, setCaseSensitivity, arginfo_qt_core_qcollator_qcollator_setcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, setNumericMode, arginfo_qt_core_qcollator_qcollator_setnumericmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, numericMode, arginfo_qt_core_qcollator_qcollator_numericmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, setIgnorePunctuation, arginfo_qt_core_qcollator_qcollator_setignorepunctuation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, ignorePunctuation, arginfo_qt_core_qcollator_qcollator_ignorepunctuation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, compare, arginfo_qt_core_qcollator_qcollator_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, compareQCharQsizetypeQCharQsizetype, arginfo_qt_core_qcollator_qcollator_compareqcharqsizetypeqcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, compareQStringViewQStringView, arginfo_qt_core_qcollator_qcollator_compareqstringviewqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, sortKey, arginfo_qt_core_qcollator_qcollator_sortkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, defaultCompare, arginfo_qt_core_qcollator_qcollator_defaultcompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollator_QCollator, defaultSortKey, arginfo_qt_core_qcollator_qcollator_defaultsortkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
