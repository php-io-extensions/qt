
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/widgets-qgraphicssceneevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsSceneEvent, QGraphicsSceneEvent, qt, widgets_qgraphicssceneevent_qgraphicssceneevent, qt_widgets_qgraphicssceneevent_qgraphicssceneevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, new_)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qgraphicssceneevent_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, widget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicssceneevent_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setWidget)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qgraphicssceneevent_set_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, timestamp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicssceneevent_timestamp(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneEvent_QGraphicsSceneEvent, setTimestamp)
{
	zval *handle_param = NULL, *ts_param = NULL, _0, _1;
	zend_long handle, ts;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ts)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ts_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ts);
	phpqt_qgraphicssceneevent_set_timestamp(&_0, &_1);
}

