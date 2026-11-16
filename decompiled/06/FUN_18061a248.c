// FUN_18061a248 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061a248 */

/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      uVar1 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_180621380(0);
      return uVar1;
    }
  }
  return 0;
}



