// FUN_1805f5904 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5904 */

NTSTATUS __stdcall
BCryptOpenAlgorithmProvider
          (BCRYPT_ALG_HANDLE *phAlgorithm,LPCWSTR pszAlgId,LPCWSTR pszImplementation,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f5904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptOpenAlgorithmProvider(phAlgorithm,pszAlgId,pszImplementation,dwFlags);
  return NVar1;
}



