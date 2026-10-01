
extern zend_class_entry *qt_core_qsizef_qsizef_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSizeF_QSizeF);

PHP_METHOD(Qt_Core_QSizeF_QSizeF, new_);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, newQSize);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, newQrealQreal);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, isNull);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, isEmpty);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, isValid);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, width);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, height);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, setWidth);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, setHeight);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, transpose);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, transposed);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, scale);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaleQSizeFQtAspectRatioMode);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaled);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaledQSizeFQtAspectRatioMode);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, expandedTo);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, boundedTo);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, grownBy);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, shrunkBy);
PHP_METHOD(Qt_Core_QSizeF_QSizeF, toSize);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_newqsize, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, szWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, szHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_newqrealqreal, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_isempty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_isvalid, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_width, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_height, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_setwidth, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_setheight, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_transpose, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_transposed, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_scale, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_scaleqsizefqtaspectratiomode, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_scaled, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_scaledqsizefqtaspectratiomode, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_expandedto, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_boundedto, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_grownby, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_shrunkby, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, mBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizef_qsizef_tosize, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsizef_qsizef_method_entry) {
	PHP_ME(Qt_Core_QSizeF_QSizeF, new_, arginfo_qt_core_qsizef_qsizef_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, newQSize, arginfo_qt_core_qsizef_qsizef_newqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, newQrealQreal, arginfo_qt_core_qsizef_qsizef_newqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, isNull, arginfo_qt_core_qsizef_qsizef_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, isEmpty, arginfo_qt_core_qsizef_qsizef_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, isValid, arginfo_qt_core_qsizef_qsizef_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, width, arginfo_qt_core_qsizef_qsizef_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, height, arginfo_qt_core_qsizef_qsizef_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, setWidth, arginfo_qt_core_qsizef_qsizef_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, setHeight, arginfo_qt_core_qsizef_qsizef_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, transpose, arginfo_qt_core_qsizef_qsizef_transpose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, transposed, arginfo_qt_core_qsizef_qsizef_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, scale, arginfo_qt_core_qsizef_qsizef_scale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, scaleQSizeFQtAspectRatioMode, arginfo_qt_core_qsizef_qsizef_scaleqsizefqtaspectratiomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, scaled, arginfo_qt_core_qsizef_qsizef_scaled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, scaledQSizeFQtAspectRatioMode, arginfo_qt_core_qsizef_qsizef_scaledqsizefqtaspectratiomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, expandedTo, arginfo_qt_core_qsizef_qsizef_expandedto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, boundedTo, arginfo_qt_core_qsizef_qsizef_boundedto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, grownBy, arginfo_qt_core_qsizef_qsizef_grownby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, shrunkBy, arginfo_qt_core_qsizef_qsizef_shrunkby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeF_QSizeF, toSize, arginfo_qt_core_qsizef_qsizef_tosize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
