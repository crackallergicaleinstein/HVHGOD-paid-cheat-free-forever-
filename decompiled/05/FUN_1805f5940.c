// FUN_1805f5940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5940 */

NTSTATUS __stdcall
BCryptDecrypt(BCRYPT_KEY_HANDLE hKey,PUCHAR pbInput,ULONG cbInput,void *pPaddingInfo,PUCHAR pbIV,
             ULONG cbIV,PUCHAR pbOutput,ULONG cbOutput,ULONG *pcbResult,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f5940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptDecrypt(hKey,pbInput,cbInput,pPaddingInfo,pbIV,cbIV,pbOutput,cbOutput,pcbResult,
                        dwFlags);
  return NVar1;
}



