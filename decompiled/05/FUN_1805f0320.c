// FUN_1805f0320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f0320 */

void FUN_1805f0320(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  bVar1 = *(byte *)(param_2[5] + 2 + param_2[4] * 4);
  iVar4 = *(int *)(&DAT_180688d90 + (ulonglong)bVar1 * 4);
  bVar2 = *(byte *)(param_2[9] + 2 + param_2[8] * 4);
  uVar10 = 0;
  iVar5 = *(int *)(&DAT_180688e70 + (ulonglong)bVar2 * 4);
  bVar3 = *(byte *)(param_2[7] + 2 + param_2[6] * 4);
  if (bVar3 == 0) {
    uVar7 = 0;
LAB_1805f03ba:
    if ((bVar1 == 0) && (uVar7 < 2)) {
      uVar7 = 1 - uVar7;
    }
    if (uVar7 == 0) {
      lVar9 = param_2[10];
      goto LAB_1805f0413;
    }
    lVar9 = param_2[uVar7 + 10];
    if (uVar7 != 1) {
      param_2[0xc] = param_2[0xb];
    }
    lVar8 = param_2[10];
    param_2[10] = lVar9;
  }
  else {
    lVar9 = param_2[1];
    *(uint *)(param_2 + 1) = (int)lVar9 + (uint)bVar3;
    uVar7 = (ulonglong)*(uint *)(&DAT_180688ca0 + (ulonglong)bVar3 * 4) +
            (((ulonglong)(*param_2 << ((byte)lVar9 & 0x3f)) >> 1) >> (~bVar3 & 0x3f));
    if (uVar7 < 3) goto LAB_1805f03ba;
    lVar9 = uVar7 - 2;
    param_2[0xc] = param_2[0xb];
    lVar8 = param_2[10];
    param_2[10] = lVar9;
  }
  param_2[0xb] = lVar8;
LAB_1805f0413:
  param_1[2] = lVar9;
  if (bVar2 < 0x20) {
    uVar7 = 0;
  }
  else {
    lVar9 = param_2[1];
    *(int *)(param_2 + 1) = (int)lVar9 + iVar5;
    uVar7 = ((ulonglong)(*param_2 << ((byte)lVar9 & 0x3f)) >> 1) >> (~(byte)iVar5 & 0x3f);
  }
  param_1[1] = (*(int *)(&DAT_180688bc0 + (ulonglong)bVar2 * 4) + 3) + uVar7;
  if (0xf < bVar1) {
    lVar9 = param_2[1];
    *(int *)(param_2 + 1) = (int)lVar9 + iVar4;
    uVar10 = ((ulonglong)(*param_2 << ((byte)lVar9 & 0x3f)) >> 1) >> (~(byte)iVar4 & 0x3f);
  }
  *param_1 = *(uint *)(&DAT_180688b30 + (ulonglong)bVar1 * 4) + uVar10;
  if (0x1f < (uint)bVar3 + iVar5 + iVar4) {
    FUN_1805e9920(param_2);
  }
  lVar9 = *param_2;
  uVar6 = *(uint *)(param_2[5] + param_2[4] * 4);
  lVar8 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar8 + (uVar6 >> 0x18);
  param_2[4] = (((ulonglong)(lVar9 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  uVar6 = *(uint *)(param_2[9] + param_2[8] * 4);
  lVar8 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar8 + (uVar6 >> 0x18);
  param_2[8] = (((ulonglong)(lVar9 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  uVar6 = *(uint *)(param_2[7] + param_2[6] * 4);
  lVar8 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar8 + (uVar6 >> 0x18);
  param_2[6] = (((ulonglong)(lVar9 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  return;
}



