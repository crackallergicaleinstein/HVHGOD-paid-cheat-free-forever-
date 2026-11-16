// FUN_180573fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573fd0 */

int FUN_180573fd0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = (int)param_1[0x13] + (int)param_1[10] + param_2;
  if (uVar4 <= uVar1) {
    return 0;
  }
  uVar4 = uVar4 + 1 & 0xfffffffe;
  lVar2 = param_1[0xb];
  if (((int)uVar1 < 0) || ((int)uVar4 < 0)) {
    param_1[0xb] = lVar2;
    return 6;
  }
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_180574104;
  }
  if (0x3ffffff < (int)uVar4) {
    param_1[0xb] = lVar2;
    return 10;
  }
  if (uVar1 == 0) {
    lVar3 = (**(code **)(lVar3 + 8))(lVar3,uVar4 << 5);
    iVar5 = 0x40;
    if (lVar3 != 0) goto LAB_180574081;
  }
  else {
    lVar3 = (**(code **)(lVar3 + 0x18))(lVar3,uVar1 << 5,uVar4 << 5,lVar2);
    if (lVar3 == 0) {
      param_1[0xb] = lVar2;
      return 0x40;
    }
LAB_180574081:
    iVar5 = 0;
    if ((int)uVar1 < (int)uVar4) {
      FUN_18063ab10((int)(uVar1 << 5) + lVar3,0,(longlong)(int)((uVar4 - uVar1) * 0x20));
    }
  }
  param_1[0xb] = lVar3;
  if (iVar5 != 0) {
    return iVar5;
  }
  *(uint *)(param_1 + 2) = uVar4;
  if (lVar3 != 0) {
    param_1[0x14] = (ulonglong)*(uint *)(param_1 + 10) * 0x20 + lVar3;
    return 0;
  }
LAB_180574104:
  param_1[0x14] = 0;
  return 0;
}



