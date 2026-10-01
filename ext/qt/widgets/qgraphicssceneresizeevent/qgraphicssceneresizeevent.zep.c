
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
#include "src/widgets-qgraphicssceneresizeevent.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsSceneResizeEvent, QGraphicsSceneResizeEvent, qt, widgets_qgraphicssceneresizeevent_qgraphicssceneresizeevent, qt_widgets_qgraphicssceneresizeevent_qgraphicssceneresizeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent, new_)
{

	RETURN_LONG(phpqt_qgraphicssceneresizeevent_new());
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent, oldSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicssceneresizeevent_old_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent, setOldSize)
{
	double sizeWidth, sizeHeight;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sizeWidth);
	ZVAL_DOUBLE(&_2, sizeHeight);
	phpqt_qgraphicssceneresizeevent_set_old_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent, newSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicssceneresizeevent_new_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent, setNewSize)
{
	double sizeWidth, sizeHeight;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sizeWidth);
	ZVAL_DOUBLE(&_2, sizeHeight);
	phpqt_qgraphicssceneresizeevent_set_new_size(&_0, &_1, &_2);
}

