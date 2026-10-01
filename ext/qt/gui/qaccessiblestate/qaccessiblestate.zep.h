
extern zend_class_entry *qt_gui_qaccessiblestate_qaccessiblestate_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleState_QAccessibleState);

PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, disabled);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setDisabled);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, selected);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSelected);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, focusable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setFocusable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, focused);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setFocused);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, pressed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setPressed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, checkable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setCheckable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, checked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setChecked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, checkStateMixed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setCheckStateMixed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, readOnly);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setReadOnly);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, hotTracked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setHotTracked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, defaultButton);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setDefaultButton);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, expanded);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setExpanded);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, collapsed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setCollapsed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, busy);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setBusy);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, expandable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setExpandable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, marqueed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setMarqueed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, animated);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setAnimated);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, invisible);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setInvisible);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, offscreen);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setOffscreen);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, sizeable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSizeable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, movable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setMovable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, selfVoicing);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSelfVoicing);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, selectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSelectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, linked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setLinked);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, traversed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setTraversed);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, multiSelectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setMultiSelectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, extSelectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setExtSelectable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, passwordEdit);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setPasswordEdit);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, hasPopup);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setHasPopup);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, modal);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setModal);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, active);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setActive);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, invalid);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setInvalid);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, editable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setEditable);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, multiLine);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setMultiLine);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, selectableText);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSelectableText);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, supportsAutoCompletion);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSupportsAutoCompletion);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, searchEdit);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, setSearchEdit);
PHP_METHOD(Qt_Gui_QAccessibleState_QAccessibleState, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_disabled, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setdisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_focusable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setfocusable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_focused, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setfocused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_pressed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setpressed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checkable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcheckable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checked, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setchecked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checkstatemixed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcheckstatemixed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_readonly, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setreadonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_hottracked, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sethottracked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_defaultbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setdefaultbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_expanded, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setexpanded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_collapsed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcollapsed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_busy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setbusy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_expandable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setexpandable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_marqueed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmarqueed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_animated, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setanimated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_invisible, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setinvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_offscreen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setoffscreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sizeable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsizeable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_movable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selfvoicing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselfvoicing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selectable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_linked, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setlinked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_traversed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_settraversed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_multiselectable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmultiselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_extselectable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setextselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_passwordedit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setpasswordedit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_haspopup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sethaspopup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_modal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmodal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_active, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setactive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_invalid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setinvalid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_editable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_multiline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmultiline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selectabletext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselectabletext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_supportsautocompletion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsupportsautocompletion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_searchedit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsearchedit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblestate_qaccessiblestate_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessiblestate_qaccessiblestate_method_entry) {
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, disabled, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_disabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setDisabled, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, selected, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSelected, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, focusable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_focusable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setFocusable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setfocusable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, focused, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_focused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setFocused, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setfocused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, pressed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_pressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setPressed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setpressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, checkable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checkable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setCheckable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcheckable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, checked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setChecked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setchecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, checkStateMixed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_checkstatemixed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setCheckStateMixed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcheckstatemixed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, readOnly, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_readonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setReadOnly, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, hotTracked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_hottracked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setHotTracked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sethottracked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, defaultButton, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_defaultbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setDefaultButton, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setdefaultbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, expanded, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_expanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setExpanded, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, collapsed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_collapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setCollapsed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setcollapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, busy, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_busy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setBusy, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setbusy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, expandable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_expandable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setExpandable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setexpandable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, marqueed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_marqueed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setMarqueed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmarqueed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, animated, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_animated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setAnimated, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, invisible, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_invisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setInvisible, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setinvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, offscreen, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_offscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setOffscreen, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setoffscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, sizeable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sizeable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSizeable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsizeable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, movable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_movable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setMovable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, selfVoicing, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selfvoicing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSelfVoicing, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselfvoicing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, selectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSelectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, linked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_linked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setLinked, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setlinked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, traversed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_traversed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setTraversed, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_settraversed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, multiSelectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_multiselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setMultiSelectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmultiselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, extSelectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_extselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setExtSelectable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setextselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, passwordEdit, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_passwordedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setPasswordEdit, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setpasswordedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, hasPopup, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_haspopup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setHasPopup, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_sethaspopup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, modal, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_modal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setModal, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, active, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_active, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setActive, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, invalid, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_invalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setInvalid, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setinvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, editable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_editable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setEditable, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, multiLine, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_multiline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setMultiLine, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setmultiline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, selectableText, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_selectabletext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSelectableText, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setselectabletext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, supportsAutoCompletion, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_supportsautocompletion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSupportsAutoCompletion, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsupportsautocompletion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, searchEdit, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_searchedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, setSearchEdit, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_setsearchedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleState_QAccessibleState, new_, arginfo_qt_gui_qaccessiblestate_qaccessiblestate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
