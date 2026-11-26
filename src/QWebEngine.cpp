#include "runtime.h"

#include <QtCore/QUrl>
#include <QtWebEngineCore/QWebEngineLoadingInfo>
#include <QtWebEngineCore/QWebEnginePage>
#include <QtWebEngineWidgets/QWebEngineView>

#include "../stubs/QWebEngine_arginfo.h"

#include "checks/QWebEngineLoadingInfo_LoadStatus.inc"

static void phpqt_destroy_loading_info(void *ptr)
{
	delete static_cast<QWebEngineLoadingInfo *>(ptr);
}

void phpqt_return_loading_info(zval *rv, const QWebEngineLoadingInfo &info)
{
	object_init_ex(rv, phpqt_ce_QWebEngineLoadingInfo);
	phpqt_value_hold(Z_OBJ_P(rv), new QWebEngineLoadingInfo(info), true, phpqt_destroy_loading_info);
}

void phpqt_register_QWebEngine()
{
	phpqt_ce_QWebEngineLoadingInfo_LoadStatus = register_class_QWebEngineLoadingInfo_LoadStatus();

	phpqt_ce_QWebEngineView = register_class_QWebEngineView(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QWebEngineView);
	phpqt_map_class("QWebEngineView", phpqt_ce_QWebEngineView);

	phpqt_ce_QWebEnginePage = register_class_QWebEnginePage(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QWebEnginePage);
	phpqt_map_class("QWebEnginePage", phpqt_ce_QWebEnginePage);

	phpqt_ce_QWebEngineLoadingInfo = register_class_QWebEngineLoadingInfo();
	phpqt_value_setup(phpqt_ce_QWebEngineLoadingInfo);
}

ZEND_METHOD(QWebEngineView, page)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	phpqt_box(return_value, view->page());
}

ZEND_METHOD(QWebEnginePage, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QWebEnginePage, isLoading)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEnginePage, page);

	RETURN_BOOL(page->isLoading());
}

ZEND_METHOD(QWebEnginePage, url)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEnginePage, page);

	phpqt_return_url(return_value, page->url());
}

ZEND_METHOD(QWebEnginePage, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEnginePage, page);

	phpqt_return_qstring(return_value, page->title());
}

ZEND_METHOD(QWebEngineLoadingInfo, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QWebEngineLoadingInfo, status)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineLoadingInfo, info);

	phpqt_return_enum(return_value, phpqt_ce_QWebEngineLoadingInfo_LoadStatus, static_cast<zend_long>(info->status()));
}

ZEND_METHOD(QWebEngineLoadingInfo, url)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineLoadingInfo, info);

	phpqt_return_url(return_value, info->url());
}

ZEND_METHOD(QWebEngineLoadingInfo, errorString)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineLoadingInfo, info);

	phpqt_return_qstring(return_value, info->errorString());
}

ZEND_METHOD(QWebEngineLoadingInfo, errorCode)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineLoadingInfo, info);

	RETURN_LONG(info->errorCode());
}

ZEND_METHOD(QWebEngineLoadingInfo, isErrorPage)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineLoadingInfo, info);

	RETURN_BOOL(info->isErrorPage());
}

ZEND_METHOD(QWebEngineView, __construct)
{
	phpqt_construct_widget<QWebEngineView>(INTERNAL_FUNCTION_PARAM_PASSTHRU); /* binding:qapp-web-engine-view */
}

ZEND_METHOD(QWebEngineView, load)
{
	zend_object *url_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(url_obj, phpqt_ce_QUrl)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWebEngineView, view);

	QUrl *url = static_cast<QUrl *>(phpqt_value_arg(url_obj, 1));
	if (url == nullptr) {
		RETURN_THROWS();
	}

	view->load(*url);
}

ZEND_METHOD(QWebEngineView, setHtml)
{
	zend_string *html;
	zend_object *url_obj;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(html)
		Z_PARAM_OBJ_OF_CLASS(url_obj, phpqt_ce_QUrl)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWebEngineView, view);

	QUrl *url = static_cast<QUrl *>(phpqt_value_arg(url_obj, 2));
	if (url == nullptr) {
		RETURN_THROWS();
	}

	view->setHtml(phpqt_qstring(html), *url);
}

ZEND_METHOD(QWebEngineView, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	phpqt_return_qstring(return_value, view->title());
}

ZEND_METHOD(QWebEngineView, url)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	phpqt_return_url(return_value, view->url());
}

ZEND_METHOD(QWebEngineView, stop)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	view->stop();
}

ZEND_METHOD(QWebEngineView, back)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	view->back();
}

ZEND_METHOD(QWebEngineView, forward)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	view->forward();
}

ZEND_METHOD(QWebEngineView, reload)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	view->reload();
}
