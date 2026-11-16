// FUN_18060a478 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a478 */

/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(DWORD param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18060a2e0(1,"FlsFree",&DAT_1806adfa8,"FlsFree");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018060a4b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsFree(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



