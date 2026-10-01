
extern zend_class_entry *qt_gui_qpalette_qpalette_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPalette_QPalette);

PHP_METHOD(Qt_Gui_QPalette_QPalette, staticMetaObject);
PHP_METHOD(Qt_Gui_QPalette_QPalette, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QPalette_QPalette, new_);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQtGlobalColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColorQColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrush);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColorQColorQColorQColorQColorQColorQColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, newQPalette);
PHP_METHOD(Qt_Gui_QPalette_QPalette, swap);
PHP_METHOD(Qt_Gui_QPalette_QPalette, currentColorGroup);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setCurrentColorGroup);
PHP_METHOD(Qt_Gui_QPalette_QPalette, color);
PHP_METHOD(Qt_Gui_QPalette_QPalette, brush);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setColorQPaletteColorRoleQColor);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setBrush);
PHP_METHOD(Qt_Gui_QPalette_QPalette, isBrushSet);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setBrushQPaletteColorGroupQPaletteColorRoleQBrush);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setColorGroup);
PHP_METHOD(Qt_Gui_QPalette_QPalette, isEqual);
PHP_METHOD(Qt_Gui_QPalette_QPalette, colorQPaletteColorRole);
PHP_METHOD(Qt_Gui_QPalette_QPalette, brushQPaletteColorRole);
PHP_METHOD(Qt_Gui_QPalette_QPalette, windowText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, button);
PHP_METHOD(Qt_Gui_QPalette_QPalette, light);
PHP_METHOD(Qt_Gui_QPalette_QPalette, dark);
PHP_METHOD(Qt_Gui_QPalette_QPalette, mid);
PHP_METHOD(Qt_Gui_QPalette_QPalette, text);
PHP_METHOD(Qt_Gui_QPalette_QPalette, base);
PHP_METHOD(Qt_Gui_QPalette_QPalette, alternateBase);
PHP_METHOD(Qt_Gui_QPalette_QPalette, toolTipBase);
PHP_METHOD(Qt_Gui_QPalette_QPalette, toolTipText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, window);
PHP_METHOD(Qt_Gui_QPalette_QPalette, midlight);
PHP_METHOD(Qt_Gui_QPalette_QPalette, brightText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, buttonText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, shadow);
PHP_METHOD(Qt_Gui_QPalette_QPalette, highlight);
PHP_METHOD(Qt_Gui_QPalette_QPalette, highlightedText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, link);
PHP_METHOD(Qt_Gui_QPalette_QPalette, linkVisited);
PHP_METHOD(Qt_Gui_QPalette_QPalette, placeholderText);
PHP_METHOD(Qt_Gui_QPalette_QPalette, accent);
PHP_METHOD(Qt_Gui_QPalette_QPalette, isCopyOf);
PHP_METHOD(Qt_Gui_QPalette_QPalette, cacheKey);
PHP_METHOD(Qt_Gui_QPalette_QPalette, resolve);
PHP_METHOD(Qt_Gui_QPalette_QPalette, resolveMask);
PHP_METHOD(Qt_Gui_QPalette_QPalette, setResolveMask);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqtglobalcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqcolorqcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqbrushqbrushqbrushqbrushqbrushqbrushqbrushqbrushqbrush, 0, 9, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowText, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, light, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dark, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bright_text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqcolorqcolorqcolorqcolorqcolorqcolorqcolor, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowText, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, light, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dark, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_newqpalette, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, palette, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_currentcolorgroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setcurrentcolorgroup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_color, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_brush, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setcolor, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setcolorqpalettecolorroleqcolor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setbrush, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_isbrushset, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setbrushqpalettecolorgroupqpalettecolorroleqbrush, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setcolorgroup, 0, 11, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowText, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, light, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dark, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bright_text, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_isequal, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_colorqpalettecolorrole, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_brushqpalettecolorrole, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_windowtext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_button, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_light, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_dark, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_mid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_text, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_base, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_alternatebase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_tooltipbase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_tooltiptext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_midlight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_brighttext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_buttontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_shadow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_highlight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_highlightedtext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_link, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_linkvisited, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_placeholdertext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_accent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_iscopyof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_cachekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_resolve, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_resolvemask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpalette_qpalette_setresolvemask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpalette_qpalette_method_entry) {
	PHP_ME(Qt_Gui_QPalette_QPalette, staticMetaObject, arginfo_qt_gui_qpalette_qpalette_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, qt_check_for_QGADGET_macro, arginfo_qt_gui_qpalette_qpalette_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, new_, arginfo_qt_gui_qpalette_qpalette_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQColor, arginfo_qt_gui_qpalette_qpalette_newqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQtGlobalColor, arginfo_qt_gui_qpalette_qpalette_newqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQColorQColor, arginfo_qt_gui_qpalette_qpalette_newqcolorqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrush, arginfo_qt_gui_qpalette_qpalette_newqbrushqbrushqbrushqbrushqbrushqbrushqbrushqbrushqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQColorQColorQColorQColorQColorQColorQColor, arginfo_qt_gui_qpalette_qpalette_newqcolorqcolorqcolorqcolorqcolorqcolorqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, newQPalette, arginfo_qt_gui_qpalette_qpalette_newqpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, swap, arginfo_qt_gui_qpalette_qpalette_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, currentColorGroup, arginfo_qt_gui_qpalette_qpalette_currentcolorgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setCurrentColorGroup, arginfo_qt_gui_qpalette_qpalette_setcurrentcolorgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, color, arginfo_qt_gui_qpalette_qpalette_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, brush, arginfo_qt_gui_qpalette_qpalette_brush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setColor, arginfo_qt_gui_qpalette_qpalette_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setColorQPaletteColorRoleQColor, arginfo_qt_gui_qpalette_qpalette_setcolorqpalettecolorroleqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setBrush, arginfo_qt_gui_qpalette_qpalette_setbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, isBrushSet, arginfo_qt_gui_qpalette_qpalette_isbrushset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setBrushQPaletteColorGroupQPaletteColorRoleQBrush, arginfo_qt_gui_qpalette_qpalette_setbrushqpalettecolorgroupqpalettecolorroleqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setColorGroup, arginfo_qt_gui_qpalette_qpalette_setcolorgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, isEqual, arginfo_qt_gui_qpalette_qpalette_isequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, colorQPaletteColorRole, arginfo_qt_gui_qpalette_qpalette_colorqpalettecolorrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, brushQPaletteColorRole, arginfo_qt_gui_qpalette_qpalette_brushqpalettecolorrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, windowText, arginfo_qt_gui_qpalette_qpalette_windowtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, button, arginfo_qt_gui_qpalette_qpalette_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, light, arginfo_qt_gui_qpalette_qpalette_light, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, dark, arginfo_qt_gui_qpalette_qpalette_dark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, mid, arginfo_qt_gui_qpalette_qpalette_mid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, text, arginfo_qt_gui_qpalette_qpalette_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, base, arginfo_qt_gui_qpalette_qpalette_base, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, alternateBase, arginfo_qt_gui_qpalette_qpalette_alternatebase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, toolTipBase, arginfo_qt_gui_qpalette_qpalette_tooltipbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, toolTipText, arginfo_qt_gui_qpalette_qpalette_tooltiptext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, window, arginfo_qt_gui_qpalette_qpalette_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, midlight, arginfo_qt_gui_qpalette_qpalette_midlight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, brightText, arginfo_qt_gui_qpalette_qpalette_brighttext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, buttonText, arginfo_qt_gui_qpalette_qpalette_buttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, shadow, arginfo_qt_gui_qpalette_qpalette_shadow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, highlight, arginfo_qt_gui_qpalette_qpalette_highlight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, highlightedText, arginfo_qt_gui_qpalette_qpalette_highlightedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, link, arginfo_qt_gui_qpalette_qpalette_link, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, linkVisited, arginfo_qt_gui_qpalette_qpalette_linkvisited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, placeholderText, arginfo_qt_gui_qpalette_qpalette_placeholdertext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, accent, arginfo_qt_gui_qpalette_qpalette_accent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, isCopyOf, arginfo_qt_gui_qpalette_qpalette_iscopyof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, cacheKey, arginfo_qt_gui_qpalette_qpalette_cachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, resolve, arginfo_qt_gui_qpalette_qpalette_resolve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, resolveMask, arginfo_qt_gui_qpalette_qpalette_resolvemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPalette_QPalette, setResolveMask, arginfo_qt_gui_qpalette_qpalette_setresolvemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
