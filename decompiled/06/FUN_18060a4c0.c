// FUN_18060a4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a4c0 */

/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsGetValue(DWORD param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18060a2e0(2,"FlsGetValue",&DAT_1806adfb8,"FlsGetValue");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018060a4ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsGetValue(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



