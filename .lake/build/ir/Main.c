// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import CognitiveLeakage
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
extern lean_object* lp_cognitive_x2dleakage_models;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_println___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_cognitive_x2dleakage_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Cognitive Leakage formal model"};
static const lean_object* lp_cognitive_x2dleakage_main___closed__0 = (const lean_object*)&lp_cognitive_x2dleakage_main___closed__0_value;
static const lean_string_object lp_cognitive_x2dleakage_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Verified modules:"};
static const lean_object* lp_cognitive_x2dleakage_main___closed__1 = (const lean_object*)&lp_cognitive_x2dleakage_main___closed__1_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = lp_cognitive_x2dleakage_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_IO_println___at___00main_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(v_s_14_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_18_, lean_object* v_b_19_){
_start:
{
if (lean_obj_tag(v_as_x27_18_) == 0)
{
lean_object* v___x_21_; 
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v_b_19_);
return v___x_21_;
}
else
{
lean_object* v_head_22_; lean_object* v_tail_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_head_22_ = lean_ctor_get(v_as_x27_18_, 0);
v_tail_23_ = lean_ctor_get(v_as_x27_18_, 1);
v___x_24_ = lean_box(0);
v___x_25_ = ((lean_object*)(lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_26_ = lean_string_append(v___x_25_, v_head_22_);
v___x_27_ = lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(v___x_26_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_dec_ref_known(v___x_27_, 1);
v_as_x27_18_ = v_tail_23_;
v_b_19_ = v___x_24_;
goto _start;
}
else
{
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_29_, lean_object* v_b_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_29_, v_b_30_);
lean_dec(v_as_x27_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_cognitive_x2dleakage_main___closed__0));
v___x_37_ = lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(v___x_36_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; 
lean_dec_ref_known(v___x_37_, 1);
v___x_38_ = ((lean_object*)(lp_cognitive_x2dleakage_main___closed__1));
v___x_39_ = lp_cognitive_x2dleakage_IO_println___at___00main_spec__0(v___x_38_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec_ref_known(v___x_39_, 1);
v___x_40_ = lp_cognitive_x2dleakage_models;
v___x_41_ = lean_box(0);
v___x_42_ = lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg(v___x_40_, v___x_41_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_49_; 
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; 
v_unused_50_ = lean_ctor_get(v___x_42_, 0);
lean_dec(v_unused_50_);
v___x_44_ = v___x_42_;
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
else
{
lean_dec(v___x_42_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_47_; 
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_41_);
v___x_47_ = v___x_44_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_41_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
else
{
return v___x_42_;
}
}
else
{
return v___x_39_;
}
}
else
{
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_main___boxed(lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = _lean_main();
return v_res_52_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_53_, lean_object* v_as_x27_54_, lean_object* v_b_55_, lean_object* v_a_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_54_, v_b_55_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_59_, lean_object* v_as_x27_60_, lean_object* v_b_61_, lean_object* v_a_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_cognitive_x2dleakage_List_forIn_x27_loop___at___00main_spec__1(v_as_59_, v_as_x27_60_, v_b_61_, v_a_62_);
lean_dec(v_as_x27_60_);
lean_dec(v_as_59_);
return v_res_64_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_cognitive_x2dleakage_CognitiveLeakage(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cognitive_x2dleakage_Main(uint8_t builtin) {
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
res = initialize_cognitive_x2dleakage_CognitiveLeakage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    return _lean_main();
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_cognitive_x2dleakage_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = 0;
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
