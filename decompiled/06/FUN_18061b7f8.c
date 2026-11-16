// FUN_18061b7f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b7f8 */

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018061b80a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180bb1dd0 + (longlong)param_1 * 0x28));
  return;
}



