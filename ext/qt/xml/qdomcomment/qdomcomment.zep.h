
extern zend_class_entry *qt_xml_qdomcomment_qdomcomment_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomComment_QDomComment);

PHP_METHOD(Qt_Xml_QDomComment_QDomComment, new_);
PHP_METHOD(Qt_Xml_QDomComment_QDomComment, newQDomComment);
PHP_METHOD(Qt_Xml_QDomComment_QDomComment, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcomment_qdomcomment_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcomment_qdomcomment_newqdomcomment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, comment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomcomment_qdomcomment_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomcomment_qdomcomment_method_entry) {
	PHP_ME(Qt_Xml_QDomComment_QDomComment, new_, arginfo_qt_xml_qdomcomment_qdomcomment_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomComment_QDomComment, newQDomComment, arginfo_qt_xml_qdomcomment_qdomcomment_newqdomcomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomComment_QDomComment, nodeType, arginfo_qt_xml_qdomcomment_qdomcomment_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
