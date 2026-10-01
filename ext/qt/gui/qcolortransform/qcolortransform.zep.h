
extern zend_class_entry *qt_gui_qcolortransform_qcolortransform_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QColorTransform_QColorTransform);

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, new_);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, newQColorTransform);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, swap);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, isIdentity);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, map);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, mapQRgba64);
PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, mapQColor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_newqcolortransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorTransform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_isidentity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_map, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, argb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_mapqrgba64, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba64, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolortransform_qcolortransform_mapqcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qcolortransform_qcolortransform_method_entry) {
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, new_, arginfo_qt_gui_qcolortransform_qcolortransform_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, newQColorTransform, arginfo_qt_gui_qcolortransform_qcolortransform_newqcolortransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, swap, arginfo_qt_gui_qcolortransform_qcolortransform_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, isIdentity, arginfo_qt_gui_qcolortransform_qcolortransform_isidentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, map, arginfo_qt_gui_qcolortransform_qcolortransform_map, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, mapQRgba64, arginfo_qt_gui_qcolortransform_qcolortransform_mapqrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorTransform_QColorTransform, mapQColor, arginfo_qt_gui_qcolortransform_qcolortransform_mapqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
