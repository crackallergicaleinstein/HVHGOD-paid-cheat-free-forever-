// FUN_18061b798 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b798 */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018061b7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1dd0 + (longlong)param_1 * 0x28));
  return;
}



