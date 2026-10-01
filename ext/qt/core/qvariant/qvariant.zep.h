
extern zend_class_entry *qt_core_qvariant_qvariant_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QVariant_QVariant);

PHP_METHOD(Qt_Core_QVariant_QVariant, new_);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQVariant);
PHP_METHOD(Qt_Core_QVariant_QVariant, newInt);
PHP_METHOD(Qt_Core_QVariant_QVariant, newUint);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQlonglong);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQulonglong);
PHP_METHOD(Qt_Core_QVariant_QVariant, newBool);
PHP_METHOD(Qt_Core_QVariant_QVariant, newDouble);
PHP_METHOD(Qt_Core_QVariant_QVariant, newFloat);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQChar);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQDate);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQTime);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQBitArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQByteArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQDateTime);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQHashQStringQVariant);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonObject);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQListQVariant);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQLocale);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQMapQStringQVariant);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQRegularExpression);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQString);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQStringList);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQUrl);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonValue);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQModelIndex);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQUuid);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQSize);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQSizeF);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQPoint);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQPointF);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQLine);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQLineF);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQRect);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQRectF);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQEasingCurve);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQJsonDocument);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQPersistentModelIndex);
PHP_METHOD(Qt_Core_QVariant_QVariant, newChar);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQLatin1StringView);
PHP_METHOD(Qt_Core_QVariant_QVariant, swap);
PHP_METHOD(Qt_Core_QVariant_QVariant, userType);
PHP_METHOD(Qt_Core_QVariant_QVariant, typeId);
PHP_METHOD(Qt_Core_QVariant_QVariant, typeName);
PHP_METHOD(Qt_Core_QVariant_QVariant, metaType);
PHP_METHOD(Qt_Core_QVariant_QVariant, canConvert);
PHP_METHOD(Qt_Core_QVariant_QVariant, convert);
PHP_METHOD(Qt_Core_QVariant_QVariant, canView);
PHP_METHOD(Qt_Core_QVariant_QVariant, canConvertInt);
PHP_METHOD(Qt_Core_QVariant_QVariant, convertInt);
PHP_METHOD(Qt_Core_QVariant_QVariant, isValid);
PHP_METHOD(Qt_Core_QVariant_QVariant, isNull);
PHP_METHOD(Qt_Core_QVariant_QVariant, clear);
PHP_METHOD(Qt_Core_QVariant_QVariant, detach);
PHP_METHOD(Qt_Core_QVariant_QVariant, isDetached);
PHP_METHOD(Qt_Core_QVariant_QVariant, toInt);
PHP_METHOD(Qt_Core_QVariant_QVariant, toUInt);
PHP_METHOD(Qt_Core_QVariant_QVariant, toLongLong);
PHP_METHOD(Qt_Core_QVariant_QVariant, toULongLong);
PHP_METHOD(Qt_Core_QVariant_QVariant, toBool);
PHP_METHOD(Qt_Core_QVariant_QVariant, toDouble);
PHP_METHOD(Qt_Core_QVariant_QVariant, toFloat);
PHP_METHOD(Qt_Core_QVariant_QVariant, toReal);
PHP_METHOD(Qt_Core_QVariant_QVariant, toByteArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, toBitArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, toString);
PHP_METHOD(Qt_Core_QVariant_QVariant, toStringList);
PHP_METHOD(Qt_Core_QVariant_QVariant, toChar);
PHP_METHOD(Qt_Core_QVariant_QVariant, toDate);
PHP_METHOD(Qt_Core_QVariant_QVariant, toTime);
PHP_METHOD(Qt_Core_QVariant_QVariant, toDateTime);
PHP_METHOD(Qt_Core_QVariant_QVariant, toList);
PHP_METHOD(Qt_Core_QVariant_QVariant, toMap);
PHP_METHOD(Qt_Core_QVariant_QVariant, toHash);
PHP_METHOD(Qt_Core_QVariant_QVariant, toPoint);
PHP_METHOD(Qt_Core_QVariant_QVariant, toPointF);
PHP_METHOD(Qt_Core_QVariant_QVariant, toRect);
PHP_METHOD(Qt_Core_QVariant_QVariant, toSize);
PHP_METHOD(Qt_Core_QVariant_QVariant, toSizeF);
PHP_METHOD(Qt_Core_QVariant_QVariant, toLine);
PHP_METHOD(Qt_Core_QVariant_QVariant, toLineF);
PHP_METHOD(Qt_Core_QVariant_QVariant, toRectF);
PHP_METHOD(Qt_Core_QVariant_QVariant, toLocale);
PHP_METHOD(Qt_Core_QVariant_QVariant, toRegularExpression);
PHP_METHOD(Qt_Core_QVariant_QVariant, toEasingCurve);
PHP_METHOD(Qt_Core_QVariant_QVariant, toUuid);
PHP_METHOD(Qt_Core_QVariant_QVariant, toUrl);
PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonValue);
PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonObject);
PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonArray);
PHP_METHOD(Qt_Core_QVariant_QVariant, toJsonDocument);
PHP_METHOD(Qt_Core_QVariant_QVariant, toModelIndex);
PHP_METHOD(Qt_Core_QVariant_QVariant, toPersistentModelIndex);
PHP_METHOD(Qt_Core_QVariant_QVariant, load);
PHP_METHOD(Qt_Core_QVariant_QVariant, save);
PHP_METHOD(Qt_Core_QVariant_QVariant, newQVariantType);
PHP_METHOD(Qt_Core_QVariant_QVariant, typeToName);
PHP_METHOD(Qt_Core_QVariant_QVariant, nameToType);
PHP_METHOD(Qt_Core_QVariant_QVariant, setValue);
PHP_METHOD(Qt_Core_QVariant_QVariant, compare);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_new_, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqvariant, 0, 0, 1)
	ZEND_ARG_INFO(0, other)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newint, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newuint, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, ui, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqlonglong, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, ll, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqulonglong, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, ull, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newbool, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newdouble, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newfloat, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqchar, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, qchar, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqdate, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqtime, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqbitarray, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, bitarray, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqbytearray, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, bytearray, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqdatetime, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, datetime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqhashqstringqvariant, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, hash, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqjsonarray, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, jsonArray, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqjsonobject, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, jsonObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqlistqvariant, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqlocale, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqmapqstringqvariant, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, map, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqregularexpression, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, re, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqstring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqstringlist, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, stringlist, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqurl, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqjsonvalue, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, jsonValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqmodelindex, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, modelIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newquuid, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, uuid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqsize, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqsizef, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqpoint, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqpointf, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqline, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqlinef, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqrect, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqrectf, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqeasingcurve, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, easing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqjsondocument, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, jsonDocument, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqpersistentmodelindex, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, modelIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newchar, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqlatin1stringview, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_swap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_usertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_typeid, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_typename, 0, 0, 1)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_canconvert, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, targetType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_convert, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_canview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, targetType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_canconvertint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, targetTypeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_convertint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, targetTypeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_clear, 0, 0, 1)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_detach, 0, 0, 1)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_touint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tolonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toulonglong, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_todouble, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tofloat, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toreal, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tobitarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tostringlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tochar, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_todate, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_totime, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_todatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tolist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tomap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tohash, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_topoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_topointf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_torect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tosize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tosizef, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toline, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tolinef, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_torectf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tolocale, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toregularexpression, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_toeasingcurve, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_touuid, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tourl, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tojsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tojsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tojsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tojsondocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_tomodelindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_topersistentmodelindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, self_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_load, 0, 0, 2)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, ds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_save, 0, 2, IS_VOID, 0)

	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_TYPE_INFO(0, ds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_newqvarianttype, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_typetoname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, typeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_nametotype, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qvariant_qvariant_setvalue, 0, 0, 2)
	ZEND_ARG_INFO(0, self_)
	ZEND_ARG_INFO(0, avalue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qvariant_qvariant_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, lhs)
	ZEND_ARG_INFO(0, rhs)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qvariant_qvariant_method_entry) {
PHP_ME(Qt_Core_QVariant_QVariant, new_, arginfo_qt_core_qvariant_qvariant_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQVariant, arginfo_qt_core_qvariant_qvariant_newqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newInt, arginfo_qt_core_qvariant_qvariant_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newUint, arginfo_qt_core_qvariant_qvariant_newuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQlonglong, arginfo_qt_core_qvariant_qvariant_newqlonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQulonglong, arginfo_qt_core_qvariant_qvariant_newqulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newBool, arginfo_qt_core_qvariant_qvariant_newbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newDouble, arginfo_qt_core_qvariant_qvariant_newdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newFloat, arginfo_qt_core_qvariant_qvariant_newfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQChar, arginfo_qt_core_qvariant_qvariant_newqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQDate, arginfo_qt_core_qvariant_qvariant_newqdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQTime, arginfo_qt_core_qvariant_qvariant_newqtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQBitArray, arginfo_qt_core_qvariant_qvariant_newqbitarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQByteArray, arginfo_qt_core_qvariant_qvariant_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQDateTime, arginfo_qt_core_qvariant_qvariant_newqdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQHashQStringQVariant, arginfo_qt_core_qvariant_qvariant_newqhashqstringqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQJsonArray, arginfo_qt_core_qvariant_qvariant_newqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQJsonObject, arginfo_qt_core_qvariant_qvariant_newqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQListQVariant, arginfo_qt_core_qvariant_qvariant_newqlistqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQLocale, arginfo_qt_core_qvariant_qvariant_newqlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQMapQStringQVariant, arginfo_qt_core_qvariant_qvariant_newqmapqstringqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQRegularExpression, arginfo_qt_core_qvariant_qvariant_newqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQString, arginfo_qt_core_qvariant_qvariant_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQStringList, arginfo_qt_core_qvariant_qvariant_newqstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQUrl, arginfo_qt_core_qvariant_qvariant_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQJsonValue, arginfo_qt_core_qvariant_qvariant_newqjsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQModelIndex, arginfo_qt_core_qvariant_qvariant_newqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQUuid, arginfo_qt_core_qvariant_qvariant_newquuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQSize, arginfo_qt_core_qvariant_qvariant_newqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQSizeF, arginfo_qt_core_qvariant_qvariant_newqsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQPoint, arginfo_qt_core_qvariant_qvariant_newqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQPointF, arginfo_qt_core_qvariant_qvariant_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQLine, arginfo_qt_core_qvariant_qvariant_newqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQLineF, arginfo_qt_core_qvariant_qvariant_newqlinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQRect, arginfo_qt_core_qvariant_qvariant_newqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQRectF, arginfo_qt_core_qvariant_qvariant_newqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQEasingCurve, arginfo_qt_core_qvariant_qvariant_newqeasingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQJsonDocument, arginfo_qt_core_qvariant_qvariant_newqjsondocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQPersistentModelIndex, arginfo_qt_core_qvariant_qvariant_newqpersistentmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newChar, arginfo_qt_core_qvariant_qvariant_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQLatin1StringView, arginfo_qt_core_qvariant_qvariant_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, swap, arginfo_qt_core_qvariant_qvariant_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, userType, arginfo_qt_core_qvariant_qvariant_usertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, typeId, arginfo_qt_core_qvariant_qvariant_typeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, typeName, arginfo_qt_core_qvariant_qvariant_typename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, metaType, arginfo_qt_core_qvariant_qvariant_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, canConvert, arginfo_qt_core_qvariant_qvariant_canconvert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, convert, arginfo_qt_core_qvariant_qvariant_convert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, canView, arginfo_qt_core_qvariant_qvariant_canview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, canConvertInt, arginfo_qt_core_qvariant_qvariant_canconvertint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, convertInt, arginfo_qt_core_qvariant_qvariant_convertint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, isValid, arginfo_qt_core_qvariant_qvariant_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, isNull, arginfo_qt_core_qvariant_qvariant_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, clear, arginfo_qt_core_qvariant_qvariant_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, detach, arginfo_qt_core_qvariant_qvariant_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, isDetached, arginfo_qt_core_qvariant_qvariant_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toInt, arginfo_qt_core_qvariant_qvariant_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toUInt, arginfo_qt_core_qvariant_qvariant_touint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toLongLong, arginfo_qt_core_qvariant_qvariant_tolonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toULongLong, arginfo_qt_core_qvariant_qvariant_toulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toBool, arginfo_qt_core_qvariant_qvariant_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toDouble, arginfo_qt_core_qvariant_qvariant_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toFloat, arginfo_qt_core_qvariant_qvariant_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toReal, arginfo_qt_core_qvariant_qvariant_toreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toByteArray, arginfo_qt_core_qvariant_qvariant_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toBitArray, arginfo_qt_core_qvariant_qvariant_tobitarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toString, arginfo_qt_core_qvariant_qvariant_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toStringList, arginfo_qt_core_qvariant_qvariant_tostringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toChar, arginfo_qt_core_qvariant_qvariant_tochar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toDate, arginfo_qt_core_qvariant_qvariant_todate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toTime, arginfo_qt_core_qvariant_qvariant_totime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toDateTime, arginfo_qt_core_qvariant_qvariant_todatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toList, arginfo_qt_core_qvariant_qvariant_tolist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toMap, arginfo_qt_core_qvariant_qvariant_tomap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toHash, arginfo_qt_core_qvariant_qvariant_tohash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toPoint, arginfo_qt_core_qvariant_qvariant_topoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toPointF, arginfo_qt_core_qvariant_qvariant_topointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toRect, arginfo_qt_core_qvariant_qvariant_torect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toSize, arginfo_qt_core_qvariant_qvariant_tosize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toSizeF, arginfo_qt_core_qvariant_qvariant_tosizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toLine, arginfo_qt_core_qvariant_qvariant_toline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toLineF, arginfo_qt_core_qvariant_qvariant_tolinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toRectF, arginfo_qt_core_qvariant_qvariant_torectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toLocale, arginfo_qt_core_qvariant_qvariant_tolocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toRegularExpression, arginfo_qt_core_qvariant_qvariant_toregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toEasingCurve, arginfo_qt_core_qvariant_qvariant_toeasingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toUuid, arginfo_qt_core_qvariant_qvariant_touuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toUrl, arginfo_qt_core_qvariant_qvariant_tourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toJsonValue, arginfo_qt_core_qvariant_qvariant_tojsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toJsonObject, arginfo_qt_core_qvariant_qvariant_tojsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toJsonArray, arginfo_qt_core_qvariant_qvariant_tojsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toJsonDocument, arginfo_qt_core_qvariant_qvariant_tojsondocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toModelIndex, arginfo_qt_core_qvariant_qvariant_tomodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, toPersistentModelIndex, arginfo_qt_core_qvariant_qvariant_topersistentmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, load, arginfo_qt_core_qvariant_qvariant_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, save, arginfo_qt_core_qvariant_qvariant_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, newQVariantType, arginfo_qt_core_qvariant_qvariant_newqvarianttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, typeToName, arginfo_qt_core_qvariant_qvariant_typetoname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, nameToType, arginfo_qt_core_qvariant_qvariant_nametotype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, setValue, arginfo_qt_core_qvariant_qvariant_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVariant_QVariant, compare, arginfo_qt_core_qvariant_qvariant_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
