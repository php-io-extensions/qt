#include "runtime.h"

#include <QtCore/QUrl>
#include <QtWebEngineWidgets/QWebEngineView>

#include "../stubs/QWebEngine_arginfo.h"

void phpqt_register_QWebEngine()
{
	phpqt_ce_QWebEngineView = register_class_QWebEngineView(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QWebEngineView);
	phpqt_map_class("QWebEngineView", phpqt_ce_QWebEngineView);
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
