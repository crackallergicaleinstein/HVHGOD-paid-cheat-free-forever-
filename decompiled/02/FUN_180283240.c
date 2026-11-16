// FUN_180283240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180283240 */

undefined8 FUN_180283240(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  char local_38 [8];
  undefined *local_30;
  
  uVar10 = 0xffffffffffffffff;
  iVar6 = DAT_180c65300;
  if (DAT_180c65300 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c652f8) {
      iVar6 = 0;
    }
    else {
      local_30 = &DAT_1808f26e0;
      iVar6 = FUN_1805f68d0(&DAT_1808f26e0);
      if (iVar6 != 0) goto LAB_1802836c3;
      if (DAT_1808f272c == 0x7fffffff) {
        DAT_1808f272c = 0x7ffffffe;
        goto LAB_1802836b8;
      }
      if ((DAT_180c65300 == 0) && (DAT_180c652f8 <= UVar7)) {
        DAT_180c65300 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (DAT_180c65300 == 0) {
          DAT_180c652f8 = UVar7 + 1000;
        }
        else {
          DAT_180c652f8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c65300;
      FUN_1805f68fc(&DAT_1808f26e0);
    }
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (iVar6 + param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_30 = (undefined *)((ulonglong)local_30 & 0xffffffff00000000);
    cVar4 = FUN_1804514f0(&local_30,iVar6 + param_1,4);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  iVar6 = (int)local_30;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  iVar5 = DAT_180c65304;
  if (DAT_180c65304 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c652e0) {
      iVar5 = 0;
    }
    else {
      local_30 = &DAT_1808f2690;
      iVar5 = FUN_1805f68d0(&DAT_1808f2690);
      if (iVar5 != 0) goto LAB_1802836c3;
      if (DAT_1808f26dc == 0x7fffffff) {
        DAT_1808f26dc = 0x7ffffffe;
        goto LAB_1802836b8;
      }
      if ((DAT_180c65304 == 0) && (DAT_180c652e0 <= UVar7)) {
        DAT_180c65304 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c65304 == 0) {
          DAT_180c652e0 = UVar7 + 1000;
        }
        else {
          DAT_180c652e0 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c65304;
      FUN_1805f68fc(&DAT_1808f2690);
    }
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  bVar2 = false;
  if (iVar5 + param_1 != 0) {
    local_30 = (undefined *)0x0;
    cVar4 = FUN_1804514f0(&local_30,iVar5 + param_1,8);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar9 = local_30;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (!bVar2) {
    puVar9 = (undefined *)0x0;
  }
  if (((bVar1) && ((iVar6 + 1U & 0xfffffffe) == 0)) && (puVar9 != (undefined *)0x0)) {
    iVar6 = DAT_180c652f0;
    if (DAT_180c652f0 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c652e8) {
        iVar6 = 0;
      }
      else {
        local_30 = &DAT_1808f25f0;
        iVar6 = FUN_1805f68d0(&DAT_1808f25f0);
        if (iVar6 != 0) goto LAB_1802836c3;
        if (DAT_1808f263c == 0x7fffffff) {
          DAT_1808f263c = 0x7ffffffe;
          goto LAB_1802836b8;
        }
        if ((DAT_180c652f0 == 0) && (DAT_180c652e8 <= UVar7)) {
          DAT_180c652f0 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
          if (DAT_180c652f0 == 0) {
            DAT_180c652e8 = UVar7 + 1000;
          }
          else {
            DAT_180c652e8 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c652f0;
        FUN_1805f68fc(&DAT_1808f25f0);
      }
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (puVar9 + iVar6 == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      local_30 = (undefined *)0x0;
      cVar4 = FUN_1804514f0(&local_30,puVar9 + iVar6,8);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar3 = local_30;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if ((bVar1) && (puVar3 == (undefined *)0x0)) {
      iVar6 = DAT_180c652d0;
      if (DAT_180c652d0 == 0) {
        UVar7 = GetTickCount64();
        if (UVar7 < DAT_180c652d8) {
          iVar6 = 0;
        }
        else {
          local_30 = &DAT_1808f2640;
          iVar6 = FUN_1805f68d0(&DAT_1808f2640);
          if (iVar6 != 0) {
LAB_1802836c3:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f268c == 0x7fffffff) {
            DAT_1808f268c = 0x7ffffffe;
LAB_1802836b8:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c652d0 == 0) && (DAT_180c652d8 <= UVar7)) {
            DAT_180c652d0 = FUN_1804174b0("CGameSceneNode",0xf9373b5e);
            if (DAT_180c652d0 == 0) {
              uVar10 = UVar7 + 1000;
            }
            DAT_180c652d8 = uVar10;
          }
          iVar6 = DAT_180c652d0;
          FUN_1805f68fc(&DAT_1808f2640);
        }
      }
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      if (puVar9 + iVar6 == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        local_38[0] = '\0';
        cVar4 = FUN_1804514f0(local_38,puVar9 + iVar6,1);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      cVar4 = local_38[0];
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      if ((bVar1) && (cVar4 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



