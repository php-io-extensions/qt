
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
#include "src/gui-qnativeinterfaceqwaylandscreen.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QNativeInterfaceQWaylandScreen_QNativeInterfaceQWaylandScreen)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QNativeInterfaceQWaylandScreen, QNativeInterfaceQWaylandScreen, qt, gui_qnativeinterfaceqwaylandscreen_qnativeinterfaceqwaylandscreen, qt_gui_qnativeinterfaceqwaylandscreen_qnativeinterfaceqwaylandscreen_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QNativeInterfaceQWaylandScreen_QNativeInterfaceQWaylandScreen, new_)
{

	RETURN_LONG(phpqt_qnativeinterfaceqwaylandscreen_new());
}

