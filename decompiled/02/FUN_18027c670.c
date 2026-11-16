// FUN_18027c670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c670 */

short FUN_18027c670(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  short *psVar8;
  short sVar9;
  short sVar10;
  ulonglong uVar11;
  short local_38 [4];
  undefined *local_30;
  
  uVar11 = 0xffffffffffffffff;
  iVar3 = DAT_180c651c8;
  if (DAT_180c651c8 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c651c0) {
      iVar3 = 0;
    }
    else {
      local_30 = &DAT_1808f1fb0;
      iVar3 = FUN_1805f68d0(&DAT_1808f1fb0);
      if (iVar3 != 0) goto LAB_18027c9a9;
      if (DAT_1808f1ffc == 0x7fffffff) {
        DAT_1808f1ffc = 0x7ffffffe;
        goto LAB_18027c99e;
      }
      if ((DAT_180c651c8 == 0) && (DAT_180c651c0 <= UVar6)) {
        DAT_180c651c8 = FUN_1804174b0("C_EconEntity",0x537b0586);
        if (DAT_180c651c8 == 0) {
          DAT_180c651c0 = UVar6 + 1000;
        }
        else {
          DAT_180c651c0 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c651c8;
      FUN_1805f68fc(&DAT_1808f1fb0);
    }
  }
  iVar4 = DAT_180c651b0;
  if (DAT_180c651b0 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c651b8) {
      iVar4 = 0;
    }
    else {
      local_30 = &DAT_1808f2000;
      iVar4 = FUN_1805f68d0(&DAT_1808f2000);
      if (iVar4 != 0) goto LAB_18027c9a9;
      if (DAT_1808f204c == 0x7fffffff) {
        DAT_1808f204c = 0x7ffffffe;
        goto LAB_18027c99e;
      }
      if ((DAT_180c651b0 == 0) && (DAT_180c651b8 <= UVar6)) {
        DAT_180c651b0 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
        if (DAT_180c651b0 == 0) {
          DAT_180c651b8 = UVar6 + 1000;
        }
        else {
          DAT_180c651b8 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c651b0;
      FUN_1805f68fc(&DAT_1808f2000);
    }
  }
  iVar5 = DAT_180c651a8;
  if (DAT_180c651a8 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c651a0) {
      iVar5 = 0;
    }
    else {
      local_30 = &DAT_1808f1f60;
      iVar5 = FUN_1805f68d0(&DAT_1808f1f60);
      if (iVar5 != 0) {
LAB_18027c9a9:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f1fac == 0x7fffffff) {
        DAT_1808f1fac = 0x7ffffffe;
LAB_18027c99e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c651a8 == 0) && (DAT_180c651a0 <= UVar6)) {
        DAT_180c651a8 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c651a8 == 0) {
          uVar11 = UVar6 + 1000;
        }
        DAT_180c651a0 = uVar11;
      }
      iVar5 = DAT_180c651a8;
      FUN_1805f68fc(&DAT_1808f1f60);
    }
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  lVar7 = (longlong)iVar5 + (longlong)iVar3 + iVar4 + param_1;
  if (lVar7 == 0) {
    bVar1 = false;
  }
  else {
    local_38[0] = 0;
    cVar2 = FUN_1804514f0(local_38,lVar7,2);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  sVar9 = local_38[0];
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (bVar1) {
    if ((sVar9 == 0x3b) || (sVar10 = sVar9, (ushort)(sVar9 - 500U) < 0x1b)) {
      sVar10 = 0x2a;
    }
  }
  else {
    sVar9 = 0;
    sVar10 = 0;
  }
  uVar11 = 0;
  psVar8 = &DAT_1806ff3e8;
  do {
    if (*psVar8 == sVar10) {
      if (-1 < (int)uVar11) {
        return sVar9;
      }
      break;
    }
    uVar11 = uVar11 + 1;
    psVar8 = psVar8 + 0x10;
  } while (uVar11 < 0x2c);
  uVar11 = 0;
  do {
    if ((&DAT_1807d0b40)[uVar11] == param_2) {
      return (&DAT_1806ff3e8)[uVar11 * 0x10];
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x2c);
  return 0;
}



