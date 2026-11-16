// FUN_180187210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180187210 */

undefined8 FUN_180187210(undefined8 param_1,byte param_2)

{
  DWORD DVar1;
  LPCWSTR lpFileName;
  undefined1 local_28 [32];
  
  lpFileName = (LPCWSTR)FUN_180186ef0(local_28,param_1);
  if (7 < *(ulonglong *)(lpFileName + 0xc)) {
    lpFileName = *(LPCWSTR *)lpFileName;
  }
  DVar1 = GetFileAttributesW(lpFileName);
  FUN_18015b930(local_28);
  if (((DVar1 == 0xffffffff) || ((DVar1 >> 10 & 1) != 0)) || (((byte)(DVar1 >> 4) & 1) != param_2))
  {
    return 0;
  }
  return 1;
}



