
extern zend_class_entry *qt_gui_qpagerangesrange_qpagerangesrange_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPageRangesRange_QPageRangesRange);

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, from);
PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, setFrom);
PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, to);
PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, setTo);
PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, contains);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagerangesrange_qpagerangesrange_from, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagerangesrange_qpagerangesrange_setfrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagerangesrange_qpagerangesrange_to, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagerangesrange_qpagerangesrange_setto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagerangesrange_qpagerangesrange_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpagerangesrange_qpagerangesrange_method_entry) {
	PHP_ME(Qt_Gui_QPageRangesRange_QPageRangesRange, from, arginfo_qt_gui_qpagerangesrange_qpagerangesrange_from, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRangesRange_QPageRangesRange, setFrom, arginfo_qt_gui_qpagerangesrange_qpagerangesrange_setfrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRangesRange_QPageRangesRange, to, arginfo_qt_gui_qpagerangesrange_qpagerangesrange_to, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRangesRange_QPageRangesRange, setTo, arginfo_qt_gui_qpagerangesrange_qpagerangesrange_setto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRangesRange_QPageRangesRange, contains, arginfo_qt_gui_qpagerangesrange_qpagerangesrange_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
