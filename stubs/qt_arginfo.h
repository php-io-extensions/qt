/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f08b98aa72fa84188e2cade9a8bd80bfb11fecde */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qVersion, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(qVersion);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(qVersion, arginfo_qVersion)
	ZEND_FE_END
};

static zend_class_entry *register_class_QtException(zend_class_entry *class_entry_RuntimeException)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QtException", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_RuntimeException, 0);

	return class_entry;
}
