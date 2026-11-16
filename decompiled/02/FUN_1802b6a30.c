// FUN_1802b6a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b6a30 */

ulonglong FUN_1802b6a30(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined *local_38 [2];
  
  uVar9 = 0xffffffffffffffff;
  iVar2 = DAT_180c6e71c;
  if (DAT_180c6e71c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e720) {
      iVar2 = 0;
    }
    else {
      local_38[0] = &DAT_1808f5090;
      iVar2 = FUN_1805f68d0(&DAT_1808f5090);
      if (iVar2 != 0) goto LAB_1802b6dcb;
      if (DAT_1808f50dc == 0x7fffffff) {
        DAT_1808f50dc = 0x7ffffffe;
        goto LAB_1802b6dc0;
      }
      if ((DAT_180c6e71c == 0) && (DAT_180c6e720 <= UVar5)) {
        DAT_180c6e71c = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c6e71c == 0) {
          DAT_180c6e720 = UVar5 + 1000;
        }
        else {
          DAT_180c6e720 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c6e71c;
      FUN_1805f68fc(&DAT_1808f5090);
    }
  }
  iVar3 = DAT_180c6e708;
  if (DAT_180c6e708 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e710) {
      iVar3 = 0;
    }
    else {
      local_38[0] = &DAT_1808f5040;
      iVar3 = FUN_1805f68d0(&DAT_1808f5040);
      if (iVar3 != 0) goto LAB_1802b6dcb;
      if (DAT_1808f508c == 0x7fffffff) {
        DAT_1808f508c = 0x7ffffffe;
        goto LAB_1802b6dc0;
      }
      if ((DAT_180c6e708 == 0) && (DAT_180c6e710 <= UVar5)) {
        DAT_180c6e708 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c6e708 == 0) {
          DAT_180c6e710 = UVar5 + 1000;
        }
        else {
          DAT_180c6e710 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c6e708;
      FUN_1805f68fc(&DAT_1808f5040);
    }
  }
  iVar4 = DAT_180c6e718;
  if (DAT_180c6e718 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c6e6f8) {
      iVar4 = 0;
    }
    else {
      local_38[0] = &DAT_1808f4ff0;
      iVar4 = FUN_1805f68d0(&DAT_1808f4ff0);
      if (iVar4 != 0) {
LAB_1802b6dcb:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f503c == 0x7fffffff) {
        DAT_1808f503c = 0x7ffffffe;
LAB_1802b6dc0:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e718 == 0) && (DAT_180c6e6f8 <= UVar5)) {
        DAT_180c6e718 = FUN_1804174b0("C_CSWeaponBaseGun",0x444e63a0);
        if (DAT_180c6e718 == 0) {
          uVar9 = UVar5 + 1000;
        }
        DAT_180c6e6f8 = uVar9;
      }
      iVar4 = DAT_180c6e718;
      FUN_1805f68fc(&DAT_1808f4ff0);
    }
  }
  if ((((param_1 != 0) && (iVar2 != 0)) && (iVar3 != 0)) && (iVar4 != 0)) {
    bVar10 = false;
    if (iVar2 + param_1 != 0) {
      local_38[0] = (undefined *)0x0;
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar1 = FUN_1804514c0(local_38,iVar2 + param_1,8);
      bVar10 = cVar1 != '\0';
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
    puVar8 = local_38[0];
    if (!bVar10) {
      puVar8 = (undefined *)0x0;
    }
    if ((puVar8 != (undefined *)0x0) && (puVar8 + iVar3 != (undefined *)0x0)) {
      local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar1 = FUN_1804514c0(local_38,puVar8 + iVar3,4);
      if (cVar1 == '\0') {
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
      }
      else {
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if ((int)local_38[0] - 1U < 0xfffffffe) {
          lVar6 = FUN_1803d4150();
          if (lVar6 == 0) {
            return 0;
          }
          if (iVar4 + lVar6 == 0) {
            return 0;
          }
          local_38[0] = (undefined *)((ulonglong)local_38[0] & 0xffffffff00000000);
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          cVar1 = FUN_1804514c0(local_38,iVar4 + lVar6,4);
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          if (cVar1 == '\0') {
            return 0;
          }
          return (ulonglong)local_38[0] & 0xffffffff;
        }
      }
    }
  }
  return 0;
}



