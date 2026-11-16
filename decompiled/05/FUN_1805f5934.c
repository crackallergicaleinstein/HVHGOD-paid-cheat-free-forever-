// FUN_1805f5934 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5934 */

NTSTATUS __stdcall
BCryptGenerateSymmetricKey
          (BCRYPT_ALG_HANDLE hAlgorithm,BCRYPT_KEY_HANDLE *phKey,PUCHAR pbKeyObject,
          ULONG cbKeyObject,PUCHAR pbSecret,ULONG cbSecret,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f5934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptGenerateSymmetricKey
                    (hAlgorithm,phKey,pbKeyObject,cbKeyObject,pbSecret,cbSecret,dwFlags);
  return NVar1;
}



