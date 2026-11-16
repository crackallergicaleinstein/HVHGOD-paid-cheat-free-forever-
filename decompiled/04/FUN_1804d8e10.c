// FUN_1804d8e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d8e10 */

void FUN_1804d8e10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < (int)param_1[0x23]) {
    FUN_1804e19a0(param_1 + 0x22,param_1);
  }
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804d1630(param_1,iVar2);
  }
  *param_1 = 0;
  iVar1 = param_1[5];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804d1090(param_1 + 4,iVar2);
  }
  param_1[4] = 0;
  iVar1 = param_1[9];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804d0cf0(param_1 + 8,iVar2);
  }
  param_1[8] = 0;
  param_1[0xc] = *(undefined4 *)(*(longlong *)(param_1 + 0xe) + 0x38);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_1[0x29];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804aec70(param_1 + 0x28,iVar2);
  }
  param_1[0x28] = 0;
  iVar1 = param_1[0x2d];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804aec70(param_1 + 0x2c,iVar2);
  }
  param_1[0x2c] = 0;
  FUN_1804d0b60(param_1 + 0x30,0);
  *(undefined2 *)(param_1 + 0x37) = 0;
  iVar1 = param_1[0x15];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804d0a80(param_1 + 0x14,iVar2);
  }
  param_1[0x14] = 0;
  param_1[0x22] = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  param_1[0x23] = 1;
  FUN_1804d15b0(param_1,&local_58);
  return;
}



