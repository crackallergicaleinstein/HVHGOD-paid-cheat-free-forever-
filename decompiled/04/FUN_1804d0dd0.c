// FUN_1804d0dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d0dd0 */

longlong FUN_1804d0dd0(int *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = param_1[1];
  lVar6 = param_2 - *(longlong *)(param_1 + 2) >> 4;
  if (*param_1 == iVar3) {
    iVar4 = *param_1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_1804aec70(param_1,iVar4);
  }
  if (lVar6 < *param_1) {
    lVar5 = lVar6 * 0x10 + *(longlong *)(param_1 + 2);
    FUN_18063aed0(lVar5 + 0x10,lVar5,(*param_1 - lVar6) * 0x10);
  }
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + lVar6 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  *param_1 = *param_1 + 1;
  return *(longlong *)(param_1 + 2) + lVar6 * 0x10;
}



