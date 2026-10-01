
extern zend_class_entry *qt_core_qmetasequence_qmetasequence_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaSequence_QMetaSequence);

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, new_);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, valueMetaType);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, isSortable);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtBegin);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtEnd);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtBegin);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtEnd);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIndex);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIndex);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValue);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValue);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIterator);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIterator);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canInsertValueAtIterator);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canEraseValueAtIterator);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canEraseRangeAtIterator);
PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtConstIterator);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_valuemetatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_issortable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canaddvalueatbegin, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canaddvalueatend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canremovevalueatbegin, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canremovevalueatend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatindex, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_cansetvalueatindex, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canaddvalue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canremovevalue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_cansetvalueatiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_caninsertvalueatiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_canerasevalueatiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_caneraserangeatiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatconstiterator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetasequence_qmetasequence_method_entry) {
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, new_, arginfo_qt_core_qmetasequence_qmetasequence_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, valueMetaType, arginfo_qt_core_qmetasequence_qmetasequence_valuemetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, isSortable, arginfo_qt_core_qmetasequence_qmetasequence_issortable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtBegin, arginfo_qt_core_qmetasequence_qmetasequence_canaddvalueatbegin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtEnd, arginfo_qt_core_qmetasequence_qmetasequence_canaddvalueatend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtBegin, arginfo_qt_core_qmetasequence_qmetasequence_canremovevalueatbegin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtEnd, arginfo_qt_core_qmetasequence_qmetasequence_canremovevalueatend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIndex, arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIndex, arginfo_qt_core_qmetasequence_qmetasequence_cansetvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canAddValue, arginfo_qt_core_qmetasequence_qmetasequence_canaddvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValue, arginfo_qt_core_qmetasequence_qmetasequence_canremovevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIterator, arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIterator, arginfo_qt_core_qmetasequence_qmetasequence_cansetvalueatiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canInsertValueAtIterator, arginfo_qt_core_qmetasequence_qmetasequence_caninsertvalueatiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canEraseValueAtIterator, arginfo_qt_core_qmetasequence_qmetasequence_canerasevalueatiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canEraseRangeAtIterator, arginfo_qt_core_qmetasequence_qmetasequence_caneraserangeatiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtConstIterator, arginfo_qt_core_qmetasequence_qmetasequence_cangetvalueatconstiterator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
