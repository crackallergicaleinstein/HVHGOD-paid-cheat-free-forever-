// FUN_1805fae9c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fae9c */

undefined8 FUN_1805fae9c(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  DWORD DStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    DStack_14 = GetLastError();
  }
  else {
    DStack_14 = 0;
  }
  return CONCAT44(DStack_14,iVar1);
}



