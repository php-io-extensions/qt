
extern zend_class_entry *qt_xml_qdomnamednodemap_qdomnamednodemap_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap);

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, new_);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, newQDomNamedNodeMap);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItem);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItem);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItem);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, item);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItemNS);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItemNS);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItemNS);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, length);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, count);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, size);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, isEmpty);
PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, contains);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_newqdomnamednodemap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namedNodeMap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_nameditem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_setnameditem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newNode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_removenameditem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_nameditemns, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_setnameditemns, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newNode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_removenameditemns, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomnamednodemap_qdomnamednodemap_method_entry) {
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, new_, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, newQDomNamedNodeMap, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_newqdomnamednodemap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItem, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_nameditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItem, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_setnameditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItem, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_removenameditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, item, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItemNS, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_nameditemns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItemNS, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_setnameditemns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItemNS, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_removenameditemns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, length, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, count, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, size, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, isEmpty, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, contains, arginfo_qt_xml_qdomnamednodemap_qdomnamednodemap_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
