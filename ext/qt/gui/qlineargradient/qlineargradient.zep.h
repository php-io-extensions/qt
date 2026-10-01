
extern zend_class_entry *qt_gui_qlineargradient_qlineargradient_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QLinearGradient_QLinearGradient);

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, new_);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, newQPointFQPointF);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, newQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, start);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setStart);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setStartQrealQreal);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, finalStop);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStop);
PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStopQrealQreal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_newqpointfqpointf, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, finalStopX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, finalStopY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_newqrealqrealqrealqreal, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xStart, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yStart, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xFinalStop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yFinalStop, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_start, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_setstart, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_setstartqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_finalstop, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_setfinalstop, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stopX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, stopY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qlineargradient_qlineargradient_setfinalstopqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qlineargradient_qlineargradient_method_entry) {
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, new_, arginfo_qt_gui_qlineargradient_qlineargradient_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, newQPointFQPointF, arginfo_qt_gui_qlineargradient_qlineargradient_newqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, newQrealQrealQrealQreal, arginfo_qt_gui_qlineargradient_qlineargradient_newqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, start, arginfo_qt_gui_qlineargradient_qlineargradient_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, setStart, arginfo_qt_gui_qlineargradient_qlineargradient_setstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, setStartQrealQreal, arginfo_qt_gui_qlineargradient_qlineargradient_setstartqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, finalStop, arginfo_qt_gui_qlineargradient_qlineargradient_finalstop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStop, arginfo_qt_gui_qlineargradient_qlineargradient_setfinalstop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStopQrealQreal, arginfo_qt_gui_qlineargradient_qlineargradient_setfinalstopqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
