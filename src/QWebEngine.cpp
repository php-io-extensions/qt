#include "runtime.h"

#include <QtCore/QPointer>
#include <QtCore/QUrl>
#include <QtCore/QVariant>
#include <QtWebEngineCore/QWebEngineLoadingInfo>
#include <QtWebEngineCore/QWebEnginePage>
#include <QtWebEngineCore/QWebEngineScript>
#include <QtWebEngineCore/QWebEngineScriptCollection>
#include <QtWebEngineCore/QWebEngineSettings>
#include <QtWebEngineWidgets/QWebEngineView>

#include "../stubs/QWebEngine_arginfo.h"

#include "checks/QWebEngineLoadingInfo_LoadStatus.inc"
#include "checks/QWebEnginePage_JavaScriptConsoleMessageLevel.inc"
#include "checks/QWebEngineSettings_WebAttribute.inc"
#include "checks/QWebEngineScript_InjectionPoint.inc"
#include "checks/QWebEngineScript_ScriptWorldId.inc"

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

	phpqt_ce_QWebEnginePage_JavaScriptConsoleMessageLevel = register_class_QWebEnginePage_JavaScriptConsoleMessageLevel();

	phpqt_ce_QWebEnginePage = register_class_QWebEnginePage(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QWebEnginePage);
	phpqt_map_class("QWebEnginePage", phpqt_ce_QWebEnginePage);

	phpqt_ce_QWebEngineConsolePage = register_class_QWebEngineConsolePage(phpqt_ce_QWebEnginePage);
	phpqt_object_setup(phpqt_ce_QWebEngineConsolePage);

	phpqt_ce_QWebEngineLoadingInfo = register_class_QWebEngineLoadingInfo();
	phpqt_value_setup(phpqt_ce_QWebEngineLoadingInfo);

	phpqt_ce_QWebEngineSettings_WebAttribute = register_class_QWebEngineSettings_WebAttribute();
	phpqt_ce_QWebEngineSettings = register_class_QWebEngineSettings();
	phpqt_value_setup(phpqt_ce_QWebEngineSettings);

	phpqt_ce_QWebEngineScript_InjectionPoint = register_class_QWebEngineScript_InjectionPoint();
	phpqt_ce_QWebEngineScript_ScriptWorldId = register_class_QWebEngineScript_ScriptWorldId();
	phpqt_ce_QWebEngineScript = register_class_QWebEngineScript();
	phpqt_value_setup(phpqt_ce_QWebEngineScript);

	phpqt_ce_QWebEngineScriptCollection = register_class_QWebEngineScriptCollection();
	phpqt_value_setup(phpqt_ce_QWebEngineScriptCollection);
}

/* The page owns its settings and its script collection: PHP reads them while the page lives. */
static bool phpqt_page_lives(void *, QObject *page)
{
	return page != nullptr;
}

static void phpqt_destroy_script(void *ptr)
{
	delete static_cast<QWebEngineScript *>(ptr);
}

ZEND_METHOD(QWebEnginePage, scripts)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEnginePage, page);

	object_init_ex(return_value, phpqt_ce_QWebEngineScriptCollection);
	phpqt_value_borrow(Z_OBJ_P(return_value), &page->scripts(), page, phpqt_page_lives);
}

ZEND_METHOD(QWebEnginePage, settings)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEnginePage, page);

	object_init_ex(return_value, phpqt_ce_QWebEngineSettings);
	phpqt_value_borrow(Z_OBJ_P(return_value), page->settings(), page, phpqt_page_lives);
}

ZEND_METHOD(QWebEngineSettings, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QWebEngineSettings, setAttribute)
{
	zend_object *attr;
	bool on;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(attr, phpqt_ce_QWebEngineSettings_WebAttribute)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineSettings, settings);

	settings->setAttribute(static_cast<QWebEngineSettings::WebAttribute>(phpqt_enum_value(attr, 0)), on);
}

ZEND_METHOD(QWebEngineSettings, testAttribute)
{
	zend_object *attr;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(attr, phpqt_ce_QWebEngineSettings_WebAttribute)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineSettings, settings);

	RETURN_BOOL(settings->testAttribute(static_cast<QWebEngineSettings::WebAttribute>(phpqt_enum_value(attr, 0))));
}

ZEND_METHOD(QWebEngineScript, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QWebEngineScript(), true, phpqt_destroy_script);
}

ZEND_METHOD(QWebEngineScript, setName)
{
	zend_string *name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScript, script);

	script->setName(phpqt_qstring(name));
}

ZEND_METHOD(QWebEngineScript, setSourceCode)
{
	zend_string *source;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(source)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScript, script);

	script->setSourceCode(phpqt_qstring(source));
}

ZEND_METHOD(QWebEngineScript, setInjectionPoint)
{
	zend_object *point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(point, phpqt_ce_QWebEngineScript_InjectionPoint)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScript, script);

	script->setInjectionPoint(static_cast<QWebEngineScript::InjectionPoint>(phpqt_enum_value(point, 0)));
}

ZEND_METHOD(QWebEngineScript, setWorldId)
{
	zend_long world;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(world)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScript, script);

	script->setWorldId(static_cast<quint32>(world));
}

ZEND_METHOD(QWebEngineScript, setRunsOnSubFrames)
{
	bool on;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScript, script);

	script->setRunsOnSubFrames(on);
}

ZEND_METHOD(QWebEngineScriptCollection, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QWebEngineScriptCollection, count)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineScriptCollection, scripts);

	RETURN_LONG(scripts->count());
}

