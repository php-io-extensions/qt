
extern zend_class_entry *qt_gui_qbrushfunctions_qbrushfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QBrushFunctions_QBrushFunctions);

PHP_METHOD(Qt_Gui_QBrushFunctions_QBrushFunctions, swap);
PHP_METHOD(Qt_Gui_QBrushFunctions_QBrushFunctions, qHasPixmapTexture);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushfunctions_qbrushfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qbrushfunctions_qbrushfunctions_qhaspixmaptexture, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qbrushfunctions_qbrushfunctions_method_entry) {
	PHP_ME(Qt_Gui_QBrushFunctions_QBrushFunctions, swap, arginfo_qt_gui_qbrushfunctions_qbrushfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QBrushFunctions_QBrushFunctions, qHasPixmapTexture, arginfo_qt_gui_qbrushfunctions_qbrushfunctions_qhaspixmaptexture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
