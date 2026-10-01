
extern zend_class_entry *qt_core_qmimedata_qmimedata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMimeData_QMimeData);

PHP_METHOD(Qt_Core_QMimeData_QMimeData, staticMetaObject);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, tr);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, new_);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, urls);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setUrls);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasUrls);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, text);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setText);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasText);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, html);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setHtml);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasHtml);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, imageData);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setImageData);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasImage);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, colorData);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setColorData);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasColor);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, data);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, setData);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, removeFormat);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, hasFormat);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, formats);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, clear);
PHP_METHOD(Qt_Core_QMimeData_QMimeData, retrieveData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_urls, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_seturls, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, urls, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hasurls, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hastext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_html, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_sethtml, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hashtml, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_imagedata, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_setimagedata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, image)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hasimage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_colordata, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_setcolordata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, color)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hascolor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_data, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimetype, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_setdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimetype, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_removeformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimetype, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_hasformat, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimetype, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_formats, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmimedata_qmimedata_retrievedata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mimetype, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, preferredType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmimedata_qmimedata_method_entry) {
	PHP_ME(Qt_Core_QMimeData_QMimeData, staticMetaObject, arginfo_qt_core_qmimedata_qmimedata_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, tr, arginfo_qt_core_qmimedata_qmimedata_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, new_, arginfo_qt_core_qmimedata_qmimedata_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, urls, arginfo_qt_core_qmimedata_qmimedata_urls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setUrls, arginfo_qt_core_qmimedata_qmimedata_seturls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasUrls, arginfo_qt_core_qmimedata_qmimedata_hasurls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, text, arginfo_qt_core_qmimedata_qmimedata_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setText, arginfo_qt_core_qmimedata_qmimedata_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasText, arginfo_qt_core_qmimedata_qmimedata_hastext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, html, arginfo_qt_core_qmimedata_qmimedata_html, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setHtml, arginfo_qt_core_qmimedata_qmimedata_sethtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasHtml, arginfo_qt_core_qmimedata_qmimedata_hashtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, imageData, arginfo_qt_core_qmimedata_qmimedata_imagedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setImageData, arginfo_qt_core_qmimedata_qmimedata_setimagedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasImage, arginfo_qt_core_qmimedata_qmimedata_hasimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, colorData, arginfo_qt_core_qmimedata_qmimedata_colordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setColorData, arginfo_qt_core_qmimedata_qmimedata_setcolordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasColor, arginfo_qt_core_qmimedata_qmimedata_hascolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, data, arginfo_qt_core_qmimedata_qmimedata_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, setData, arginfo_qt_core_qmimedata_qmimedata_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, removeFormat, arginfo_qt_core_qmimedata_qmimedata_removeformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, hasFormat, arginfo_qt_core_qmimedata_qmimedata_hasformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, formats, arginfo_qt_core_qmimedata_qmimedata_formats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, clear, arginfo_qt_core_qmimedata_qmimedata_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeData_QMimeData, retrieveData, arginfo_qt_core_qmimedata_qmimedata_retrievedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
