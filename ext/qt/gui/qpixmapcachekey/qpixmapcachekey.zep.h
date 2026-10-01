
extern zend_class_entry *qt_gui_qpixmapcachekey_qpixmapcachekey_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey);

PHP_METHOD(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, new_);
PHP_METHOD(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, newQPixmapCacheKey);
PHP_METHOD(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, swap);
PHP_METHOD(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_newqpixmapcachekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixmapcachekey_qpixmapcachekey_method_entry) {
	PHP_ME(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, new_, arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, newQPixmapCacheKey, arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_newqpixmapcachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, swap, arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapCacheKey_QPixmapCacheKey, isValid, arginfo_qt_gui_qpixmapcachekey_qpixmapcachekey_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
