
extern zend_class_entry *qt_gui_qbrush_qbrush_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QBrush_QBrush);

PHP_METHOD(Qt_Gui_QBrush_QBrush, new_);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtBrushStyle);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQColorQtBrushStyle);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtGlobalColorQtBrushStyle);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQColorQPixmap);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtGlobalColorQPixmap);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQPixmap);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQImage);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQBrush);
PHP_METHOD(Qt_Gui_QBrush_QBrush, newQGradient);
PHP_METHOD(Qt_Gui_QBrush_QBrush, swap);
PHP_METHOD(Qt_Gui_QBrush_QBrush, style);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setStyle);
PHP_METHOD(Qt_Gui_QBrush_QBrush, transform);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setTransform);
PHP_METHOD(Qt_Gui_QBrush_QBrush, texture);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setTexture);
PHP_METHOD(Qt_Gui_QBrush_QBrush, textureImage);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setTextureImage);
PHP_METHOD(Qt_Gui_QBrush_QBrush, color);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setColor);
PHP_METHOD(Qt_Gui_QBrush_QBrush, setColorQtGlobalColor);
PHP_METHOD(Qt_Gui_QBrush_QBrush, gradient);
PHP_METHOD(Qt_Gui_QBrush_QBrush, isOpaque);
PHP_METHOD(Qt_Gui_QBrush_QBrush, isDetached);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqtbrushstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqcolorqtbrushstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_INFO(0, bs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqtglobalcolorqtbrushstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_INFO(0, bs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqcolorqpixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqtglobalcolorqpixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqbrush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_newqgradient, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gradient, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_transform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_settransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_texture, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_settexture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_textureimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_settextureimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_setcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_setcolorqtglobalcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_gradient, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrush_qbrush_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qbrush_qbrush_method_entry) {
	PHP_ME(Qt_Gui_QBrush_QBrush, new_, arginfo_qt_gui_qbrush_qbrush_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQtBrushStyle, arginfo_qt_gui_qbrush_qbrush_newqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQColorQtBrushStyle, arginfo_qt_gui_qbrush_qbrush_newqcolorqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQtGlobalColorQtBrushStyle, arginfo_qt_gui_qbrush_qbrush_newqtglobalcolorqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQColorQPixmap, arginfo_qt_gui_qbrush_qbrush_newqcolorqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQtGlobalColorQPixmap, arginfo_qt_gui_qbrush_qbrush_newqtglobalcolorqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQPixmap, arginfo_qt_gui_qbrush_qbrush_newqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQImage, arginfo_qt_gui_qbrush_qbrush_newqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQBrush, arginfo_qt_gui_qbrush_qbrush_newqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, newQGradient, arginfo_qt_gui_qbrush_qbrush_newqgradient, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, swap, arginfo_qt_gui_qbrush_qbrush_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, style, arginfo_qt_gui_qbrush_qbrush_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setStyle, arginfo_qt_gui_qbrush_qbrush_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, transform, arginfo_qt_gui_qbrush_qbrush_transform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setTransform, arginfo_qt_gui_qbrush_qbrush_settransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, texture, arginfo_qt_gui_qbrush_qbrush_texture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setTexture, arginfo_qt_gui_qbrush_qbrush_settexture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, textureImage, arginfo_qt_gui_qbrush_qbrush_textureimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setTextureImage, arginfo_qt_gui_qbrush_qbrush_settextureimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, color, arginfo_qt_gui_qbrush_qbrush_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setColor, arginfo_qt_gui_qbrush_qbrush_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, setColorQtGlobalColor, arginfo_qt_gui_qbrush_qbrush_setcolorqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, gradient, arginfo_qt_gui_qbrush_qbrush_gradient, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, isOpaque, arginfo_qt_gui_qbrush_qbrush_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrush_QBrush, isDetached, arginfo_qt_gui_qbrush_qbrush_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
