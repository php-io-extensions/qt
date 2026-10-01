
extern zend_class_entry *qt_core_qcommandlineoption_qcommandlineoption_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCommandLineOption_QCommandLineOption);

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, new_);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringList);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringQStringQStringQString);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringListQStringQStringQString);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQCommandLineOption);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, swap);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, names);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setValueName);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, valueName);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDescription);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, description);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValue);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValues);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, defaultValues);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, flags);
PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setFlags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, names, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringqstringqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, valueName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringlistqstringqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, names, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, valueName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqcommandlineoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_names, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_setvaluename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_valuename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_description, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdefaultvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdefaultvalues, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, defaultValues, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_defaultvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineoption_qcommandlineoption_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aflags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcommandlineoption_qcommandlineoption_method_entry) {
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, new_, arginfo_qt_core_qcommandlineoption_qcommandlineoption_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringList, arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringQStringQStringQString, arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringqstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringListQStringQStringQString, arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqstringlistqstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, newQCommandLineOption, arginfo_qt_core_qcommandlineoption_qcommandlineoption_newqcommandlineoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, swap, arginfo_qt_core_qcommandlineoption_qcommandlineoption_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, names, arginfo_qt_core_qcommandlineoption_qcommandlineoption_names, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, setValueName, arginfo_qt_core_qcommandlineoption_qcommandlineoption_setvaluename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, valueName, arginfo_qt_core_qcommandlineoption_qcommandlineoption_valuename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, setDescription, arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, description, arginfo_qt_core_qcommandlineoption_qcommandlineoption_description, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValue, arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdefaultvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValues, arginfo_qt_core_qcommandlineoption_qcommandlineoption_setdefaultvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, defaultValues, arginfo_qt_core_qcommandlineoption_qcommandlineoption_defaultvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, flags, arginfo_qt_core_qcommandlineoption_qcommandlineoption_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineOption_QCommandLineOption, setFlags, arginfo_qt_core_qcommandlineoption_qcommandlineoption_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
