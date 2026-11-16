// FUN_1804c2f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2f10 */

short * FUN_1804c2f10(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  lVar3 = DAT_180bb8ae8;
  uVar8 = param_1 & 0xf000;
  uVar5 = param_1 & 0xffff0fff;
  if ((param_1 & 0xffff0fff) == 0) {
    if (uVar8 == 0x1000) {
      uVar5 = 0x297;
    }
    else if (uVar8 == 0x2000) {
      uVar5 = 0x298;
    }
    else if (uVar8 == 0x4000) {
      uVar5 = 0x299;
    }
    else {
      uVar5 = uVar8;
      if (uVar8 == 0x8000) {
        uVar5 = 0x29a;
      }
    }
  }
  lVar9 = (longlong)(int)uVar5;
  sVar4 = *(short *)(DAT_180bb8ae8 + 0x1918 + lVar9 * 2);
  if (sVar4 != -1) {
    do {
      psVar7 = (short *)((longlong)sVar4 * 0x10 + *(longlong *)(DAT_180bb8ae8 + 0x1e58));
      if ((ushort)psVar7[1] == uVar8) {
        return psVar7;
      }
      sVar4 = *psVar7;
    } while (sVar4 != -1);
  }
  piVar1 = (int *)(DAT_180bb8ae8 + 0x1e50);
  iVar6 = *(int *)(DAT_180bb8ae8 + 0x1e54);
  sVar4 = *(short *)piVar1;
  if (*piVar1 == iVar6) {
    iVar10 = *piVar1 + 1;
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    if (iVar10 < iVar6) {
      iVar10 = iVar6;
    }
    FUN_1804aec70(piVar1,iVar10);
  }
  iVar6 = *piVar1;
  lVar2 = *(longlong *)(lVar3 + 0x1e58);
  *(undefined8 *)(lVar2 + (longlong)iVar6 * 0x10) = 0xffff;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar6 * 0x10) = 0xffffffffffffffff;
  *piVar1 = *piVar1 + 1;
  psVar7 = (short *)(*(longlong *)(lVar3 + 0x1e58) + (longlong)sVar4 * 0x10);
  psVar7[1] = (short)uVar8;
  *psVar7 = *(short *)(lVar3 + 0x1918 + lVar9 * 2);
  *(short *)(lVar3 + 0x1918 + lVar9 * 2) = sVar4;
  return psVar7;
}



