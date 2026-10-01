
extern zend_class_entry *qt_widgets_qfiledialog_qfiledialog_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFileDialog_QFileDialog);

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, open);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, staticMetaObject);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, tr);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, new_);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, newQWidgetQStringQStringQString);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectory);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryQDir);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directory);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectFile);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedFiles);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedUrls);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setNameFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setNameFilters);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, nameFilters);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectNameFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedMimeTypeFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedNameFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setMimeTypeFilters);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, mimeTypeFilters);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectMimeTypeFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setFilter);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setViewMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, viewMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setFileMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, fileMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setAcceptMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, acceptMode);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setSidebarUrls);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, sidebarUrls);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, saveState);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, restoreState);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDefaultSuffix);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, defaultSuffix);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setHistory);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, history);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setItemDelegate);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, itemDelegate);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setIconProvider);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, iconProvider);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setLabelText);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, labelText);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setSupportedSchemes);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, supportedSchemes);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setProxyModel);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, proxyModel);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setOption);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, testOption);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setOptions);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, options);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, openQObjectChar);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setVisible);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, fileSelected);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filesSelected);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, currentChanged);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryEntered);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, urlSelected);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, urlsSelected);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, currentUrlChanged);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryUrlEntered);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filterSelected);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileName);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileName);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectory);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectoryUrl);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileNames);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrls);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, saveFileContent);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, done);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, accept);
PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, changeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_newqwidgetqstringqstringqstring, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectoryqdir, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_directory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectoryurl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_directoryurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectedfiles, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selecturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectedurls, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setnamefilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setnamefilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, filters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_namefilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectnamefilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectedmimetypefilter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectednamefilter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setmimetypefilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, filters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_mimetypefilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_selectmimetypefilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_filter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filters, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setviewmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_viewmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setfilemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_filemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setacceptmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_acceptmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setsidebarurls, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, urls, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_sidebarurls, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_savestate, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_restorestate, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setdefaultsuffix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_defaultsuffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_sethistory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, paths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_history, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setitemdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_itemdelegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_seticonprovider, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, provider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_iconprovider, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setlabeltext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_labeltext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setsupportedschemes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, schemes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_supportedschemes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setproxymodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_proxymodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_fileselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_filesselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, files, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_directoryentered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_urlselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_urlsselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, urls, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_currenturlchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_directoryurlentered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_filterselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfilename, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfileurl, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_INFO(0, dir)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_INFO(0, supportedSchemes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getsavefilename, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getsavefileurl, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_INFO(0, dir)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_INFO(0, supportedSchemes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getexistingdirectory, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getexistingdirectoryurl, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_INFO(0, dir)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_INFO(0, supportedSchemes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfilenames, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfileurls, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 0)
	ZEND_ARG_INFO(0, dir)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_INFO(0, selectedFilter)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_INFO(0, supportedSchemes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_savefilecontent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, fileContent, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileNameHint, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_accept, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfiledialog_qfiledialog_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qfiledialog_qfiledialog_method_entry) {
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, open, arginfo_qt_widgets_qfiledialog_qfiledialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, staticMetaObject, arginfo_qt_widgets_qfiledialog_qfiledialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, tr, arginfo_qt_widgets_qfiledialog_qfiledialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, new_, arginfo_qt_widgets_qfiledialog_qfiledialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, newQWidgetQStringQStringQString, arginfo_qt_widgets_qfiledialog_qfiledialog_newqwidgetqstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setDirectory, arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryQDir, arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectoryqdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, directory, arginfo_qt_widgets_qfiledialog_qfiledialog_directory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_setdirectoryurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, directoryUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_directoryurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectFile, arginfo_qt_widgets_qfiledialog_qfiledialog_selectfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectedFiles, arginfo_qt_widgets_qfiledialog_qfiledialog_selectedfiles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_selecturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectedUrls, arginfo_qt_widgets_qfiledialog_qfiledialog_selectedurls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setNameFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_setnamefilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setNameFilters, arginfo_qt_widgets_qfiledialog_qfiledialog_setnamefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, nameFilters, arginfo_qt_widgets_qfiledialog_qfiledialog_namefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectNameFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_selectnamefilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectedMimeTypeFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_selectedmimetypefilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectedNameFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_selectednamefilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setMimeTypeFilters, arginfo_qt_widgets_qfiledialog_qfiledialog_setmimetypefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, mimeTypeFilters, arginfo_qt_widgets_qfiledialog_qfiledialog_mimetypefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, selectMimeTypeFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_selectmimetypefilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, filter, arginfo_qt_widgets_qfiledialog_qfiledialog_filter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setFilter, arginfo_qt_widgets_qfiledialog_qfiledialog_setfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setViewMode, arginfo_qt_widgets_qfiledialog_qfiledialog_setviewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, viewMode, arginfo_qt_widgets_qfiledialog_qfiledialog_viewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setFileMode, arginfo_qt_widgets_qfiledialog_qfiledialog_setfilemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, fileMode, arginfo_qt_widgets_qfiledialog_qfiledialog_filemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setAcceptMode, arginfo_qt_widgets_qfiledialog_qfiledialog_setacceptmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, acceptMode, arginfo_qt_widgets_qfiledialog_qfiledialog_acceptmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setSidebarUrls, arginfo_qt_widgets_qfiledialog_qfiledialog_setsidebarurls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, sidebarUrls, arginfo_qt_widgets_qfiledialog_qfiledialog_sidebarurls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, saveState, arginfo_qt_widgets_qfiledialog_qfiledialog_savestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, restoreState, arginfo_qt_widgets_qfiledialog_qfiledialog_restorestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setDefaultSuffix, arginfo_qt_widgets_qfiledialog_qfiledialog_setdefaultsuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, defaultSuffix, arginfo_qt_widgets_qfiledialog_qfiledialog_defaultsuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setHistory, arginfo_qt_widgets_qfiledialog_qfiledialog_sethistory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, history, arginfo_qt_widgets_qfiledialog_qfiledialog_history, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setItemDelegate, arginfo_qt_widgets_qfiledialog_qfiledialog_setitemdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, itemDelegate, arginfo_qt_widgets_qfiledialog_qfiledialog_itemdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setIconProvider, arginfo_qt_widgets_qfiledialog_qfiledialog_seticonprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, iconProvider, arginfo_qt_widgets_qfiledialog_qfiledialog_iconprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setLabelText, arginfo_qt_widgets_qfiledialog_qfiledialog_setlabeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, labelText, arginfo_qt_widgets_qfiledialog_qfiledialog_labeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setSupportedSchemes, arginfo_qt_widgets_qfiledialog_qfiledialog_setsupportedschemes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, supportedSchemes, arginfo_qt_widgets_qfiledialog_qfiledialog_supportedschemes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setProxyModel, arginfo_qt_widgets_qfiledialog_qfiledialog_setproxymodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, proxyModel, arginfo_qt_widgets_qfiledialog_qfiledialog_proxymodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setOption, arginfo_qt_widgets_qfiledialog_qfiledialog_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, testOption, arginfo_qt_widgets_qfiledialog_qfiledialog_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setOptions, arginfo_qt_widgets_qfiledialog_qfiledialog_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, options, arginfo_qt_widgets_qfiledialog_qfiledialog_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, openQObjectChar, arginfo_qt_widgets_qfiledialog_qfiledialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, setVisible, arginfo_qt_widgets_qfiledialog_qfiledialog_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, fileSelected, arginfo_qt_widgets_qfiledialog_qfiledialog_fileselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, filesSelected, arginfo_qt_widgets_qfiledialog_qfiledialog_filesselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, currentChanged, arginfo_qt_widgets_qfiledialog_qfiledialog_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, directoryEntered, arginfo_qt_widgets_qfiledialog_qfiledialog_directoryentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, urlSelected, arginfo_qt_widgets_qfiledialog_qfiledialog_urlselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, urlsSelected, arginfo_qt_widgets_qfiledialog_qfiledialog_urlsselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, currentUrlChanged, arginfo_qt_widgets_qfiledialog_qfiledialog_currenturlchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, directoryUrlEntered, arginfo_qt_widgets_qfiledialog_qfiledialog_directoryurlentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, filterSelected, arginfo_qt_widgets_qfiledialog_qfiledialog_filterselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileName, arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfileurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileName, arginfo_qt_widgets_qfiledialog_qfiledialog_getsavefilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_getsavefileurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectory, arginfo_qt_widgets_qfiledialog_qfiledialog_getexistingdirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectoryUrl, arginfo_qt_widgets_qfiledialog_qfiledialog_getexistingdirectoryurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileNames, arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfilenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrls, arginfo_qt_widgets_qfiledialog_qfiledialog_getopenfileurls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, saveFileContent, arginfo_qt_widgets_qfiledialog_qfiledialog_savefilecontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, done, arginfo_qt_widgets_qfiledialog_qfiledialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, accept, arginfo_qt_widgets_qfiledialog_qfiledialog_accept, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileDialog_QFileDialog, changeEvent, arginfo_qt_widgets_qfiledialog_qfiledialog_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
