// FUN_1802921f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802921f0 */

undefined * FUN_1802921f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined *local_38 [2];
  
  puVar7 = (undefined *)0x0;
  uVar10 = 0xffffffffffffffff;
  iVar3 = DAT_180c65508;
  if (DAT_180c65508 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c65510) {
      iVar3 = 0;
    }
    else {
      local_38[0] = &DAT_1808f3190;
      iVar3 = FUN_1805f68d0(&DAT_1808f3190);
      if (iVar3 != 0) goto LAB_180292541;
      if (DAT_1808f31dc == 0x7fffffff) {
        DAT_1808f31dc = 0x7ffffffe;
        goto LAB_180292536;
      }
      if ((DAT_180c65508 == 0) && (DAT_180c65510 <= UVar5)) {
        DAT_180c65508 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c65508 == 0) {
          DAT_180c65510 = UVar5 + 1000;
        }
        else {
          DAT_180c65510 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c65508;
      FUN_1805f68fc(&DAT_1808f3190);
    }
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (iVar3 + param_1 != 0) {
    local_38[0] = (undefined *)0x0;
    cVar2 = FUN_1804514f0(local_38,iVar3 + param_1,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar9 = local_38[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if ((bVar1) && (puVar9 != (undefined *)0x0)) {
    iVar3 = DAT_180c65500;
    if (DAT_180c65500 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c654f8) {
        iVar3 = 0;
      }
      else {
        local_38[0] = &DAT_1808f30f0;
        iVar3 = FUN_1805f68d0(&DAT_1808f30f0);
        if (iVar3 != 0) goto LAB_180292541;
        if (DAT_1808f313c == 0x7fffffff) {
          DAT_1808f313c = 0x7ffffffe;
          goto LAB_180292536;
        }
        if ((DAT_180c65500 == 0) && (DAT_180c654f8 <= UVar5)) {
          DAT_180c65500 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
          if (DAT_180c65500 == 0) {
            DAT_180c654f8 = UVar5 + 1000;
          }
          else {
            DAT_180c654f8 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c65500;
        FUN_1805f68fc(&DAT_1808f30f0);
      }
    }
    iVar4 = DAT_180c65504;
    if (DAT_180c65504 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c654e8) {
        iVar4 = 0;
      }
      else {
        local_38[0] = &DAT_1808f30a0;
        iVar4 = FUN_1805f68d0(&DAT_1808f30a0);
        if (iVar4 != 0) {
LAB_180292541:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f30ec == 0x7fffffff) {
          DAT_1808f30ec = 0x7ffffffe;
LAB_180292536:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c65504 == 0) && (DAT_180c654e8 <= UVar5)) {
          DAT_180c65504 = FUN_1804174b0("CModelState",0xe100c814);
          if (DAT_180c65504 == 0) {
            uVar10 = UVar5 + 1000;
          }
          DAT_180c654e8 = uVar10;
        }
        iVar4 = DAT_180c65504;
        FUN_1805f68fc(&DAT_1808f30a0);
      }
    }
    puVar9 = puVar9 + (longlong)iVar3 + (longlong)iVar4;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar1 = false;
    if (puVar9 != (undefined *)0x0) {
      local_38[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_38,puVar9,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar9 = local_38[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    puVar8 = (undefined *)0x0;
    if (bVar1) {
      puVar8 = puVar9;
    }
    if (puVar8 != (undefined *)0x0) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      local_38[0] = (undefined *)0x0;
      cVar2 = FUN_1804514f0(local_38,puVar8,8);
      puVar9 = local_38[0];
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (cVar2 != '\0') {
        puVar7 = puVar9;
      }
    }
  }
  return puVar7;
}



