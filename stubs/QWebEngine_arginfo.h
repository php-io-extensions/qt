/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a6937170af8652e0125c7782e49a5ad16e721fc1 */

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWebEngineView_stop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWebEngineView_back arginfo_class_QWebEngineView_stop

#define arginfo_class_QWebEngineView_forward arginfo_class_QWebEngineView_stop

#define arginfo_class_QWebEngineView_reload arginfo_class_QWebEngineView_stop

ZEND_METHOD(QWebEngineView, __construct);
ZEND_METHOD(QWebEngineView, load);
ZEND_METHOD(QWebEngineView, setHtml);
ZEND_METHOD(QWebEngineView, title);
ZEND_METHOD(QWebEngineView, url);
ZEND_METHOD(QWebEngineView, stop);
ZEND_METHOD(QWebEngineView, back);
ZEND_METHOD(QWebEngineView, forward);
ZEND_METHOD(QWebEngineView, reload);

static const zend_function_entry class_QWebEngineView_methods[] = {
	ZEND_ME(QWebEngineView, __construct, arginfo_class_QWebEngineView___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, load, arginfo_class_QWebEngineView_load, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, setHtml, arginfo_class_QWebEngineView_setHtml, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, title, arginfo_class_QWebEngineView_title, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, url, arginfo_class_QWebEngineView_url, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, stop, arginfo_class_QWebEngineView_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, back, arginfo_class_QWebEngineView_back, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, forward, arginfo_class_QWebEngineView_forward, ZEND_ACC_PUBLIC)
	ZEND_ME(QWebEngineView, reload, arginfo_class_QWebEngineView_reload, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QWebEngineView(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWebEngineView", class_QWebEngineView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
