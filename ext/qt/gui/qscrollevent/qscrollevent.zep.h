
extern zend_class_entry *qt_gui_qscrollevent_qscrollevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QScrollEvent_QScrollEvent);

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, new_);
PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, clone_);
PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, newQPointFQPointFQScrollEventScrollState);
PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, contentPos);
PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, overshootDistance);
PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, scrollState);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_newqpointfqpointfqscrolleventscrollstate, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, contentPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, overshootX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, overshootY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scrollState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_contentpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_overshootdistance, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollevent_qscrollevent_scrollstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qscrollevent_qscrollevent_method_entry) {
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, new_, arginfo_qt_gui_qscrollevent_qscrollevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, clone_, arginfo_qt_gui_qscrollevent_qscrollevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, newQPointFQPointFQScrollEventScrollState, arginfo_qt_gui_qscrollevent_qscrollevent_newqpointfqpointfqscrolleventscrollstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, contentPos, arginfo_qt_gui_qscrollevent_qscrollevent_contentpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, overshootDistance, arginfo_qt_gui_qscrollevent_qscrollevent_overshootdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollEvent_QScrollEvent, scrollState, arginfo_qt_gui_qscrollevent_qscrollevent_scrollstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
