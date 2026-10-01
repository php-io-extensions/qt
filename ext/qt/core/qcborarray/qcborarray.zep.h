
extern zend_class_entry *qt_core_qcborarray_qcborarray_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborArray_QCborArray);

PHP_METHOD(Qt_Core_QCborArray_QCborArray, new_);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, newQCborArray);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, swap);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, toCborValue);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, size);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, isEmpty);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, clear);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, at);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, first);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, last);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, insert);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, prepend);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, append);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, removeAt);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, takeAt);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, removeFirst);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, removeLast);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, takeFirst);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, takeLast);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, contains);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, compare);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, push_back);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, push_front);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, pop_front);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, pop_back);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, empty_);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, fromStringList);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, fromVariantList);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, fromJsonArray);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, toVariantList);
PHP_METHOD(Qt_Core_QCborArray_QCborArray, toJsonArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_newqcborarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_tocborvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_at, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_first, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_last, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_insert, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_prepend, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_removefirst, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_removelast, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_takefirst, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_takelast, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_push_back, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_push_front, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_pop_front, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_pop_back, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_fromstringlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_fromvariantlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_fromjsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_tovariantlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarray_qcborarray_tojsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborarray_qcborarray_method_entry) {
	PHP_ME(Qt_Core_QCborArray_QCborArray, new_, arginfo_qt_core_qcborarray_qcborarray_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, newQCborArray, arginfo_qt_core_qcborarray_qcborarray_newqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, swap, arginfo_qt_core_qcborarray_qcborarray_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, toCborValue, arginfo_qt_core_qcborarray_qcborarray_tocborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, size, arginfo_qt_core_qcborarray_qcborarray_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, isEmpty, arginfo_qt_core_qcborarray_qcborarray_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, clear, arginfo_qt_core_qcborarray_qcborarray_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, at, arginfo_qt_core_qcborarray_qcborarray_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, first, arginfo_qt_core_qcborarray_qcborarray_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, last, arginfo_qt_core_qcborarray_qcborarray_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, insert, arginfo_qt_core_qcborarray_qcborarray_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, prepend, arginfo_qt_core_qcborarray_qcborarray_prepend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, append, arginfo_qt_core_qcborarray_qcborarray_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, removeAt, arginfo_qt_core_qcborarray_qcborarray_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, takeAt, arginfo_qt_core_qcborarray_qcborarray_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, removeFirst, arginfo_qt_core_qcborarray_qcborarray_removefirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, removeLast, arginfo_qt_core_qcborarray_qcborarray_removelast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, takeFirst, arginfo_qt_core_qcborarray_qcborarray_takefirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, takeLast, arginfo_qt_core_qcborarray_qcborarray_takelast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, contains, arginfo_qt_core_qcborarray_qcborarray_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, compare, arginfo_qt_core_qcborarray_qcborarray_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, push_back, arginfo_qt_core_qcborarray_qcborarray_push_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, push_front, arginfo_qt_core_qcborarray_qcborarray_push_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, pop_front, arginfo_qt_core_qcborarray_qcborarray_pop_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, pop_back, arginfo_qt_core_qcborarray_qcborarray_pop_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, empty_, arginfo_qt_core_qcborarray_qcborarray_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, fromStringList, arginfo_qt_core_qcborarray_qcborarray_fromstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, fromVariantList, arginfo_qt_core_qcborarray_qcborarray_fromvariantlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, fromJsonArray, arginfo_qt_core_qcborarray_qcborarray_fromjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, toVariantList, arginfo_qt_core_qcborarray_qcborarray_tovariantlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborArray_QCborArray, toJsonArray, arginfo_qt_core_qcborarray_qcborarray_tojsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
