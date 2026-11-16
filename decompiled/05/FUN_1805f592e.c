// FUN_1805f592e - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f592e */

NTSTATUS __stdcall
BCryptSetProperty(BCRYPT_HANDLE hObject,LPCWSTR pszProperty,PUCHAR pbInput,ULONG cbInput,
                 ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001805f592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptSetProperty(hObject,pszProperty,pbInput,cbInput,dwFlags);
  return NVar1;
}



