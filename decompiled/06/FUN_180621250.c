// FUN_180621250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621250 */

void FUN_180621250(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180bb2038)[param_3]) && ((DAT_1808d7cc0 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}



