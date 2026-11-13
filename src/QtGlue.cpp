#include "runtime.h"
#include "../stubs/QtGlue_arginfo.h"

#include <QtCore/QEvent>
#include <QtGui/QPainter>
#include <QtWidgets/QStyledItemDelegate>

zend_class_entry *phpqt_ce_QPaintDelegate;

/*
 * The trampoline QObject::installEventFilter() needs: Qt hands eventFilter() every event of
 * each watched object, and each goes to PHP as (watched, event); PHP's bool is Qt's answer.
 */
class PhpEventFilter : public PhpSlot {
public:
	explicit PhpEventFilter(zval *callable) : PhpSlot(callable, QMetaMethod()) {}

	bool eventFilter(QObject *watched, QEvent *event) override
	{
		zval argv[2];
		zval retval;
		bool stop = false;

		phpqt_box(&argv[0], watched);
		phpqt_box_event(&argv[1], event);

		/* Qt still sends this event to the watched object after PHP returns: its wrapper, when the one
		 * released below is the last, must leave the object to deleteLater() as inside the call. */
		PHPQT_G(callout_depth)++;

		if (call(2, argv, &retval)) {
			stop = zend_is_true(&retval);
		}

		phpqt_event_release(&argv[1]);
		zval_ptr_dtor(&retval);
		zval_ptr_dtor(&argv[0]);
		zval_ptr_dtor(&argv[1]);

		PHPQT_G(callout_depth)--;

		return stop;
	}
};

/* One PHP callable a QPaintDelegate calls; a child of the delegate, so it goes with it. */
class PhpDelegateCall : public PhpSlot {
public:
	PhpDelegateCall(zval *callable, QObject *delegate) : PhpSlot(callable, QMetaMethod()) { setParent(delegate); }
	using PhpSlot::call;
};

/* Qt keeps the painter and the option: a lent wrapper never frees them. */
static void phpqt_lent_destroy(void *ptr) { (void) ptr; }

/* Qt's painter or option, lent for one call. */
static void phpqt_lend(zval *rv, zend_class_entry *ce, const void *ptr)
{
	object_init_ex(rv, ce);
	phpqt_value_hold(Z_OBJ_P(rv), const_cast<void *>(ptr), false, phpqt_lent_destroy);
}

/* The call is over: the wrapper reads as gone from now on. */
static void phpqt_unlend(zval *boxed)
{
	phpqt_value_from(Z_OBJ_P(boxed))->ptr = nullptr;
	zval_ptr_dtor(boxed);
}

/*
 * The trampoline a view needs to draw its rows: QStyledItemDelegate's paint(), sizeHint() and
 * editorEvent() go to the PHP callables; a missing one leaves the call to QStyledItemDelegate.
 */
class PhpPaintDelegate : public QStyledItemDelegate {
public:
	PhpPaintDelegate(zval *paint, zval *size_hint, zval *editor_event, QObject *parent) : QStyledItemDelegate(parent)
	{
		paint_call = paint == nullptr ? nullptr : new PhpDelegateCall(paint, this);
		size_call = size_hint == nullptr ? nullptr : new PhpDelegateCall(size_hint, this);
		event_call = editor_event == nullptr ? nullptr : new PhpDelegateCall(editor_event, this);
	}

	void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
	{
		if (paint_call == nullptr) {
			QStyledItemDelegate::paint(painter, option, index);
			return;
		}

		zval argv[3];
		zval retval;

		phpqt_lend(&argv[0], phpqt_ce_QPainter, painter);
		phpqt_lend(&argv[1], phpqt_ce_QStyleOptionViewItem, &option);
		phpqt_return_model_index(&argv[2], index);

		paint_call->call(3, argv, &retval);

		zval_ptr_dtor(&retval);
		phpqt_unlend(&argv[0]);
		phpqt_unlend(&argv[1]);
		zval_ptr_dtor(&argv[2]);
	}

	QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override
	{
		QSize size = QStyledItemDelegate::sizeHint(option, index);
		if (size_call == nullptr) {
			return size;
		}

		zval argv[2];
		zval retval;

		phpqt_lend(&argv[0], phpqt_ce_QStyleOptionViewItem, &option);
		phpqt_return_model_index(&argv[1], index);

		if (size_call->call(2, argv, &retval) && Z_TYPE(retval) == IS_OBJECT && instanceof_function(Z_OBJCE(retval), phpqt_ce_QSize)) {
			QSize *answer = static_cast<QSize *>(phpqt_value_this(Z_OBJ(retval)));
			if (answer != nullptr) {
				size = *answer;
			}
		}

		zval_ptr_dtor(&retval);
		phpqt_unlend(&argv[0]);
		zval_ptr_dtor(&argv[1]);

		return size;
	}

	bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) override
	{
		if (event_call == nullptr) {
			return QStyledItemDelegate::editorEvent(event, model, option, index);
		}

		zval argv[4];
		zval retval;
		bool handled = false;

		phpqt_box_event(&argv[0], event);
		phpqt_box(&argv[1], model);
		phpqt_lend(&argv[2], phpqt_ce_QStyleOptionViewItem, &option);
		phpqt_return_model_index(&argv[3], index);

		if (event_call->call(4, argv, &retval)) {
			handled = zend_is_true(&retval);
		}

		zval_ptr_dtor(&retval);
		phpqt_event_release(&argv[0]);
		zval_ptr_dtor(&argv[0]);
		zval_ptr_dtor(&argv[1]);
		phpqt_unlend(&argv[2]);
		zval_ptr_dtor(&argv[3]);

		return handled;
	}

private:
	PhpDelegateCall *paint_call;
	PhpDelegateCall *size_call;
	PhpDelegateCall *event_call;
};

void phpqt_register_QtGlue()
{
	phpqt_ce_QEventFilter = register_class_QEventFilter(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QEventFilter);

	phpqt_ce_QPaintDelegate = register_class_QPaintDelegate(phpqt_ce_QStyledItemDelegate);
	phpqt_object_setup(phpqt_ce_QPaintDelegate);
}

ZEND_METHOD(QPaintDelegate, __construct)
{
	zval *paint, *size_hint = nullptr, *editor_event = nullptr;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_ZVAL(paint)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(size_hint)
		Z_PARAM_ZVAL(editor_event)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	zval *given[3] = {paint, size_hint, editor_event};
	for (uint32_t i = 0; i < 3; i++) {
		if (given[i] != nullptr && Z_TYPE_P(given[i]) == IS_NULL) {
			given[i] = nullptr;
		}
		if (given[i] != nullptr && !phpqt_require_callable(given[i], i + 1)) {
			RETURN_THROWS();
		}
	}

	QObject *qparent = phpqt_arg(parent, 4, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new PhpPaintDelegate(given[0], given[1], given[2], qparent));
}

ZEND_METHOD(QEventFilter, __construct)
{
	zval *filter;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(filter)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_require_callable(filter, 1)) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new PhpEventFilter(filter));
}
