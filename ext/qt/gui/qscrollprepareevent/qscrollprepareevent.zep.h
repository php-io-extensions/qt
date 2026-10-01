
extern zend_class_entry *qt_gui_qscrollprepareevent_qscrollprepareevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent);

PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, new_);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, clone_);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, newQPointF);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, startPos);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, viewportSize);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, contentPosRange);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, contentPos);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setViewportSize);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setContentPosRange);
PHP_METHOD(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setContentPos);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_newqpointf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startPosY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_startpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_viewportsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_contentposrange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_contentpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setviewportsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setcontentposrange, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setcontentpos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qscrollprepareevent_qscrollprepareevent_method_entry) {
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, new_, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, clone_, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, newQPointF, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, startPos, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_startpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, viewportSize, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_viewportsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, contentPosRange, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_contentposrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, contentPos, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_contentpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setViewportSize, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setviewportsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setContentPosRange, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setcontentposrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScrollPrepareEvent_QScrollPrepareEvent, setContentPos, arginfo_qt_gui_qscrollprepareevent_qscrollprepareevent_setcontentpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
