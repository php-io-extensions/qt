
extern zend_class_entry *qt_core_qurl_qurl_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUrl_QUrl);

PHP_METHOD(Qt_Core_QUrl_QUrl, new_);
PHP_METHOD(Qt_Core_QUrl_QUrl, newQUrl);
PHP_METHOD(Qt_Core_QUrl_QUrl, newQStringQUrlParsingMode);
PHP_METHOD(Qt_Core_QUrl_QUrl, swap);
PHP_METHOD(Qt_Core_QUrl_QUrl, setUrl);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromEncoded);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromUserInput);
PHP_METHOD(Qt_Core_QUrl_QUrl, isValid);
PHP_METHOD(Qt_Core_QUrl_QUrl, errorString);
PHP_METHOD(Qt_Core_QUrl_QUrl, isEmpty);
PHP_METHOD(Qt_Core_QUrl_QUrl, clear);
PHP_METHOD(Qt_Core_QUrl_QUrl, setScheme);
PHP_METHOD(Qt_Core_QUrl_QUrl, scheme);
PHP_METHOD(Qt_Core_QUrl_QUrl, setAuthority);
PHP_METHOD(Qt_Core_QUrl_QUrl, authority);
PHP_METHOD(Qt_Core_QUrl_QUrl, setUserInfo);
PHP_METHOD(Qt_Core_QUrl_QUrl, userInfo);
PHP_METHOD(Qt_Core_QUrl_QUrl, setUserName);
PHP_METHOD(Qt_Core_QUrl_QUrl, userName);
PHP_METHOD(Qt_Core_QUrl_QUrl, setPassword);
PHP_METHOD(Qt_Core_QUrl_QUrl, password);
PHP_METHOD(Qt_Core_QUrl_QUrl, setHost);
PHP_METHOD(Qt_Core_QUrl_QUrl, host);
PHP_METHOD(Qt_Core_QUrl_QUrl, setPort);
PHP_METHOD(Qt_Core_QUrl_QUrl, port);
PHP_METHOD(Qt_Core_QUrl_QUrl, setPath);
PHP_METHOD(Qt_Core_QUrl_QUrl, path);
PHP_METHOD(Qt_Core_QUrl_QUrl, fileName);
PHP_METHOD(Qt_Core_QUrl_QUrl, hasQuery);
PHP_METHOD(Qt_Core_QUrl_QUrl, setQuery);
PHP_METHOD(Qt_Core_QUrl_QUrl, setQueryQUrlQuery);
PHP_METHOD(Qt_Core_QUrl_QUrl, query);
PHP_METHOD(Qt_Core_QUrl_QUrl, hasFragment);
PHP_METHOD(Qt_Core_QUrl_QUrl, fragment);
PHP_METHOD(Qt_Core_QUrl_QUrl, setFragment);
PHP_METHOD(Qt_Core_QUrl_QUrl, resolved);
PHP_METHOD(Qt_Core_QUrl_QUrl, isRelative);
PHP_METHOD(Qt_Core_QUrl_QUrl, isParentOf);
PHP_METHOD(Qt_Core_QUrl_QUrl, isLocalFile);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromLocalFile);
PHP_METHOD(Qt_Core_QUrl_QUrl, toLocalFile);
PHP_METHOD(Qt_Core_QUrl_QUrl, detach);
PHP_METHOD(Qt_Core_QUrl_QUrl, isDetached);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromPercentEncoding);
PHP_METHOD(Qt_Core_QUrl_QUrl, toPercentEncoding);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromAce);
PHP_METHOD(Qt_Core_QUrl_QUrl, toAce);
PHP_METHOD(Qt_Core_QUrl_QUrl, idnWhitelist);
PHP_METHOD(Qt_Core_QUrl_QUrl, fromStringList);
PHP_METHOD(Qt_Core_QUrl_QUrl, setIdnWhitelist);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_newqurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, copy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_newqstringqurlparsingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fromencoded, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fromuserinput, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInput, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workingDirectory, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setscheme, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_scheme, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setauthority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authority, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_authority, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setuserinfo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userInfo, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_userinfo, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setusername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userName, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_username, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setpassword, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_password, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_sethost, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_host, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_port, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultPort, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_hasquery, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setquery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setqueryqurlquery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_query, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_hasfragment, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fragment, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setfragment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fragment, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_resolved, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relative, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_isrelative, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_isparentof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_islocalfile, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fromlocalfile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localfile, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_tolocalfile, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_frompercentencoding, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_topercentencoding, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, exclude, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, include_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fromace, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_toace, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_idnwhitelist, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_fromstringlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_ARRAY_INFO(0, uris, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qurl_qurl_setidnwhitelist, 0, 1, IS_VOID, 0)

	ZEND_ARG_ARRAY_INFO(0, arg0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qurl_qurl_method_entry) {
	PHP_ME(Qt_Core_QUrl_QUrl, new_, arginfo_qt_core_qurl_qurl_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, newQUrl, arginfo_qt_core_qurl_qurl_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, newQStringQUrlParsingMode, arginfo_qt_core_qurl_qurl_newqstringqurlparsingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, swap, arginfo_qt_core_qurl_qurl_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setUrl, arginfo_qt_core_qurl_qurl_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromEncoded, arginfo_qt_core_qurl_qurl_fromencoded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromUserInput, arginfo_qt_core_qurl_qurl_fromuserinput, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isValid, arginfo_qt_core_qurl_qurl_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, errorString, arginfo_qt_core_qurl_qurl_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isEmpty, arginfo_qt_core_qurl_qurl_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, clear, arginfo_qt_core_qurl_qurl_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setScheme, arginfo_qt_core_qurl_qurl_setscheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, scheme, arginfo_qt_core_qurl_qurl_scheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setAuthority, arginfo_qt_core_qurl_qurl_setauthority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, authority, arginfo_qt_core_qurl_qurl_authority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setUserInfo, arginfo_qt_core_qurl_qurl_setuserinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, userInfo, arginfo_qt_core_qurl_qurl_userinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setUserName, arginfo_qt_core_qurl_qurl_setusername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, userName, arginfo_qt_core_qurl_qurl_username, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setPassword, arginfo_qt_core_qurl_qurl_setpassword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, password, arginfo_qt_core_qurl_qurl_password, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setHost, arginfo_qt_core_qurl_qurl_sethost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, host, arginfo_qt_core_qurl_qurl_host, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setPort, arginfo_qt_core_qurl_qurl_setport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, port, arginfo_qt_core_qurl_qurl_port, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setPath, arginfo_qt_core_qurl_qurl_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, path, arginfo_qt_core_qurl_qurl_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fileName, arginfo_qt_core_qurl_qurl_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, hasQuery, arginfo_qt_core_qurl_qurl_hasquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setQuery, arginfo_qt_core_qurl_qurl_setquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setQueryQUrlQuery, arginfo_qt_core_qurl_qurl_setqueryqurlquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, query, arginfo_qt_core_qurl_qurl_query, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, hasFragment, arginfo_qt_core_qurl_qurl_hasfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fragment, arginfo_qt_core_qurl_qurl_fragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setFragment, arginfo_qt_core_qurl_qurl_setfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, resolved, arginfo_qt_core_qurl_qurl_resolved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isRelative, arginfo_qt_core_qurl_qurl_isrelative, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isParentOf, arginfo_qt_core_qurl_qurl_isparentof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isLocalFile, arginfo_qt_core_qurl_qurl_islocalfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromLocalFile, arginfo_qt_core_qurl_qurl_fromlocalfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, toLocalFile, arginfo_qt_core_qurl_qurl_tolocalfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, detach, arginfo_qt_core_qurl_qurl_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, isDetached, arginfo_qt_core_qurl_qurl_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromPercentEncoding, arginfo_qt_core_qurl_qurl_frompercentencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, toPercentEncoding, arginfo_qt_core_qurl_qurl_topercentencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromAce, arginfo_qt_core_qurl_qurl_fromace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, toAce, arginfo_qt_core_qurl_qurl_toace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, idnWhitelist, arginfo_qt_core_qurl_qurl_idnwhitelist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, fromStringList, arginfo_qt_core_qurl_qurl_fromstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUrl_QUrl, setIdnWhitelist, arginfo_qt_core_qurl_qurl_setidnwhitelist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
