
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
#include "src/gui-qnativeinterfaceqx11application.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QNativeInterfaceQX11Application_QNativeInterfaceQX11Application)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QNativeInterfaceQX11Application, QNativeInterfaceQX11Application, qt, gui_qnativeinterfaceqx11application_qnativeinterfaceqx11application, qt_gui_qnativeinterfaceqx11application_qnativeinterfaceqx11application_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QNativeInterfaceQX11Application_QNativeInterfaceQX11Application, new_)
{

	RETURN_LONG(phpqt_qnativeinterfaceqx11application_new());
}

