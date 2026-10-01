
extern zend_class_entry *qt_gui_qpageranges_qpageranges_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPageRanges_QPageRanges);

PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, new_);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, newQPageRanges);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, swap);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, addPage);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, addRange);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, toRangeList);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, clear);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, toString);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, fromString);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, contains);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, isEmpty);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, firstPage);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, lastPage);
PHP_METHOD(Qt_Gui_QPageRanges_QPageRanges, detach);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_newqpageranges, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_addpage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_addrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_torangelist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ranges, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_firstpage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_lastpage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpageranges_qpageranges_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpageranges_qpageranges_method_entry) {
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, new_, arginfo_qt_gui_qpageranges_qpageranges_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, newQPageRanges, arginfo_qt_gui_qpageranges_qpageranges_newqpageranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, swap, arginfo_qt_gui_qpageranges_qpageranges_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, addPage, arginfo_qt_gui_qpageranges_qpageranges_addpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, addRange, arginfo_qt_gui_qpageranges_qpageranges_addrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, toRangeList, arginfo_qt_gui_qpageranges_qpageranges_torangelist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, clear, arginfo_qt_gui_qpageranges_qpageranges_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, toString, arginfo_qt_gui_qpageranges_qpageranges_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, fromString, arginfo_qt_gui_qpageranges_qpageranges_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, contains, arginfo_qt_gui_qpageranges_qpageranges_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, isEmpty, arginfo_qt_gui_qpageranges_qpageranges_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, firstPage, arginfo_qt_gui_qpageranges_qpageranges_firstpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, lastPage, arginfo_qt_gui_qpageranges_qpageranges_lastpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageRanges_QPageRanges, detach, arginfo_qt_gui_qpageranges_qpageranges_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
