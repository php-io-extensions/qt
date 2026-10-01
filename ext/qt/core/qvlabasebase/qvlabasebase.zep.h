
extern zend_class_entry *qt_core_qvlabasebase_qvlabasebase_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QVLABaseBase_QVLABaseBase);

PHP_METHOD(Qt_Core_QVLABaseBase_QVLABaseBase, capacity);
PHP_METHOD(Qt_Core_QVLABaseBase_QVLABaseBase, size);
PHP_METHOD(Qt_Core_QVLABaseBase_QVLABaseBase, empty_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvlabasebase_qvlabasebase_capacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvlabasebase_qvlabasebase_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvlabasebase_qvlabasebase_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qvlabasebase_qvlabasebase_method_entry) {
	PHP_ME(Qt_Core_QVLABaseBase_QVLABaseBase, capacity, arginfo_qt_core_qvlabasebase_qvlabasebase_capacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVLABaseBase_QVLABaseBase, size, arginfo_qt_core_qvlabasebase_qvlabasebase_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVLABaseBase_QVLABaseBase, empty_, arginfo_qt_core_qvlabasebase_qvlabasebase_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
