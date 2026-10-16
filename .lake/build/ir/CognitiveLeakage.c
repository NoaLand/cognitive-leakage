// Lean compiler output
// Module: CognitiveLeakage
// Imports: public import Init public meta import Init public import CognitiveLeakage.TestCodeIsNotTheSafetyNet
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const lean_string_object lp_cognitive_x2dleakage_models___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Test Code Is Not The Safety Net"};
static const lean_object* lp_cognitive_x2dleakage_models___closed__0 = (const lean_object*)&lp_cognitive_x2dleakage_models___closed__0_value;
static const lean_ctor_object lp_cognitive_x2dleakage_models___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cognitive_x2dleakage_models___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_cognitive_x2dleakage_models___closed__1 = (const lean_object*)&lp_cognitive_x2dleakage_models___closed__1_value;
LEAN_EXPORT const lean_object* lp_cognitive_x2dleakage_models = (const lean_object*)&lp_cognitive_x2dleakage_models___closed__1_value;
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_cognitive_x2dleakage_CognitiveLeakage_TestCodeIsNotTheSafetyNet(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cognitive_x2dleakage_CognitiveLeakage(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_cognitive_x2dleakage_CognitiveLeakage_TestCodeIsNotTheSafetyNet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
