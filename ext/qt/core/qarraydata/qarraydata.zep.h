
extern zend_class_entry *qt_core_qarraydata_qarraydata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QArrayData_QArrayData);

PHP_METHOD(Qt_Core_QArrayData_QArrayData, flags);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, setFlags);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, alloc);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, setAlloc);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, allocatedCapacity);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, constAllocatedCapacity);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, ref);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, deref);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, isShared);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, needsDetach);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, detachCapacity);
PHP_METHOD(Qt_Core_QArrayData_QArrayData, deallocate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_alloc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_setalloc, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_allocatedcapacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_constallocatedcapacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_ref, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_deref, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_isshared, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_needsdetach, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_detachcapacity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qarraydata_qarraydata_deallocate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qarraydata_qarraydata_method_entry) {
	PHP_ME(Qt_Core_QArrayData_QArrayData, flags, arginfo_qt_core_qarraydata_qarraydata_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, setFlags, arginfo_qt_core_qarraydata_qarraydata_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, alloc, arginfo_qt_core_qarraydata_qarraydata_alloc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, setAlloc, arginfo_qt_core_qarraydata_qarraydata_setalloc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, allocatedCapacity, arginfo_qt_core_qarraydata_qarraydata_allocatedcapacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, constAllocatedCapacity, arginfo_qt_core_qarraydata_qarraydata_constallocatedcapacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, ref, arginfo_qt_core_qarraydata_qarraydata_ref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, deref, arginfo_qt_core_qarraydata_qarraydata_deref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, isShared, arginfo_qt_core_qarraydata_qarraydata_isshared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, needsDetach, arginfo_qt_core_qarraydata_qarraydata_needsdetach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, detachCapacity, arginfo_qt_core_qarraydata_qarraydata_detachcapacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QArrayData_QArrayData, deallocate, arginfo_qt_core_qarraydata_qarraydata_deallocate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
