// FUN_1805f593a - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f593a */

NTSTATUS __stdcall
BCryptEncrypt(BCRYPT_KEY_HANDLE hKey,PUCHAR pbInput,ULONG cbInput,void *pPaddingInfo,PUCHAR pbIV,
             ULONG cbIV,PUCHAR pbOutput,ULONG cbOutput,ULONG *pcbResult,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f593a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptEncrypt(hKey,pbInput,cbInput,pPaddingInfo,pbIV,cbIV,pbOutput,cbOutput,pcbResult,
                        dwFlags);
  return NVar1;
}



