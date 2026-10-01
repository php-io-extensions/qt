
extern zend_class_entry *qt_gui_qsurface_qsurface_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QSurface_QSurface);

PHP_METHOD(Qt_Gui_QSurface_QSurface, staticMetaObject);
PHP_METHOD(Qt_Gui_QSurface_QSurface, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QSurface_QSurface, surfaceClass);
PHP_METHOD(Qt_Gui_QSurface_QSurface, format);
PHP_METHOD(Qt_Gui_QSurface_QSurface, surfaceType);
PHP_METHOD(Qt_Gui_QSurface_QSurface, supportsOpenGL);
PHP_METHOD(Qt_Gui_QSurface_QSurface, size);
PHP_METHOD(Qt_Gui_QSurface_QSurface, new_);
PHP_METHOD(Qt_Gui_QSurface_QSurface, m_type);
PHP_METHOD(Qt_Gui_QSurface_QSurface, setM_type);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_surfaceclass, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_surfacetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_supportsopengl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_m_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsurface_qsurface_setm_type, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qsurface_qsurface_method_entry) {
	PHP_ME(Qt_Gui_QSurface_QSurface, staticMetaObject, arginfo_qt_gui_qsurface_qsurface_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, qt_check_for_QGADGET_macro, arginfo_qt_gui_qsurface_qsurface_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, surfaceClass, arginfo_qt_gui_qsurface_qsurface_surfaceclass, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, format, arginfo_qt_gui_qsurface_qsurface_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, surfaceType, arginfo_qt_gui_qsurface_qsurface_surfacetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, supportsOpenGL, arginfo_qt_gui_qsurface_qsurface_supportsopengl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, size, arginfo_qt_gui_qsurface_qsurface_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, new_, arginfo_qt_gui_qsurface_qsurface_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, m_type, arginfo_qt_gui_qsurface_qsurface_m_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSurface_QSurface, setM_type, arginfo_qt_gui_qsurface_qsurface_setm_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
