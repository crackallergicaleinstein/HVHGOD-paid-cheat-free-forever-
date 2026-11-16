// FUN_180226450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180226450 */

void FUN_180226450(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  iVar5 = DAT_180c63e68;
  uVar13 = 0xffffffffffffffff;
  local_b8 = param_1;
  if ((DAT_180c63e68 == 0) && (UVar9 = GetTickCount64(), DAT_180c63e58 <= UVar9)) {
    local_c8 = (undefined8 *)&DAT_1808ebe00;
    iVar5 = FUN_1805f68d0(&DAT_1808ebe00);
    if (iVar5 != 0) goto LAB_1802269b0;
    if (DAT_1808ebe4c == 0x7fffffff) {
      DAT_1808ebe4c = 0x7ffffffe;
      goto LAB_1802269a5;
    }
    if ((DAT_180c63e68 == 0) && (DAT_180c63e58 <= UVar9)) {
      DAT_180c63e68 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c63e68 == 0) {
        DAT_180c63e58 = UVar9 + 1000;
      }
      else {
        DAT_180c63e58 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c63e68;
    FUN_1805f68fc(&DAT_1808ebe00);
  }
  iVar6 = DAT_180c63e4c;
  if ((DAT_180c63e4c == 0) && (UVar9 = GetTickCount64(), DAT_180c63e50 <= UVar9)) {
    local_c8 = (undefined8 *)&DAT_1808ebdb0;
    iVar6 = FUN_1805f68d0(&DAT_1808ebdb0);
    if (iVar6 != 0) goto LAB_1802269b0;
    if (DAT_1808ebdfc == 0x7fffffff) {
      DAT_1808ebdfc = 0x7ffffffe;
      goto LAB_1802269a5;
    }
    if ((DAT_180c63e4c == 0) && (DAT_180c63e50 <= UVar9)) {
      DAT_180c63e4c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c63e4c == 0) {
        DAT_180c63e50 = UVar9 + 1000;
      }
      else {
        DAT_180c63e50 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c63e4c;
    FUN_1805f68fc(&DAT_1808ebdb0);
  }
  iVar7 = DAT_180c63e48;
  if ((DAT_180c63e48 == 0) && (UVar9 = GetTickCount64(), DAT_180c63e40 <= UVar9)) {
    local_c8 = (undefined8 *)&DAT_1808ebd60;
    iVar7 = FUN_1805f68d0(&DAT_1808ebd60);
    if (iVar7 != 0) goto LAB_1802269b0;
    if (DAT_1808ebdac == 0x7fffffff) {
      DAT_1808ebdac = 0x7ffffffe;
      goto LAB_1802269a5;
    }
    if ((DAT_180c63e48 == 0) && (DAT_180c63e40 <= UVar9)) {
      DAT_180c63e48 = FUN_1804174b0("CGameSceneNode",0xae099497);
      if (DAT_180c63e48 == 0) {
        DAT_180c63e40 = UVar9 + 1000;
      }
      else {
        DAT_180c63e40 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c63e48;
    FUN_1805f68fc(&DAT_1808ebd60);
  }
  iVar8 = DAT_180c63e34;
  if ((DAT_180c63e34 == 0) && (UVar9 = GetTickCount64(), DAT_180c63e38 <= UVar9)) {
    local_c8 = (undefined8 *)&DAT_1808ebd10;
    iVar8 = FUN_1805f68d0(&DAT_1808ebd10);
    if (iVar8 != 0) {
LAB_1802269b0:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ebd5c == 0x7fffffff) {
      DAT_1808ebd5c = 0x7ffffffe;
LAB_1802269a5:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c63e34 == 0) && (DAT_180c63e38 <= UVar9)) {
      DAT_180c63e34 = FUN_1804174b0("CGameSceneNode",0x80bd51e5);
      if (DAT_180c63e34 == 0) {
        uVar13 = UVar9 + 1000;
      }
      DAT_180c63e38 = uVar13;
    }
    iVar8 = DAT_180c63e34;
    FUN_1805f68fc(&DAT_1808ebd10);
  }
  if ((((param_2 != 0) && (iVar5 != 0)) && (iVar6 != 0)) && ((iVar7 != 0 && (iVar8 != 0)))) {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (iVar5 + param_2 == 0) {
      bVar1 = false;
      puVar12 = local_b8;
    }
    else {
      local_c8 = (undefined8 *)0x0;
      cVar4 = FUN_1804514f0(&local_c8,iVar5 + param_2,8);
      if (cVar4 == '\0') {
        bVar1 = false;
        puVar12 = local_b8;
      }
      else {
        bVar1 = true;
        puVar12 = local_c8;
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if ((bVar1) && (puVar12 != (undefined8 *)0x0)) {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if ((undefined *)((longlong)iVar6 + (longlong)puVar12) == (undefined *)0x0) {
        bVar1 = false;
        uVar14 = local_b0;
        puVar18 = local_b8;
      }
      else {
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        cVar4 = FUN_1804514f0(&local_c8,(undefined *)((longlong)iVar6 + (longlong)puVar12),0xc);
        if (cVar4 == '\0') {
          bVar1 = false;
          uVar14 = local_b0;
          puVar18 = local_b8;
        }
        else {
          bVar1 = true;
          uVar14 = local_c0;
          puVar18 = local_c8;
        }
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if ((undefined *)((longlong)iVar7 + (longlong)puVar12) == (undefined *)0x0) {
        bVar2 = false;
        uVar15 = local_b0;
        puVar17 = local_b8;
      }
      else {
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        cVar4 = FUN_1804514f0(&local_c8,(undefined *)((longlong)iVar7 + (longlong)puVar12),0xc);
        if (cVar4 == '\0') {
          bVar2 = false;
          uVar15 = local_b0;
          puVar17 = local_b8;
        }
        else {
          bVar2 = true;
          uVar15 = local_c0;
          puVar17 = local_c8;
        }
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      bVar3 = false;
      if ((undefined *)((longlong)iVar8 + (longlong)puVar12) != (undefined *)0x0) {
        local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
        cVar4 = FUN_1804514f0(&local_c8,(undefined *)((longlong)iVar8 + (longlong)puVar12),4);
        if (cVar4 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      uVar16 = local_c8._0_4_;
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if (((bVar1) && (bVar2)) && (bVar3)) {
        uStack_9c = SUB84(puVar17,0);
        uStack_98 = (undefined4)((ulonglong)puVar17 >> 0x20);
        local_a8 = puVar18;
        uStack_a0 = uVar14;
        uStack_94 = uVar15;
        local_90 = uVar16;
        cVar4 = FUN_180218e30(&local_a8);
        ppuVar11 = &local_88;
        if (cVar4 == '\0') {
          local_8c = 0;
          ppuVar11 = &local_a8;
        }
        else {
          local_88 = local_a8;
          uStack_80 = CONCAT44(uStack_9c,uStack_a0);
          uStack_78 = CONCAT44(uStack_94,uStack_98);
          uStack_70 = uVar16;
          uStack_6c = 1;
        }
        puVar12 = ppuVar11[1];
        puVar18 = ppuVar11[2];
        puVar17 = ppuVar11[3];
        *local_b8 = *ppuVar11;
        local_b8[1] = puVar12;
        local_b8[2] = puVar18;
        local_b8[3] = puVar17;
        return;
      }
    }
  }
  *(undefined1 *)((longlong)local_b8 + 0x1c) = 0;
  return;
}



