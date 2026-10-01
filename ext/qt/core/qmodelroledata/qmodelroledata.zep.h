
extern zend_class_entry *qt_core_qmodelroledata_qmodelroledata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QModelRoleData_QModelRoleData);

PHP_METHOD(Qt_Core_QModelRoleData_QModelRoleData, new_);
PHP_METHOD(Qt_Core_QModelRoleData_QModelRoleData, role);
PHP_METHOD(Qt_Core_QModelRoleData_QModelRoleData, data);
PHP_METHOD(Qt_Core_QModelRoleData_QModelRoleData, clearData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelroledata_qmodelroledata_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelroledata_qmodelroledata_role, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmodelroledata_qmodelroledata_data, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelroledata_qmodelroledata_cleardata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmodelroledata_qmodelroledata_method_entry) {
	PHP_ME(Qt_Core_QModelRoleData_QModelRoleData, new_, arginfo_qt_core_qmodelroledata_qmodelroledata_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelRoleData_QModelRoleData, role, arginfo_qt_core_qmodelroledata_qmodelroledata_role, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelRoleData_QModelRoleData, data, arginfo_qt_core_qmodelroledata_qmodelroledata_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelRoleData_QModelRoleData, clearData, arginfo_qt_core_qmodelroledata_qmodelroledata_cleardata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
