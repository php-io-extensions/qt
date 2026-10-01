/* phpqt-bridge.h — the only glue class. Hand-written; zep annotation lines feed gen-zep.php. */
#ifndef PHPQT_BRIDGE_H
#define PHPQT_BRIDGE_H
#include "php.h"
#ifdef __cplusplus
extern "C" {
#endif

/*@zep Bridge\Bridge init() -> bool */
zend_long phpqt_bridge_init(void);
/*@zep Bridge\Bridge pump(int maxTimeMs) -> void */
void phpqt_bridge_pump(zval *p_maxTimeMs);
/*@zep Bridge\Bridge release(int handle) -> void */
void phpqt_bridge_release(zval *p_handle);
/*@zep Bridge\Bridge adopt(int handle) -> bool */
zend_long phpqt_bridge_adopt(zval *p_handle);
/*@zep Bridge\Bridge isValid(int handle) -> bool */
zend_long phpqt_bridge_is_valid(zval *p_handle);
/*@zep Bridge\Bridge isShell(int handle) -> bool */
zend_long phpqt_bridge_is_shell(zval *p_handle);
/*@zep Bridge\Bridge typeName(int handle) -> var */
void phpqt_bridge_type_name(zval *return_value, zval *p_handle);
/*@zep Bridge\Bridge isA(int handle, string typeName) -> bool */
zend_long phpqt_bridge_is_a(zval *p_handle, zval *p_typeName);
/*@zep Bridge\Bridge connect(int handle, string signature, var callback) -> int */
zend_long phpqt_bridge_connect(zval *p_handle, zval *p_signature, zval *p_callback);
/*@zep Bridge\Bridge disconnect(int handle, int connectionId) -> void */
void phpqt_bridge_disconnect(zval *p_handle, zval *p_connectionId);
/*@zep Bridge\Bridge override(int handle, string member, var callback) -> bool */
zend_long phpqt_bridge_override(zval *p_handle, zval *p_member, zval *p_callback);
/*@zep Bridge\Bridge clearOverride(int handle, string member) -> void */
void phpqt_bridge_clear_override(zval *p_handle, zval *p_member);
/*@zep Bridge\Bridge installEventFilter(int handle, var callback) -> void */
void phpqt_bridge_install_event_filter(zval *p_handle, zval *p_callback);
/*@zep Bridge\Bridge removeEventFilter(int handle) -> void */
void phpqt_bridge_remove_event_filter(zval *p_handle);

#ifdef __cplusplus
}
#endif
#endif
