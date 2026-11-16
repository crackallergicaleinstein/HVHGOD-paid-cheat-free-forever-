// FUN_1804c1830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1830 */

void FUN_1804c1830(char param_1)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = DAT_180bb8ae8;
  uVar3 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
  if ((uVar3 & 0x40) == 0) {
    if (param_1 == '\0') goto LAB_1804c1878;
    pfVar1 = (float *)(DAT_180bb8ae8 + 0xc84);
    *(float *)(DAT_180bb8ae8 + 0x26a4) = *pfVar1;
    *(float *)(lVar4 + 0xc84) = *pfVar1 * *(float *)(lVar4 + 0xc88);
  }
  *(uint *)(lVar4 + 0x1e80) = uVar3 | 0x40;
LAB_1804c1878:
  piVar2 = (int *)(lVar4 + 0x1fd8);
  iVar5 = *(int *)(lVar4 + 0x1fdc);
  if (*piVar2 == iVar5) {
    iVar6 = *piVar2 + 1;
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_1804d14d0(piVar2,iVar6);
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0x1fe0) + (longlong)*piVar2 * 4) =
       *(undefined4 *)(lVar4 + 0x1e80);
  *piVar2 = *piVar2 + 1;
  *(short *)(lVar4 + 0x26a8) = *(short *)(lVar4 + 0x26a8) + 1;
  return;
}



