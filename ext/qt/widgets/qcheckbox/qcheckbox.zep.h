
extern zend_class_entry *qt_widgets_qcheckbox_qcheckbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QCheckBox_QCheckBox);

PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, tr);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, new_);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, sizeHint);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, setTristate);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, isTristate);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, checkState);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, setCheckState);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, checkStateChanged);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, event);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, hitButton);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, checkStateSet);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, nextCheckState);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, paintEvent);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QCheckBox_QCheckBox, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_settristate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_istristate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_checkstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_setcheckstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_checkstatechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_hitbutton, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_checkstateset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_nextcheckstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcheckbox_qcheckbox_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcheckbox_qcheckbox_method_entry) {
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, staticMetaObject, arginfo_qt_widgets_qcheckbox_qcheckbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, tr, arginfo_qt_widgets_qcheckbox_qcheckbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, new_, arginfo_qt_widgets_qcheckbox_qcheckbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, newQStringQWidget, arginfo_qt_widgets_qcheckbox_qcheckbox_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, sizeHint, arginfo_qt_widgets_qcheckbox_qcheckbox_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, minimumSizeHint, arginfo_qt_widgets_qcheckbox_qcheckbox_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, setTristate, arginfo_qt_widgets_qcheckbox_qcheckbox_settristate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, isTristate, arginfo_qt_widgets_qcheckbox_qcheckbox_istristate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, checkState, arginfo_qt_widgets_qcheckbox_qcheckbox_checkstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, setCheckState, arginfo_qt_widgets_qcheckbox_qcheckbox_setcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, checkStateChanged, arginfo_qt_widgets_qcheckbox_qcheckbox_checkstatechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, event, arginfo_qt_widgets_qcheckbox_qcheckbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, hitButton, arginfo_qt_widgets_qcheckbox_qcheckbox_hitbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, checkStateSet, arginfo_qt_widgets_qcheckbox_qcheckbox_checkstateset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, nextCheckState, arginfo_qt_widgets_qcheckbox_qcheckbox_nextcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, paintEvent, arginfo_qt_widgets_qcheckbox_qcheckbox_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, mouseMoveEvent, arginfo_qt_widgets_qcheckbox_qcheckbox_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCheckBox_QCheckBox, initStyleOption, arginfo_qt_widgets_qcheckbox_qcheckbox_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
