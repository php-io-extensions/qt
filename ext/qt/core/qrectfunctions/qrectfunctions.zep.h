
extern zend_class_entry *qt_core_qrectfunctions_qrectfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QRectFunctions_QRectFunctions);

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qHash);
PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyCompare);
PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRect);
PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRectF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_qhash, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequal, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, r1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r1Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r1Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_qfuzzyisnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_qfuzzycompare, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequalqrectfqrect, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, r1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r2Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequalqrectfqrectf, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, r1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r1Height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r2Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r2Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r2Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qrectfunctions_qrectfunctions_method_entry) {
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, qHash, arginfo_qt_core_qrectfunctions_qrectfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, comparesEqual, arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyIsNull, arginfo_qt_core_qrectfunctions_qrectfunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyCompare, arginfo_qt_core_qrectfunctions_qrectfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRect, arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequalqrectfqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRectF, arginfo_qt_core_qrectfunctions_qrectfunctions_comparesequalqrectfqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
