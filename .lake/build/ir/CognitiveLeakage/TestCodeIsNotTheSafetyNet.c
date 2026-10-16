// Lean compiler output
// Module: CognitiveLeakage.TestCodeIsNotTheSafetyNet
// Imports: public import Init public meta import Init
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
static const lean_string_object lp_cognitive_x2dleakage_TestCodeIsNotTheSafetyNet_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Test Code Is Not The Safety Net"};
static const lean_object* lp_cognitive_x2dleakage_TestCodeIsNotTheSafetyNet_name___closed__0 = (const lean_object*)&lp_cognitive_x2dleakage_TestCodeIsNotTheSafetyNet_name___closed__0_value;
LEAN_EXPORT const lean_object* lp_cognitive_x2dleakage_TestCodeIsNotTheSafetyNet_name = (const lean_object*)&lp_cognitive_x2dleakage_TestCodeIsNotTheSafetyNet_name___closed__0_value;
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cognitive_x2dleakage_CognitiveLeakage_TestCodeIsNotTheSafetyNet(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
