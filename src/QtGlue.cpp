#include "runtime.h"
#include "../stubs/QtGlue_arginfo.h"

#include <QtCore/QEvent>
#include <QtCore/QSet>

/*
 * The trampoline QObject::installEventFilter() needs. Qt hands eventFilter()
 * every event of each watched object; events of the listed types go to PHP,
 * the rest pass straight through without a PHP call.
 */
class PhpEventFilter : public PhpSlot {
public:
	PhpEventFilter(zval *callable, QSet<int> types, bool every)
		: PhpSlot(callable, QMetaMethod()), types(std::move(types)), every(every) {}

	bool eventFilter(QObject *watched, QEvent *event) override
	{
		int type = static_cast<int>(event->type());

		if (!every && !types.contains(type)) {
			return false;
		}

		zval argv[2];
		zval retval;
		bool stop = false;

		phpqt_box(&argv[0], watched);
		phpqt_return_enum(&argv[1], phpqt_ce_QEvent_Type, type);
		if (Z_TYPE(argv[1]) == IS_NULL) {
			ZVAL_LONG(&argv[1], type);
		}

		if (call(2, argv, &retval)) {
			stop = zend_is_true(&retval);
		}

		zval_ptr_dtor(&retval);
		zval_ptr_dtor(&argv[0]);
		zval_ptr_dtor(&argv[1]);

		return stop;
	}

private:
	QSet<int> types;
	bool every;
};

void phpqt_register_QtGlue()
{
	phpqt_ce_QEventFilter = register_class_QEventFilter(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QEventFilter);
}

ZEND_METHOD(QEventFilter, __construct)
{
	zval *filter;
	HashTable *types_ht = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(filter)
		Z_PARAM_OPTIONAL
		Z_PARAM_ARRAY_HT_OR_NULL(types_ht)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_require_callable(filter, 1)) {
		RETURN_THROWS();
	}

	if (phpqt_object_from(Z_OBJ_P(ZEND_THIS))->guard != nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QEventFilter::__construct() called twice", 0);
		RETURN_THROWS();
	}

	QSet<int> types;
	if (types_ht != nullptr) {
		zval *type;
		ZEND_HASH_FOREACH_VAL(types_ht, type) {
			ZVAL_DEREF(type);
			if (Z_TYPE_P(type) == IS_LONG) {
				types.insert(static_cast<int>(Z_LVAL_P(type)));
			} else if (Z_TYPE_P(type) == IS_OBJECT && Z_OBJCE_P(type) == phpqt_ce_QEvent_Type) {
				types.insert(static_cast<int>(phpqt_enum_value(Z_OBJ_P(type), 0)));
			} else {
				zend_argument_type_error(2, "must hold QEvent\\Type cases or ints, %s given", zend_zval_value_name(type));
				RETURN_THROWS();
			}
		} ZEND_HASH_FOREACH_END();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new PhpEventFilter(filter, std::move(types), types_ht == nullptr));
}
