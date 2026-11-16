// FUN_18036bda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036bda0 */

ulonglong FUN_18036bda0(LPCWSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined1 local_28 [32];
  
  puVar3 = (undefined8 *)FUN_1801bdad0(param_1,local_28);
  if (7 < (ulonglong)puVar3[3]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  iVar1 = FUN_180615da0(puVar3,L".vtex_c");
  uVar4 = FUN_18015b930(local_28);
  if (iVar1 == 0) {
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(LPCWSTR *)param_1;
    }
    DVar2 = GetFileAttributesW(param_1);
    uVar4 = CONCAT44(extraout_var,DVar2);
    if ((DVar2 != 0xffffffff) && ((DVar2 & 0x410) == 0)) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



