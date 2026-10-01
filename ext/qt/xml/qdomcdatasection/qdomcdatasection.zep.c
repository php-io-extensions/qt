
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
#include "src/xml-qdomcdatasection.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomCDATASection_QDomCDATASection)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomCDATASection, QDomCDATASection, qt, xml_qdomcdatasection_qdomcdatasection, qt_xml_qdomcdatasection_qdomcdatasection_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomCDATASection_QDomCDATASection, new_)
{

	RETURN_LONG(phpqt_qdomcdatasection_new());
}

PHP_METHOD(Qt_Xml_QDomCDATASection_QDomCDATASection, newQDomCDATASection)
{
	zval *cdataSection_param = NULL, _0;
	zend_long cdataSection;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cdataSection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cdataSection_param);
	ZVAL_LONG(&_0, cdataSection);
	RETURN_LONG(phpqt_qdomcdatasection_new_q_dom_c_d_a_t_a_section(&_0));
}

PHP_METHOD(Qt_Xml_QDomCDATASection_QDomCDATASection, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomcdatasection_node_type(&_0));
}

