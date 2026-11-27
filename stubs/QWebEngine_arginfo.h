/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 193d6985cc23d3c3d0e4de56b6d8ecf88baf9bf6 */

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_setPage, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, page, QWebEnginePage, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEnginePage_runJavaScript, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scriptSource, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, worldId, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, resultCallback, IS_CALLABLE, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEnginePage_scripts, 0, 0, QWebEngineScriptCollection, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEnginePage_settings, 0, 0, QWebEngineSettings, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineSettings___construct arginfo_class_QWebEnginePage___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineSettings_setAttribute, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, attr, QWebEngineSettings\\WebAttribute, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineSettings_testAttribute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, attr, QWebEngineSettings\\WebAttribute, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineScript___construct arginfo_class_QWebEnginePage___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScript_setName, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScript_setSourceCode, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sourceCode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScript_setInjectionPoint, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, injectionPoint, QWebEngineScript\\InjectionPoint, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScript_setWorldId, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, worldId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScript_setRunsOnSubFrames, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineScriptCollection___construct arginfo_class_QWebEnginePage___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScriptCollection_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScriptCollection_insert, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, script, QWebEngineScript, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineScriptCollection_remove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, script, QWebEngineScript, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineScriptCollection_clear arginfo_class_QWebEngineView_stop

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWebEngineConsolePage___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, consoleMessage, IS_CALLABLE, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineLoadingInfo___construct arginfo_class_QWebEnginePage___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWebEngineLoadingInfo_status, 0, 0, QWebEngineLoadingInfo\\LoadStatus, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineLoadingInfo_url arginfo_class_QWebEngineView_url

#define arginfo_class_QWebEngineLoadingInfo_errorString arginfo_class_QWebEngineView_title

#define arginfo_class_QWebEngineLoadingInfo_errorCode arginfo_class_QWebEngineScriptCollection_count

#define arginfo_class_QWebEngineLoadingInfo_isErrorPage arginfo_class_QWebEnginePage_isLoading

