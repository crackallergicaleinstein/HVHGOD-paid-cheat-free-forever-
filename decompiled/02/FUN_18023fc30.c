// FUN_18023fc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023fc30 */

short FUN_18023fc30(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  short *psVar10;
  short sVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *local_38 [2];
  
  iVar3 = DAT_180c640a8;
  uVar14 = 0xffffffffffffffff;
  if ((DAT_180c640a8 == 0) && (UVar8 = GetTickCount64(), DAT_180c640a0 <= UVar8)) {
    local_38[0] = &DAT_1808eca70;
    iVar3 = FUN_1805f68d0(&DAT_1808eca70);
    if (iVar3 != 0) goto LAB_18024018d;
    if (DAT_1808ecabc == 0x7fffffff) {
      DAT_1808ecabc = 0x7ffffffe;
      goto LAB_180240182;
    }
    if ((DAT_180c640a8 == 0) && (DAT_180c640a0 <= UVar8)) {
      DAT_180c640a8 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
      if (DAT_180c640a8 == 0) {
        DAT_180c640a0 = UVar8 + 1000;
      }
      else {
        DAT_180c640a0 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c640a8;
    FUN_1805f68fc(&DAT_1808eca70);
  }
  iVar4 = DAT_180c640ac;
  if ((DAT_180c640ac == 0) && (UVar8 = GetTickCount64(), DAT_180c64088 <= UVar8)) {
    local_38[0] = &DAT_1808eca20;
    iVar4 = FUN_1805f68d0(&DAT_1808eca20);
    if (iVar4 != 0) goto LAB_18024018d;
    if (DAT_1808eca6c == 0x7fffffff) {
      DAT_1808eca6c = 0x7ffffffe;
      goto LAB_180240182;
    }
    if ((DAT_180c640ac == 0) && (DAT_180c64088 <= UVar8)) {
      DAT_180c640ac = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
      if (DAT_180c640ac == 0) {
        DAT_180c64088 = UVar8 + 1000;
      }
      else {
        DAT_180c64088 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c640ac;
    FUN_1805f68fc(&DAT_1808eca20);
  }
  iVar5 = DAT_180c64098;
  if ((DAT_180c64098 == 0) && (UVar8 = GetTickCount64(), DAT_180c64090 <= UVar8)) {
    local_38[0] = &DAT_1808ec980;
    iVar5 = FUN_1805f68d0(&DAT_1808ec980);
    if (iVar5 != 0) goto LAB_18024018d;
    if (DAT_1808ec9cc == 0x7fffffff) {
      DAT_1808ec9cc = 0x7ffffffe;
      goto LAB_180240182;
    }
    if ((DAT_180c64098 == 0) && (DAT_180c64090 <= UVar8)) {
      DAT_180c64098 = FUN_1804174b0("C_EconEntity",0x537b0586);
      if (DAT_180c64098 == 0) {
        DAT_180c64090 = UVar8 + 1000;
      }
      else {
        DAT_180c64090 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c64098;
    FUN_1805f68fc(&DAT_1808ec980);
  }
  iVar6 = DAT_180c6407c;
  if ((DAT_180c6407c == 0) && (UVar8 = GetTickCount64(), DAT_180c64080 <= UVar8)) {
    local_38[0] = &DAT_1808ec9d0;
    iVar6 = FUN_1805f68d0(&DAT_1808ec9d0);
    if (iVar6 != 0) goto LAB_18024018d;
    if (DAT_1808eca1c == 0x7fffffff) {
      DAT_1808eca1c = 0x7ffffffe;
      goto LAB_180240182;
    }
    if ((DAT_180c6407c == 0) && (DAT_180c64080 <= UVar8)) {
      DAT_180c6407c = FUN_1804174b0("C_AttributeContainer",0xdce71866);
      if (DAT_180c6407c == 0) {
        DAT_180c64080 = UVar8 + 1000;
      }
      else {
        DAT_180c64080 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6407c;
    FUN_1805f68fc(&DAT_1808ec9d0);
  }
  iVar7 = DAT_180c64078;
  if (DAT_180c64078 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c64070) {
      iVar7 = 0;
    }
    else {
      local_38[0] = &DAT_1808ec930;
      iVar7 = FUN_1805f68d0(&DAT_1808ec930);
      if (iVar7 != 0) {
LAB_18024018d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ec97c == 0x7fffffff) {
        DAT_1808ec97c = 0x7ffffffe;
LAB_180240182:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64078 == 0) && (DAT_180c64070 <= UVar8)) {
        DAT_180c64078 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c64078 == 0) {
          uVar14 = UVar8 + 1000;
        }
        DAT_180c64070 = uVar14;
      }
      iVar7 = DAT_180c64078;
      FUN_1805f68fc(&DAT_1808ec930);
    }
  }
  if ((((param_1 != 0) && (iVar3 != 0)) && (iVar4 != 0)) &&
     (((iVar5 != 0 && (iVar6 != 0)) && (iVar7 != 0)))) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (iVar3 + param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_38[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_38,iVar3 + param_1,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar12 = local_38[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if ((bVar1) && (puVar12 != (undefined *)0x0)) {
      puVar12 = puVar12 + iVar4;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      if (puVar12 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(local_38,puVar12,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      puVar12 = local_38[0];
      iVar3 = (int)local_38[0];
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (((bVar1) && (iVar3 != 0)) &&
         (lVar9 = FUN_1803d4150(lVar9,(ulonglong)puVar12 & 0xffffffff), lVar9 != 0)) {
        lVar13 = (longlong)iVar5 + iVar6 + lVar9 + (longlong)iVar7;
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (lVar13 == 0) {
          bVar1 = false;
        }
        else {
          local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffffffff0000);
          cVar2 = FUN_1804514f0(local_38,lVar13,2);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        sVar11 = (short)local_38[0];
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if (!bVar1) {
          sVar11 = 0;
        }
        uVar14 = 0;
        psVar10 = &DAT_1806ff9d8;
        do {
          if (*psVar10 == sVar11) {
            if ((int)uVar14 < 0) {
              return 0;
            }
            return sVar11;
          }
          uVar14 = uVar14 + 1;
          psVar10 = psVar10 + 0x10;
        } while (uVar14 < 0x22);
        return 0;
      }
    }
  }
  return 0;
}



