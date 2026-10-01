
extern zend_class_entry *qt_widgets_qmenufunctions_qmenufunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMenuFunctions_QMenuFunctions);

PHP_METHOD(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_menu_emit_hovered);
PHP_METHOD(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_emit_menuSignals);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenufunctions_qmenufunctions_qt_mac_menu_emit_hovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenufunctions_qmenufunctions_qt_mac_emit_menusignals, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, show, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmenufunctions_qmenufunctions_method_entry) {
	PHP_ME(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_menu_emit_hovered, arginfo_qt_widgets_qmenufunctions_qmenufunctions_qt_mac_menu_emit_hovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuFunctions_QMenuFunctions, qt_mac_emit_menuSignals, arginfo_qt_widgets_qmenufunctions_qmenufunctions_qt_mac_emit_menusignals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