ZEND_METHOD(QWebEngineScriptCollection, insert)
{
	zend_object *script_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(script_obj, phpqt_ce_QWebEngineScript)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScriptCollection, scripts);

	QWebEngineScript *script = static_cast<QWebEngineScript *>(phpqt_value_arg(script_obj, 1));
	if (script == nullptr) {
		RETURN_THROWS();
	}

	scripts->insert(*script);
}

ZEND_METHOD(QWebEngineScriptCollection, remove)
{
	zend_object *script_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(script_obj, phpqt_ce_QWebEngineScript)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QWebEngineScriptCollection, scripts);

	QWebEngineScript *script = static_cast<QWebEngineScript *>(phpqt_value_arg(script_obj, 1));
	if (script == nullptr) {
		RETURN_THROWS();
	}

	RETURN_BOOL(scripts->remove(*script));
}

ZEND_METHOD(QWebEngineScriptCollection, clear)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWebEngineScriptCollection, scripts);

	scripts->clear();
}

ZEND_METHOD(QWebEngineView, page)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWebEngineView, view);

	phpqt_box(return_value, view->page());
}

ZEND_METHOD(QWebEngineView, setPage)
{
	zend_object *page_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(page_obj, phpqt_ce_QWebEnginePage)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWebEngineView, view);

	QWebEnginePage *page = static_cast<QWebEnginePage *>(phpqt_arg(page_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	view->setPage(page);
}

ZEND_METHOD(QWebEnginePage, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

/* The callable a QWebEngineConsolePage hands each console message to: a PhpSlot that runs it with the message's four values. */
class PhpConsoleSlot : public PhpSlot {
public:
	PhpConsoleSlot(zval *callable, QObject *parent) : PhpSlot(callable, QMetaMethod())
	{
		setParent(parent);
	}

	void message(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString &text, int line, const QString &source)
	{
		zval argv[4];
		zval retval;
		QByteArray utf8 = text.toUtf8();
		QByteArray from = source.toUtf8();

		phpqt_return_enum(&argv[0], phpqt_ce_QWebEnginePage_JavaScriptConsoleMessageLevel, static_cast<zend_long>(level));
		ZVAL_STRINGL(&argv[1], utf8.constData(), utf8.size());
		ZVAL_LONG(&argv[2], line);
		ZVAL_STRINGL(&argv[3], from.constData(), from.size());
		ZVAL_UNDEF(&retval);
		call(4, argv, &retval);
		zval_ptr_dtor(&retval);
		for (zval &arg : argv) {
			zval_ptr_dtor(&arg);
		}
	}
};

/* javaScriptConsoleMessage() forwarded to PHP; the slot is the page's child, so it goes with the page. */
class PhpWebEngineConsolePage : public QWebEnginePage {
public:
	PhpWebEngineConsolePage(zval *callable, QObject *parent) : QWebEnginePage(parent), slot(new PhpConsoleSlot(callable, this)) {}

protected:
	void javaScriptConsoleMessage(JavaScriptConsoleMessageLevel level, const QString &message, int lineNumber, const QString &sourceID) override
	{
		if (!slot.isNull()) {
			slot->message(level, message, lineNumber, sourceID);
		}
	}

private:
	QPointer<PhpConsoleSlot> slot;
};

ZEND_METHOD(QWebEngineConsolePage, __construct)
{
	zval *callable;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(callable)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_require_callable(callable, 1)) {
		RETURN_THROWS();
	}
	/* Qt aborts with qFatal ("Must construct a QGuiApplication before accessing QFontDatabase"). */
	if (!PHPQT_PROBE_OFF("qguiapp-web-engine-console-page") && (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QWebEngineConsolePage needs a QGuiApplication first", 0); /* binding:qguiapp-web-engine-console-page */
		RETURN_THROWS();
	}

	QObject *qparent = phpqt_arg(parent, 2, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new PhpWebEngineConsolePage(callable, qparent));
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

/* The result callback of runJavaScript: the slot is the callback's context, so deleting it at request end drops a result not yet delivered. */
class PhpResultSlot : public PhpSlot {
public:
	explicit PhpResultSlot(zval *callable) : PhpSlot(callable, QMetaMethod()) {}

	void deliver(const QVariant &result)
	{
		zval argv[1], retval;

		phpqt_variant_to_zval(&argv[0], result);
		ZVAL_UNDEF(&retval);
		call(1, argv, &retval);
		zval_ptr_dtor(&argv[0]);
		zval_ptr_dtor(&retval);
	}
};

ZEND_METHOD(QWebEnginePage, runJavaScript)
{
	zend_string *source;
	zend_long world = 0;
	zval *callback = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(source)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(world)
		Z_PARAM_ZVAL_OR_NULL(callback)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWebEnginePage, page);

	QString script = QString::fromUtf8(ZSTR_VAL(source), static_cast<qsizetype>(ZSTR_LEN(source)));

	if (callback == nullptr) {
		page->runJavaScript(script, static_cast<quint32>(world));
		return;
	}
	if (!phpqt_require_callable(callback, 3)) {
		RETURN_THROWS();
	}

	QPointer<PhpResultSlot> slot = new PhpResultSlot(callback);
	page->runJavaScript(script, static_cast<quint32>(world), [slot](const QVariant &result) {
		if (slot.isNull()) {
			return;
		}
		slot->deliver(result);
		slot->detach();
		slot->deleteLater();
	});
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
