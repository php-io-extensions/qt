
extern zend_class_entry *qt_network_qhttpheaders_qhttpheaders_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHttpHeaders_QHttpHeaders);

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, staticMetaObject);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, new_);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, newQHttpHeaders);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, swap);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, append);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, appendQHttpHeadersWellKnownHeaderQAnyStringView);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, insert);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, insertQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replace);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppend);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppendQHttpHeadersWellKnownHeaderQAnyStringView);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, contains);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, containsQHttpHeadersWellKnownHeader);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, clear);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAll);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAllQHttpHeadersWellKnownHeader);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAt);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, value);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valueQHttpHeadersWellKnownHeaderQByteArrayView);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, values);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valuesQHttpHeadersWellKnownHeader);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valueAt);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, nameAt);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValue);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValueQHttpHeadersWellKnownHeader);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, size);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, reserve);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, isEmpty);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, wellKnownHeaderName);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromListOfPairs);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiMap);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiHash);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toListOfPairs);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiMap);
PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiHash);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_newqhttpheaders, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_append, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_appendqhttpheaderswellknownheaderqanystringview, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_insert, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_insertqsizetypeqhttpheaderswellknownheaderqanystringview, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_replace, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_replaceqsizetypeqhttpheaderswellknownheaderqanystringview, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_replaceorappend, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_replaceorappendqhttpheaderswellknownheaderqanystringview, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_containsqhttpheaderswellknownheader, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_removeall, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_removeallqhttpheaderswellknownheader, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_value, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_valueqhttpheaderswellknownheaderqbytearrayview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_values, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_valuesqhttpheaderswellknownheader, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_valueat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_nameat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_combinedvalue, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_combinedvalueqhttpheaderswellknownheader, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_reserve, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_wellknownheadername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_fromlistofpairs, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, headers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_frommultimap, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, headers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_frommultihash, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, headers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_tolistofpairs, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_tomultimap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpheaders_qhttpheaders_tomultihash, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhttpheaders_qhttpheaders_method_entry) {
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, staticMetaObject, arginfo_qt_network_qhttpheaders_qhttpheaders_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, qt_check_for_QGADGET_macro, arginfo_qt_network_qhttpheaders_qhttpheaders_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, new_, arginfo_qt_network_qhttpheaders_qhttpheaders_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, newQHttpHeaders, arginfo_qt_network_qhttpheaders_qhttpheaders_newqhttpheaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, swap, arginfo_qt_network_qhttpheaders_qhttpheaders_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, append, arginfo_qt_network_qhttpheaders_qhttpheaders_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, appendQHttpHeadersWellKnownHeaderQAnyStringView, arginfo_qt_network_qhttpheaders_qhttpheaders_appendqhttpheaderswellknownheaderqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, insert, arginfo_qt_network_qhttpheaders_qhttpheaders_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, insertQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView, arginfo_qt_network_qhttpheaders_qhttpheaders_insertqsizetypeqhttpheaderswellknownheaderqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, replace, arginfo_qt_network_qhttpheaders_qhttpheaders_replace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, replaceQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView, arginfo_qt_network_qhttpheaders_qhttpheaders_replaceqsizetypeqhttpheaderswellknownheaderqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppend, arginfo_qt_network_qhttpheaders_qhttpheaders_replaceorappend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppendQHttpHeadersWellKnownHeaderQAnyStringView, arginfo_qt_network_qhttpheaders_qhttpheaders_replaceorappendqhttpheaderswellknownheaderqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, contains, arginfo_qt_network_qhttpheaders_qhttpheaders_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, containsQHttpHeadersWellKnownHeader, arginfo_qt_network_qhttpheaders_qhttpheaders_containsqhttpheaderswellknownheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, clear, arginfo_qt_network_qhttpheaders_qhttpheaders_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, removeAll, arginfo_qt_network_qhttpheaders_qhttpheaders_removeall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, removeAllQHttpHeadersWellKnownHeader, arginfo_qt_network_qhttpheaders_qhttpheaders_removeallqhttpheaderswellknownheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, removeAt, arginfo_qt_network_qhttpheaders_qhttpheaders_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, value, arginfo_qt_network_qhttpheaders_qhttpheaders_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, valueQHttpHeadersWellKnownHeaderQByteArrayView, arginfo_qt_network_qhttpheaders_qhttpheaders_valueqhttpheaderswellknownheaderqbytearrayview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, values, arginfo_qt_network_qhttpheaders_qhttpheaders_values, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, valuesQHttpHeadersWellKnownHeader, arginfo_qt_network_qhttpheaders_qhttpheaders_valuesqhttpheaderswellknownheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, valueAt, arginfo_qt_network_qhttpheaders_qhttpheaders_valueat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, nameAt, arginfo_qt_network_qhttpheaders_qhttpheaders_nameat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValue, arginfo_qt_network_qhttpheaders_qhttpheaders_combinedvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValueQHttpHeadersWellKnownHeader, arginfo_qt_network_qhttpheaders_qhttpheaders_combinedvalueqhttpheaderswellknownheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, size, arginfo_qt_network_qhttpheaders_qhttpheaders_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, reserve, arginfo_qt_network_qhttpheaders_qhttpheaders_reserve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, isEmpty, arginfo_qt_network_qhttpheaders_qhttpheaders_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, wellKnownHeaderName, arginfo_qt_network_qhttpheaders_qhttpheaders_wellknownheadername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, fromListOfPairs, arginfo_qt_network_qhttpheaders_qhttpheaders_fromlistofpairs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiMap, arginfo_qt_network_qhttpheaders_qhttpheaders_frommultimap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiHash, arginfo_qt_network_qhttpheaders_qhttpheaders_frommultihash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, toListOfPairs, arginfo_qt_network_qhttpheaders_qhttpheaders_tolistofpairs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiMap, arginfo_qt_network_qhttpheaders_qhttpheaders_tomultimap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiHash, arginfo_qt_network_qhttpheaders_qhttpheaders_tomultihash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
