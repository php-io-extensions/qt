
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
#include "src/widgets-qtreewidgetitemiterator.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTreeWidgetItemIterator_QTreeWidgetItemIterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTreeWidgetItemIterator, QTreeWidgetItemIterator, qt, widgets_qtreewidgetitemiterator_qtreewidgetitemiterator, qt_widgets_qtreewidgetitemiterator_qtreewidgetitemiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTreeWidgetItemIterator_QTreeWidgetItemIterator, new_)
{
	zval *widget_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long widget;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(widget)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &widget_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, widget);
	RETURN_LONG(phpqt_qtreewidgetitemiterator_new(&_0, flags));
}

PHP_METHOD(Qt_Widgets_QTreeWidgetItemIterator_QTreeWidgetItemIterator, newQTreeWidgetItemQTreeWidgetItemIteratorIteratorFlags)
{
	zval *item_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long item;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &item_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, item);
	RETURN_LONG(phpqt_qtreewidgetitemiterator_new_q_tree_widget_item_q_tree_widget_item_iterator_iterator_flags(&_0, flags));
}

