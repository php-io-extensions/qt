
extern zend_class_entry *qt_gui_qhelpevent_qhelpevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QHelpEvent_QHelpEvent);

PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, new_);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, clone_);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, newQEventTypeQPointQPoint);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, x);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, y);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, globalX);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, globalY);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, pos);
PHP_METHOD(Qt_Gui_QHelpEvent_QHelpEvent, globalPos);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_newqeventtypeqpointqpoint, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_x, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_y, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_globalx, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_globaly, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhelpevent_qhelpevent_globalpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qhelpevent_qhelpevent_method_entry) {
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, new_, arginfo_qt_gui_qhelpevent_qhelpevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, clone_, arginfo_qt_gui_qhelpevent_qhelpevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, newQEventTypeQPointQPoint, arginfo_qt_gui_qhelpevent_qhelpevent_newqeventtypeqpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, x, arginfo_qt_gui_qhelpevent_qhelpevent_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, y, arginfo_qt_gui_qhelpevent_qhelpevent_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, globalX, arginfo_qt_gui_qhelpevent_qhelpevent_globalx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, globalY, arginfo_qt_gui_qhelpevent_qhelpevent_globaly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, pos, arginfo_qt_gui_qhelpevent_qhelpevent_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHelpEvent_QHelpEvent, globalPos, arginfo_qt_gui_qhelpevent_qhelpevent_globalpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
