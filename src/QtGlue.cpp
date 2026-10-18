#include "runtime.h"
#include "../stubs/QtGlue_arginfo.h"

#include <QtCore/QEvent>

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

		if (call(2, argv, &retval)) {
			stop = zend_is_true(&retval);
		}

		phpqt_event_release(&argv[1]);
		zval_ptr_dtor(&retval);
		zval_ptr_dtor(&argv[0]);
		zval_ptr_dtor(&argv[1]);

		return stop;
	}
};

void phpqt_register_QtGlue()
{
	phpqt_ce_QEventFilter = register_class_QEventFilter(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QEventFilter);
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
