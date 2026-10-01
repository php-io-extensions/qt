
extern zend_class_entry *qt_core_qpermission_qpermission_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPermission_QPermission);

PHP_METHOD(Qt_Core_QPermission_QPermission, new_);
PHP_METHOD(Qt_Core_QPermission_QPermission, status);
PHP_METHOD(Qt_Core_QPermission_QPermission, type);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpermission_qpermission_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpermission_qpermission_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpermission_qpermission_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpermission_qpermission_method_entry) {
	PHP_ME(Qt_Core_QPermission_QPermission, new_, arginfo_qt_core_qpermission_qpermission_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPermission_QPermission, status, arginfo_qt_core_qpermission_qpermission_status, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPermission_QPermission, type, arginfo_qt_core_qpermission_qpermission_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
