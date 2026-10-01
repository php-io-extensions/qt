
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
#include "src/opengl-qopenglshaderprogram.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLShaderProgram, QOpenGLShaderProgram, qt, opengl_qopenglshaderprogram_qopenglshaderprogram, qt_opengl_qopenglshaderprogram_qopenglshaderprogram_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, staticMetaObject)
{

	RETURN_LONG(phpqt_qopenglshaderprogram_static_meta_object());
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qopenglshaderprogram_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qopenglshaderprogram_new(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addShader)
{
	zval *handle_param = NULL, *shader_param = NULL, _0, _1;
	zend_long handle, shader, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	r = phpqt_qopenglshaderprogram_add_shader(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, removeShader)
{
	zval *handle_param = NULL, *shader_param = NULL, _0, _1;
	zend_long handle, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	phpqt_qopenglshaderprogram_remove_shader(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, shaders)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_shaders(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addShaderFromSourceCode)
{
	zval *handle_param = NULL, *type_param = NULL, *source = NULL, source_sub, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&source_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &type_param, &source);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_shader_from_source_code(&_0, &_1, source);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addShaderFromSourceCodeQOpenGLShaderShaderTypeQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval source;
	zval *handle_param = NULL, *type_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&source);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(source)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &source_param);
	zephir_get_strval(&source, source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_shader_from_source_code_q_open_g_l_shader_shader_type_q_byte_array(&_0, &_1, &source);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addShaderFromSourceCodeQOpenGLShaderShaderTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval source;
	zval *handle_param = NULL, *type_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&source);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(source)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &source_param);
	zephir_get_strval(&source, source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_shader_from_source_code_q_open_g_l_shader_shader_type_q_string(&_0, &_1, &source);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addShaderFromSourceFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *type_param = NULL, *fileName_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_shader_from_source_file(&_0, &_1, &fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addCacheableShaderFromSourceCode)
{
	zval *handle_param = NULL, *type_param = NULL, *source = NULL, source_sub, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&source_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &type_param, &source);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_cacheable_shader_from_source_code(&_0, &_1, source);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addCacheableShaderFromSourceCodeQOpenGLShaderShaderTypeQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval source;
	zval *handle_param = NULL, *type_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&source);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(source)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &source_param);
	zephir_get_strval(&source, source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_cacheable_shader_from_source_code_q_open_g_l_shader_shader_type_q_byte_array(&_0, &_1, &source);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addCacheableShaderFromSourceCodeQOpenGLShaderShaderTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval source;
	zval *handle_param = NULL, *type_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&source);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(source)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &source_param);
	zephir_get_strval(&source, source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_cacheable_shader_from_source_code_q_open_g_l_shader_shader_type_q_string(&_0, &_1, &source);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, addCacheableShaderFromSourceFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *type_param = NULL, *fileName_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qopenglshaderprogram_add_cacheable_shader_from_source_file(&_0, &_1, &fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, removeAllShaders)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_remove_all_shaders(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, link)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglshaderprogram_link(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, isLinked)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglshaderprogram_is_linked(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, log)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_log(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, bind)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglshaderprogram_bind(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_release(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, create)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglshaderprogram_create(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, programId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglshaderprogram_program_id(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, maxGeometryOutputVertices)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglshaderprogram_max_geometry_output_vertices(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setPatchVertexCount)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qopenglshaderprogram_set_patch_vertex_count(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, patchVertexCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglshaderprogram_patch_vertex_count(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setDefaultOuterTessellationLevels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval levels;
	zval *handle_param = NULL, *levels_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&levels);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(levels)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &levels_param);
	zephir_get_arrval(&levels, levels_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_set_default_outer_tessellation_levels(&_0, &levels);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, defaultOuterTessellationLevels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_default_outer_tessellation_levels(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setDefaultInnerTessellationLevels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval levels;
	zval *handle_param = NULL, *levels_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&levels);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(levels)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &levels_param);
	zephir_get_arrval(&levels, levels_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_set_default_inner_tessellation_levels(&_0, &levels);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, defaultInnerTessellationLevels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_default_inner_tessellation_levels(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, bindAttributeLocation)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *location_param = NULL, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &location_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	phpqt_qopenglshaderprogram_bind_attribute_location(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, bindAttributeLocationQByteArrayInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *location_param = NULL, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &location_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	phpqt_qopenglshaderprogram_bind_attribute_location_q_byte_array_int(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, bindAttributeLocationQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *location_param = NULL, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &location_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	phpqt_qopenglshaderprogram_bind_attribute_location_q_string_int(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, attributeLocation)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglshaderprogram_attribute_location(&_0, name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, attributeLocationQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qopenglshaderprogram_attribute_location_q_byte_array(&_0, &name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, attributeLocationQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qopenglshaderprogram_attribute_location_q_string(&_0, &name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValue)
{
	double value;
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, value);
	phpqt_qopenglshaderprogram_set_attribute_value(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntGLfloatGLfloat)
{
	double x, y;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	phpqt_qopenglshaderprogram_set_attribute_value_int_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntGLfloatGLfloatGLfloat)
{
	double x, y, z;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qopenglshaderprogram_set_attribute_value_int_g_lfloat_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntGLfloatGLfloatGLfloatGLfloat)
{
	double x, y, z, w;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &location_param, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	ZVAL_DOUBLE(&_5, w);
	phpqt_qopenglshaderprogram_set_attribute_value_int_g_lfloat_g_lfloat_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntQVector2D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_attribute_value_int_q_vector2_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntQVector3D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_attribute_value_int_q_vector3_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntQVector4D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_attribute_value_int_q_vector4_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntQColor)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_attribute_value_int_q_color(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueIntGLfloatIntInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values = NULL, values_sub, *columns_param = NULL, *rows_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, columns, rows;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(columns)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &values, &columns_param, &rows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, columns);
	ZVAL_LONG(&_3, rows);
	phpqt_qopenglshaderprogram_set_attribute_value_int_g_lfloat_int_int(&_0, &_1, values, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharGLfloat)
{
	double value;
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qopenglshaderprogram_set_attribute_value_char_g_lfloat(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharGLfloatGLfloat)
{
	double x, y;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qopenglshaderprogram_set_attribute_value_char_g_lfloat_g_lfloat(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharGLfloatGLfloatGLfloat)
{
	double x, y, z;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &name, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	phpqt_qopenglshaderprogram_set_attribute_value_char_g_lfloat_g_lfloat_g_lfloat(&_0, name, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharGLfloatGLfloatGLfloatGLfloat)
{
	double x, y, z, w;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &name, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	ZVAL_DOUBLE(&_4, w);
	phpqt_qopenglshaderprogram_set_attribute_value_char_g_lfloat_g_lfloat_g_lfloat_g_lfloat(&_0, name, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharQVector2D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_attribute_value_char_q_vector2_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharQVector3D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_attribute_value_char_q_vector3_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharQVector4D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_attribute_value_char_q_vector4_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharQColor)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_attribute_value_char_q_color(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeValueCharGLfloatIntInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values = NULL, values_sub, *columns_param = NULL, *rows_param = NULL, _0, _1, _2;
	zend_long handle, columns, rows;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(columns)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &name, &values, &columns_param, &rows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columns);
	ZVAL_LONG(&_2, rows);
	phpqt_qopenglshaderprogram_set_attribute_value_char_g_lfloat_int_int(&_0, name, values, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArray)
{
	zval *handle_param = NULL, *location_param = NULL, *values = NULL, values_sub, *tupleSize_param = NULL, *stride_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, tupleSize, stride;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(tupleSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &location_param, &values, &tupleSize_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, tupleSize);
	ZVAL_LONG(&_3, stride);
	phpqt_qopenglshaderprogram_set_attribute_array(&_0, &_1, values, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayIntQVector2DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *stride_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, stride;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &location_param, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_int_q_vector2_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayIntQVector3DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *stride_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, stride;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &location_param, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_int_q_vector3_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayIntQVector4DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *stride_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, stride;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &location_param, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_int_q_vector4_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayCharGLfloatIntInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values = NULL, values_sub, *tupleSize_param = NULL, *stride_param = NULL, _0, _1, _2;
	zend_long handle, tupleSize, stride;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(tupleSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &name, &values, &tupleSize_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tupleSize);
	ZVAL_LONG(&_2, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_char_g_lfloat_int_int(&_0, name, values, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayCharQVector2DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *stride_param = NULL, _0, _1, _2;
	zend_long handle, values, stride;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &name, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_char_q_vector2_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayCharQVector3DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *stride_param = NULL, _0, _1, _2;
	zend_long handle, values, stride;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &name, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_char_q_vector3_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeArrayCharQVector4DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *stride_param = NULL, _0, _1, _2;
	zend_long handle, values, stride;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &name, &values_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, stride);
	phpqt_qopenglshaderprogram_set_attribute_array_char_q_vector4_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeBuffer)
{
	zval *handle_param = NULL, *location_param = NULL, *type_param = NULL, *offset_param = NULL, *tupleSize_param = NULL, *stride_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location, type, offset, tupleSize, stride;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(tupleSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &location_param, &type_param, &offset_param, &tupleSize_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, type);
	ZVAL_LONG(&_3, offset);
	ZVAL_LONG(&_4, tupleSize);
	ZVAL_LONG(&_5, stride);
	phpqt_qopenglshaderprogram_set_attribute_buffer(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setAttributeBufferCharGLenumIntIntInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *type_param = NULL, *offset_param = NULL, *tupleSize_param = NULL, *stride_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, type, offset, tupleSize, stride;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(tupleSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &name, &type_param, &offset_param, &tupleSize_param, &stride_param);
	if (!stride_param) {
		stride = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, offset);
	ZVAL_LONG(&_3, tupleSize);
	ZVAL_LONG(&_4, stride);
	phpqt_qopenglshaderprogram_set_attribute_buffer_char_g_lenum_int_int_int(&_0, name, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, enableAttributeArray)
{
	zval *handle_param = NULL, *location_param = NULL, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &location_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	phpqt_qopenglshaderprogram_enable_attribute_array(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, enableAttributeArrayChar)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_enable_attribute_array_char(&_0, name);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, disableAttributeArray)
{
	zval *handle_param = NULL, *location_param = NULL, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &location_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	phpqt_qopenglshaderprogram_disable_attribute_array(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, disableAttributeArrayChar)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglshaderprogram_disable_attribute_array_char(&_0, name);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, uniformLocation)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglshaderprogram_uniform_location(&_0, name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, uniformLocationQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qopenglshaderprogram_uniform_location_q_byte_array(&_0, &name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, uniformLocationQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qopenglshaderprogram_uniform_location_q_string(&_0, &name));
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValue)
{
	double value;
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntGLint)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_g_lint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntGLuint)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_g_luint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntGLfloatGLfloat)
{
	double x, y;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	phpqt_qopenglshaderprogram_set_uniform_value_int_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntGLfloatGLfloatGLfloat)
{
	double x, y, z;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qopenglshaderprogram_set_uniform_value_int_g_lfloat_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntGLfloatGLfloatGLfloatGLfloat)
{
	double x, y, z, w;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &location_param, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	ZVAL_DOUBLE(&_5, w);
	phpqt_qopenglshaderprogram_set_uniform_value_int_g_lfloat_g_lfloat_g_lfloat_g_lfloat(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQVector2D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_vector2_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQVector3D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_vector3_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQVector4D)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_vector4_d(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQColor)
{
	zval *handle_param = NULL, *location_param = NULL, *color_param = NULL, _0, _1, _2;
	zend_long handle, location, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, color);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_color(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQPoint)
{
	zval *handle_param = NULL, *location_param = NULL, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &pointX_param, &pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, pointX);
	ZVAL_LONG(&_3, pointY);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_point(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQPointF)
{
	double pointX, pointY;
	zval *handle_param = NULL, *location_param = NULL, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2, _3;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, pointX);
	ZVAL_DOUBLE(&_3, pointY);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_point_f(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQSize)
{
	zval *handle_param = NULL, *location_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, sizeWidth);
	ZVAL_LONG(&_3, sizeHeight);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_size(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQSizeF)
{
	double sizeWidth, sizeHeight;
	zval *handle_param = NULL, *location_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2, _3;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, sizeWidth);
	ZVAL_DOUBLE(&_3, sizeHeight);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_size_f(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQMatrix4x4)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_matrix4x4(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueIntQTransform)
{
	zval *handle_param = NULL, *location_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, location, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglshaderprogram_set_uniform_value_int_q_transform(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLfloat)
{
	double value;
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_lfloat(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLint)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_lint(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLuint)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_luint(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLfloatGLfloat)
{
	double x, y;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_lfloat_g_lfloat(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLfloatGLfloatGLfloat)
{
	double x, y, z;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &name, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_lfloat_g_lfloat_g_lfloat(&_0, name, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharGLfloatGLfloatGLfloatGLfloat)
{
	double x, y, z, w;
	zval *handle_param = NULL, *name = NULL, name_sub, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &name, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	ZVAL_DOUBLE(&_4, w);
	phpqt_qopenglshaderprogram_set_uniform_value_char_g_lfloat_g_lfloat_g_lfloat_g_lfloat(&_0, name, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQVector2D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_vector2_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQVector3D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_vector3_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQVector4D)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_vector4_d(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQColor)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_color(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQPoint)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2;
	zend_long handle, pointX, pointY;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &pointX_param, &pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointX);
	ZVAL_LONG(&_2, pointY);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_point(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQPointF)
{
	double pointX, pointY;
	zval *handle_param = NULL, *name = NULL, name_sub, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_point_f(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQSize)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_size(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQSizeF)
{
	double sizeWidth, sizeHeight;
	zval *handle_param = NULL, *name = NULL, name_sub, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sizeWidth);
	ZVAL_DOUBLE(&_2, sizeHeight);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_size_f(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQMatrix4x4)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_matrix4x4(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueCharQTransform)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglshaderprogram_set_uniform_value_char_q_transform(&_0, name, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArray)
{
	zval *handle_param = NULL, *location_param = NULL, *values = NULL, values_sub, *count_param = NULL, *tupleSize_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, count, tupleSize;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(tupleSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &values, &count_param, &tupleSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, tupleSize);
	phpqt_qopenglshaderprogram_set_uniform_value_array(&_0, &_1, values, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntGLintInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values = NULL, values_sub, *count_param = NULL, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_g_lint_int(&_0, &_1, values, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntGLuintInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values = NULL, values_sub, *count_param = NULL, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_g_luint_int(&_0, &_1, values, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntQVector2DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *count_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_q_vector2_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntQVector3DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *count_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_q_vector3_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntQVector4DInt)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *count_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_q_vector4_d_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayIntQMatrix4x4Int)
{
	zval *handle_param = NULL, *location_param = NULL, *values_param = NULL, *count_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, values, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, values);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_int_q_matrix4x4_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharGLfloatIntInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values = NULL, values_sub, *count_param = NULL, *tupleSize_param = NULL, _0, _1, _2;
	zend_long handle, count, tupleSize;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(tupleSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &name, &values, &count_param, &tupleSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	ZVAL_LONG(&_2, tupleSize);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_g_lfloat_int_int(&_0, name, values, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharGLintInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values = NULL, values_sub, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_g_lint_int(&_0, name, values, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharGLuintInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values = NULL, values_sub, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_g_luint_int(&_0, name, values, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharQVector2DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, values, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_q_vector2_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharQVector3DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, values, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_q_vector3_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharQVector4DInt)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, values, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_q_vector4_d_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, setUniformValueArrayCharQMatrix4x4Int)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *values_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, values, count;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(values)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &name, &values_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglshaderprogram_set_uniform_value_array_char_q_matrix4x4_int(&_0, name, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLShaderProgram_QOpenGLShaderProgram, hasOpenGLShaderPrograms)
{
	zval *context_param = NULL, _0;
	zend_long context, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &context_param);
	if (!context_param) {
		context = 0;
	} else {
		}
	ZVAL_LONG(&_0, context);
	r = phpqt_qopenglshaderprogram_has_open_g_l_shader_programs(&_0);
	RETURN_BOOL(r == 1);
}

