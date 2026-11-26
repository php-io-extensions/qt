/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 8138783df89c78632c21421104db4032ac926d03 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWebEngineView___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_load, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, url, QUrl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_setHtml, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, baseUrl, QUrl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_title, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEngineView_url, 0, 0, QUrl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEngineView_page, 0, 0, QWebEnginePage, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_stop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineView_back arginfo_class_QWebEngineView_stop

#define arginfo_class_QWebEngineView_forward arginfo_class_QWebEngineView_stop

#define arginfo_class_QWebEngineView_reload arginfo_class_QWebEngineView_stop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWebEnginePage___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEnginePage_isLoading, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEnginePage_url arginfo_class_QWebEngineView_url

#define arginfo_class_QWebEnginePage_title arginfo_class_QWebEngineView_title

#define arginfo_class_QWebEngineLoadingInfo___construct arginfo_class_QWebEnginePage___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEngineLoadingInfo_status, 0, 0, QWebEngineLoadingInfo\\LoadStatus, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineLoadingInfo_url arginfo_class_QWebEngineView_url

#define arginfo_class_QWebEngineLoadingInfo_errorString arginfo_class_QWebEngineView_title

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineLoadingInfo_errorCode, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineLoadingInfo_isErrorPage arginfo_class_QWebEnginePage_isLoading

ZEND_METHOD(QWebEngineView, __construct);
ZEND_METHOD(QWebEngineView, load);
ZEND_METHOD(QWebEngineView, setHtml);
ZEND_METHOD(QWebEngineView, title);
ZEND_METHOD(QWebEngineView, url);
ZEND_METHOD(QWebEngineView, page);
ZEND_METHOD(QWebEngineView, stop);
ZEND_METHOD(QWebEngineView, back);
ZEND_METHOD(QWebEngineView, forward);
ZEND_METHOD(QWebEngineView, reload);
ZEND_METHOD(QWebEnginePage, __construct);
ZEND_METHOD(QWebEnginePage, isLoading);
ZEND_METHOD(QWebEnginePage, url);
ZEND_METHOD(QWebEnginePage, title);
ZEND_METHOD(QWebEngineLoadingInfo, __construct);
ZEND_METHOD(QWebEngineLoadingInfo, status);
ZEND_METHOD(QWebEngineLoadingInfo, url);
ZEND_METHOD(QWebEngineLoadingInfo, errorString);
ZEND_METHOD(QWebEngineLoadingInfo, errorCode);
ZEND_METHOD(QWebEngineLoadingInfo, isErrorPage);

static const zend_function_entry class_QWebEngineView_methods[] = {
	ZEND_ME(QWebEngineView, __construct, arginfo_class_QWebEngineView___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, load, arginfo_class_QWebEngineView_load, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, setHtml, arginfo_class_QWebEngineView_setHtml, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, title, arginfo_class_QWebEngineView_title, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, url, arginfo_class_QWebEngineView_url, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, page, arginfo_class_QWebEngineView_page, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, stop, arginfo_class_QWebEngineView_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, back, arginfo_class_QWebEngineView_back, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, forward, arginfo_class_QWebEngineView_forward, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, reload, arginfo_class_QWebEngineView_reload, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEnginePage_methods[] = {
	ZEND_ME(QWebEnginePage, __construct, arginfo_class_QWebEnginePage___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QWebEnginePage, isLoading, arginfo_class_QWebEnginePage_isLoading, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEnginePage, url, arginfo_class_QWebEnginePage_url, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEnginePage, title, arginfo_class_QWebEnginePage_title, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEngineLoadingInfo_methods[] = {
	ZEND_ME(QWebEngineLoadingInfo, __construct, arginfo_class_QWebEngineLoadingInfo___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QWebEngineLoadingInfo, status, arginfo_class_QWebEngineLoadingInfo_status, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineLoadingInfo, url, arginfo_class_QWebEngineLoadingInfo_url, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineLoadingInfo, errorString, arginfo_class_QWebEngineLoadingInfo_errorString, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineLoadingInfo, errorCode, arginfo_class_QWebEngineLoadingInfo_errorCode, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineLoadingInfo, isErrorPage, arginfo_class_QWebEngineLoadingInfo_isErrorPage, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QWebEngineLoadingInfo_LoadStatus(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QWebEngineLoadingInfo\\LoadStatus", IS_LONG, NULL);

	zval enum_case_LOAD_STARTED_STATUS_value;
	ZVAL_LONG(&enum_case_LOAD_STARTED_STATUS_value, 0);
	zend_enum_add_case_cstr(class_entry, "LOAD_STARTED_STATUS", &enum_case_LOAD_STARTED_STATUS_value);

	zval enum_case_LOAD_STOPPED_STATUS_value;
	ZVAL_LONG(&enum_case_LOAD_STOPPED_STATUS_value, 1);
	zend_enum_add_case_cstr(class_entry, "LOAD_STOPPED_STATUS", &enum_case_LOAD_STOPPED_STATUS_value);

	zval enum_case_LOAD_SUCCEEDED_STATUS_value;
	ZVAL_LONG(&enum_case_LOAD_SUCCEEDED_STATUS_value, 2);
	zend_enum_add_case_cstr(class_entry, "LOAD_SUCCEEDED_STATUS", &enum_case_LOAD_SUCCEEDED_STATUS_value);

	zval enum_case_LOAD_FAILED_STATUS_value;
	ZVAL_LONG(&enum_case_LOAD_FAILED_STATUS_value, 3);
	zend_enum_add_case_cstr(class_entry, "LOAD_FAILED_STATUS", &enum_case_LOAD_FAILED_STATUS_value);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineView(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineView", class_QWebEngineView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEnginePage(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEnginePage", class_QWebEnginePage_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineLoadingInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineLoadingInfo", class_QWebEngineLoadingInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
