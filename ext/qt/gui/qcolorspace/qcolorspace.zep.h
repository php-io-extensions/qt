
extern zend_class_entry *qt_gui_qcolorspace_qcolorspace_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QColorSpace_QColorSpace);

PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, staticMetaObject);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, new_);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpaceNamedColorSpace);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQPointFQColorSpaceTransferFunctionFloat);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesQColorSpaceTransferFunctionFloat);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesFloat);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQPointFQPointFQPointFQPointFQColorSpaceTransferFunctionFloat);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, newQColorSpace);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, swap);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, primaries);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transferFunction);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, gamma);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, description);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setDescription);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setTransferFunction);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, withTransferFunction);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setPrimaries);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setPrimariesQPointFQPointFQPointFQPointF);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, setWhitePoint);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, whitePoint);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transformModel);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, colorModel);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, detach);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, isValid);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, isValidTarget);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, fromIccProfile);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, iccProfile);
PHP_METHOD(Qt_Gui_QColorSpace_QColorSpace, transformationToColorSpace);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspacenamedcolorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namedColorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqpointfqcolorspacetransferfunctionfloat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, transferFunction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspaceprimariesqcolorspacetransferfunctionfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, primaries, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transferFunction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspaceprimariesfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, primaries, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqpointfqpointfqpointfqpointfqcolorspacetransferfunctionfloat, 0, 9, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, redPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, redPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, greenPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, greenPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bluePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bluePointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, transferFunction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_primaries, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_transferfunction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_gamma, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_description, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_setdescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_settransferfunction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transferFunction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_withtransferfunction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transferFunction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gamma, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_setprimaries, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, primariesId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_setprimariesqpointfqpointfqpointfqpointf, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, redPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, redPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, greenPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, greenPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bluePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bluePointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_setwhitepoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, whitePointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_whitepoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_transformmodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_colormodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_isvalidtarget, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_fromiccprofile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iccProfile, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_iccprofile, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolorspace_qcolorspace_transformationtocolorspace, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qcolorspace_qcolorspace_method_entry) {
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, staticMetaObject, arginfo_qt_gui_qcolorspace_qcolorspace_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, qt_check_for_QGADGET_macro, arginfo_qt_gui_qcolorspace_qcolorspace_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, new_, arginfo_qt_gui_qcolorspace_qcolorspace_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQColorSpaceNamedColorSpace, arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspacenamedcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQPointFQColorSpaceTransferFunctionFloat, arginfo_qt_gui_qcolorspace_qcolorspace_newqpointfqcolorspacetransferfunctionfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesQColorSpaceTransferFunctionFloat, arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspaceprimariesqcolorspacetransferfunctionfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQColorSpacePrimariesFloat, arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspaceprimariesfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQPointFQPointFQPointFQPointFQColorSpaceTransferFunctionFloat, arginfo_qt_gui_qcolorspace_qcolorspace_newqpointfqpointfqpointfqpointfqcolorspacetransferfunctionfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, newQColorSpace, arginfo_qt_gui_qcolorspace_qcolorspace_newqcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, swap, arginfo_qt_gui_qcolorspace_qcolorspace_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, primaries, arginfo_qt_gui_qcolorspace_qcolorspace_primaries, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, transferFunction, arginfo_qt_gui_qcolorspace_qcolorspace_transferfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, gamma, arginfo_qt_gui_qcolorspace_qcolorspace_gamma, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, description, arginfo_qt_gui_qcolorspace_qcolorspace_description, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, setDescription, arginfo_qt_gui_qcolorspace_qcolorspace_setdescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, setTransferFunction, arginfo_qt_gui_qcolorspace_qcolorspace_settransferfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, withTransferFunction, arginfo_qt_gui_qcolorspace_qcolorspace_withtransferfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, setPrimaries, arginfo_qt_gui_qcolorspace_qcolorspace_setprimaries, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, setPrimariesQPointFQPointFQPointFQPointF, arginfo_qt_gui_qcolorspace_qcolorspace_setprimariesqpointfqpointfqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, setWhitePoint, arginfo_qt_gui_qcolorspace_qcolorspace_setwhitepoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, whitePoint, arginfo_qt_gui_qcolorspace_qcolorspace_whitepoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, transformModel, arginfo_qt_gui_qcolorspace_qcolorspace_transformmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, colorModel, arginfo_qt_gui_qcolorspace_qcolorspace_colormodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, detach, arginfo_qt_gui_qcolorspace_qcolorspace_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, isValid, arginfo_qt_gui_qcolorspace_qcolorspace_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, isValidTarget, arginfo_qt_gui_qcolorspace_qcolorspace_isvalidtarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, fromIccProfile, arginfo_qt_gui_qcolorspace_qcolorspace_fromiccprofile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, iccProfile, arginfo_qt_gui_qcolorspace_qcolorspace_iccprofile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColorSpace_QColorSpace, transformationToColorSpace, arginfo_qt_gui_qcolorspace_qcolorspace_transformationtocolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
