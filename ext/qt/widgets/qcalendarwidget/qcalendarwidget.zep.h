
extern zend_class_entry *qt_widgets_qcalendarwidget_qcalendarwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QCalendarWidget_QCalendarWidget);

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, tr);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, new_);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, sizeHint);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectedDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, yearShown);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, monthShown);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMinimumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMinimumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, maximumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMaximumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMaximumDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, firstDayOfWeek);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setFirstDayOfWeek);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isNavigationBarVisible);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isGridVisible);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, calendar);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCalendar);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionMode);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectionMode);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, horizontalHeaderFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHorizontalHeaderFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, verticalHeaderFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setVerticalHeaderFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, headerTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHeaderTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, weekdayTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setWeekdayTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateTextFormat);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isDateEditEnabled);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditEnabled);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateEditAcceptDelay);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditAcceptDelay);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, event);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, eventFilter);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, mousePressEvent);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, resizeEvent);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, keyPressEvent);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, paintCell);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCell);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCells);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectedDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateRange);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCurrentPage);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setGridVisible);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setNavigationBarVisible);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextMonth);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousMonth);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextYear);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousYear);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showSelectedDate);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showToday);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionChanged);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clicked);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, activated);
PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, currentPageChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selecteddate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_yearshown, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_monthshown, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_minimumdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setminimumdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clearminimumdate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_maximumdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setmaximumdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clearmaximumdate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_firstdayofweek, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setfirstdayofweek, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isnavigationbarvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isgridvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_calendar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setcalendar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, calendar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selectionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setselectionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_horizontalheaderformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_sethorizontalheaderformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_verticalheaderformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setverticalheaderformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_headertextformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setheadertextformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_weekdaytextformat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setweekdaytextformat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dayOfWeek, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_datetextformat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdatetextformat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isdateeditenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdateeditenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_dateeditacceptdelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdateeditacceptdelay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delay, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, watched, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_paintcell, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_updatecell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_updatecells, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setselecteddate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdaterange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setcurrentpage, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setgridvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, show, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setnavigationbarvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_shownextmonth, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showpreviousmonth, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_shownextyear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showpreviousyear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showselecteddate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showtoday, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selectionchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_activated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_currentpagechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcalendarwidget_qcalendarwidget_method_entry) {
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, staticMetaObject, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, tr, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, new_, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, sizeHint, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumSizeHint, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectedDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selecteddate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, yearShown, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_yearshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, monthShown, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_monthshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_minimumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMinimumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setminimumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMinimumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clearminimumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, maximumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_maximumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMaximumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setmaximumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMaximumDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clearmaximumdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, firstDayOfWeek, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_firstdayofweek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setFirstDayOfWeek, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setfirstdayofweek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, isNavigationBarVisible, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isnavigationbarvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, isGridVisible, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isgridvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, calendar, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_calendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCalendar, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionMode, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectionMode, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setselectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, horizontalHeaderFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_horizontalheaderformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHorizontalHeaderFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_sethorizontalheaderformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, verticalHeaderFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_verticalheaderformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setVerticalHeaderFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setverticalheaderformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, headerTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_headertextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHeaderTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setheadertextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, weekdayTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_weekdaytextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setWeekdayTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setweekdaytextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_datetextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateTextFormat, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdatetextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, isDateEditEnabled, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_isdateeditenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditEnabled, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdateeditenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateEditAcceptDelay, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_dateeditacceptdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditAcceptDelay, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdateeditacceptdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, event, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, eventFilter, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, mousePressEvent, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, resizeEvent, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, keyPressEvent, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, paintCell, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_paintcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCell, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_updatecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCells, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_updatecells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectedDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setselecteddate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateRange, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setdaterange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCurrentPage, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setcurrentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setGridVisible, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setgridvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, setNavigationBarVisible, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_setnavigationbarvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextMonth, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_shownextmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousMonth, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showpreviousmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextYear, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_shownextyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousYear, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showpreviousyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showSelectedDate, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showselecteddate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, showToday, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_showtoday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionChanged, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_selectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, clicked, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_clicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, activated, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_activated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCalendarWidget_QCalendarWidget, currentPageChanged, arginfo_qt_widgets_qcalendarwidget_qcalendarwidget_currentpagechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
