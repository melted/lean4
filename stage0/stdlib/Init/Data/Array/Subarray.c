// Lean compiler output
// Module: Init.Data.Array.Subarray
// Imports: Init.Data.Array.Basic
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
size_t l_USize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Array_Init_Data_Array_Subarray___instance__1___closed__1;
lean_object* l_Subarray_forIn___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop_match__1(lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Subarray_forInUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray(lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_toSubarray(lean_object*);
lean_object* l_Array_ofSubarray___rarg___boxed(lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___rarg___lambda__1(lean_object*, size_t, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Array_Init_Data_Array_Subarray___instance__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Subarray_forIn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forIn(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Subarray_forInUnsafe_loop_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe_loop_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Subarray_forInUnsafe_loop___rarg___lambda__1(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_7);
return x_10;
}
else
{
lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = 1;
x_13 = x_2 + x_12;
x_14 = l_Subarray_forInUnsafe_loop___rarg(x_1, x_3, x_4, x_5, x_13, x_11);
return x_14;
}
}
}
lean_object* l_Subarray_forInUnsafe_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_array_uget(x_11, x_5);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_3);
x_14 = lean_apply_2(x_3, x_12, x_6);
x_15 = lean_box_usize(x_5);
x_16 = lean_box_usize(x_4);
x_17 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe_loop___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_15);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_3);
lean_closure_set(x_17, 4, x_16);
x_18 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
}
}
lean_object* l_Subarray_forInUnsafe_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe_loop___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Subarray_forInUnsafe_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Subarray_forInUnsafe_loop___rarg___lambda__1(x_1, x_7, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Subarray_forInUnsafe_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Subarray_forInUnsafe_loop___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Subarray_forInUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; size_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = l_Subarray_forInUnsafe_loop___rarg(x_1, x_2, x_4, x_6, x_8, x_3);
return x_9;
}
}
lean_object* l_Subarray_forInUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Subarray_forIn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_2(x_6, lean_box(0), x_3);
return x_7;
}
}
lean_object* l_Subarray_forIn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Subarray_forIn___rarg___boxed), 4, 0);
return x_4;
}
}
lean_object* l_Subarray_forIn___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Subarray_forIn___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_toSubarray___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_le(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = lean_nat_dec_le(x_2, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_inc(x_4);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_4);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_4);
return x_8;
}
}
else
{
uint8_t x_9; 
lean_dec(x_4);
x_9 = lean_nat_dec_le(x_2, x_3);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
lean_inc(x_3);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_3);
lean_ctor_set(x_10, 2, x_3);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_3);
return x_11;
}
}
}
}
lean_object* l_Array_toSubarray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_toSubarray___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_array_uget(x_6, x_3);
x_8 = lean_array_push(x_4, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_ofSubarray___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_nat_sub(x_2, x_3);
x_5 = lean_mk_empty_array_with_capacity(x_4);
lean_dec(x_4);
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_usize_of_nat(x_3);
x_8 = l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg(x_1, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_ofSubarray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_ofSubarray___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Subarray_forInUnsafe_loop___at_Array_ofSubarray___spec__1___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_ofSubarray___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_ofSubarray___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_extract___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Array_toSubarray___rarg(x_1, x_2, x_3);
x_5 = l_Array_ofSubarray___rarg(x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_extract(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_extract___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Array_Init_Data_Array_Subarray___instance__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_ofSubarray___rarg___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Array_Init_Data_Array_Subarray___instance__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_Init_Data_Array_Subarray___instance__1___closed__1;
return x_2;
}
}
lean_object* initialize_Init_Data_Array_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Array_Subarray(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_Init_Data_Array_Subarray___instance__1___closed__1 = _init_l_Array_Init_Data_Array_Subarray___instance__1___closed__1();
lean_mark_persistent(l_Array_Init_Data_Array_Subarray___instance__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
