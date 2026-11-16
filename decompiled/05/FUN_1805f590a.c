// FUN_1805f590a - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f590a */

NTSTATUS __stdcall
BCryptCreateHash(BCRYPT_ALG_HANDLE hAlgorithm,BCRYPT_HASH_HANDLE *phHash,PUCHAR pbHashObject,
                ULONG cbHashObject,PUCHAR pbSecret,ULONG cbSecret,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f590a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptCreateHash(hAlgorithm,phHash,pbHashObject,cbHashObject,pbSecret,cbSecret,dwFlags);
  return NVar1;
}



