
extern zend_class_entry *qt_core_qdebugfunctions_qdebugfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDebugFunctions_QDebugFunctions);

PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, swap);
PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperator);
PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_debugOperator);
PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperatorQDebugQuint64QMetaObjectChar);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebugfunctions_qdebugfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_flagdebugoperator, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, debug, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeofT, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_debugoperator, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, meta, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_flagdebugoperatorqdebugquint64qmetaobjectchar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dbg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, meta, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdebugfunctions_qdebugfunctions_method_entry) {
	PHP_ME(Qt_Core_QDebugFunctions_QDebugFunctions, swap, arginfo_qt_core_qdebugfunctions_qdebugfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperator, arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_flagdebugoperator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_debugOperator, arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_debugoperator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperatorQDebugQuint64QMetaObjectChar, arginfo_qt_core_qdebugfunctions_qdebugfunctions_qt_qmetaenum_flagdebugoperatorqdebugquint64qmetaobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
