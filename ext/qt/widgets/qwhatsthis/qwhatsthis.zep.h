
extern zend_class_entry *qt_widgets_qwhatsthis_qwhatsthis_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWhatsThis_QWhatsThis);

PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, enterWhatsThisMode);
PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, inWhatsThisMode);
PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, leaveWhatsThisMode);
PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, showText);
PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, hideText);
PHP_METHOD(Qt_Widgets_QWhatsThis_QWhatsThis, createAction);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_enterwhatsthismode, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_inwhatsthismode, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_leavewhatsthismode, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_showtext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_hidetext, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwhatsthis_qwhatsthis_createaction, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwhatsthis_qwhatsthis_method_entry) {
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, enterWhatsThisMode, arginfo_qt_widgets_qwhatsthis_qwhatsthis_enterwhatsthismode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, inWhatsThisMode, arginfo_qt_widgets_qwhatsthis_qwhatsthis_inwhatsthismode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, leaveWhatsThisMode, arginfo_qt_widgets_qwhatsthis_qwhatsthis_leavewhatsthismode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, showText, arginfo_qt_widgets_qwhatsthis_qwhatsthis_showtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, hideText, arginfo_qt_widgets_qwhatsthis_qwhatsthis_hidetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWhatsThis_QWhatsThis, createAction, arginfo_qt_widgets_qwhatsthis_qwhatsthis_createaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
