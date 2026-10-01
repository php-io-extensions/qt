
extern zend_class_entry *qt_gui_qbackingstore_qbackingstore_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QBackingStore_QBackingStore);

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, new_);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, window);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, paintDevice);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, flush);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, resize);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, size);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, scroll);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, beginPaint);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, endPaint);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, setStaticContents);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, staticContents);
PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, hasStaticContents);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_paintdevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_flush, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_INFO(0, offsetX)
	ZEND_ARG_INFO(0, offsetY)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_resize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_scroll, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_beginpaint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_endpaint, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_setstaticcontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_staticcontents, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbackingstore_qbackingstore_hasstaticcontents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qbackingstore_qbackingstore_method_entry) {
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, new_, arginfo_qt_gui_qbackingstore_qbackingstore_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, window, arginfo_qt_gui_qbackingstore_qbackingstore_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, paintDevice, arginfo_qt_gui_qbackingstore_qbackingstore_paintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, flush, arginfo_qt_gui_qbackingstore_qbackingstore_flush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, resize, arginfo_qt_gui_qbackingstore_qbackingstore_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, size, arginfo_qt_gui_qbackingstore_qbackingstore_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, scroll, arginfo_qt_gui_qbackingstore_qbackingstore_scroll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, beginPaint, arginfo_qt_gui_qbackingstore_qbackingstore_beginpaint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, endPaint, arginfo_qt_gui_qbackingstore_qbackingstore_endpaint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, setStaticContents, arginfo_qt_gui_qbackingstore_qbackingstore_setstaticcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, staticContents, arginfo_qt_gui_qbackingstore_qbackingstore_staticcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBackingStore_QBackingStore, hasStaticContents, arginfo_qt_gui_qbackingstore_qbackingstore_hasstaticcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
