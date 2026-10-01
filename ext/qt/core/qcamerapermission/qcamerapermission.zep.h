
extern zend_class_entry *qt_core_qcamerapermission_qcamerapermission_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCameraPermission_QCameraPermission);

PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, new_);
PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, newQCameraPermission);
PHP_METHOD(Qt_Core_QCameraPermission_QCameraPermission, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcamerapermission_qcamerapermission_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcamerapermission_qcamerapermission_newqcamerapermission, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcamerapermission_qcamerapermission_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcamerapermission_qcamerapermission_method_entry) {
	PHP_ME(Qt_Core_QCameraPermission_QCameraPermission, new_, arginfo_qt_core_qcamerapermission_qcamerapermission_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCameraPermission_QCameraPermission, newQCameraPermission, arginfo_qt_core_qcamerapermission_qcamerapermission_newqcamerapermission, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCameraPermission_QCameraPermission, swap, arginfo_qt_core_qcamerapermission_qcamerapermission_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
