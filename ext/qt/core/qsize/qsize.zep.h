
extern zend_class_entry *qt_core_qsize_qsize_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSize_QSize);

PHP_METHOD(Qt_Core_QSize_QSize, new_);
PHP_METHOD(Qt_Core_QSize_QSize, newIntInt);
PHP_METHOD(Qt_Core_QSize_QSize, isNull);
PHP_METHOD(Qt_Core_QSize_QSize, isEmpty);
PHP_METHOD(Qt_Core_QSize_QSize, isValid);
PHP_METHOD(Qt_Core_QSize_QSize, width);
PHP_METHOD(Qt_Core_QSize_QSize, height);
PHP_METHOD(Qt_Core_QSize_QSize, setWidth);
PHP_METHOD(Qt_Core_QSize_QSize, setHeight);
PHP_METHOD(Qt_Core_QSize_QSize, transpose);
PHP_METHOD(Qt_Core_QSize_QSize, transposed);
PHP_METHOD(Qt_Core_QSize_QSize, scale);
PHP_METHOD(Qt_Core_QSize_QSize, scaleQSizeQtAspectRatioMode);
PHP_METHOD(Qt_Core_QSize_QSize, scaled);
PHP_METHOD(Qt_Core_QSize_QSize, scaledQSizeQtAspectRatioMode);
PHP_METHOD(Qt_Core_QSize_QSize, expandedTo);
PHP_METHOD(Qt_Core_QSize_QSize, boundedTo);
PHP_METHOD(Qt_Core_QSize_QSize, grownBy);
PHP_METHOD(Qt_Core_QSize_QSize, shrunkBy);
PHP_METHOD(Qt_Core_QSize_QSize, toSizeF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_newintint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_isempty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_isvalid, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_width, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_height, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_setwidth, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_setheight, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_transpose, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_transposed, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_scale, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_scaleqsizeqtaspectratiomode, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_scaled, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_scaledqsizeqtaspectratiomode, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_expandedto, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_boundedto, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_grownby, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_shrunkby, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsize_qsize_tosizef, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsize_qsize_method_entry) {
	PHP_ME(Qt_Core_QSize_QSize, new_, arginfo_qt_core_qsize_qsize_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, newIntInt, arginfo_qt_core_qsize_qsize_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, isNull, arginfo_qt_core_qsize_qsize_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, isEmpty, arginfo_qt_core_qsize_qsize_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, isValid, arginfo_qt_core_qsize_qsize_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, width, arginfo_qt_core_qsize_qsize_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, height, arginfo_qt_core_qsize_qsize_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, setWidth, arginfo_qt_core_qsize_qsize_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, setHeight, arginfo_qt_core_qsize_qsize_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, transpose, arginfo_qt_core_qsize_qsize_transpose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, transposed, arginfo_qt_core_qsize_qsize_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, scale, arginfo_qt_core_qsize_qsize_scale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, scaleQSizeQtAspectRatioMode, arginfo_qt_core_qsize_qsize_scaleqsizeqtaspectratiomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, scaled, arginfo_qt_core_qsize_qsize_scaled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, scaledQSizeQtAspectRatioMode, arginfo_qt_core_qsize_qsize_scaledqsizeqtaspectratiomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, expandedTo, arginfo_qt_core_qsize_qsize_expandedto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, boundedTo, arginfo_qt_core_qsize_qsize_boundedto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, grownBy, arginfo_qt_core_qsize_qsize_grownby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, shrunkBy, arginfo_qt_core_qsize_qsize_shrunkby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSize_QSize, toSizeF, arginfo_qt_core_qsize_qsize_tosizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
