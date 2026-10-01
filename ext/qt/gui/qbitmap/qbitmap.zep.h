
extern zend_class_entry *qt_gui_qbitmap_qbitmap_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QBitmap_QBitmap);

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, new_);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQPixmap);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newIntInt);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQSize);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQStringChar);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, swap);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, clear);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromImage);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromData);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromPixmap);
PHP_METHOD(Qt_Gui_QBitmap_QBitmap, transformed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_newqpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_newintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_newqsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_newqstringchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_fromimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_fromdata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, bits)
	ZEND_ARG_INFO(0, monoFormat)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_frompixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbitmap_qbitmap_transformed, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qbitmap_qbitmap_method_entry) {
	PHP_ME(Qt_Gui_QBitmap_QBitmap, new_, arginfo_qt_gui_qbitmap_qbitmap_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, newQPixmap, arginfo_qt_gui_qbitmap_qbitmap_newqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, newIntInt, arginfo_qt_gui_qbitmap_qbitmap_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, newQSize, arginfo_qt_gui_qbitmap_qbitmap_newqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, newQStringChar, arginfo_qt_gui_qbitmap_qbitmap_newqstringchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, swap, arginfo_qt_gui_qbitmap_qbitmap_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, clear, arginfo_qt_gui_qbitmap_qbitmap_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, fromImage, arginfo_qt_gui_qbitmap_qbitmap_fromimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, fromData, arginfo_qt_gui_qbitmap_qbitmap_fromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, fromPixmap, arginfo_qt_gui_qbitmap_qbitmap_frompixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBitmap_QBitmap, transformed, arginfo_qt_gui_qbitmap_qbitmap_transformed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
