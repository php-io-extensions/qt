
extern zend_class_entry *qt_core_qobject_qobject_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QObject_QObject);

PHP_METHOD(Qt_Core_QObject_QObject, staticMetaObject);
PHP_METHOD(Qt_Core_QObject_QObject, tr);
PHP_METHOD(Qt_Core_QObject_QObject, new_);
PHP_METHOD(Qt_Core_QObject_QObject, event);
PHP_METHOD(Qt_Core_QObject_QObject, eventFilter);
PHP_METHOD(Qt_Core_QObject_QObject, objectName);
PHP_METHOD(Qt_Core_QObject_QObject, setObjectName);
PHP_METHOD(Qt_Core_QObject_QObject, isWidgetType);
PHP_METHOD(Qt_Core_QObject_QObject, isWindowType);
PHP_METHOD(Qt_Core_QObject_QObject, isQuickItemType);
PHP_METHOD(Qt_Core_QObject_QObject, signalsBlocked);
PHP_METHOD(Qt_Core_QObject_QObject, blockSignals);
PHP_METHOD(Qt_Core_QObject_QObject, thread);
PHP_METHOD(Qt_Core_QObject_QObject, moveToThread);
PHP_METHOD(Qt_Core_QObject_QObject, startTimer);
PHP_METHOD(Qt_Core_QObject_QObject, killTimer);
PHP_METHOD(Qt_Core_QObject_QObject, killTimerQtTimerId);
PHP_METHOD(Qt_Core_QObject_QObject, children);
PHP_METHOD(Qt_Core_QObject_QObject, setParent);
PHP_METHOD(Qt_Core_QObject_QObject, installEventFilter);
PHP_METHOD(Qt_Core_QObject_QObject, removeEventFilter);
PHP_METHOD(Qt_Core_QObject_QObject, connect);
PHP_METHOD(Qt_Core_QObject_QObject, connectQObjectQMetaMethodQObjectQMetaMethodQtConnectionType);
PHP_METHOD(Qt_Core_QObject_QObject, connectQObjectCharCharQtConnectionType);
PHP_METHOD(Qt_Core_QObject_QObject, disconnect);
PHP_METHOD(Qt_Core_QObject_QObject, disconnectQObjectQMetaMethodQObjectQMetaMethod);
PHP_METHOD(Qt_Core_QObject_QObject, disconnectCharQObjectChar);
PHP_METHOD(Qt_Core_QObject_QObject, disconnectQObjectChar);
PHP_METHOD(Qt_Core_QObject_QObject, disconnectQMetaObjectConnection);
PHP_METHOD(Qt_Core_QObject_QObject, dumpObjectTree);
PHP_METHOD(Qt_Core_QObject_QObject, dumpObjectInfo);
PHP_METHOD(Qt_Core_QObject_QObject, setProperty);
PHP_METHOD(Qt_Core_QObject_QObject, property);
PHP_METHOD(Qt_Core_QObject_QObject, dynamicPropertyNames);
PHP_METHOD(Qt_Core_QObject_QObject, bindingStorage);
PHP_METHOD(Qt_Core_QObject_QObject, destroyed);
PHP_METHOD(Qt_Core_QObject_QObject, parent_);
PHP_METHOD(Qt_Core_QObject_QObject, inherits);
PHP_METHOD(Qt_Core_QObject_QObject, deleteLater);
PHP_METHOD(Qt_Core_QObject_QObject, sender);
PHP_METHOD(Qt_Core_QObject_QObject, senderSignalIndex);
PHP_METHOD(Qt_Core_QObject_QObject, receivers);
PHP_METHOD(Qt_Core_QObject_QObject, isSignalConnected);
PHP_METHOD(Qt_Core_QObject_QObject, timerEvent);
PHP_METHOD(Qt_Core_QObject_QObject, childEvent);
PHP_METHOD(Qt_Core_QObject_QObject, customEvent);
PHP_METHOD(Qt_Core_QObject_QObject, connectNotify);
PHP_METHOD(Qt_Core_QObject_QObject, disconnectNotify);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, watched, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_objectname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_setobjectname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_iswidgettype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_iswindowtype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_isquickitemtype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_signalsblocked, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_blocksignals, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_thread, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_movetothread, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thread, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_starttimer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
	ZEND_ARG_INFO(0, timerType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_killtimer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_killtimerqttimerid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_children, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_setparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_installeventfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filterObj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_removeeventfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_connect, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, arg4)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_connectqobjectqmetamethodqobjectqmetamethodqtconnectiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_connectqobjectcharcharqtconnectiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnect, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnectqobjectqmetamethodqobjectqmetamethod, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, member, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnectcharqobjectchar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnectqobjectchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnectqmetaobjectconnection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_dumpobjecttree, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_dumpobjectinfo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_setproperty, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qobject_qobject_property, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_dynamicpropertynames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_bindingstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_destroyed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_inherits, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, classname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_deletelater, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_sender, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_sendersignalindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_receivers, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_issignalconnected, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_customevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_connectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qobject_qobject_disconnectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qobject_qobject_method_entry) {
	PHP_ME(Qt_Core_QObject_QObject, staticMetaObject, arginfo_qt_core_qobject_qobject_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, tr, arginfo_qt_core_qobject_qobject_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, new_, arginfo_qt_core_qobject_qobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, event, arginfo_qt_core_qobject_qobject_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, eventFilter, arginfo_qt_core_qobject_qobject_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, objectName, arginfo_qt_core_qobject_qobject_objectname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, setObjectName, arginfo_qt_core_qobject_qobject_setobjectname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, isWidgetType, arginfo_qt_core_qobject_qobject_iswidgettype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, isWindowType, arginfo_qt_core_qobject_qobject_iswindowtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, isQuickItemType, arginfo_qt_core_qobject_qobject_isquickitemtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, signalsBlocked, arginfo_qt_core_qobject_qobject_signalsblocked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, blockSignals, arginfo_qt_core_qobject_qobject_blocksignals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, thread, arginfo_qt_core_qobject_qobject_thread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, moveToThread, arginfo_qt_core_qobject_qobject_movetothread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, startTimer, arginfo_qt_core_qobject_qobject_starttimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, killTimer, arginfo_qt_core_qobject_qobject_killtimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, killTimerQtTimerId, arginfo_qt_core_qobject_qobject_killtimerqttimerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, children, arginfo_qt_core_qobject_qobject_children, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, setParent, arginfo_qt_core_qobject_qobject_setparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, installEventFilter, arginfo_qt_core_qobject_qobject_installeventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, removeEventFilter, arginfo_qt_core_qobject_qobject_removeeventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, connect, arginfo_qt_core_qobject_qobject_connect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, connectQObjectQMetaMethodQObjectQMetaMethodQtConnectionType, arginfo_qt_core_qobject_qobject_connectqobjectqmetamethodqobjectqmetamethodqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, connectQObjectCharCharQtConnectionType, arginfo_qt_core_qobject_qobject_connectqobjectcharcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnect, arginfo_qt_core_qobject_qobject_disconnect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnectQObjectQMetaMethodQObjectQMetaMethod, arginfo_qt_core_qobject_qobject_disconnectqobjectqmetamethodqobjectqmetamethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnectCharQObjectChar, arginfo_qt_core_qobject_qobject_disconnectcharqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnectQObjectChar, arginfo_qt_core_qobject_qobject_disconnectqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnectQMetaObjectConnection, arginfo_qt_core_qobject_qobject_disconnectqmetaobjectconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, dumpObjectTree, arginfo_qt_core_qobject_qobject_dumpobjecttree, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, dumpObjectInfo, arginfo_qt_core_qobject_qobject_dumpobjectinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, setProperty, arginfo_qt_core_qobject_qobject_setproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, property, arginfo_qt_core_qobject_qobject_property, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, dynamicPropertyNames, arginfo_qt_core_qobject_qobject_dynamicpropertynames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, bindingStorage, arginfo_qt_core_qobject_qobject_bindingstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, destroyed, arginfo_qt_core_qobject_qobject_destroyed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, parent_, arginfo_qt_core_qobject_qobject_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, inherits, arginfo_qt_core_qobject_qobject_inherits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, deleteLater, arginfo_qt_core_qobject_qobject_deletelater, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, sender, arginfo_qt_core_qobject_qobject_sender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, senderSignalIndex, arginfo_qt_core_qobject_qobject_sendersignalindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, receivers, arginfo_qt_core_qobject_qobject_receivers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, isSignalConnected, arginfo_qt_core_qobject_qobject_issignalconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, timerEvent, arginfo_qt_core_qobject_qobject_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, childEvent, arginfo_qt_core_qobject_qobject_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, customEvent, arginfo_qt_core_qobject_qobject_customevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, connectNotify, arginfo_qt_core_qobject_qobject_connectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QObject_QObject, disconnectNotify, arginfo_qt_core_qobject_qobject_disconnectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
