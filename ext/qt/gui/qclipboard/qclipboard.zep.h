
extern zend_class_entry *qt_gui_qclipboard_qclipboard_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QClipboard_QClipboard);

PHP_METHOD(Qt_Gui_QClipboard_QClipboard, staticMetaObject);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, tr);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, clear);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, supportsSelection);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, supportsFindBuffer);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, ownsSelection);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, ownsClipboard);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, ownsFindBuffer);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, text);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, textQClipboardMode);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, setText);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, mimeData);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, setMimeData);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, image);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, pixmap);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, setImage);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, setPixmap);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, changed);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, selectionChanged);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, findBufferChanged);
PHP_METHOD(Qt_Gui_QClipboard_QClipboard, dataChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_supportsselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_supportsfindbuffer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_ownsselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_ownsclipboard, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_ownsfindbuffer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_textqclipboardmode, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_mimedata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_setmimedata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_pixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_setpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_changed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_selectionchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_findbufferchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qclipboard_qclipboard_datachanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qclipboard_qclipboard_method_entry) {
	PHP_ME(Qt_Gui_QClipboard_QClipboard, staticMetaObject, arginfo_qt_gui_qclipboard_qclipboard_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, tr, arginfo_qt_gui_qclipboard_qclipboard_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, clear, arginfo_qt_gui_qclipboard_qclipboard_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, supportsSelection, arginfo_qt_gui_qclipboard_qclipboard_supportsselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, supportsFindBuffer, arginfo_qt_gui_qclipboard_qclipboard_supportsfindbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, ownsSelection, arginfo_qt_gui_qclipboard_qclipboard_ownsselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, ownsClipboard, arginfo_qt_gui_qclipboard_qclipboard_ownsclipboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, ownsFindBuffer, arginfo_qt_gui_qclipboard_qclipboard_ownsfindbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, text, arginfo_qt_gui_qclipboard_qclipboard_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, textQClipboardMode, arginfo_qt_gui_qclipboard_qclipboard_textqclipboardmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, setText, arginfo_qt_gui_qclipboard_qclipboard_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, mimeData, arginfo_qt_gui_qclipboard_qclipboard_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, setMimeData, arginfo_qt_gui_qclipboard_qclipboard_setmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, image, arginfo_qt_gui_qclipboard_qclipboard_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, pixmap, arginfo_qt_gui_qclipboard_qclipboard_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, setImage, arginfo_qt_gui_qclipboard_qclipboard_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, setPixmap, arginfo_qt_gui_qclipboard_qclipboard_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, changed, arginfo_qt_gui_qclipboard_qclipboard_changed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, selectionChanged, arginfo_qt_gui_qclipboard_qclipboard_selectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, findBufferChanged, arginfo_qt_gui_qclipboard_qclipboard_findbufferchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QClipboard_QClipboard, dataChanged, arginfo_qt_gui_qclipboard_qclipboard_datachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
