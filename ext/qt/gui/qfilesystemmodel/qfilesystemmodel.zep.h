
extern zend_class_entry *qt_gui_qfilesystemmodel_qfilesystemmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFileSystemModel_QFileSystemModel);

PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, parent_);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, staticMetaObject);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, tr);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, rootPathChanged);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, fileRenamed);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, directoryLoaded);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, new_);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, index);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, indexQStringInt);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, parentQModelIndex);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, sibling);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, hasChildren);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, canFetchMore);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, fetchMore);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, rowCount);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, columnCount);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, myComputer);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, data);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setData);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, headerData);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, flags);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, sort);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, mimeTypes);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, mimeData);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, dropMimeData);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, supportedDropActions);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, roleNames);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setRootPath);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, rootPath);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, rootDirectory);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setIconProvider);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, iconProvider);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setFilter);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, filter);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setResolveSymlinks);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, resolveSymlinks);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setReadOnly);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, isReadOnly);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setNameFilterDisables);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, nameFilterDisables);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setNameFilters);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, nameFilters);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setOption);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, testOption);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, setOptions);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, options);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, filePath);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, isDir);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, size);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, type);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, lastModified);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, lastModifiedQModelIndexQTimeZone);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, mkdir);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, rmdir);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, fileName);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, fileIcon);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, permissions);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, fileInfo);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, remove);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, timerEvent);
PHP_METHOD(Qt_Gui_QFileSystemModel_QFileSystemModel, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootpathchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newPath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filerenamed, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, oldName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_directoryloaded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_indexqstringint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_parentqmodelindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_haschildren, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_canfetchmore, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fetchmore, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mycomputer, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rolenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setrootpath, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootdirectory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_seticonprovider, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, provider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_iconprovider, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filters, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setresolvesymlinks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_resolvesymlinks, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setreadonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_isreadonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setnamefilterdisables, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_namefilterdisables, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setnamefilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, filters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_namefilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filepath, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_isdir, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_size, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_type, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_lastmodified, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_lastmodifiedqmodelindexqtimezone, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mkdir, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rmdir, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filename, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fileicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_permissions, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fileinfo, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_remove, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfilesystemmodel_qfilesystemmodel_method_entry) {
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, parent_, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, staticMetaObject, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, tr, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, rootPathChanged, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootpathchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, fileRenamed, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filerenamed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, directoryLoaded, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_directoryloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, new_, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, index, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, indexQStringInt, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_indexqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, parentQModelIndex, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_parentqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, sibling, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, hasChildren, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_haschildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, canFetchMore, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_canfetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, fetchMore, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, rowCount, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, columnCount, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, myComputer, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mycomputer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, data, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setData, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, headerData, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, flags, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, sort, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, mimeTypes, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, mimeData, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, dropMimeData, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, supportedDropActions, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, roleNames, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setRootPath, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setrootpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, rootPath, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, rootDirectory, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rootdirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setIconProvider, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_seticonprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, iconProvider, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_iconprovider, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setFilter, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, filter, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setResolveSymlinks, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setresolvesymlinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, resolveSymlinks, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_resolvesymlinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setReadOnly, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, isReadOnly, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_isreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setNameFilterDisables, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setnamefilterdisables, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, nameFilterDisables, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_namefilterdisables, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setNameFilters, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setnamefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, nameFilters, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_namefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setOption, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, testOption, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, setOptions, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, options, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, filePath, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, isDir, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_isdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, size, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, type, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, lastModified, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_lastmodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, lastModifiedQModelIndexQTimeZone, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_lastmodifiedqmodelindexqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, mkdir, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_mkdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, rmdir, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_rmdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, fileName, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, fileIcon, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fileicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, permissions, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_permissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, fileInfo, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_fileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, remove, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, timerEvent, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFileSystemModel_QFileSystemModel, event, arginfo_qt_gui_qfilesystemmodel_qfilesystemmodel_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
