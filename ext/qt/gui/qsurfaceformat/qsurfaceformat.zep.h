
extern zend_class_entry *qt_gui_qsurfaceformat_qsurfaceformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QSurfaceFormat_QSurfaceFormat);

PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, staticMetaObject);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, new_);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormatFormatOptions);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormat);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDepthBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, depthBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStencilBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stencilBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRedBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, redBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setGreenBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, greenBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setBlueBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, blueBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setAlphaBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, alphaBufferSize);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSamples);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, samples);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapBehavior);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapBehavior);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, hasAlpha);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setProfile);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, profile);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRenderableType);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, renderableType);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMajorVersion);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, majorVersion);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMinorVersion);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, minorVersion);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, version);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setVersion);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stereo);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStereo);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOptions);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOption);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, testOption);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, options);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapInterval);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapInterval);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, colorSpace);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setColorSpace);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDefaultFormat);
PHP_METHOD(Qt_Gui_QSurfaceFormat_QSurfaceFormat, defaultFormat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_newqsurfaceformatformatoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_newqsurfaceformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setdepthbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_depthbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setstencilbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_stencilbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setredbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_redbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setgreenbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_greenbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setbluebuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_bluebuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setalphabuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_alphabuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setsamples, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numSamples, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_samples, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setswapbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_swapbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_hasalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setprofile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, profile, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_profile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setrenderabletype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_renderabletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setmajorversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, majorVersion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_majorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setminorversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minorVersion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_minorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_version, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setversion, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, major, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_stereo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setstereo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_swapinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setswapinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_colorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setcolorspace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setdefaultformat, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurfaceformat_qsurfaceformat_defaultformat, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qsurfaceformat_qsurfaceformat_method_entry) {
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, staticMetaObject, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, qt_check_for_QGADGET_macro, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, new_, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormatFormatOptions, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_newqsurfaceformatformatoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, newQSurfaceFormat, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_newqsurfaceformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDepthBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setdepthbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, depthBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_depthbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStencilBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setstencilbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stencilBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_stencilbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRedBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setredbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, redBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_redbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setGreenBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setgreenbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, greenBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_greenbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setBlueBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setbluebuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, blueBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_bluebuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setAlphaBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setalphabuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, alphaBufferSize, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_alphabuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSamples, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setsamples, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, samples, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_samples, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapBehavior, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setswapbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapBehavior, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_swapbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, hasAlpha, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_hasalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setProfile, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setprofile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, profile, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_profile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setRenderableType, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setrenderabletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, renderableType, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_renderabletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMajorVersion, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setmajorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, majorVersion, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_majorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setMinorVersion, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setminorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, minorVersion, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_minorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, version, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setVersion, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, stereo, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_stereo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setStereo, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setstereo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOptions, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setOption, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, testOption, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, options, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, swapInterval, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_swapinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setSwapInterval, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setswapinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, colorSpace, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_colorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setColorSpace, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, setDefaultFormat, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_setdefaultformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurfaceFormat_QSurfaceFormat, defaultFormat, arginfo_qt_gui_qsurfaceformat_qsurfaceformat_defaultformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
