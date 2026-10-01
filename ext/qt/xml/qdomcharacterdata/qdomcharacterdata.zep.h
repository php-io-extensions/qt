
extern zend_class_entry *qt_xml_qdomcharacterdata_qdomcharacterdata_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomCharacterData_QDomCharacterData);

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, new_);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, newQDomCharacterData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, substringData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, appendData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, insertData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, deleteData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, replaceData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, length);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, data);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, setData);
PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_newqdomcharacterdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, characterData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_substringdata, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_appenddata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_insertdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_deletedata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_replacedata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_data, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_setdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomcharacterdata_qdomcharacterdata_method_entry) {
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, new_, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, newQDomCharacterData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_newqdomcharacterdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, substringData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_substringdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, appendData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_appenddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, insertData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_insertdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, deleteData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_deletedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, replaceData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_replacedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, length, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, data, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, setData, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomCharacterData_QDomCharacterData, nodeType, arginfo_qt_xml_qdomcharacterdata_qdomcharacterdata_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
