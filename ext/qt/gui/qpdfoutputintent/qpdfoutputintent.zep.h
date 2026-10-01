
extern zend_class_entry *qt_gui_qpdfoutputintent_qpdfoutputintent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent);

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, new_);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, newQPdfOutputIntent);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, swap);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputConditionIdentifier);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputConditionIdentifier);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputCondition);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputCondition);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, registryName);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setRegistryName);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputProfile);
PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputProfile);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_newqpdfoutputintent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputconditionidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputconditionidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputcondition, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputcondition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, condition, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_registryname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setregistryname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputprofile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputprofile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, profile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpdfoutputintent_qpdfoutputintent_method_entry) {
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, new_, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, newQPdfOutputIntent, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_newqpdfoutputintent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, swap, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputConditionIdentifier, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputconditionidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputConditionIdentifier, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputconditionidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputCondition, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputcondition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputCondition, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputcondition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, registryName, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_registryname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setRegistryName, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setregistryname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputProfile, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_outputprofile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputProfile, arginfo_qt_gui_qpdfoutputintent_qpdfoutputintent_setoutputprofile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
