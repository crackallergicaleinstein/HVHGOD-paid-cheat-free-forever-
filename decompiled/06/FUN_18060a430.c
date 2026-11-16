// FUN_18060a430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060a430 */

/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18060a2e0(0,"FlsAlloc",&DAT_1806adf90,"FlsAlloc");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018060a46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsAlloc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



