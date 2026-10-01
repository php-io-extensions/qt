
extern zend_class_entry *qt_gui_qtextoption_qtextoption_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextOption_QTextOption);

PHP_METHOD(Qt_Gui_QTextOption_QTextOption, new_);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, newQtAlignment);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, newQTextOption);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setAlignment);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, alignment);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setTextDirection);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, textDirection);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setWrapMode);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, wrapMode);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setFlags);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, flags);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setTabStopDistance);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, tabStopDistance);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setTabArray);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, tabArray);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setTabs);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, tabs);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, setUseDesignMetrics);
PHP_METHOD(Qt_Gui_QTextOption_QTextOption, useDesignMetrics);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_newqtalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_newqtextoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_settextdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_textdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_setwrapmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wrap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_wrapmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_settabstopdistance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabStopDistance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_tabstopdistance, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_settabarray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, tabStops, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_tabarray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_settabs, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, tabStops, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_tabs, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_setusedesignmetrics, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoption_qtextoption_usedesignmetrics, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextoption_qtextoption_method_entry) {
	PHP_ME(Qt_Gui_QTextOption_QTextOption, new_, arginfo_qt_gui_qtextoption_qtextoption_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, newQtAlignment, arginfo_qt_gui_qtextoption_qtextoption_newqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, newQTextOption, arginfo_qt_gui_qtextoption_qtextoption_newqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setAlignment, arginfo_qt_gui_qtextoption_qtextoption_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, alignment, arginfo_qt_gui_qtextoption_qtextoption_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setTextDirection, arginfo_qt_gui_qtextoption_qtextoption_settextdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, textDirection, arginfo_qt_gui_qtextoption_qtextoption_textdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setWrapMode, arginfo_qt_gui_qtextoption_qtextoption_setwrapmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, wrapMode, arginfo_qt_gui_qtextoption_qtextoption_wrapmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setFlags, arginfo_qt_gui_qtextoption_qtextoption_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, flags, arginfo_qt_gui_qtextoption_qtextoption_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setTabStopDistance, arginfo_qt_gui_qtextoption_qtextoption_settabstopdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, tabStopDistance, arginfo_qt_gui_qtextoption_qtextoption_tabstopdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setTabArray, arginfo_qt_gui_qtextoption_qtextoption_settabarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, tabArray, arginfo_qt_gui_qtextoption_qtextoption_tabarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setTabs, arginfo_qt_gui_qtextoption_qtextoption_settabs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, tabs, arginfo_qt_gui_qtextoption_qtextoption_tabs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, setUseDesignMetrics, arginfo_qt_gui_qtextoption_qtextoption_setusedesignmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOption_QTextOption, useDesignMetrics, arginfo_qt_gui_qtextoption_qtextoption_usedesignmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
