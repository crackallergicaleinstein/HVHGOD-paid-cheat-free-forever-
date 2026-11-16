// FUN_18062e8f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062e8f8 */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_18061f698();
  if (((DAT_1808d7cc0 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    __acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180bb2038);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}



