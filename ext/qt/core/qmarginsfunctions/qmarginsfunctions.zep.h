
extern zend_class_entry *qt_core_qmarginsfunctions_qmarginsfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMarginsFunctions_QMarginsFunctions);

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsFQMarginsF);
PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyCompare);
PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsQMargins);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequal, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequalqmarginsfqmarginsf, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_qfuzzyisnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, mLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_qfuzzycompare, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsBottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequalqmarginsqmargins, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmarginsfunctions_qmarginsfunctions_method_entry) {
	PHP_ME(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqual, arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsFQMarginsF, arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequalqmarginsfqmarginsf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyIsNull, arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyCompare, arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsQMargins, arginfo_qt_core_qmarginsfunctions_qmarginsfunctions_comparesequalqmarginsqmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
