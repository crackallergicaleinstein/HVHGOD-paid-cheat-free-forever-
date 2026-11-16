// FUN_1804e6490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6490 */

longlong FUN_1804e6490(longlong param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  iVar10 = 0;
  iVar2 = *(int *)(lVar3 + 0xc0);
  do {
    lVar8 = 0;
    lVar7 = 0;
    uVar9 = 0;
    if (iVar2 < 4) {
      if (0 < iVar2) {
        lVar6 = *(longlong *)(lVar3 + 0xd0);
        goto LAB_1804e66e2;
      }
    }
    else {
      lVar6 = *(longlong *)(lVar3 + 0xd0);
      uVar5 = 2;
      do {
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar9 >> 5) * 8) +
                (ulonglong)(uVar9 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar10 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar8 == 0 || (fVar1 < *(float *)(lVar8 + 0x14))))) {
            lVar8 = lVar4;
          }
          if ((fVar1 < param_3) && ((lVar7 == 0 || (*(float *)(lVar7 + 0x14) < fVar1)))) {
            lVar7 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar5 - 1 >> 5) * 8) +
                (ulonglong)(uVar5 - 1 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar10 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar8 == 0 || (fVar1 < *(float *)(lVar8 + 0x14))))) {
            lVar8 = lVar4;
          }
          if ((fVar1 < param_3) && ((lVar7 == 0 || (*(float *)(lVar7 + 0x14) < fVar1)))) {
            lVar7 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 5) * 8) +
                (ulonglong)(uVar5 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar10 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar8 == 0 || (fVar1 < *(float *)(lVar8 + 0x14))))) {
            lVar8 = lVar4;
          }
          if ((fVar1 < param_3) && ((lVar7 == 0 || (*(float *)(lVar7 + 0x14) < fVar1)))) {
            lVar7 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar5 + 1 >> 5) * 8) +
                (ulonglong)(uVar5 + 1 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar10 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar8 == 0 || (fVar1 < *(float *)(lVar8 + 0x14))))) {
            lVar8 = lVar4;
          }
          if ((fVar1 < param_3) && ((lVar7 == 0 || (*(float *)(lVar7 + 0x14) < fVar1)))) {
            lVar7 = lVar4;
          }
        }
        uVar9 = uVar9 + 4;
        uVar5 = uVar5 + 4;
      } while ((int)uVar9 < iVar2 + -3);
      for (; (int)uVar9 < iVar2; uVar9 = uVar9 + 1) {
LAB_1804e66e2:
        lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar9 >> 5) * 8) +
                (ulonglong)(uVar9 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar10 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar8 == 0 || (fVar1 < *(float *)(lVar8 + 0x14))))) {
            lVar8 = lVar4;
          }
          if ((fVar1 < param_3) && ((lVar7 == 0 || (*(float *)(lVar7 + 0x14) < fVar1)))) {
            lVar7 = lVar4;
          }
        }
      }
      if (lVar8 != 0) {
        if (lVar7 == 0) {
          return lVar8;
        }
        if (*(float *)(lVar8 + 0x14) < param_3 + param_3) {
          return lVar7;
        }
        if (param_3 * 0.5 < *(float *)(lVar7 + 0x14)) {
          return lVar8;
        }
      }
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    iVar10 = iVar10 + 1;
    if (1 < iVar10) {
      return 0;
    }
  } while( true );
}



