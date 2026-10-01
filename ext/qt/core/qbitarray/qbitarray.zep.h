
extern zend_class_entry *qt_core_qbitarray_qbitarray_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBitArray_QBitArray);

PHP_METHOD(Qt_Core_QBitArray_QBitArray, new_);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, newQsizetypeBool);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, newQBitArray);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, swap);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, size);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, count);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, countBool);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, isEmpty);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, isNull);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, resize);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, detach);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, isDetached);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, clear);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, testBit);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, setBit);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, setBitQsizetypeBool);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, clearBit);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, toggleBit);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, at);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, fill);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, fillBoolQsizetypeQsizetype);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, truncate);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, bits);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, fromBits);
PHP_METHOD(Qt_Core_QBitArray_QBitArray, toUInt32);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_newqsizetypebool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_newqbitarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_countbool, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_resize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_testbit, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_setbit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_setbitqsizetypebool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_clearbit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_togglebit, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_at, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_fill, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aval, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, asize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_fillboolqsizetypeqsizetype, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_truncate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_bits, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_frombits, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarray_qbitarray_touint32, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endianness, IS_LONG, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbitarray_qbitarray_method_entry) {
	PHP_ME(Qt_Core_QBitArray_QBitArray, new_, arginfo_qt_core_qbitarray_qbitarray_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, newQsizetypeBool, arginfo_qt_core_qbitarray_qbitarray_newqsizetypebool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, newQBitArray, arginfo_qt_core_qbitarray_qbitarray_newqbitarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, swap, arginfo_qt_core_qbitarray_qbitarray_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, size, arginfo_qt_core_qbitarray_qbitarray_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, count, arginfo_qt_core_qbitarray_qbitarray_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, countBool, arginfo_qt_core_qbitarray_qbitarray_countbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, isEmpty, arginfo_qt_core_qbitarray_qbitarray_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, isNull, arginfo_qt_core_qbitarray_qbitarray_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, resize, arginfo_qt_core_qbitarray_qbitarray_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, detach, arginfo_qt_core_qbitarray_qbitarray_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, isDetached, arginfo_qt_core_qbitarray_qbitarray_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, clear, arginfo_qt_core_qbitarray_qbitarray_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, testBit, arginfo_qt_core_qbitarray_qbitarray_testbit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, setBit, arginfo_qt_core_qbitarray_qbitarray_setbit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, setBitQsizetypeBool, arginfo_qt_core_qbitarray_qbitarray_setbitqsizetypebool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, clearBit, arginfo_qt_core_qbitarray_qbitarray_clearbit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, toggleBit, arginfo_qt_core_qbitarray_qbitarray_togglebit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, at, arginfo_qt_core_qbitarray_qbitarray_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, fill, arginfo_qt_core_qbitarray_qbitarray_fill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, fillBoolQsizetypeQsizetype, arginfo_qt_core_qbitarray_qbitarray_fillboolqsizetypeqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, truncate, arginfo_qt_core_qbitarray_qbitarray_truncate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, bits, arginfo_qt_core_qbitarray_qbitarray_bits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, fromBits, arginfo_qt_core_qbitarray_qbitarray_frombits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitArray_QBitArray, toUInt32, arginfo_qt_core_qbitarray_qbitarray_touint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
