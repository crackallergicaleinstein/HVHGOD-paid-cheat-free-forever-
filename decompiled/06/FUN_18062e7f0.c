// FUN_18062e7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062e7f0 */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1806b03d0)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    FUN_180621380(param_1);
  }
  return;
}



