
extern zend_class_entry *qt_core_qrect_qrect_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QRect_QRect);

PHP_METHOD(Qt_Core_QRect_QRect, new_);
PHP_METHOD(Qt_Core_QRect_QRect, newQPointQPoint);
PHP_METHOD(Qt_Core_QRect_QRect, newQPointQSize);
PHP_METHOD(Qt_Core_QRect_QRect, newIntIntIntInt);
PHP_METHOD(Qt_Core_QRect_QRect, isNull);
PHP_METHOD(Qt_Core_QRect_QRect, isEmpty);
PHP_METHOD(Qt_Core_QRect_QRect, isValid);
PHP_METHOD(Qt_Core_QRect_QRect, left);
PHP_METHOD(Qt_Core_QRect_QRect, top);
PHP_METHOD(Qt_Core_QRect_QRect, right);
PHP_METHOD(Qt_Core_QRect_QRect, bottom);
PHP_METHOD(Qt_Core_QRect_QRect, normalized);
PHP_METHOD(Qt_Core_QRect_QRect, x);
PHP_METHOD(Qt_Core_QRect_QRect, y);
PHP_METHOD(Qt_Core_QRect_QRect, setLeft);
PHP_METHOD(Qt_Core_QRect_QRect, setTop);
PHP_METHOD(Qt_Core_QRect_QRect, setRight);
PHP_METHOD(Qt_Core_QRect_QRect, setBottom);
PHP_METHOD(Qt_Core_QRect_QRect, setX);
PHP_METHOD(Qt_Core_QRect_QRect, setY);
PHP_METHOD(Qt_Core_QRect_QRect, setTopLeft);
PHP_METHOD(Qt_Core_QRect_QRect, setBottomRight);
PHP_METHOD(Qt_Core_QRect_QRect, setTopRight);
PHP_METHOD(Qt_Core_QRect_QRect, setBottomLeft);
PHP_METHOD(Qt_Core_QRect_QRect, topLeft);
PHP_METHOD(Qt_Core_QRect_QRect, bottomRight);
PHP_METHOD(Qt_Core_QRect_QRect, topRight);
PHP_METHOD(Qt_Core_QRect_QRect, bottomLeft);
PHP_METHOD(Qt_Core_QRect_QRect, center);
PHP_METHOD(Qt_Core_QRect_QRect, moveLeft);
PHP_METHOD(Qt_Core_QRect_QRect, moveTop);
PHP_METHOD(Qt_Core_QRect_QRect, moveRight);
PHP_METHOD(Qt_Core_QRect_QRect, moveBottom);
PHP_METHOD(Qt_Core_QRect_QRect, moveTopLeft);
PHP_METHOD(Qt_Core_QRect_QRect, moveBottomRight);
PHP_METHOD(Qt_Core_QRect_QRect, moveTopRight);
PHP_METHOD(Qt_Core_QRect_QRect, moveBottomLeft);
PHP_METHOD(Qt_Core_QRect_QRect, moveCenter);
PHP_METHOD(Qt_Core_QRect_QRect, translate);
PHP_METHOD(Qt_Core_QRect_QRect, translateQPoint);
PHP_METHOD(Qt_Core_QRect_QRect, translated);
PHP_METHOD(Qt_Core_QRect_QRect, translatedQPoint);
PHP_METHOD(Qt_Core_QRect_QRect, transposed);
PHP_METHOD(Qt_Core_QRect_QRect, moveTo);
PHP_METHOD(Qt_Core_QRect_QRect, moveToQPoint);
PHP_METHOD(Qt_Core_QRect_QRect, setRect);
PHP_METHOD(Qt_Core_QRect_QRect, getRect);
PHP_METHOD(Qt_Core_QRect_QRect, setCoords);
PHP_METHOD(Qt_Core_QRect_QRect, getCoords);
PHP_METHOD(Qt_Core_QRect_QRect, adjust);
PHP_METHOD(Qt_Core_QRect_QRect, adjusted);
PHP_METHOD(Qt_Core_QRect_QRect, size);
PHP_METHOD(Qt_Core_QRect_QRect, width);
PHP_METHOD(Qt_Core_QRect_QRect, height);
PHP_METHOD(Qt_Core_QRect_QRect, setWidth);
PHP_METHOD(Qt_Core_QRect_QRect, setHeight);
PHP_METHOD(Qt_Core_QRect_QRect, setSize);
PHP_METHOD(Qt_Core_QRect_QRect, contains);
PHP_METHOD(Qt_Core_QRect_QRect, containsQPointBool);
PHP_METHOD(Qt_Core_QRect_QRect, containsIntInt);
PHP_METHOD(Qt_Core_QRect_QRect, containsIntIntBool);
PHP_METHOD(Qt_Core_QRect_QRect, united);
PHP_METHOD(Qt_Core_QRect_QRect, intersected);
PHP_METHOD(Qt_Core_QRect_QRect, intersects);
PHP_METHOD(Qt_Core_QRect_QRect, marginsAdded);
PHP_METHOD(Qt_Core_QRect_QRect, marginsRemoved);
PHP_METHOD(Qt_Core_QRect_QRect, span);
PHP_METHOD(Qt_Core_QRect_QRect, toRectF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_new_, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_newqpointqpoint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, topleftX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topleftY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomrightX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomrightY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_newqpointqsize, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, topleftX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topleftY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_newintintintint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_isnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_isempty, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_isvalid, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_left, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_top, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_right, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_bottom, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_normalized, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_x, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_y, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_settop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setbottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setx, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_sety, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_settopleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setbottomright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_settopright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setbottomleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_topleft, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_bottomright, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_topright, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_bottomleft, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_center, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_moveleft, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movetop, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_moveright, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movebottom, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movetopleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movebottomright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movetopright, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movebottomleft, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movecenter, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_translate, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_translateqpoint, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_translated, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_translatedqpoint, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_transposed, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_moveto, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_movetoqpoint, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setrect, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_getrect, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, w)
	ZEND_ARG_INFO(0, h)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setcoords, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_getcoords, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, x1)
	ZEND_ARG_INFO(0, y1)
	ZEND_ARG_INFO(0, x2)
	ZEND_ARG_INFO(0, y2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_adjust, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_adjusted, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_size, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_width, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_height, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setwidth, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setheight, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_setsize, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_contains, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proper, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_containsqpointbool, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proper, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_containsintint, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_containsintintbool, 0, 7, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proper, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_united, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_intersected, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, otherHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_intersects, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_marginsadded, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_marginsremoved, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_span, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrect_qrect_torectf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, selfX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selfHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qrect_qrect_method_entry) {
	PHP_ME(Qt_Core_QRect_QRect, new_, arginfo_qt_core_qrect_qrect_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, newQPointQPoint, arginfo_qt_core_qrect_qrect_newqpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, newQPointQSize, arginfo_qt_core_qrect_qrect_newqpointqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, newIntIntIntInt, arginfo_qt_core_qrect_qrect_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, isNull, arginfo_qt_core_qrect_qrect_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, isEmpty, arginfo_qt_core_qrect_qrect_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, isValid, arginfo_qt_core_qrect_qrect_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, left, arginfo_qt_core_qrect_qrect_left, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, top, arginfo_qt_core_qrect_qrect_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, right, arginfo_qt_core_qrect_qrect_right, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, bottom, arginfo_qt_core_qrect_qrect_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, normalized, arginfo_qt_core_qrect_qrect_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, x, arginfo_qt_core_qrect_qrect_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, y, arginfo_qt_core_qrect_qrect_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setLeft, arginfo_qt_core_qrect_qrect_setleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setTop, arginfo_qt_core_qrect_qrect_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setRight, arginfo_qt_core_qrect_qrect_setright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setBottom, arginfo_qt_core_qrect_qrect_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setX, arginfo_qt_core_qrect_qrect_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setY, arginfo_qt_core_qrect_qrect_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setTopLeft, arginfo_qt_core_qrect_qrect_settopleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setBottomRight, arginfo_qt_core_qrect_qrect_setbottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setTopRight, arginfo_qt_core_qrect_qrect_settopright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setBottomLeft, arginfo_qt_core_qrect_qrect_setbottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, topLeft, arginfo_qt_core_qrect_qrect_topleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, bottomRight, arginfo_qt_core_qrect_qrect_bottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, topRight, arginfo_qt_core_qrect_qrect_topright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, bottomLeft, arginfo_qt_core_qrect_qrect_bottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, center, arginfo_qt_core_qrect_qrect_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveLeft, arginfo_qt_core_qrect_qrect_moveleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveTop, arginfo_qt_core_qrect_qrect_movetop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveRight, arginfo_qt_core_qrect_qrect_moveright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveBottom, arginfo_qt_core_qrect_qrect_movebottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveTopLeft, arginfo_qt_core_qrect_qrect_movetopleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveBottomRight, arginfo_qt_core_qrect_qrect_movebottomright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveTopRight, arginfo_qt_core_qrect_qrect_movetopright, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveBottomLeft, arginfo_qt_core_qrect_qrect_movebottomleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveCenter, arginfo_qt_core_qrect_qrect_movecenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, translate, arginfo_qt_core_qrect_qrect_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, translateQPoint, arginfo_qt_core_qrect_qrect_translateqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, translated, arginfo_qt_core_qrect_qrect_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, translatedQPoint, arginfo_qt_core_qrect_qrect_translatedqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, transposed, arginfo_qt_core_qrect_qrect_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveTo, arginfo_qt_core_qrect_qrect_moveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, moveToQPoint, arginfo_qt_core_qrect_qrect_movetoqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setRect, arginfo_qt_core_qrect_qrect_setrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, getRect, arginfo_qt_core_qrect_qrect_getrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setCoords, arginfo_qt_core_qrect_qrect_setcoords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, getCoords, arginfo_qt_core_qrect_qrect_getcoords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, adjust, arginfo_qt_core_qrect_qrect_adjust, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, adjusted, arginfo_qt_core_qrect_qrect_adjusted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, size, arginfo_qt_core_qrect_qrect_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, width, arginfo_qt_core_qrect_qrect_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, height, arginfo_qt_core_qrect_qrect_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setWidth, arginfo_qt_core_qrect_qrect_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setHeight, arginfo_qt_core_qrect_qrect_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, setSize, arginfo_qt_core_qrect_qrect_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, contains, arginfo_qt_core_qrect_qrect_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, containsQPointBool, arginfo_qt_core_qrect_qrect_containsqpointbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, containsIntInt, arginfo_qt_core_qrect_qrect_containsintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, containsIntIntBool, arginfo_qt_core_qrect_qrect_containsintintbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, united, arginfo_qt_core_qrect_qrect_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, intersected, arginfo_qt_core_qrect_qrect_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, intersects, arginfo_qt_core_qrect_qrect_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, marginsAdded, arginfo_qt_core_qrect_qrect_marginsadded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, marginsRemoved, arginfo_qt_core_qrect_qrect_marginsremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, span, arginfo_qt_core_qrect_qrect_span, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRect_QRect, toRectF, arginfo_qt_core_qrect_qrect_torectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
