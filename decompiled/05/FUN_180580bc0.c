// FUN_180580bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580bc0 */

void FUN_180580bc0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar5 = 0x10;
  if (param_3 != 0) {
    lVar5 = 0x14;
  }
  iVar1 = *(int *)(lVar5 + param_2);
  lVar5 = 8;
  if (param_3 != 0) {
    lVar5 = 0xc;
  }
  iVar2 = *(int *)(lVar5 + param_2);
  lVar5 = (longlong)iVar2;
  piVar9 = (int *)((longlong)param_3 * 0x1c4 + 0x44 + param_1);
  if ((piVar9[0x6f] != iVar2) || (piVar9[0x70] != iVar1)) {
    uVar10 = 0;
    piVar9[0x6f] = iVar2;
    piVar9[0x70] = iVar1;
    *piVar9 = iVar2;
    piVar9[1] = iVar1;
    if (piVar9[0x36] != 0) {
      do {
        iVar4 = piVar9[uVar10 * 7 + 0x37];
        iVar3 = piVar9[uVar10 * 7 + 0x3a];
        piVar9[uVar10 * 7 + 0x3d] = piVar9[uVar10 * 7 + 0x3d] & 0xfffffffe;
        lVar8 = iVar4 * lVar5;
        iVar11 = (int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) + iVar1;
        piVar9[uVar10 * 7 + 0x39] = iVar11;
        piVar9[(uVar10 + 8) * 7] = iVar11;
        lVar8 = (iVar4 - iVar3) * lVar5;
        iVar4 = (int)((ulonglong)((iVar3 * lVar5 >> 0x3f) + 0x8000 + iVar3 * lVar5) >> 0x10) + iVar1
        ;
        piVar9[uVar10 * 7 + 0x3b] = iVar4;
        piVar9[uVar10 * 7 + 0x3c] = iVar4;
        if ((int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10) + 0x30U < 0x61) {
          uVar6 = iVar11 + 0x20U & 0xffffffc0;
          piVar9[uVar10 * 7 + 0x39] = uVar6;
          iVar11 = FUN_180573310(uVar6,iVar2);
          iVar11 = iVar11 - iVar3;
          iVar4 = -iVar11;
          if (-iVar11 < 0) {
            iVar4 = iVar11;
          }
          iVar4 = (int)((ulonglong)(iVar4 * lVar5 + 0x8000 + (iVar4 * lVar5 >> 0x3f)) >> 0x10);
          if (iVar4 < 0x20) {
            uVar6 = 0;
          }
          else {
            uVar6 = iVar4 + 0x20U & 0xffffffc0;
          }
          uVar7 = -uVar6;
          if (-1 < iVar11) {
            uVar7 = uVar6;
          }
          piVar9[uVar10 * 7 + 0x3d] = piVar9[uVar10 * 7 + 0x3d] | 1;
          piVar9[uVar10 * 7 + 0x3c] = piVar9[uVar10 * 7 + 0x39] - uVar7;
        }
        uVar6 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar6;
      } while (uVar6 < (uint)piVar9[0x36]);
    }
  }
  return;
}



