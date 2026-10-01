
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
#include "src/xml-qdomentityreference.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomEntityReference_QDomEntityReference)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomEntityReference, QDomEntityReference, qt, xml_qdomentityreference_qdomentityreference, qt_xml_qdomentityreference_qdomentityreference_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomEntityReference_QDomEntityReference, new_)
{

	RETURN_LONG(phpqt_qdomentityreference_new());
}

PHP_METHOD(Qt_Xml_QDomEntityReference_QDomEntityReference, newQDomEntityReference)
{
	zval *entityReference_param = NULL, _0;
	zend_long entityReference;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(entityReference)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &entityReference_param);
	ZVAL_LONG(&_0, entityReference);
	RETURN_LONG(phpqt_qdomentityreference_new_q_dom_entity_reference(&_0));
}

PHP_METHOD(Qt_Xml_QDomEntityReference_QDomEntityReference, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomentityreference_node_type(&_0));
}

