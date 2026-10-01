
extern zend_class_entry *qt_core_qcommandlineparser_qcommandlineparser_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCommandLineParser_QCommandLineParser);

PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, tr);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, new_);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, setSingleDashWordOptionMode);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, setOptionsAfterPositionalArgumentsMode);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, addOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, addVersionOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, addHelpOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, setApplicationDescription);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, applicationDescription);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, addPositionalArgument);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, clearPositionalArguments);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, process);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, processQCoreApplication);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, parse);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, errorText);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, isSet_);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, value);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, values);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, isSetQCommandLineOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, valueQCommandLineOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, valuesQCommandLineOption);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, positionalArguments);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, optionNames);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, unknownOptionNames);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, showVersion);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, showHelp);
PHP_METHOD(Qt_Core_QCommandLineParser_QCommandLineParser, helpText);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, sourceText)
	ZEND_ARG_INFO(0, disambiguation)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_setsingledashwordoptionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parsingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_setoptionsafterpositionalargumentsmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_addoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, commandLineOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_addversionoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_addhelpoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_setapplicationdescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_applicationdescription, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_addpositionalargument, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, syntax, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_clearpositionalarguments, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_process, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_processqcoreapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, app, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_parse, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_errortext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_isset_, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_value, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_values, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_issetqcommandlineoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_valueqcommandlineoption, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_valuesqcommandlineoption, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_positionalarguments, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_optionnames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_unknownoptionnames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_showversion, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_showhelp, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exitCode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcommandlineparser_qcommandlineparser_helptext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcommandlineparser_qcommandlineparser_method_entry) {
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, tr, arginfo_qt_core_qcommandlineparser_qcommandlineparser_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, new_, arginfo_qt_core_qcommandlineparser_qcommandlineparser_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, setSingleDashWordOptionMode, arginfo_qt_core_qcommandlineparser_qcommandlineparser_setsingledashwordoptionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, setOptionsAfterPositionalArgumentsMode, arginfo_qt_core_qcommandlineparser_qcommandlineparser_setoptionsafterpositionalargumentsmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, addOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_addoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, addVersionOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_addversionoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, addHelpOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_addhelpoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, setApplicationDescription, arginfo_qt_core_qcommandlineparser_qcommandlineparser_setapplicationdescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, applicationDescription, arginfo_qt_core_qcommandlineparser_qcommandlineparser_applicationdescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, addPositionalArgument, arginfo_qt_core_qcommandlineparser_qcommandlineparser_addpositionalargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, clearPositionalArguments, arginfo_qt_core_qcommandlineparser_qcommandlineparser_clearpositionalarguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, process, arginfo_qt_core_qcommandlineparser_qcommandlineparser_process, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, processQCoreApplication, arginfo_qt_core_qcommandlineparser_qcommandlineparser_processqcoreapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, parse, arginfo_qt_core_qcommandlineparser_qcommandlineparser_parse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, errorText, arginfo_qt_core_qcommandlineparser_qcommandlineparser_errortext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, isSet_, arginfo_qt_core_qcommandlineparser_qcommandlineparser_isset_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, value, arginfo_qt_core_qcommandlineparser_qcommandlineparser_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, values, arginfo_qt_core_qcommandlineparser_qcommandlineparser_values, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, isSetQCommandLineOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_issetqcommandlineoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, valueQCommandLineOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_valueqcommandlineoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, valuesQCommandLineOption, arginfo_qt_core_qcommandlineparser_qcommandlineparser_valuesqcommandlineoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, positionalArguments, arginfo_qt_core_qcommandlineparser_qcommandlineparser_positionalarguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, optionNames, arginfo_qt_core_qcommandlineparser_qcommandlineparser_optionnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, unknownOptionNames, arginfo_qt_core_qcommandlineparser_qcommandlineparser_unknownoptionnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, showVersion, arginfo_qt_core_qcommandlineparser_qcommandlineparser_showversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, showHelp, arginfo_qt_core_qcommandlineparser_qcommandlineparser_showhelp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCommandLineParser_QCommandLineParser, helpText, arginfo_qt_core_qcommandlineparser_qcommandlineparser_helptext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
