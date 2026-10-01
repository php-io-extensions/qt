
extern zend_class_entry *qt_widgets_qrhiwidget_qrhiwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QRhiWidget_QRhiWidget);

PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, tr);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, new_);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, api);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setApi);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, isDebugLayerEnabled);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setDebugLayerEnabled);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, sampleCount);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setSampleCount);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, colorBufferFormat);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setColorBufferFormat);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, fixedColorBufferSize);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setFixedColorBufferSize);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setFixedColorBufferSizeIntInt);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, isMirrorVerticallyEnabled);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setMirrorVertically);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, grabFramebuffer);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, isAutoRenderTargetEnabled);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, setAutoRenderTarget);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, releaseResources);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, resizeEvent);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, paintEvent);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, event);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, frameSubmitted);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, renderFailed);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, sampleCountChanged);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, colorBufferFormatChanged);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, fixedColorBufferSizeChanged);
PHP_METHOD(Qt_Widgets_QRhiWidget_QRhiWidget, mirrorVerticallyChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_api, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setapi, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, api, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_isdebuglayerenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setdebuglayerenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_samplecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setsamplecount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, samples, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_colorbufferformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setcolorbufferformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_fixedcolorbuffersize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setfixedcolorbuffersize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setfixedcolorbuffersizeintint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_ismirrorverticallyenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setmirrorvertically, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_grabframebuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_isautorendertargetenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_setautorendertarget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_releaseresources, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_framesubmitted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_renderfailed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_samplecountchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, samples, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_colorbufferformatchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_fixedcolorbuffersizechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qrhiwidget_qrhiwidget_mirrorverticallychanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qrhiwidget_qrhiwidget_method_entry) {
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, staticMetaObject, arginfo_qt_widgets_qrhiwidget_qrhiwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, tr, arginfo_qt_widgets_qrhiwidget_qrhiwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, new_, arginfo_qt_widgets_qrhiwidget_qrhiwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, api, arginfo_qt_widgets_qrhiwidget_qrhiwidget_api, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setApi, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setapi, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, isDebugLayerEnabled, arginfo_qt_widgets_qrhiwidget_qrhiwidget_isdebuglayerenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setDebugLayerEnabled, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setdebuglayerenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, sampleCount, arginfo_qt_widgets_qrhiwidget_qrhiwidget_samplecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setSampleCount, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setsamplecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, colorBufferFormat, arginfo_qt_widgets_qrhiwidget_qrhiwidget_colorbufferformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setColorBufferFormat, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setcolorbufferformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, fixedColorBufferSize, arginfo_qt_widgets_qrhiwidget_qrhiwidget_fixedcolorbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setFixedColorBufferSize, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setfixedcolorbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setFixedColorBufferSizeIntInt, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setfixedcolorbuffersizeintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, isMirrorVerticallyEnabled, arginfo_qt_widgets_qrhiwidget_qrhiwidget_ismirrorverticallyenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setMirrorVertically, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setmirrorvertically, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, grabFramebuffer, arginfo_qt_widgets_qrhiwidget_qrhiwidget_grabframebuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, isAutoRenderTargetEnabled, arginfo_qt_widgets_qrhiwidget_qrhiwidget_isautorendertargetenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, setAutoRenderTarget, arginfo_qt_widgets_qrhiwidget_qrhiwidget_setautorendertarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, releaseResources, arginfo_qt_widgets_qrhiwidget_qrhiwidget_releaseresources, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, resizeEvent, arginfo_qt_widgets_qrhiwidget_qrhiwidget_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, paintEvent, arginfo_qt_widgets_qrhiwidget_qrhiwidget_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, event, arginfo_qt_widgets_qrhiwidget_qrhiwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, frameSubmitted, arginfo_qt_widgets_qrhiwidget_qrhiwidget_framesubmitted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, renderFailed, arginfo_qt_widgets_qrhiwidget_qrhiwidget_renderfailed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, sampleCountChanged, arginfo_qt_widgets_qrhiwidget_qrhiwidget_samplecountchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, colorBufferFormatChanged, arginfo_qt_widgets_qrhiwidget_qrhiwidget_colorbufferformatchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, fixedColorBufferSizeChanged, arginfo_qt_widgets_qrhiwidget_qrhiwidget_fixedcolorbuffersizechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRhiWidget_QRhiWidget, mirrorVerticallyChanged, arginfo_qt_widgets_qrhiwidget_qrhiwidget_mirrorverticallychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
