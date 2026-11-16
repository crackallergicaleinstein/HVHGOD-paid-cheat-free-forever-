// FUN_1805a40e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a40e0 */

ulonglong FUN_1805a40e0(longlong param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar6 = *(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1a4);
  lVar2 = *(longlong *)(param_1 + 0x1e8);
  uVar3 = FUN_1805788b0(lVar2,iVar6 * param_2 + *(int *)(param_1 + 0x1c0) +
                              *(int *)(param_1 + 0x1a0));
  if ((int)uVar3 == 0) {
    uVar3 = FUN_180577bf0(lVar2,iVar6 * 2);
    uVar7 = uVar3 & 0xffffffff;
    if ((int)uVar3 == 0) {
      uVar4 = 0;
      pbVar9 = *(byte **)(lVar2 + 0x38);
      uVar5 = 0;
      for (iVar6 = *(int *)(param_1 + 0x1a4); iVar6 != 0; iVar6 = iVar6 + -1) {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar1;
      }
      iVar6 = *(int *)(param_1 + 0x1a8);
      uVar8 = 0;
      iVar10 = iVar6;
      if (iVar6 != 0) {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar8 = uVar8 << 8 | (uint)bVar1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pbVar9 = pbVar9 + *(uint *)(param_1 + 0x1a4);
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar4 = uVar4 << 8 | (uint)bVar1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar5;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar8;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar4;
      }
      uVar3 = 9;
      if (((uVar5 < *(uint *)(param_1 + 0x1b0)) && (uVar4 <= *(uint *)(lVar2 + 8))) &&
         (uVar3 = uVar7, uVar4 < uVar8)) {
        uVar3 = 9;
      }
      FUN_180577d30(lVar2);
    }
  }
  return uVar3;
}



