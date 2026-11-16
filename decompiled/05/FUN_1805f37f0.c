// FUN_1805f37f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f37f0 */

longlong * FUN_1805f37f0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  bVar1 = *(byte *)(param_2[5] + 2 + param_2[4] * 4);
  iVar4 = *(int *)(&DAT_1806891f0 + (ulonglong)bVar1 * 4);
  bVar2 = *(byte *)(param_2[9] + 2 + param_2[8] * 4);
  uVar12 = 0;
  iVar5 = *(int *)(&DAT_1806892d0 + (ulonglong)bVar2 * 4);
  bVar3 = *(byte *)(param_2[7] + 2 + param_2[6] * 4);
  if (bVar3 == 0) {
    uVar10 = 0;
LAB_1805f388e:
    uVar9 = 1 - uVar10;
    if (bVar1 != 0 || 1 < uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 == 0) {
      uVar10 = param_2[10];
      goto LAB_1805f38e9;
    }
    uVar10 = param_2[uVar9 + 10];
    if (uVar9 != 1) {
      param_2[0xc] = param_2[0xb];
    }
  }
  else {
    lVar7 = param_2[1];
    *(uint *)(param_2 + 1) = (int)lVar7 + (uint)bVar3;
    uVar10 = (((ulonglong)(*param_2 << ((byte)lVar7 & 0x3f)) >> 1) >> (~bVar3 & 0x3f)) +
             (ulonglong)*(uint *)(&DAT_1806895f0 + (ulonglong)bVar3 * 4);
    if (bVar3 < 2) goto LAB_1805f388e;
    param_2[0xc] = param_2[0xb];
  }
  param_2[0xb] = param_2[10];
  param_2[10] = uVar10;
LAB_1805f38e9:
  plVar11 = param_2 + 1;
  param_1[2] = uVar10;
  if (bVar2 < 0x20) {
    uVar10 = 0;
  }
  else {
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)lVar7 + iVar5;
    uVar10 = ((ulonglong)(*param_2 << ((byte)lVar7 & 0x3f)) >> 1) >> (~(byte)iVar5 & 0x3f);
  }
  param_1[1] = *(uint *)(&DAT_180689510 + (ulonglong)bVar2 * 4) + uVar10;
  if (0xf < bVar1) {
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)lVar7 + iVar4;
    uVar12 = ((ulonglong)(*param_2 << ((byte)lVar7 & 0x3f)) >> 1) >> (~(byte)iVar4 & 0x3f);
  }
  *param_1 = *(uint *)(&DAT_180689480 + (ulonglong)bVar1 * 4) + uVar12;
  if (0x1f < (uint)bVar3 + iVar5 + iVar4) {
    FUN_1805e9920(param_2);
  }
  lVar7 = *param_2;
  uVar6 = *(uint *)(param_2[5] + param_2[4] * 4);
  lVar8 = *plVar11;
  *(uint *)plVar11 = (int)lVar8 + (uVar6 >> 0x18);
  param_2[4] = (((ulonglong)(lVar7 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  uVar6 = *(uint *)(param_2[9] + param_2[8] * 4);
  lVar8 = *plVar11;
  *(uint *)plVar11 = (int)lVar8 + (uVar6 >> 0x18);
  param_2[8] = (((ulonglong)(lVar7 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  uVar6 = *(uint *)(param_2[7] + param_2[6] * 4);
  lVar8 = *plVar11;
  *(uint *)plVar11 = (int)lVar8 + (uVar6 >> 0x18);
  param_2[6] = (((ulonglong)(lVar7 << ((byte)lVar8 & 0x3f)) >> 1) >> (~(byte)(uVar6 >> 0x18) & 0x3f)
               ) + (ulonglong)(uVar6 & 0xffff);
  return param_1;
}



