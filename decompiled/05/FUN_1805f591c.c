// FUN_1805f591c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f591c */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptCloseAlgorithmProvider(hAlgorithm,dwFlags);
  return NVar1;
}



