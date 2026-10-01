
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/gui-qnativeinterfaceqeglcontext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QNativeInterfaceQEGLContext_QNativeInterfaceQEGLContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QNativeInterfaceQEGLContext, QNativeInterfaceQEGLContext, qt, gui_qnativeinterfaceqeglcontext_qnativeinterfaceqeglcontext, qt_gui_qnativeinterfaceqeglcontext_qnativeinterfaceqeglcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QNativeInterfaceQEGLContext_QNativeInterfaceQEGLContext, new_)
{

	RETURN_LONG(phpqt_qnativeinterfaceqeglcontext_new());
}

PHP_METHOD(Qt_Gui_QNativeInterfaceQEGLContext_QNativeInterfaceQEGLContext, invalidateContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnativeinterfaceqeglcontext_invalidate_context(&_0);
}

