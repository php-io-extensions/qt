
extern zend_class_entry *qt_gui_qiconengine_qiconengine_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIconEngine_QIconEngine);

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, new_);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, paint);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, actualSize);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, pixmap);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, addPixmap);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, addFile);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, key);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, clone_);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, read);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, write);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, availableSizes);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, iconName);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, isNull);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, scaledPixmap);
PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, newQIconEngine);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_paint, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_actualsize, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_pixmap, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_addpixmap, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_addfile, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_key, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_read, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, in_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, out, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_availablesizes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_iconname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_scaledpixmap, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengine_qiconengine_newqiconengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qiconengine_qiconengine_method_entry) {
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, new_, arginfo_qt_gui_qiconengine_qiconengine_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, paint, arginfo_qt_gui_qiconengine_qiconengine_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, actualSize, arginfo_qt_gui_qiconengine_qiconengine_actualsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, pixmap, arginfo_qt_gui_qiconengine_qiconengine_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, addPixmap, arginfo_qt_gui_qiconengine_qiconengine_addpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, addFile, arginfo_qt_gui_qiconengine_qiconengine_addfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, key, arginfo_qt_gui_qiconengine_qiconengine_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, clone_, arginfo_qt_gui_qiconengine_qiconengine_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, read, arginfo_qt_gui_qiconengine_qiconengine_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, write, arginfo_qt_gui_qiconengine_qiconengine_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, availableSizes, arginfo_qt_gui_qiconengine_qiconengine_availablesizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, iconName, arginfo_qt_gui_qiconengine_qiconengine_iconname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, isNull, arginfo_qt_gui_qiconengine_qiconengine_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, scaledPixmap, arginfo_qt_gui_qiconengine_qiconengine_scaledpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEngine_QIconEngine, newQIconEngine, arginfo_qt_gui_qiconengine_qiconengine_newqiconengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
