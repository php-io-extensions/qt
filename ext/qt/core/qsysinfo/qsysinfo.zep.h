
extern zend_class_entry *qt_core_qsysinfo_qsysinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSysInfo_QSysInfo);

PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, buildCpuArchitecture);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, currentCpuArchitecture);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, buildAbi);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, kernelType);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, kernelVersion);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, productType);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, productVersion);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, prettyProductName);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, machineHostName);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, machineUniqueId);
PHP_METHOD(Qt_Core_QSysInfo_QSysInfo, bootUniqueId);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_buildcpuarchitecture, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_currentcpuarchitecture, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_buildabi, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_kerneltype, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_kernelversion, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_producttype, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_productversion, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_prettyproductname, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_machinehostname, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_machineuniqueid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsysinfo_qsysinfo_bootuniqueid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsysinfo_qsysinfo_method_entry) {
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, buildCpuArchitecture, arginfo_qt_core_qsysinfo_qsysinfo_buildcpuarchitecture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, currentCpuArchitecture, arginfo_qt_core_qsysinfo_qsysinfo_currentcpuarchitecture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, buildAbi, arginfo_qt_core_qsysinfo_qsysinfo_buildabi, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, kernelType, arginfo_qt_core_qsysinfo_qsysinfo_kerneltype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, kernelVersion, arginfo_qt_core_qsysinfo_qsysinfo_kernelversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, productType, arginfo_qt_core_qsysinfo_qsysinfo_producttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, productVersion, arginfo_qt_core_qsysinfo_qsysinfo_productversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, prettyProductName, arginfo_qt_core_qsysinfo_qsysinfo_prettyproductname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, machineHostName, arginfo_qt_core_qsysinfo_qsysinfo_machinehostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, machineUniqueId, arginfo_qt_core_qsysinfo_qsysinfo_machineuniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSysInfo_QSysInfo, bootUniqueId, arginfo_qt_core_qsysinfo_qsysinfo_bootuniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
