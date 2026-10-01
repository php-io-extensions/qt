
extern zend_class_entry *qt_core_qurlquery_qurlquery_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUrlQuery_QUrlQuery);

PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, new_);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, newQUrl);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, newQString);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, newQUrlQuery);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, swap);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, isEmpty);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, isDetached);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, clear);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, query);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, setQuery);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, toString);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, setQueryDelimiters);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, queryValueDelimiter);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, queryPairDelimiter);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, setQueryItems);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, queryItems);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, hasQueryItem);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, addQueryItem);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, removeQueryItem);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, queryItemValue);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, allQueryItemValues);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, removeAllQueryItems);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, defaultQueryValueDelimiter);
PHP_METHOD(Qt_Core_QUrlQuery_QUrlQuery, defaultQueryPairDelimiter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_newqurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queryString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_newqurlquery, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_query, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_setquery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queryString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_setquerydelimiters, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueDelimiter, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pairDelimiter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_queryvaluedelimiter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_querypairdelimiter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_setqueryitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, query, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_queryitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_hasqueryitem, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_addqueryitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_removequeryitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_queryitemvalue, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_allqueryitemvalues, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, encoding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_removeallqueryitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_defaultqueryvaluedelimiter, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurlquery_qurlquery_defaultquerypairdelimiter, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qurlquery_qurlquery_method_entry) {
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, new_, arginfo_qt_core_qurlquery_qurlquery_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, newQUrl, arginfo_qt_core_qurlquery_qurlquery_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, newQString, arginfo_qt_core_qurlquery_qurlquery_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, newQUrlQuery, arginfo_qt_core_qurlquery_qurlquery_newqurlquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, swap, arginfo_qt_core_qurlquery_qurlquery_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, isEmpty, arginfo_qt_core_qurlquery_qurlquery_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, isDetached, arginfo_qt_core_qurlquery_qurlquery_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, clear, arginfo_qt_core_qurlquery_qurlquery_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, query, arginfo_qt_core_qurlquery_qurlquery_query, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, setQuery, arginfo_qt_core_qurlquery_qurlquery_setquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, toString, arginfo_qt_core_qurlquery_qurlquery_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, setQueryDelimiters, arginfo_qt_core_qurlquery_qurlquery_setquerydelimiters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, queryValueDelimiter, arginfo_qt_core_qurlquery_qurlquery_queryvaluedelimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, queryPairDelimiter, arginfo_qt_core_qurlquery_qurlquery_querypairdelimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, setQueryItems, arginfo_qt_core_qurlquery_qurlquery_setqueryitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, queryItems, arginfo_qt_core_qurlquery_qurlquery_queryitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, hasQueryItem, arginfo_qt_core_qurlquery_qurlquery_hasqueryitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, addQueryItem, arginfo_qt_core_qurlquery_qurlquery_addqueryitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, removeQueryItem, arginfo_qt_core_qurlquery_qurlquery_removequeryitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, queryItemValue, arginfo_qt_core_qurlquery_qurlquery_queryitemvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, allQueryItemValues, arginfo_qt_core_qurlquery_qurlquery_allqueryitemvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, removeAllQueryItems, arginfo_qt_core_qurlquery_qurlquery_removeallqueryitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, defaultQueryValueDelimiter, arginfo_qt_core_qurlquery_qurlquery_defaultqueryvaluedelimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrlQuery_QUrlQuery, defaultQueryPairDelimiter, arginfo_qt_core_qurlquery_qurlquery_defaultquerypairdelimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
