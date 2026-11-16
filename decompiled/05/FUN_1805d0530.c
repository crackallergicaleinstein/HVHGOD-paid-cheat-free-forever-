// FUN_1805d0530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d0530 */

void FUN_1805d0530(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  
  uVar8 = *(uint *)(param_1 + 0x4c);
  iVar11 = (int)uVar8 >> 8;
  iVar17 = (int)param_3 >> 8;
  if (((*(int *)(param_1 + 0x1c) <= iVar11) && (*(int *)(param_1 + 0x1c) <= iVar17)) ||
     ((iVar11 < *(int *)(param_1 + 0x18) && (iVar17 < *(int *)(param_1 + 0x18))))) {
    *(uint *)(param_1 + 0x4c) = param_3;
    *(uint *)(param_1 + 0x48) = param_2;
    return;
  }
  uVar18 = *(uint *)(param_1 + 0x48);
  iVar7 = (int)param_2 >> 8;
  iVar9 = (int)uVar18 >> 8;
  iVar12 = param_2 - uVar18;
  iVar5 = param_3 - uVar8;
  uVar18 = uVar18 & 0xff;
  uVar19 = (ulonglong)uVar18;
  uVar14 = (ulonglong)(byte)uVar8;
  uVar8 = uVar8 & 0xff;
  if ((iVar9 != iVar7) || (iVar11 != iVar17)) {
    if (iVar5 == 0) {
      FUN_1805d0860(param_1,iVar7,iVar17);
      goto LAB_1805d0839;
    }
    if (iVar12 == 0) {
      if (iVar5 < 1) {
        do {
          iVar11 = iVar11 + -1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + -(int)uVar14;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + -(int)uVar14 * uVar18 * 2;
          uVar14 = 0x100;
          FUN_1805d0860(param_1,iVar9,iVar11);
          uVar8 = (uint)uVar14;
        } while (iVar11 != iVar17);
      }
      else {
        do {
          iVar5 = (int)uVar14;
          iVar11 = iVar11 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + (0x100 - iVar5);
          uVar14 = 0;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + (0x100 - iVar5) * uVar18 * 2;
          FUN_1805d0860(param_1,iVar9,iVar11);
          uVar8 = (uint)uVar14;
        } while (iVar11 != iVar17);
      }
    }
    else {
      if (iVar9 == iVar7) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0xffffffff / (longlong)iVar12;
      }
      if (iVar11 == iVar17) {
        lVar4 = 0;
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = SUB168(SEXT816(0xffffffff),8);
        lVar4 = SUB168((auVar2 << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar5),0);
      }
      lVar16 = (longlong)(iVar12 * 0x100);
      lVar15 = (longlong)(iVar5 * 0x100);
      lVar10 = uVar14 * (longlong)iVar12 - uVar19 * (longlong)iVar5;
      do {
        lVar13 = lVar10 - lVar16;
        iVar12 = (int)uVar19;
        iVar5 = (int)uVar14;
        if ((lVar13 < 1) || (0 < lVar10)) {
          lVar6 = (lVar15 - lVar16) + lVar10;
          if ((lVar6 < 1) || (0 < lVar13)) {
            lVar13 = lVar15 + lVar10;
            if ((lVar13 < 0) || (0 < lVar6)) {
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
              *piVar1 = *piVar1 + -iVar5;
              lVar13 = lVar10 + lVar16;
              uVar19 = (ulonglong)-(lVar4 * lVar10) >> 0x20;
              uVar14 = 0x100;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
              *piVar1 = *piVar1 + ((int)((ulonglong)-(lVar4 * lVar10) >> 0x20) + iVar12) * -iVar5;
              iVar11 = iVar11 + -1;
            }
            else {
              uVar8 = (uint)((ulonglong)(lVar13 * lVar3) >> 0x20);
              iVar5 = uVar8 - iVar5;
              uVar14 = (ulonglong)uVar8;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
              *piVar1 = *piVar1 + iVar5;
              uVar19 = 0;
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
              *piVar1 = *piVar1 + (iVar12 + 0x100) * iVar5;
              iVar9 = iVar9 + 1;
            }
          }
          else {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
            *piVar1 = *piVar1 + (0x100 - iVar5);
            uVar14 = 0;
            uVar19 = (ulonglong)-(lVar13 * lVar4) >> 0x20;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
            *piVar1 = *piVar1 + ((int)((ulonglong)-(lVar13 * lVar4) >> 0x20) + iVar12) *
                                (0x100 - iVar5);
            iVar11 = iVar11 + 1;
          }
        }
        else {
          lVar13 = lVar10 - lVar15;
          uVar8 = (uint)((ulonglong)(lVar3 * lVar10) >> 0x20);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
          *piVar1 = *piVar1 + (uVar8 - iVar5);
          uVar14 = (ulonglong)uVar8;
          uVar19 = 0x100;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
          *piVar1 = *piVar1 + (uVar8 - iVar5) * iVar12;
          iVar9 = iVar9 + -1;
        }
        uVar18 = (uint)uVar19;
        FUN_1805d0860(param_1,iVar9,iVar11);
        uVar8 = (uint)uVar14;
        lVar10 = lVar13;
      } while ((iVar9 != iVar7) || (iVar11 != iVar17));
    }
  }
  iVar11 = (param_3 & 0xff) - uVar8;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
  *piVar1 = *piVar1 + iVar11;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
  *piVar1 = *piVar1 + ((param_2 & 0xff) + uVar18) * iVar11;
LAB_1805d0839:
  *(uint *)(param_1 + 0x4c) = param_3;
  *(uint *)(param_1 + 0x48) = param_2;
  return;
}



