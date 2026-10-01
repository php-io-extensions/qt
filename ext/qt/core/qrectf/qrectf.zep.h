
extern zend_class_entry *qt_core_qrectf_qrectf_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QRectF_QRectF);

PHP_METHOD(Qt_Core_QRectF_QRectF, new_);
PHP_METHOD(Qt_Core_QRectF_QRectF, newQPointFQSizeF);
PHP_METHOD(Qt_Core_QRectF_QRectF, newQPointFQPointF);
PHP_METHOD(Qt_Core_QRectF_QRectF, newQrealQrealQrealQreal);
PHP_METHOD(Qt_Core_QRectF_QRectF, newQRect);
PHP_METHOD(Qt_Core_QRectF_QRectF, isNull);
PHP_METHOD(Qt_Core_QRectF_QRectF, isEmpty);
PHP_METHOD(Qt_Core_QRectF_QRectF, isValid);
PHP_METHOD(Qt_Core_QRectF_QRectF, normalized);
PHP_METHOD(Qt_Core_QRectF_QRectF, left);
PHP_METHOD(Qt_Core_QRectF_QRectF, top);
PHP_METHOD(Qt_Core_QRectF_QRectF, right);
PHP_METHOD(Qt_Core_QRectF_QRectF, bottom);
PHP_METHOD(Qt_Core_QRectF_QRectF, x);
PHP_METHOD(Qt_Core_QRectF_QRectF, y);
PHP_METHOD(Qt_Core_QRectF_QRectF, setLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, setTop);
PHP_METHOD(Qt_Core_QRectF_QRectF, setRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, setBottom);
PHP_METHOD(Qt_Core_QRectF_QRectF, setX);
PHP_METHOD(Qt_Core_QRectF_QRectF, setY);
PHP_METHOD(Qt_Core_QRectF_QRectF, topLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, bottomRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, topRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, bottomLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, center);
PHP_METHOD(Qt_Core_QRectF_QRectF, setTopLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, setBottomRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, setTopRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, setBottomLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveTop);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottom);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveTopLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottomRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveTopRight);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottomLeft);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveCenter);
PHP_METHOD(Qt_Core_QRectF_QRectF, translate);
PHP_METHOD(Qt_Core_QRectF_QRectF, translateQPointF);
PHP_METHOD(Qt_Core_QRectF_QRectF, translated);
PHP_METHOD(Qt_Core_QRectF_QRectF, translatedQPointF);
PHP_METHOD(Qt_Core_QRectF_QRectF, transposed);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveTo);
PHP_METHOD(Qt_Core_QRectF_QRectF, moveToQPointF);
PHP_METHOD(Qt_Core_QRectF_QRectF, setRect);
PHP_METHOD(Qt_Core_QRectF_QRectF, getRect);
PHP_METHOD(Qt_Core_QRectF_QRectF, setCoords);
PHP_METHOD(Qt_Core_QRectF_QRectF, getCoords);
PHP_METHOD(Qt_Core_QRectF_QRectF, adjust);
PHP_METHOD(Qt_Core_QRectF_QRectF, adjusted);
PHP_METHOD(Qt_Core_QRectF_QRectF, size);
PHP_METHOD(Qt_Core_QRectF_QRectF, width);
PHP_METHOD(Qt_Core_QRectF_QRectF, height);
PHP_METHOD(Qt_Core_QRectF_QRectF, setWidth);
PHP_METHOD(Qt_Core_QRectF_QRectF, setHeight);
PHP_METHOD(Qt_Core_QRectF_QRectF, setSize);
PHP_METHOD(Qt_Core_QRectF_QRectF, contains);
PHP_METHOD(Qt_Core_QRectF_QRectF, containsQPointF);
PHP_METHOD(Qt_Core_QRectF_QRectF, containsQrealQreal);
PHP_METHOD(Qt_Core_QRectF_QRectF, united);
PHP_METHOD(Qt_Core_QRectF_QRectF, intersected);
PHP_METHOD(Qt_Core_QRectF_QRectF, intersects);
PHP_METHOD(Qt_Core_QRectF_QRectF, marginsAdded);
PHP_METHOD(Qt_Core_QRectF_QRectF, marginsRemoved);
PHP_METHOD(Qt_Core_QRectF_QRectF, toRect);
PHP_METHOD(Qt_Core_QRectF_QRectF, toAlignedRect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_newqpointfqsizef, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, topleftX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, topleftY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_newqpointfqpointf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, topleftX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, topleftY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRightX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRightY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_newqrealqrealqrealqreal, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_newqrect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_isempty, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_isvalid, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_normalized, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_left, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_top, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_right, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_bottom, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_x, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_y, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_settop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setbottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setx, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_sety, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_topleft, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_bottomright, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_topright, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_bottomleft, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_center, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_settopleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setbottomright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_settopright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setbottomleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_moveleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movetop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_moveright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movebottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movetopleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movebottomright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movetopright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movebottomleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movecenter, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_translate, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_translateqpointf, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_translated, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_translatedqpointf, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_transposed, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_moveto, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_movetoqpointf, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setrect, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_getrect, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, w)
	ZEND_ARG_INFO(0, h)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setcoords, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_getcoords, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, x1)
	ZEND_ARG_INFO(0, y1)
	ZEND_ARG_INFO(0, x2)
	ZEND_ARG_INFO(0, y2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_adjust, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_adjusted, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_size, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_width, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_height, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setwidth, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setheight, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_setsize, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_contains, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_containsqpointf, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_containsqrealqreal, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_united, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_intersected, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, otherHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_intersects, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_marginsadded, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_marginsremoved, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_torect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrectf_qrectf_toalignedrect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qrectf_qrectf_method_entry) {
	PHP_ME(Qt_Core_QRectF_QRectF, new_, arginfo_qt_core_qrectf_qrectf_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, newQPointFQSizeF, arginfo_qt_core_qrectf_qrectf_newqpointfqsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, newQPointFQPointF, arginfo_qt_core_qrectf_qrectf_newqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, newQrealQrealQrealQreal, arginfo_qt_core_qrectf_qrectf_newqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, newQRect, arginfo_qt_core_qrectf_qrectf_newqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, isNull, arginfo_qt_core_qrectf_qrectf_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, isEmpty, arginfo_qt_core_qrectf_qrectf_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, isValid, arginfo_qt_core_qrectf_qrectf_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, normalized, arginfo_qt_core_qrectf_qrectf_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, left, arginfo_qt_core_qrectf_qrectf_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, top, arginfo_qt_core_qrectf_qrectf_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, right, arginfo_qt_core_qrectf_qrectf_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, bottom, arginfo_qt_core_qrectf_qrectf_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, x, arginfo_qt_core_qrectf_qrectf_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, y, arginfo_qt_core_qrectf_qrectf_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setLeft, arginfo_qt_core_qrectf_qrectf_setleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setTop, arginfo_qt_core_qrectf_qrectf_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setRight, arginfo_qt_core_qrectf_qrectf_setright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setBottom, arginfo_qt_core_qrectf_qrectf_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setX, arginfo_qt_core_qrectf_qrectf_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setY, arginfo_qt_core_qrectf_qrectf_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, topLeft, arginfo_qt_core_qrectf_qrectf_topleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, bottomRight, arginfo_qt_core_qrectf_qrectf_bottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, topRight, arginfo_qt_core_qrectf_qrectf_topright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, bottomLeft, arginfo_qt_core_qrectf_qrectf_bottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, center, arginfo_qt_core_qrectf_qrectf_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setTopLeft, arginfo_qt_core_qrectf_qrectf_settopleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setBottomRight, arginfo_qt_core_qrectf_qrectf_setbottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setTopRight, arginfo_qt_core_qrectf_qrectf_settopright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setBottomLeft, arginfo_qt_core_qrectf_qrectf_setbottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveLeft, arginfo_qt_core_qrectf_qrectf_moveleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveTop, arginfo_qt_core_qrectf_qrectf_movetop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveRight, arginfo_qt_core_qrectf_qrectf_moveright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveBottom, arginfo_qt_core_qrectf_qrectf_movebottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveTopLeft, arginfo_qt_core_qrectf_qrectf_movetopleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveBottomRight, arginfo_qt_core_qrectf_qrectf_movebottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveTopRight, arginfo_qt_core_qrectf_qrectf_movetopright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveBottomLeft, arginfo_qt_core_qrectf_qrectf_movebottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveCenter, arginfo_qt_core_qrectf_qrectf_movecenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, translate, arginfo_qt_core_qrectf_qrectf_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, translateQPointF, arginfo_qt_core_qrectf_qrectf_translateqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, translated, arginfo_qt_core_qrectf_qrectf_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, translatedQPointF, arginfo_qt_core_qrectf_qrectf_translatedqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, transposed, arginfo_qt_core_qrectf_qrectf_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveTo, arginfo_qt_core_qrectf_qrectf_moveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, moveToQPointF, arginfo_qt_core_qrectf_qrectf_movetoqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setRect, arginfo_qt_core_qrectf_qrectf_setrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, getRect, arginfo_qt_core_qrectf_qrectf_getrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setCoords, arginfo_qt_core_qrectf_qrectf_setcoords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, getCoords, arginfo_qt_core_qrectf_qrectf_getcoords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, adjust, arginfo_qt_core_qrectf_qrectf_adjust, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, adjusted, arginfo_qt_core_qrectf_qrectf_adjusted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, size, arginfo_qt_core_qrectf_qrectf_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, width, arginfo_qt_core_qrectf_qrectf_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, height, arginfo_qt_core_qrectf_qrectf_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setWidth, arginfo_qt_core_qrectf_qrectf_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setHeight, arginfo_qt_core_qrectf_qrectf_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, setSize, arginfo_qt_core_qrectf_qrectf_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, contains, arginfo_qt_core_qrectf_qrectf_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, containsQPointF, arginfo_qt_core_qrectf_qrectf_containsqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, containsQrealQreal, arginfo_qt_core_qrectf_qrectf_containsqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, united, arginfo_qt_core_qrectf_qrectf_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, intersected, arginfo_qt_core_qrectf_qrectf_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, intersects, arginfo_qt_core_qrectf_qrectf_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, marginsAdded, arginfo_qt_core_qrectf_qrectf_marginsadded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, marginsRemoved, arginfo_qt_core_qrectf_qrectf_marginsremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, toRect, arginfo_qt_core_qrectf_qrectf_torect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRectF_QRectF, toAlignedRect, arginfo_qt_core_qrectf_qrectf_toalignedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