ZEND_METHOD(QWebEngineView, __construct);
ZEND_METHOD(QWebEngineView, load);
ZEND_METHOD(QWebEngineView, setHtml);
ZEND_METHOD(QWebEngineView, title);
ZEND_METHOD(QWebEngineView, url);
ZEND_METHOD(QWebEngineView, page);
ZEND_METHOD(QWebEngineView, setPage);
ZEND_METHOD(QWebEngineView, stop);
ZEND_METHOD(QWebEngineView, back);
ZEND_METHOD(QWebEngineView, forward);
ZEND_METHOD(QWebEngineView, reload);
ZEND_METHOD(QWebEnginePage, __construct);
ZEND_METHOD(QWebEnginePage, isLoading);
ZEND_METHOD(QWebEnginePage, url);
ZEND_METHOD(QWebEnginePage, title);
ZEND_METHOD(QWebEnginePage, runJavaScript);
ZEND_METHOD(QWebEnginePage, scripts);
ZEND_METHOD(QWebEnginePage, settings);
ZEND_METHOD(QWebEngineSettings, __construct);
ZEND_METHOD(QWebEngineSettings, setAttribute);
ZEND_METHOD(QWebEngineSettings, testAttribute);
ZEND_METHOD(QWebEngineScript, __construct);
ZEND_METHOD(QWebEngineScript, setName);
ZEND_METHOD(QWebEngineScript, setSourceCode);
ZEND_METHOD(QWebEngineScript, setInjectionPoint);
ZEND_METHOD(QWebEngineScript, setWorldId);
ZEND_METHOD(QWebEngineScript, setRunsOnSubFrames);
ZEND_METHOD(QWebEngineScriptCollection, __construct);
ZEND_METHOD(QWebEngineScriptCollection, count);
ZEND_METHOD(QWebEngineScriptCollection, insert);
ZEND_METHOD(QWebEngineScriptCollection, remove);
ZEND_METHOD(QWebEngineScriptCollection, clear);
ZEND_METHOD(QWebEngineConsolePage, __construct);
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
	ZEND_ME(QWebEngineView, setPage, arginfo_class_QWebEngineView_setPage, ZEND_ACC_PUBLIC)
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
	ZEND_ME(QWebEnginePage, runJavaScript, arginfo_class_QWebEnginePage_runJavaScript, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEnginePage, scripts, arginfo_class_QWebEnginePage_scripts, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEnginePage, settings, arginfo_class_QWebEnginePage_settings, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEngineSettings_methods[] = {
	ZEND_ME(QWebEngineSettings, __construct, arginfo_class_QWebEngineSettings___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QWebEngineSettings, setAttribute, arginfo_class_QWebEngineSettings_setAttribute, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineSettings, testAttribute, arginfo_class_QWebEngineSettings_testAttribute, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEngineScript_methods[] = {
	ZEND_ME(QWebEngineScript, __construct, arginfo_class_QWebEngineScript___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScript, setName, arginfo_class_QWebEngineScript_setName, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScript, setSourceCode, arginfo_class_QWebEngineScript_setSourceCode, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScript, setInjectionPoint, arginfo_class_QWebEngineScript_setInjectionPoint, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScript, setWorldId, arginfo_class_QWebEngineScript_setWorldId, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScript, setRunsOnSubFrames, arginfo_class_QWebEngineScript_setRunsOnSubFrames, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEngineScriptCollection_methods[] = {
	ZEND_ME(QWebEngineScriptCollection, __construct, arginfo_class_QWebEngineScriptCollection___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QWebEngineScriptCollection, count, arginfo_class_QWebEngineScriptCollection_count, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScriptCollection, insert, arginfo_class_QWebEngineScriptCollection_insert, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScriptCollection, remove, arginfo_class_QWebEngineScriptCollection_remove, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineScriptCollection, clear, arginfo_class_QWebEngineScriptCollection_clear, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWebEngineConsolePage_methods[] = {
	ZEND_ME(QWebEngineConsolePage, __construct, arginfo_class_QWebEngineConsolePage___construct, ZEND_ACC_PUBLIC)
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

static zend_class_entry *register_class_QWebEnginePage_JavaScriptConsoleMessageLevel(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QWebEnginePage\\JavaScriptConsoleMessageLevel", IS_LONG, NULL);

	zval enum_case_INFO_MESSAGE_LEVEL_value;
	ZVAL_LONG(&enum_case_INFO_MESSAGE_LEVEL_value, 0);
	zend_enum_add_case_cstr(class_entry, "INFO_MESSAGE_LEVEL", &enum_case_INFO_MESSAGE_LEVEL_value);

	zval enum_case_WARNING_MESSAGE_LEVEL_value;
	ZVAL_LONG(&enum_case_WARNING_MESSAGE_LEVEL_value, 1);
	zend_enum_add_case_cstr(class_entry, "WARNING_MESSAGE_LEVEL", &enum_case_WARNING_MESSAGE_LEVEL_value);

	zval enum_case_ERROR_MESSAGE_LEVEL_value;
	ZVAL_LONG(&enum_case_ERROR_MESSAGE_LEVEL_value, 2);
	zend_enum_add_case_cstr(class_entry, "ERROR_MESSAGE_LEVEL", &enum_case_ERROR_MESSAGE_LEVEL_value);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineSettings_WebAttribute(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QWebEngineSettings\\WebAttribute", IS_LONG, NULL);

	zval enum_case_AUTO_LOAD_IMAGES_value;
	ZVAL_LONG(&enum_case_AUTO_LOAD_IMAGES_value, 0);
	zend_enum_add_case_cstr(class_entry, "AUTO_LOAD_IMAGES", &enum_case_AUTO_LOAD_IMAGES_value);

	zval enum_case_JAVASCRIPT_ENABLED_value;
	ZVAL_LONG(&enum_case_JAVASCRIPT_ENABLED_value, 1);
	zend_enum_add_case_cstr(class_entry, "JAVASCRIPT_ENABLED", &enum_case_JAVASCRIPT_ENABLED_value);

	zval enum_case_JAVASCRIPT_CAN_OPEN_WINDOWS_value;
	ZVAL_LONG(&enum_case_JAVASCRIPT_CAN_OPEN_WINDOWS_value, 2);
	zend_enum_add_case_cstr(class_entry, "JAVASCRIPT_CAN_OPEN_WINDOWS", &enum_case_JAVASCRIPT_CAN_OPEN_WINDOWS_value);

	zval enum_case_JAVASCRIPT_CAN_ACCESS_CLIPBOARD_value;
	ZVAL_LONG(&enum_case_JAVASCRIPT_CAN_ACCESS_CLIPBOARD_value, 3);
	zend_enum_add_case_cstr(class_entry, "JAVASCRIPT_CAN_ACCESS_CLIPBOARD", &enum_case_JAVASCRIPT_CAN_ACCESS_CLIPBOARD_value);

	zval enum_case_LINKS_INCLUDED_IN_FOCUS_CHAIN_value;
	ZVAL_LONG(&enum_case_LINKS_INCLUDED_IN_FOCUS_CHAIN_value, 4);
	zend_enum_add_case_cstr(class_entry, "LINKS_INCLUDED_IN_FOCUS_CHAIN", &enum_case_LINKS_INCLUDED_IN_FOCUS_CHAIN_value);

	zval enum_case_LOCAL_STORAGE_ENABLED_value;
	ZVAL_LONG(&enum_case_LOCAL_STORAGE_ENABLED_value, 5);
	zend_enum_add_case_cstr(class_entry, "LOCAL_STORAGE_ENABLED", &enum_case_LOCAL_STORAGE_ENABLED_value);

	zval enum_case_LOCAL_CONTENT_CAN_ACCESS_REMOTE_URLS_value;
	ZVAL_LONG(&enum_case_LOCAL_CONTENT_CAN_ACCESS_REMOTE_URLS_value, 6);
	zend_enum_add_case_cstr(class_entry, "LOCAL_CONTENT_CAN_ACCESS_REMOTE_URLS", &enum_case_LOCAL_CONTENT_CAN_ACCESS_REMOTE_URLS_value);

	zval enum_case_XSS_AUDITING_ENABLED_value;
	ZVAL_LONG(&enum_case_XSS_AUDITING_ENABLED_value, 7);
	zend_enum_add_case_cstr(class_entry, "XSS_AUDITING_ENABLED", &enum_case_XSS_AUDITING_ENABLED_value);

	zval enum_case_SPATIAL_NAVIGATION_ENABLED_value;
	ZVAL_LONG(&enum_case_SPATIAL_NAVIGATION_ENABLED_value, 8);
	zend_enum_add_case_cstr(class_entry, "SPATIAL_NAVIGATION_ENABLED", &enum_case_SPATIAL_NAVIGATION_ENABLED_value);

	zval enum_case_LOCAL_CONTENT_CAN_ACCESS_FILE_URLS_value;
	ZVAL_LONG(&enum_case_LOCAL_CONTENT_CAN_ACCESS_FILE_URLS_value, 9);
	zend_enum_add_case_cstr(class_entry, "LOCAL_CONTENT_CAN_ACCESS_FILE_URLS", &enum_case_LOCAL_CONTENT_CAN_ACCESS_FILE_URLS_value);

	zval enum_case_HYPERLINK_AUDITING_ENABLED_value;
	ZVAL_LONG(&enum_case_HYPERLINK_AUDITING_ENABLED_value, 10);
	zend_enum_add_case_cstr(class_entry, "HYPERLINK_AUDITING_ENABLED", &enum_case_HYPERLINK_AUDITING_ENABLED_value);

	zval enum_case_SCROLL_ANIMATOR_ENABLED_value;
	ZVAL_LONG(&enum_case_SCROLL_ANIMATOR_ENABLED_value, 11);
	zend_enum_add_case_cstr(class_entry, "SCROLL_ANIMATOR_ENABLED", &enum_case_SCROLL_ANIMATOR_ENABLED_value);

	zval enum_case_ERROR_PAGE_ENABLED_value;
	ZVAL_LONG(&enum_case_ERROR_PAGE_ENABLED_value, 12);
	zend_enum_add_case_cstr(class_entry, "ERROR_PAGE_ENABLED", &enum_case_ERROR_PAGE_ENABLED_value);

	zval enum_case_PLUGINS_ENABLED_value;
	ZVAL_LONG(&enum_case_PLUGINS_ENABLED_value, 13);
	zend_enum_add_case_cstr(class_entry, "PLUGINS_ENABLED", &enum_case_PLUGINS_ENABLED_value);

	zval enum_case_FULL_SCREEN_SUPPORT_ENABLED_value;
	ZVAL_LONG(&enum_case_FULL_SCREEN_SUPPORT_ENABLED_value, 14);
	zend_enum_add_case_cstr(class_entry, "FULL_SCREEN_SUPPORT_ENABLED", &enum_case_FULL_SCREEN_SUPPORT_ENABLED_value);

	zval enum_case_SCREEN_CAPTURE_ENABLED_value;
	ZVAL_LONG(&enum_case_SCREEN_CAPTURE_ENABLED_value, 15);
	zend_enum_add_case_cstr(class_entry, "SCREEN_CAPTURE_ENABLED", &enum_case_SCREEN_CAPTURE_ENABLED_value);

	zval enum_case_WEB_GL_ENABLED_value;
	ZVAL_LONG(&enum_case_WEB_GL_ENABLED_value, 16);
	zend_enum_add_case_cstr(class_entry, "WEB_GL_ENABLED", &enum_case_WEB_GL_ENABLED_value);

	zval enum_case_ACCELERATED2D_CANVAS_ENABLED_value;
	ZVAL_LONG(&enum_case_ACCELERATED2D_CANVAS_ENABLED_value, 17);
	zend_enum_add_case_cstr(class_entry, "ACCELERATED2D_CANVAS_ENABLED", &enum_case_ACCELERATED2D_CANVAS_ENABLED_value);

	zval enum_case_AUTO_LOAD_ICONS_FOR_PAGE_value;
	ZVAL_LONG(&enum_case_AUTO_LOAD_ICONS_FOR_PAGE_value, 18);
	zend_enum_add_case_cstr(class_entry, "AUTO_LOAD_ICONS_FOR_PAGE", &enum_case_AUTO_LOAD_ICONS_FOR_PAGE_value);

	zval enum_case_TOUCH_ICONS_ENABLED_value;
	ZVAL_LONG(&enum_case_TOUCH_ICONS_ENABLED_value, 19);
	zend_enum_add_case_cstr(class_entry, "TOUCH_ICONS_ENABLED", &enum_case_TOUCH_ICONS_ENABLED_value);

	zval enum_case_FOCUS_ON_NAVIGATION_ENABLED_value;
	ZVAL_LONG(&enum_case_FOCUS_ON_NAVIGATION_ENABLED_value, 20);
	zend_enum_add_case_cstr(class_entry, "FOCUS_ON_NAVIGATION_ENABLED", &enum_case_FOCUS_ON_NAVIGATION_ENABLED_value);

	zval enum_case_PRINT_ELEMENT_BACKGROUNDS_value;
	ZVAL_LONG(&enum_case_PRINT_ELEMENT_BACKGROUNDS_value, 21);
	zend_enum_add_case_cstr(class_entry, "PRINT_ELEMENT_BACKGROUNDS", &enum_case_PRINT_ELEMENT_BACKGROUNDS_value);

	zval enum_case_ALLOW_RUNNING_INSECURE_CONTENT_value;
	ZVAL_LONG(&enum_case_ALLOW_RUNNING_INSECURE_CONTENT_value, 22);
	zend_enum_add_case_cstr(class_entry, "ALLOW_RUNNING_INSECURE_CONTENT", &enum_case_ALLOW_RUNNING_INSECURE_CONTENT_value);

	zval enum_case_ALLOW_GEOLOCATION_ON_INSECURE_ORIGINS_value;
	ZVAL_LONG(&enum_case_ALLOW_GEOLOCATION_ON_INSECURE_ORIGINS_value, 23);
	zend_enum_add_case_cstr(class_entry, "ALLOW_GEOLOCATION_ON_INSECURE_ORIGINS", &enum_case_ALLOW_GEOLOCATION_ON_INSECURE_ORIGINS_value);

	zval enum_case_ALLOW_WINDOW_ACTIVATION_FROM_JAVA_SCRIPT_value;
	ZVAL_LONG(&enum_case_ALLOW_WINDOW_ACTIVATION_FROM_JAVA_SCRIPT_value, 24);
	zend_enum_add_case_cstr(class_entry, "ALLOW_WINDOW_ACTIVATION_FROM_JAVA_SCRIPT", &enum_case_ALLOW_WINDOW_ACTIVATION_FROM_JAVA_SCRIPT_value);

	zval enum_case_SHOW_SCROLL_BARS_value;
	ZVAL_LONG(&enum_case_SHOW_SCROLL_BARS_value, 25);
	zend_enum_add_case_cstr(class_entry, "SHOW_SCROLL_BARS", &enum_case_SHOW_SCROLL_BARS_value);

	zval enum_case_PLAYBACK_REQUIRES_USER_GESTURE_value;
	ZVAL_LONG(&enum_case_PLAYBACK_REQUIRES_USER_GESTURE_value, 26);
	zend_enum_add_case_cstr(class_entry, "PLAYBACK_REQUIRES_USER_GESTURE", &enum_case_PLAYBACK_REQUIRES_USER_GESTURE_value);

	zval enum_case_WEB_RTC_PUBLIC_INTERFACES_ONLY_value;
	ZVAL_LONG(&enum_case_WEB_RTC_PUBLIC_INTERFACES_ONLY_value, 27);
	zend_enum_add_case_cstr(class_entry, "WEB_RTC_PUBLIC_INTERFACES_ONLY", &enum_case_WEB_RTC_PUBLIC_INTERFACES_ONLY_value);

	zval enum_case_JAVASCRIPT_CAN_PASTE_value;
	ZVAL_LONG(&enum_case_JAVASCRIPT_CAN_PASTE_value, 28);
	zend_enum_add_case_cstr(class_entry, "JAVASCRIPT_CAN_PASTE", &enum_case_JAVASCRIPT_CAN_PASTE_value);

	zval enum_case_DNS_PREFETCH_ENABLED_value;
	ZVAL_LONG(&enum_case_DNS_PREFETCH_ENABLED_value, 29);
	zend_enum_add_case_cstr(class_entry, "DNS_PREFETCH_ENABLED", &enum_case_DNS_PREFETCH_ENABLED_value);

	zval enum_case_PDF_VIEWER_ENABLED_value;
	ZVAL_LONG(&enum_case_PDF_VIEWER_ENABLED_value, 30);
	zend_enum_add_case_cstr(class_entry, "PDF_VIEWER_ENABLED", &enum_case_PDF_VIEWER_ENABLED_value);

	zval enum_case_NAVIGATE_ON_DROP_ENABLED_value;
	ZVAL_LONG(&enum_case_NAVIGATE_ON_DROP_ENABLED_value, 31);
	zend_enum_add_case_cstr(class_entry, "NAVIGATE_ON_DROP_ENABLED", &enum_case_NAVIGATE_ON_DROP_ENABLED_value);

	zval enum_case_READING_FROM_CANVAS_ENABLED_value;
	ZVAL_LONG(&enum_case_READING_FROM_CANVAS_ENABLED_value, 32);
	zend_enum_add_case_cstr(class_entry, "READING_FROM_CANVAS_ENABLED", &enum_case_READING_FROM_CANVAS_ENABLED_value);

	zval enum_case_FORCE_DARK_MODE_value;
	ZVAL_LONG(&enum_case_FORCE_DARK_MODE_value, 33);
	zend_enum_add_case_cstr(class_entry, "FORCE_DARK_MODE", &enum_case_FORCE_DARK_MODE_value);

	zval enum_case_PRINT_HEADER_AND_FOOTER_value;
	ZVAL_LONG(&enum_case_PRINT_HEADER_AND_FOOTER_value, 34);
	zend_enum_add_case_cstr(class_entry, "PRINT_HEADER_AND_FOOTER", &enum_case_PRINT_HEADER_AND_FOOTER_value);

	zval enum_case_PREFER_CSS_MARGINS_FOR_PRINTING_value;
	ZVAL_LONG(&enum_case_PREFER_CSS_MARGINS_FOR_PRINTING_value, 35);
	zend_enum_add_case_cstr(class_entry, "PREFER_CSS_MARGINS_FOR_PRINTING", &enum_case_PREFER_CSS_MARGINS_FOR_PRINTING_value);

	zval enum_case_TOUCH_EVENTS_API_ENABLED_value;
	ZVAL_LONG(&enum_case_TOUCH_EVENTS_API_ENABLED_value, 36);
	zend_enum_add_case_cstr(class_entry, "TOUCH_EVENTS_API_ENABLED", &enum_case_TOUCH_EVENTS_API_ENABLED_value);

	zval enum_case_BACK_FORWARD_CACHE_ENABLED_value;
	ZVAL_LONG(&enum_case_BACK_FORWARD_CACHE_ENABLED_value, 37);
	zend_enum_add_case_cstr(class_entry, "BACK_FORWARD_CACHE_ENABLED", &enum_case_BACK_FORWARD_CACHE_ENABLED_value);

	zval enum_case_TRIM_ACCESSIBILITY_IDENTIFIERS_value;
	ZVAL_LONG(&enum_case_TRIM_ACCESSIBILITY_IDENTIFIERS_value, 38);
	zend_enum_add_case_cstr(class_entry, "TRIM_ACCESSIBILITY_IDENTIFIERS", &enum_case_TRIM_ACCESSIBILITY_IDENTIFIERS_value);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineScript_InjectionPoint(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QWebEngineScript\\InjectionPoint", IS_LONG, NULL);

	zval enum_case_DEFERRED_value;
	ZVAL_LONG(&enum_case_DEFERRED_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFERRED", &enum_case_DEFERRED_value);

	zval enum_case_DOCUMENT_READY_value;
	ZVAL_LONG(&enum_case_DOCUMENT_READY_value, 1);
	zend_enum_add_case_cstr(class_entry, "DOCUMENT_READY", &enum_case_DOCUMENT_READY_value);

	zval enum_case_DOCUMENT_CREATION_value;
	ZVAL_LONG(&enum_case_DOCUMENT_CREATION_value, 2);
	zend_enum_add_case_cstr(class_entry, "DOCUMENT_CREATION", &enum_case_DOCUMENT_CREATION_value);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineScript_ScriptWorldId(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QWebEngineScript\\ScriptWorldId", IS_LONG, NULL);

	zval enum_case_MAIN_WORLD_value;
	ZVAL_LONG(&enum_case_MAIN_WORLD_value, 0);
	zend_enum_add_case_cstr(class_entry, "MAIN_WORLD", &enum_case_MAIN_WORLD_value);

	zval enum_case_APPLICATION_WORLD_value;
	ZVAL_LONG(&enum_case_APPLICATION_WORLD_value, 1);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_WORLD", &enum_case_APPLICATION_WORLD_value);

	zval enum_case_USER_WORLD_value;
	ZVAL_LONG(&enum_case_USER_WORLD_value, 2);
	zend_enum_add_case_cstr(class_entry, "USER_WORLD", &enum_case_USER_WORLD_value);

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

static zend_class_entry *register_class_QWebEngineSettings(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineSettings", class_QWebEngineSettings_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineScript(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineScript", class_QWebEngineScript_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineScriptCollection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineScriptCollection", class_QWebEngineScriptCollection_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineConsolePage(zend_class_entry *class_entry_QWebEnginePage)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineConsolePage", class_QWebEngineConsolePage_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWebEnginePage, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWebEngineLoadingInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineLoadingInfo", class_QWebEngineLoadingInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
