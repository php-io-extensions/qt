
extern zend_class_entry *qt_xml_qdomattr_qdomattr_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomAttr_QDomAttr);

PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, new_);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, newQDomAttr);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, name);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, specified);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, ownerElement);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, value);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, setValue);
PHP_METHOD(Qt_Xml_QDomAttr_QDomAttr, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_newqdomattr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_specified, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_ownerelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_value, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomattr_qdomattr_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomattr_qdomattr_method_entry) {
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, new_, arginfo_qt_xml_qdomattr_qdomattr_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, newQDomAttr, arginfo_qt_xml_qdomattr_qdomattr_newqdomattr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, name, arginfo_qt_xml_qdomattr_qdomattr_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, specified, arginfo_qt_xml_qdomattr_qdomattr_specified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, ownerElement, arginfo_qt_xml_qdomattr_qdomattr_ownerelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, value, arginfo_qt_xml_qdomattr_qdomattr_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, setValue, arginfo_qt_xml_qdomattr_qdomattr_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomAttr_QDomAttr, nodeType, arginfo_qt_xml_qdomattr_qdomattr_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
