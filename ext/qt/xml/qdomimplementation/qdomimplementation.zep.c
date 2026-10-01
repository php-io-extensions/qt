
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
#include "src/xml-qdomimplementation.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomImplementation_QDomImplementation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomImplementation, QDomImplementation, qt, xml_qdomimplementation_qdomimplementation, qt_xml_qdomimplementation_qdomimplementation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, new_)
{

	RETURN_LONG(phpqt_qdomimplementation_new());
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, newQDomImplementation)
{
	zval *implementation_param = NULL, _0;
	zend_long implementation;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(implementation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &implementation_param);
	ZVAL_LONG(&_0, implementation);
	RETURN_LONG(phpqt_qdomimplementation_new_q_dom_implementation(&_0));
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, hasFeature)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval feature, version;
	zval *handle_param = NULL, *feature_param = NULL, *version_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&feature);
	ZVAL_UNDEF(&version);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(feature)
		Z_PARAM_STR(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &feature_param, &version_param);
	zephir_get_strval(&feature, feature_param);
	zephir_get_strval(&version, version_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomimplementation_has_feature(&_0, &feature, &version);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, createDocumentType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qName, publicId, systemId;
	zval *handle_param = NULL, *qName_param = NULL, *publicId_param = NULL, *systemId_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&qName);
	ZVAL_UNDEF(&publicId);
	ZVAL_UNDEF(&systemId);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(qName)
		Z_PARAM_STR(publicId)
		Z_PARAM_STR(systemId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &qName_param, &publicId_param, &systemId_param);
	zephir_get_strval(&qName, qName_param);
	zephir_get_strval(&publicId, publicId_param);
	zephir_get_strval(&systemId, systemId_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomimplementation_create_document_type(&_0, &qName, &publicId, &systemId));
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, createDocument)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *doctype_param = NULL, _0, _1;
	zend_long handle, doctype;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_LONG(doctype)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &doctype_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, doctype);
	RETURN_MM_LONG(phpqt_qdomimplementation_create_document(&_0, &nsURI, &qName, &_1));
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, invalidDataPolicy)
{

	RETURN_LONG(phpqt_qdomimplementation_invalid_data_policy());
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, setInvalidDataPolicy)
{
	zval *policy_param = NULL, _0;
	zend_long policy;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &policy_param);
	ZVAL_LONG(&_0, policy);
	phpqt_qdomimplementation_set_invalid_data_policy(&_0);
}

PHP_METHOD(Qt_Xml_QDomImplementation_QDomImplementation, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomimplementation_is_null(&_0);
	RETURN_BOOL(r == 1);
}

