
extern zend_class_entry *qt_core_qcontiguouscachedata_qcontiguouscachedata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QContiguousCacheData_QContiguousCacheData);

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, alloc);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setAlloc);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, count);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setCount);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, start);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setStart);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, offset);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setOffset);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, allocateData);
PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, freeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_alloc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setalloc, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setstart, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_offset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_allocatedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_freedata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcontiguouscachedata_qcontiguouscachedata_method_entry) {
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, alloc, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_alloc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, setAlloc, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setalloc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, count, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, setCount, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, start, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, setStart, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, offset, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, setOffset, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, allocateData, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_allocatedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QContiguousCacheData_QContiguousCacheData, freeData, arginfo_qt_core_qcontiguouscachedata_qcontiguouscachedata_freedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
