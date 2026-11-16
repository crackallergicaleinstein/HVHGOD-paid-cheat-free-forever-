// FUN_1806313ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806313ec */

/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018063140c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180bb2130)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}



