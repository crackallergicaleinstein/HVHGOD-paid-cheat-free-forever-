// FUN_18062e828 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062e828 */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_1806b03d0)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



