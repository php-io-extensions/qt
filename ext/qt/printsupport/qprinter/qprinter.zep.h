
extern zend_class_entry *qt_printsupport_qprinter_qprinter_ce;

ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPrinter_QPrinter);

PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, new_);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, newQPrinterInfoQPrinterPrinterMode);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, devType);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setOutputFormat);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, outputFormat);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPdfVersion);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, pdfVersion);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPrinterName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printerName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, isValid);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setOutputFileName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, outputFileName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPrintProgram);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printProgram);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setDocName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, docName);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setCreator);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, creator);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPageOrder);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, pageOrder);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setResolution);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, resolution);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setColorMode);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, colorMode);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setCollateCopies);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, collateCopies);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setFullPage);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, fullPage);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setCopyCount);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, copyCount);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, supportsMultipleCopies);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPaperSource);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, paperSource);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setDuplex);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, duplex);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, supportedResolutions);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setFontEmbeddingEnabled);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, fontEmbeddingEnabled);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, paperRect);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, pageRect);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printerSelectionOption);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPrinterSelectionOption);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, newPage);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, abort);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printerState);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, paintEngine);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printEngine);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setFromTo);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, fromPage);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, toPage);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setPrintRange);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, printRange);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, metric);
PHP_METHOD(Qt_PrintSupport_QPrinter_QPrinter, setEngines);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_newqprinterinfoqprinterprintermode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setoutputformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_outputformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setpdfversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_pdfversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setprintername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setoutputfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_outputfilename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setprintprogram, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printprogram, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setdocname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_docname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setcreator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_creator, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setpageorder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_pageorder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setresolution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_resolution, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setcolormode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_colormode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setcollatecopies, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_collatecopies, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setfullpage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_fullpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setcopycount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_copycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_supportsmultiplecopies, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setpapersource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_papersource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setduplex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duplex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_duplex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_supportedresolutions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setfontembeddingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_fontembeddingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_paperrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_pagerect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printerselectionoption, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setprinterselectionoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_newpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_abort, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printerstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setfromto, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromPage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toPage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_frompage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_topage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setprintrange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, range, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_printrange, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprinter_qprinter_setengines, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printEngine, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintEngine, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_printsupport_qprinter_qprinter_method_entry) {
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, new_, arginfo_qt_printsupport_qprinter_qprinter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, newQPrinterInfoQPrinterPrinterMode, arginfo_qt_printsupport_qprinter_qprinter_newqprinterinfoqprinterprintermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, devType, arginfo_qt_printsupport_qprinter_qprinter_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setOutputFormat, arginfo_qt_printsupport_qprinter_qprinter_setoutputformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, outputFormat, arginfo_qt_printsupport_qprinter_qprinter_outputformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPdfVersion, arginfo_qt_printsupport_qprinter_qprinter_setpdfversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, pdfVersion, arginfo_qt_printsupport_qprinter_qprinter_pdfversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPrinterName, arginfo_qt_printsupport_qprinter_qprinter_setprintername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printerName, arginfo_qt_printsupport_qprinter_qprinter_printername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, isValid, arginfo_qt_printsupport_qprinter_qprinter_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setOutputFileName, arginfo_qt_printsupport_qprinter_qprinter_setoutputfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, outputFileName, arginfo_qt_printsupport_qprinter_qprinter_outputfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPrintProgram, arginfo_qt_printsupport_qprinter_qprinter_setprintprogram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printProgram, arginfo_qt_printsupport_qprinter_qprinter_printprogram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setDocName, arginfo_qt_printsupport_qprinter_qprinter_setdocname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, docName, arginfo_qt_printsupport_qprinter_qprinter_docname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setCreator, arginfo_qt_printsupport_qprinter_qprinter_setcreator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, creator, arginfo_qt_printsupport_qprinter_qprinter_creator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPageOrder, arginfo_qt_printsupport_qprinter_qprinter_setpageorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, pageOrder, arginfo_qt_printsupport_qprinter_qprinter_pageorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setResolution, arginfo_qt_printsupport_qprinter_qprinter_setresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, resolution, arginfo_qt_printsupport_qprinter_qprinter_resolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setColorMode, arginfo_qt_printsupport_qprinter_qprinter_setcolormode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, colorMode, arginfo_qt_printsupport_qprinter_qprinter_colormode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setCollateCopies, arginfo_qt_printsupport_qprinter_qprinter_setcollatecopies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, collateCopies, arginfo_qt_printsupport_qprinter_qprinter_collatecopies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setFullPage, arginfo_qt_printsupport_qprinter_qprinter_setfullpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, fullPage, arginfo_qt_printsupport_qprinter_qprinter_fullpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setCopyCount, arginfo_qt_printsupport_qprinter_qprinter_setcopycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, copyCount, arginfo_qt_printsupport_qprinter_qprinter_copycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, supportsMultipleCopies, arginfo_qt_printsupport_qprinter_qprinter_supportsmultiplecopies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPaperSource, arginfo_qt_printsupport_qprinter_qprinter_setpapersource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, paperSource, arginfo_qt_printsupport_qprinter_qprinter_papersource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setDuplex, arginfo_qt_printsupport_qprinter_qprinter_setduplex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, duplex, arginfo_qt_printsupport_qprinter_qprinter_duplex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, supportedResolutions, arginfo_qt_printsupport_qprinter_qprinter_supportedresolutions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setFontEmbeddingEnabled, arginfo_qt_printsupport_qprinter_qprinter_setfontembeddingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, fontEmbeddingEnabled, arginfo_qt_printsupport_qprinter_qprinter_fontembeddingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, paperRect, arginfo_qt_printsupport_qprinter_qprinter_paperrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, pageRect, arginfo_qt_printsupport_qprinter_qprinter_pagerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printerSelectionOption, arginfo_qt_printsupport_qprinter_qprinter_printerselectionoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPrinterSelectionOption, arginfo_qt_printsupport_qprinter_qprinter_setprinterselectionoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, newPage, arginfo_qt_printsupport_qprinter_qprinter_newpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, abort, arginfo_qt_printsupport_qprinter_qprinter_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printerState, arginfo_qt_printsupport_qprinter_qprinter_printerstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, paintEngine, arginfo_qt_printsupport_qprinter_qprinter_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printEngine, arginfo_qt_printsupport_qprinter_qprinter_printengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setFromTo, arginfo_qt_printsupport_qprinter_qprinter_setfromto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, fromPage, arginfo_qt_printsupport_qprinter_qprinter_frompage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, toPage, arginfo_qt_printsupport_qprinter_qprinter_topage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setPrintRange, arginfo_qt_printsupport_qprinter_qprinter_setprintrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, printRange, arginfo_qt_printsupport_qprinter_qprinter_printrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, metric, arginfo_qt_printsupport_qprinter_qprinter_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrinter_QPrinter, setEngines, arginfo_qt_printsupport_qprinter_qprinter_setengines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
