
extern zend_class_entry *qt_widgets_qgraphicssceneevent_qgraphicssceneevent_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent);

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, new_);
PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, widget);
PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setWidget);
PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, timestamp);
PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setTimestamp);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_timestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_settimestamp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ts, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicssceneevent_qgraphicssceneevent_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, new_, arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, widget, arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setWidget, arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, timestamp, arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setTimestamp, arginfo_qt_widgets_qgraphicssceneevent_qgraphicssceneevent_settimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
