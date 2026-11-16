// FUN_1805f5952 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5952 */

NTSTATUS __stdcall
BCryptVerifySignature
          (BCRYPT_KEY_HANDLE hKey,void *pPaddingInfo,PUCHAR pbHash,ULONG cbHash,PUCHAR pbSignature,
          ULONG cbSignature,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f5952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptVerifySignature(hKey,pPaddingInfo,pbHash,cbHash,pbSignature,cbSignature,dwFlags);
  return NVar1;
}



