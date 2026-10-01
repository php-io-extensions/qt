
extern zend_class_entry *qt_core_qvariantprivateshared_qvariantprivateshared_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QVariantPrivateShared_QVariantPrivateShared);

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeOffset);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeAllocationSize);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, create);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, free);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, ref);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setRef);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, offset);
PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setOffset);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_computeoffset, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ps, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_computeallocationsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_free, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_ref, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_setref, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_offset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_setoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qvariantprivateshared_qvariantprivateshared_method_entry) {
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeOffset, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_computeoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeAllocationSize, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_computeallocationsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, create, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, free, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_free, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, ref, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_ref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setRef, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_setref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, offset, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setOffset, arginfo_qt_core_qvariantprivateshared_qvariantprivateshared_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
