// FUN_18026ccd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026ccd0 */

undefined8 FUN_18026ccd0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [64];
  float fVar19;
  char local_97;
  char local_96;
  char local_95;
  undefined8 local_90;
  undefined *local_88;
  longlong local_78;
  char cStack_70;
  undefined7 uStack_6f;
  undefined1 *local_68;
  undefined8 local_60;
  
  iVar6 = DAT_180c650f0;
  uVar16 = 0xffffffffffffffff;
  if ((DAT_180c650f0 == 0) && (UVar11 = GetTickCount64(), DAT_180c650d0 <= UVar11)) {
    local_88 = &DAT_1808f1af0;
    iVar6 = FUN_1805f68d0(&DAT_1808f1af0);
    if (iVar6 != 0) goto LAB_18026d49f;
    if (DAT_1808f1b3c == 0x7fffffff) {
      DAT_1808f1b3c = 0x7ffffffe;
      goto LAB_18026d494;
    }
    if ((DAT_180c650f0 == 0) && (DAT_180c650d0 <= UVar11)) {
      DAT_180c650f0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c650f0 == 0) {
        DAT_180c650d0 = UVar11 + 1000;
      }
      else {
        DAT_180c650d0 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c650f0;
    FUN_1805f68fc(&DAT_1808f1af0);
  }
  iVar7 = DAT_180c650e0;
  if ((DAT_180c650e0 == 0) && (UVar11 = GetTickCount64(), DAT_180c650d8 <= UVar11)) {
    local_88 = &DAT_1808f1a50;
    iVar7 = FUN_1805f68d0(&DAT_1808f1a50);
    if (iVar7 != 0) goto LAB_18026d49f;
    if (DAT_1808f1a9c == 0x7fffffff) {
      DAT_1808f1a9c = 0x7ffffffe;
      goto LAB_18026d494;
    }
    if ((DAT_180c650e0 == 0) && (DAT_180c650d8 <= UVar11)) {
      DAT_180c650e0 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
      if (DAT_180c650e0 == 0) {
        DAT_180c650d8 = UVar11 + 1000;
      }
      else {
        DAT_180c650d8 = 0xffffffffffffffff;
      }
    }
    iVar7 = DAT_180c650e0;
    FUN_1805f68fc(&DAT_1808f1a50);
  }
  iVar8 = DAT_180c650c0;
  if ((DAT_180c650c0 == 0) && (UVar11 = GetTickCount64(), DAT_180c650c8 <= UVar11)) {
    local_88 = &DAT_1808f1aa0;
    iVar8 = FUN_1805f68d0(&DAT_1808f1aa0);
    if (iVar8 != 0) goto LAB_18026d49f;
    if (DAT_1808f1aec == 0x7fffffff) {
      DAT_1808f1aec = 0x7ffffffe;
      goto LAB_18026d494;
    }
    if ((DAT_180c650c0 == 0) && (DAT_180c650c8 <= UVar11)) {
      DAT_180c650c0 = FUN_1804174b0("CModelState",0xe100c814);
      if (DAT_180c650c0 == 0) {
        DAT_180c650c8 = UVar11 + 1000;
      }
      else {
        DAT_180c650c8 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c650c0;
    FUN_1805f68fc(&DAT_1808f1aa0);
  }
  iVar9 = DAT_180c650b8;
  if ((DAT_180c650b8 == 0) && (UVar11 = GetTickCount64(), DAT_180c650b0 <= UVar11)) {
    local_88 = &DAT_1808f1a00;
    iVar9 = FUN_1805f68d0(&DAT_1808f1a00);
    if (iVar9 != 0) goto LAB_18026d49f;
    if (DAT_1808f1a4c == 0x7fffffff) {
      DAT_1808f1a4c = 0x7ffffffe;
      goto LAB_18026d494;
    }
    if ((DAT_180c650b8 == 0) && (DAT_180c650b0 <= UVar11)) {
      DAT_180c650b8 = FUN_1804174b0("C_CSPlayerPawnBase",0x8f0ee3c1);
      if (DAT_180c650b8 == 0) {
        DAT_180c650b0 = UVar11 + 1000;
      }
      else {
        DAT_180c650b0 = 0xffffffffffffffff;
      }
    }
    iVar9 = DAT_180c650b8;
    FUN_1805f68fc(&DAT_1808f1a00);
  }
  iVar10 = DAT_180c650bc;
  if (DAT_180c650bc == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c650a0) {
      iVar10 = 0;
    }
    else {
      local_88 = &DAT_1808f19a0;
      iVar10 = FUN_1805f68d0(&DAT_1808f19a0);
      if (iVar10 != 0) {
LAB_18026d49f:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f19ec == 0x7fffffff) {
        DAT_1808f19ec = 0x7ffffffe;
LAB_18026d494:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_90 = CONCAT44(local_90._4_4_,DAT_180c650bc);
      if ((DAT_180c650bc == 0) && (DAT_180c650a0 <= UVar11)) {
        DAT_180c650bc = FUN_1804174b0("C_BaseEntity",0x1c93bcf0);
        local_90 = CONCAT44(local_90._4_4_,DAT_180c650bc);
        if (DAT_180c650bc == 0) {
          uVar16 = UVar11 + 1000;
        }
        DAT_180c650a0 = uVar16;
      }
      FUN_1805f68fc(&DAT_1808f19a0);
      iVar10 = (int)(float)local_90;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar8 == 0) {
    return 0;
  }
  if (iVar9 == 0) {
    return 0;
  }
  if (iVar10 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    return 0;
  }
  lVar13 = *(longlong *)(param_1 + 8) + 0x10;
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar13 == 0) {
    bVar2 = false;
    puVar17 = local_88;
  }
  else {
    local_68 = (undefined *)0x0;
    cVar4 = FUN_1804514f0(&local_68,lVar13,8);
    if (cVar4 == '\0') {
      bVar2 = false;
      puVar17 = local_88;
    }
    else {
      bVar2 = true;
      puVar17 = local_68;
    }
  }
  local_68 = puVar17;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((!bVar2) || (puVar17 == (undefined *)0x0)) {
    local_88._0_5_ = (uint5)(uint)local_88;
    local_60 = (ulonglong)local_88;
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (puVar17 + 0x10 == (undefined *)0x0) {
LAB_18026d181:
      local_90._0_5_ = (uint5)(uint)(float)local_90;
    }
    else {
      local_90 = local_90 & 0xffffffff00000000;
      cVar4 = FUN_1804514f0(&local_90,puVar17 + 0x10,4);
      if (cVar4 == '\0') goto LAB_18026d181;
      local_90._0_5_ = CONCAT14(1,(float)local_90);
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    local_60 = local_90;
  }
  lVar12 = (longlong)iVar9 + *(longlong *)(param_1 + 8);
  local_88 = (undefined *)local_60;
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (lVar12 == 0) {
    local_95 = '\0';
  }
  else {
    local_90 = local_90 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_90,lVar12,4);
    local_95 = '\0';
    if (cVar4 != '\0') {
      local_95 = '\x01';
    }
  }
  fVar19 = (float)local_90;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  lVar12 = (longlong)iVar6 + *(longlong *)(param_1 + 8);
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (lVar12 == 0) {
    cVar4 = '\0';
    puVar14 = local_88;
  }
  else {
    local_90 = 0;
    cVar4 = FUN_1804514f0(&local_90,lVar12,8);
    if (cVar4 == '\0') {
      cVar4 = '\0';
      puVar14 = local_88;
    }
    else {
      cVar4 = '\x01';
      puVar14 = (undefined *)local_90;
    }
  }
  local_96 = cVar4;
  local_90 = (ulonglong)puVar14;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (((cVar4 == '\0') || (puVar14 == (undefined *)0x0)) ||
     ((longlong)puVar14 + (longlong)iVar7 == 0)) {
    cVar4 = '\0';
  }
  else {
    lVar12 = (longlong)puVar14 + (longlong)iVar7 + (longlong)iVar8;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (lVar12 == 0) {
      cStack_70 = '\0';
      bVar3 = false;
      bVar1 = false;
    }
    else {
      local_78 = 0;
      cVar4 = FUN_1804514f0(&local_78,lVar12,8);
      if (cVar4 == '\0') {
        bVar1 = false;
        bVar3 = false;
        cStack_70 = '\0';
      }
      else {
        cStack_70 = '\x01';
        bVar1 = true;
        bVar3 = true;
      }
    }
    lVar12 = FUN_18017ea70();
    lVar13 = local_78;
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      bVar1 = bVar3;
    }
    cVar4 = cStack_70;
    if ((bVar1) && (local_78 != 0)) {
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      local_78 = 0;
      cVar5 = FUN_1804514f0(&local_78,lVar13,8);
      cStack_70 = cVar5 != '\0';
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      goto LAB_18026d364;
    }
  }
  cStack_70 = 0;
  lVar13 = local_78;
LAB_18026d364:
  auVar18 = ZEXT1664(CONCAT79(uStack_6f,CONCAT18(cStack_70,local_78)));
  lVar15 = (longlong)iVar10 + *(longlong *)(param_1 + 8);
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar15 == 0) {
    bVar1 = false;
  }
  else {
    local_97 = '\0';
    cVar5 = FUN_1804514f0(&local_97,lVar15,1);
    if (cVar5 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  cVar5 = local_97;
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  if (((((*(char *)(param_1 + 0x38) == '\0') && (bVar2)) &&
       ((local_68 == *(undefined **)(param_1 + 0x10) &&
        (((local_60._4_1_ != '\0' && ((int)local_88 == *(int *)(param_1 + 0x30))) &&
         (lVar12 = FUN_1803d4150(), lVar12 == *(longlong *)(param_1 + 8))))))) &&
      ((local_96 != '\0' && (local_90 == *(ulonglong *)(param_1 + 0x18))))) &&
     ((local_95 != '\0' &&
      (((fVar19 == *(float *)(param_1 + 0x34) && (cVar4 != '\0')) &&
       ((lVar13 == *(longlong *)(param_1 + 0x20) &&
        ((((auVar18[8] != '\0' && (auVar18._0_8_ == *(longlong *)(param_1 + 0x28))) && (bVar1)) &&
         (cVar5 == '\0')))))))))) {
    return 1;
  }
  return 0;
}



