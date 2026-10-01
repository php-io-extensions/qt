
extern zend_class_entry *qt_core_qcbormapiterator_qcbormapiterator_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborMapIterator_QCborMapIterator);

PHP_METHOD(Qt_Core_QCborMapIterator_QCborMapIterator, new_);
PHP_METHOD(Qt_Core_QCborMapIterator_QCborMapIterator, key);
PHP_METHOD(Qt_Core_QCborMapIterator_QCborMapIterator, value);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapiterator_qcbormapiterator_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapiterator_qcbormapiterator_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapiterator_qcbormapiterator_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcbormapiterator_qcbormapiterator_method_entry) {
	PHP_ME(Qt_Core_QCborMapIterator_QCborMapIterator, new_, arginfo_qt_core_qcbormapiterator_qcbormapiterator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMapIterator_QCborMapIterator, key, arginfo_qt_core_qcbormapiterator_qcbormapiterator_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMapIterator_QCborMapIterator, value, arginfo_qt_core_qcbormapiterator_qcbormapiterator_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
