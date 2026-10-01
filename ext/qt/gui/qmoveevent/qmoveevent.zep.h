
extern zend_class_entry *qt_gui_qmoveevent_qmoveevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QMoveEvent_QMoveEvent);

PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, new_);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, clone_);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, newQPointQPoint);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, pos);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, oldPos);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, m_pos);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, setM_pos);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, m_oldPos);
PHP_METHOD(Qt_Gui_QMoveEvent_QMoveEvent, setM_oldPos);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_newqpointqpoint, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_oldpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_m_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_setm_pos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_m_oldpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmoveevent_qmoveevent_setm_oldpos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qmoveevent_qmoveevent_method_entry) {
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, new_, arginfo_qt_gui_qmoveevent_qmoveevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, clone_, arginfo_qt_gui_qmoveevent_qmoveevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, newQPointQPoint, arginfo_qt_gui_qmoveevent_qmoveevent_newqpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, pos, arginfo_qt_gui_qmoveevent_qmoveevent_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, oldPos, arginfo_qt_gui_qmoveevent_qmoveevent_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, m_pos, arginfo_qt_gui_qmoveevent_qmoveevent_m_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, setM_pos, arginfo_qt_gui_qmoveevent_qmoveevent_setm_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, m_oldPos, arginfo_qt_gui_qmoveevent_qmoveevent_m_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMoveEvent_QMoveEvent, setM_oldPos, arginfo_qt_gui_qmoveevent_qmoveevent_setm_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
