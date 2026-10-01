
extern zend_class_entry *qt_core_qjsonarray_qjsonarray_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonArray_QJsonArray);

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, new_);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, newQJsonArray);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, fromStringList);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, fromVariantList);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, toVariantList);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, size);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, count);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, isEmpty);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, at);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, first);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, last);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, prepend);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, append);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeAt);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, takeAt);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeFirst);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeLast);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, insert);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, replace);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, contains);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, swap);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, push_back);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, push_front);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, pop_front);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, pop_back);
PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, empty_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_newqjsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_fromstringlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_fromvariantlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_tovariantlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_at, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_first, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_last, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_prepend, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_removefirst, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_removelast, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_insert, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_replace, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_push_back, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_push_front, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_pop_front, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_pop_back, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarray_qjsonarray_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonarray_qjsonarray_method_entry) {
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, new_, arginfo_qt_core_qjsonarray_qjsonarray_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, newQJsonArray, arginfo_qt_core_qjsonarray_qjsonarray_newqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, fromStringList, arginfo_qt_core_qjsonarray_qjsonarray_fromstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, fromVariantList, arginfo_qt_core_qjsonarray_qjsonarray_fromvariantlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, toVariantList, arginfo_qt_core_qjsonarray_qjsonarray_tovariantlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, size, arginfo_qt_core_qjsonarray_qjsonarray_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, count, arginfo_qt_core_qjsonarray_qjsonarray_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, isEmpty, arginfo_qt_core_qjsonarray_qjsonarray_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, at, arginfo_qt_core_qjsonarray_qjsonarray_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, first, arginfo_qt_core_qjsonarray_qjsonarray_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, last, arginfo_qt_core_qjsonarray_qjsonarray_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, prepend, arginfo_qt_core_qjsonarray_qjsonarray_prepend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, append, arginfo_qt_core_qjsonarray_qjsonarray_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, removeAt, arginfo_qt_core_qjsonarray_qjsonarray_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, takeAt, arginfo_qt_core_qjsonarray_qjsonarray_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, removeFirst, arginfo_qt_core_qjsonarray_qjsonarray_removefirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, removeLast, arginfo_qt_core_qjsonarray_qjsonarray_removelast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, insert, arginfo_qt_core_qjsonarray_qjsonarray_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, replace, arginfo_qt_core_qjsonarray_qjsonarray_replace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, contains, arginfo_qt_core_qjsonarray_qjsonarray_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, swap, arginfo_qt_core_qjsonarray_qjsonarray_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, push_back, arginfo_qt_core_qjsonarray_qjsonarray_push_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, push_front, arginfo_qt_core_qjsonarray_qjsonarray_push_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, pop_front, arginfo_qt_core_qjsonarray_qjsonarray_pop_front, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, pop_back, arginfo_qt_core_qjsonarray_qjsonarray_pop_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonArray_QJsonArray, empty_, arginfo_qt_core_qjsonarray_qjsonarray_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
