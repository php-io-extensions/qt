
extern zend_class_entry *qt_gui_qpen_qpen_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPen_QPen);

PHP_METHOD(Qt_Gui_QPen_QPen, new_);
PHP_METHOD(Qt_Gui_QPen_QPen, newQtPenStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, newQColor);
PHP_METHOD(Qt_Gui_QPen_QPen, newQBrushQrealQtPenStyleQtPenCapStyleQtPenJoinStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, newQPen);
PHP_METHOD(Qt_Gui_QPen_QPen, swap);
PHP_METHOD(Qt_Gui_QPen_QPen, style);
PHP_METHOD(Qt_Gui_QPen_QPen, setStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, dashPattern);
PHP_METHOD(Qt_Gui_QPen_QPen, setDashPattern);
PHP_METHOD(Qt_Gui_QPen_QPen, dashOffset);
PHP_METHOD(Qt_Gui_QPen_QPen, setDashOffset);
PHP_METHOD(Qt_Gui_QPen_QPen, miterLimit);
PHP_METHOD(Qt_Gui_QPen_QPen, setMiterLimit);
PHP_METHOD(Qt_Gui_QPen_QPen, widthF);
PHP_METHOD(Qt_Gui_QPen_QPen, setWidthF);
PHP_METHOD(Qt_Gui_QPen_QPen, width);
PHP_METHOD(Qt_Gui_QPen_QPen, setWidth);
PHP_METHOD(Qt_Gui_QPen_QPen, color);
PHP_METHOD(Qt_Gui_QPen_QPen, setColor);
PHP_METHOD(Qt_Gui_QPen_QPen, brush);
PHP_METHOD(Qt_Gui_QPen_QPen, setBrush);
PHP_METHOD(Qt_Gui_QPen_QPen, isSolid);
PHP_METHOD(Qt_Gui_QPen_QPen, capStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, setCapStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, joinStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, setJoinStyle);
PHP_METHOD(Qt_Gui_QPen_QPen, isCosmetic);
PHP_METHOD(Qt_Gui_QPen_QPen, setCosmetic);
PHP_METHOD(Qt_Gui_QPen_QPen, isDetached);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_newqtpenstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_newqcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_newqbrushqrealqtpenstyleqtpencapstyleqtpenjoinstyle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_INFO(0, j)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_newqpen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_dashpattern, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setdashpattern, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, pattern, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_dashoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setdashoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doffset, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_miterlimit, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setmiterlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limit, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_widthf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setwidthf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_brush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setbrush, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_issolid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_capstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setcapstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pcs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_joinstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setjoinstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pcs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_iscosmetic, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_setcosmetic, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cosmetic, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpen_qpen_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpen_qpen_method_entry) {
	PHP_ME(Qt_Gui_QPen_QPen, new_, arginfo_qt_gui_qpen_qpen_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, newQtPenStyle, arginfo_qt_gui_qpen_qpen_newqtpenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, newQColor, arginfo_qt_gui_qpen_qpen_newqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, newQBrushQrealQtPenStyleQtPenCapStyleQtPenJoinStyle, arginfo_qt_gui_qpen_qpen_newqbrushqrealqtpenstyleqtpencapstyleqtpenjoinstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, newQPen, arginfo_qt_gui_qpen_qpen_newqpen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, swap, arginfo_qt_gui_qpen_qpen_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, style, arginfo_qt_gui_qpen_qpen_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setStyle, arginfo_qt_gui_qpen_qpen_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, dashPattern, arginfo_qt_gui_qpen_qpen_dashpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setDashPattern, arginfo_qt_gui_qpen_qpen_setdashpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, dashOffset, arginfo_qt_gui_qpen_qpen_dashoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setDashOffset, arginfo_qt_gui_qpen_qpen_setdashoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, miterLimit, arginfo_qt_gui_qpen_qpen_miterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setMiterLimit, arginfo_qt_gui_qpen_qpen_setmiterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, widthF, arginfo_qt_gui_qpen_qpen_widthf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setWidthF, arginfo_qt_gui_qpen_qpen_setwidthf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, width, arginfo_qt_gui_qpen_qpen_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setWidth, arginfo_qt_gui_qpen_qpen_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, color, arginfo_qt_gui_qpen_qpen_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setColor, arginfo_qt_gui_qpen_qpen_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, brush, arginfo_qt_gui_qpen_qpen_brush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setBrush, arginfo_qt_gui_qpen_qpen_setbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, isSolid, arginfo_qt_gui_qpen_qpen_issolid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, capStyle, arginfo_qt_gui_qpen_qpen_capstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setCapStyle, arginfo_qt_gui_qpen_qpen_setcapstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, joinStyle, arginfo_qt_gui_qpen_qpen_joinstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setJoinStyle, arginfo_qt_gui_qpen_qpen_setjoinstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, isCosmetic, arginfo_qt_gui_qpen_qpen_iscosmetic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, setCosmetic, arginfo_qt_gui_qpen_qpen_setcosmetic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPen_QPen, isDetached, arginfo_qt_gui_qpen_qpen_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
