
extern zend_class_entry *qt_xml_qdomentity_qdomentity_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomEntity_QDomEntity);

PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, new_);
PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, newQDomEntity);
PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, publicId);
PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, systemId);
PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, notationName);
PHP_METHOD(Qt_Xml_QDomEntity_QDomEntity, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_newqdomentity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, entity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_publicid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_systemid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_notationname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomentity_qdomentity_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomentity_qdomentity_method_entry) {
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, new_, arginfo_qt_xml_qdomentity_qdomentity_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, newQDomEntity, arginfo_qt_xml_qdomentity_qdomentity_newqdomentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, publicId, arginfo_qt_xml_qdomentity_qdomentity_publicid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, systemId, arginfo_qt_xml_qdomentity_qdomentity_systemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, notationName, arginfo_qt_xml_qdomentity_qdomentity_notationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomEntity_QDomEntity, nodeType, arginfo_qt_xml_qdomentity_qdomentity_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
