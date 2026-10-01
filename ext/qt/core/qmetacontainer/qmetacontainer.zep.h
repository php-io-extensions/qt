
extern zend_class_entry *qt_core_qmetacontainer_qmetacontainer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaContainer_QMetaContainer);

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, new_);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasInputIterator);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasForwardIterator);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasBidirectionalIterator);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasRandomAccessIterator);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasSize);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, canClear);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasIterator);
PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasConstIterator);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasinputiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasforwarditerator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasbidirectionaliterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasrandomaccessiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hassize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_canclear, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetacontainer_qmetacontainer_hasconstiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetacontainer_qmetacontainer_method_entry) {
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, new_, arginfo_qt_core_qmetacontainer_qmetacontainer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasInputIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasinputiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasForwardIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasforwarditerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasBidirectionalIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasbidirectionaliterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasRandomAccessIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasrandomaccessiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasSize, arginfo_qt_core_qmetacontainer_qmetacontainer_hassize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, canClear, arginfo_qt_core_qmetacontainer_qmetacontainer_canclear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaContainer_QMetaContainer, hasConstIterator, arginfo_qt_core_qmetacontainer_qmetacontainer_hasconstiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
