// FUN_18061b814 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b814 */

/* Library Function - Single Match
    _lock_locales
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _lock_locales(void)

{
  FUN_180621d30();
                    /* WARNING: Could not recover jumptable at 0x00018061b828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180bb1e70);
  return;
}



