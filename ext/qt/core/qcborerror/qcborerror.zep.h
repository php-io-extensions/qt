
extern zend_class_entry *qt_core_qcborerror_qcborerror_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborError_QCborError);

PHP_METHOD(Qt_Core_QCborError_QCborError, staticMetaObject);
PHP_METHOD(Qt_Core_QCborError_QCborError, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QCborError_QCborError, c);
PHP_METHOD(Qt_Core_QCborError_QCborError, setC);
PHP_METHOD(Qt_Core_QCborError_QCborError, toString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborerror_qcborerror_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborerror_qcborerror_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborerror_qcborerror_c, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborerror_qcborerror_setc, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborerror_qcborerror_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborerror_qcborerror_method_entry) {
	PHP_ME(Qt_Core_QCborError_QCborError, staticMetaObject, arginfo_qt_core_qcborerror_qcborerror_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborError_QCborError, qt_check_for_QGADGET_macro, arginfo_qt_core_qcborerror_qcborerror_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborError_QCborError, c, arginfo_qt_core_qcborerror_qcborerror_c, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborError_QCborError, setC, arginfo_qt_core_qcborerror_qcborerror_setc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborError_QCborError, toString, arginfo_qt_core_qcborerror_qcborerror_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
