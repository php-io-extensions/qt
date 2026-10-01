
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
#include "src/gui-qnativeinterfaceqglxcontext.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QNativeInterfaceQGLXContext_QNativeInterfaceQGLXContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QNativeInterfaceQGLXContext, QNativeInterfaceQGLXContext, qt, gui_qnativeinterfaceqglxcontext_qnativeinterfaceqglxcontext, qt_gui_qnativeinterfaceqglxcontext_qnativeinterfaceqglxcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QNativeInterfaceQGLXContext_QNativeInterfaceQGLXContext, new_)
{

	RETURN_LONG(phpqt_qnativeinterfaceqglxcontext_new());
}

