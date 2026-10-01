
extern zend_class_entry *qt_gui_qcursor_qcursor_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QCursor_QCursor);

PHP_METHOD(Qt_Gui_QCursor_QCursor, new_);
PHP_METHOD(Qt_Gui_QCursor_QCursor, newQtCursorShape);
PHP_METHOD(Qt_Gui_QCursor_QCursor, newQBitmapQBitmapIntInt);
PHP_METHOD(Qt_Gui_QCursor_QCursor, newQPixmapIntInt);
PHP_METHOD(Qt_Gui_QCursor_QCursor, newQCursor);
PHP_METHOD(Qt_Gui_QCursor_QCursor, swap);
PHP_METHOD(Qt_Gui_QCursor_QCursor, shape);
PHP_METHOD(Qt_Gui_QCursor_QCursor, setShape);
PHP_METHOD(Qt_Gui_QCursor_QCursor, bitmap);
PHP_METHOD(Qt_Gui_QCursor_QCursor, mask);
PHP_METHOD(Qt_Gui_QCursor_QCursor, pixmap);
PHP_METHOD(Qt_Gui_QCursor_QCursor, hotSpot);
PHP_METHOD(Qt_Gui_QCursor_QCursor, pos);
PHP_METHOD(Qt_Gui_QCursor_QCursor, posQScreen);
PHP_METHOD(Qt_Gui_QCursor_QCursor, setPos);
PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQScreenIntInt);
PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQPoint);
PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQScreenQPoint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_newqtcursorshape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_newqbitmapqbitmapintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bitmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_newqpixmapintint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_newqcursor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_setshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newShape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_bitmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_mask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_pixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_hotspot, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_pos, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_posqscreen, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_setpos, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_setposqscreenintint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_setposqpoint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcursor_qcursor_setposqscreenqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qcursor_qcursor_method_entry) {
	PHP_ME(Qt_Gui_QCursor_QCursor, new_, arginfo_qt_gui_qcursor_qcursor_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, newQtCursorShape, arginfo_qt_gui_qcursor_qcursor_newqtcursorshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, newQBitmapQBitmapIntInt, arginfo_qt_gui_qcursor_qcursor_newqbitmapqbitmapintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, newQPixmapIntInt, arginfo_qt_gui_qcursor_qcursor_newqpixmapintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, newQCursor, arginfo_qt_gui_qcursor_qcursor_newqcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, swap, arginfo_qt_gui_qcursor_qcursor_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, shape, arginfo_qt_gui_qcursor_qcursor_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, setShape, arginfo_qt_gui_qcursor_qcursor_setshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, bitmap, arginfo_qt_gui_qcursor_qcursor_bitmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, mask, arginfo_qt_gui_qcursor_qcursor_mask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, pixmap, arginfo_qt_gui_qcursor_qcursor_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, hotSpot, arginfo_qt_gui_qcursor_qcursor_hotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, pos, arginfo_qt_gui_qcursor_qcursor_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, posQScreen, arginfo_qt_gui_qcursor_qcursor_posqscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, setPos, arginfo_qt_gui_qcursor_qcursor_setpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, setPosQScreenIntInt, arginfo_qt_gui_qcursor_qcursor_setposqscreenintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, setPosQPoint, arginfo_qt_gui_qcursor_qcursor_setposqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QCursor_QCursor, setPosQScreenQPoint, arginfo_qt_gui_qcursor_qcursor_setposqscreenqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
