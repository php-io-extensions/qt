
extern zend_class_entry *qt_gui_qpaintenginestate_qpaintenginestate_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPaintEngineState_QPaintEngineState);

PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, state);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, pen);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, brush);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, brushOrigin);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, backgroundBrush);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, backgroundMode);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, font);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, transform);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, clipOperation);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, clipRegion);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, clipPath);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, isClipEnabled);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, renderHints);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, compositionMode);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, opacity);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, painter);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, brushNeedsResolving);
PHP_METHOD(Qt_Gui_QPaintEngineState_QPaintEngineState, penNeedsResolving);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_pen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brushorigin, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_backgroundbrush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_backgroundmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_transform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clipoperation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clipregion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clippath, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_isclipenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_renderhints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_compositionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_opacity, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_painter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brushneedsresolving, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintenginestate_qpaintenginestate_penneedsresolving, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpaintenginestate_qpaintenginestate_method_entry) {
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, state, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, pen, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_pen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, brush, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, brushOrigin, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brushorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, backgroundBrush, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_backgroundbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, backgroundMode, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_backgroundmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, font, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, transform, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_transform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, clipOperation, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clipoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, clipRegion, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clipregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, clipPath, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_clippath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, isClipEnabled, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_isclipenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, renderHints, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_renderhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, compositionMode, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_compositionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, opacity, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_opacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, painter, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_painter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, brushNeedsResolving, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_brushneedsresolving, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngineState_QPaintEngineState, penNeedsResolving, arginfo_qt_gui_qpaintenginestate_qpaintenginestate_penneedsresolving, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
