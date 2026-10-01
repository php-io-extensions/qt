
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/xml-qdomcomment.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomComment_QDomComment)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomComment, QDomComment, qt, xml_qdomcomment_qdomcomment, qt_xml_qdomcomment_qdomcomment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomComment_QDomComment, new_)
{

	RETURN_LONG(phpqt_qdomcomment_new());
}

PHP_METHOD(Qt_Xml_QDomComment_QDomComment, newQDomComment)
{
	zval *comment_param = NULL, _0;
	zend_long comment;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(comment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &comment_param);
	ZVAL_LONG(&_0, comment);
	RETURN_LONG(phpqt_qdomcomment_new_q_dom_comment(&_0));
}

PHP_METHOD(Qt_Xml_QDomComment_QDomComment, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomcomment_node_type(&_0));
}

