// FUN_18026be00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026be00 */

void FUN_18026be00(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar17 [64];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *local_60;
  int iStack_58;
  undefined4 uStack_54;
  
  plVar12 = (longlong *)0x0;
  uVar16 = 0xffffffffffffffff;
  iVar5 = DAT_180c65170;
  local_90 = param_1;
  local_88 = param_2;
  if (DAT_180c65170 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c65168) {
      iVar5 = 0;
    }
    else {
      local_98 = (longlong *)&DAT_1808f1e20;
      iVar5 = FUN_1805f68d0(&DAT_1808f1e20);
      if (iVar5 != 0) goto LAB_18026c3f9;
      if (DAT_1808f1e6c == 0x7fffffff) {
        DAT_1808f1e6c = 0x7ffffffe;
        goto LAB_18026c3ee;
      }
      if ((DAT_180c65170 == 0) && (DAT_180c65168 <= UVar9)) {
        DAT_180c65170 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c65170 == 0) {
          DAT_180c65168 = UVar9 + 1000;
        }
        else {
          DAT_180c65168 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c65170;
      FUN_1805f68fc(&DAT_1808f1e20);
    }
  }
  iVar6 = DAT_180c65174;
  if (DAT_180c65174 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c65150) {
      iVar6 = 0;
    }
    else {
      local_98 = (longlong *)&DAT_1808f1dd0;
      iVar6 = FUN_1805f68d0(&DAT_1808f1dd0);
      if (iVar6 != 0) goto LAB_18026c3f9;
      if (DAT_1808f1e1c == 0x7fffffff) {
        DAT_1808f1e1c = 0x7ffffffe;
        goto LAB_18026c3ee;
      }
      if ((DAT_180c65174 == 0) && (DAT_180c65150 <= UVar9)) {
        DAT_180c65174 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c65174 == 0) {
          DAT_180c65150 = UVar9 + 1000;
        }
        else {
          DAT_180c65150 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c65174;
      FUN_1805f68fc(&DAT_1808f1dd0);
    }
  }
  iVar7 = DAT_180c65160;
  if (DAT_180c65160 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c65158) {
      iVar7 = 0;
    }
    else {
      local_98 = (longlong *)&DAT_1808f1d30;
      iVar7 = FUN_1805f68d0(&DAT_1808f1d30);
      if (iVar7 != 0) goto LAB_18026c3f9;
      if (DAT_1808f1d7c == 0x7fffffff) {
        DAT_1808f1d7c = 0x7ffffffe;
        goto LAB_18026c3ee;
      }
      if ((DAT_180c65160 == 0) && (DAT_180c65158 <= UVar9)) {
        DAT_180c65160 = FUN_1804174b0("CModelState",0xe100c814);
        if (DAT_180c65160 == 0) {
          DAT_180c65158 = UVar9 + 1000;
        }
        else {
          DAT_180c65158 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c65160;
      FUN_1805f68fc(&DAT_1808f1d30);
    }
  }
  iVar8 = DAT_180c65140;
  if (DAT_180c65140 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c65148) {
      iVar8 = 0;
    }
    else {
      local_98 = (longlong *)&DAT_1808f1d80;
      iVar8 = FUN_1805f68d0(&DAT_1808f1d80);
      if (iVar8 != 0) {
LAB_18026c3f9:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f1dcc == 0x7fffffff) {
        DAT_1808f1dcc = 0x7ffffffe;
LAB_18026c3ee:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c65140 == 0) && (DAT_180c65148 <= UVar9)) {
        DAT_180c65140 = FUN_1804174b0("C_CSPlayerPawnBase",0x8f0ee3c1);
        if (DAT_180c65140 == 0) {
          uVar16 = UVar9 + 1000;
        }
        DAT_180c65148 = uVar16;
      }
      iVar8 = DAT_180c65140;
      FUN_1805f68fc(&DAT_1808f1d80);
    }
  }
  if ((((local_88 != 0) && (iVar5 != 0)) && (iVar6 != 0)) && ((iVar7 != 0 && (iVar8 != 0)))) {
    local_60 = (longlong *)0x0;
    local_80 = local_88;
    lVar11 = local_88 + 0x10;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (lVar11 == 0) {
      bVar2 = false;
      plVar15 = local_90;
    }
    else {
      local_98 = (longlong *)0x0;
      cVar3 = FUN_1804514f0(&local_98,lVar11,8);
      if (cVar3 == '\0') {
        bVar2 = false;
        plVar15 = local_90;
      }
      else {
        bVar2 = true;
        plVar15 = local_98;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    plStack_78 = (longlong *)0x0;
    if (bVar2) {
      plStack_78 = plVar15;
    }
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    if (iVar5 + local_88 == 0) {
      bVar2 = false;
      plVar15 = local_90;
    }
    else {
      local_98 = (longlong *)0x0;
      cVar3 = FUN_1804514f0(&local_98,iVar5 + local_88,8);
      if (cVar3 == '\0') {
        bVar2 = false;
        plVar15 = local_90;
      }
      else {
        bVar2 = true;
        plVar15 = local_98;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    plVar13 = (longlong *)0x0;
    if (bVar2) {
      plVar13 = plVar15;
    }
    if ((plStack_78 != (longlong *)0x0) && (plVar13 != (longlong *)0x0)) {
      plVar15 = plStack_78 + 2;
      plStack_70 = plVar13;
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      bVar2 = false;
      if (plVar15 != (longlong *)0x0) {
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_98,plVar15,4);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar5 = (uint)local_98;
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      iStack_58 = -1;
      if (bVar2) {
        iStack_58 = iVar5;
      }
      puVar14 = (undefined *)((longlong)plVar13 + (longlong)iVar6 + (longlong)iVar7);
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (puVar14 == (undefined *)0x0) {
        bVar2 = false;
        plVar15 = local_90;
      }
      else {
        local_98 = (longlong *)0x0;
        cVar3 = FUN_1804514f0(&local_98,puVar14,8);
        if (cVar3 == '\0') {
          bVar2 = false;
          plVar15 = local_90;
        }
        else {
          bVar2 = true;
          plVar15 = local_98;
        }
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      if (bVar2) {
        plStack_68 = plVar15;
        if (plVar15 != (longlong *)0x0) {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          local_98 = (longlong *)0x0;
          cVar3 = FUN_1804514f0(&local_98,plVar15,8);
          plVar15 = local_90;
          if (cVar3 != '\0') {
            plVar15 = local_98;
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if (cVar3 != '\0') {
            plVar12 = plVar15;
          }
        }
      }
      else {
        plStack_68 = (longlong *)0x0;
      }
      lVar11 = local_88;
      local_60 = plVar12;
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      lVar10 = iVar8 + lVar11;
      bVar2 = false;
      if (lVar10 != 0) {
        local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_98,lVar10,4);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      auVar17 = ZEXT464((uint)local_98);
      lVar10 = FUN_18017ea70();
      iVar5 = iStack_58;
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if ((((iStack_58 != -1) && (plVar12 != (longlong *)0x0)) && (bVar2)) &&
         ((sVar4 = thunk_FUN_180624430(auVar17._0_8_), sVar4 < 1 &&
          (lVar10 = FUN_1803d4150(extraout_XMM0_Qa,iVar5), lVar10 == lVar11)))) {
        *local_90 = local_80;
        local_90[1] = (longlong)plStack_78;
        local_90[2] = (longlong)plStack_70;
        local_90[3] = (longlong)plStack_68;
        auVar1._8_4_ = iStack_58;
        auVar1._0_8_ = local_60;
        auVar1._12_4_ = uStack_54;
        auVar1 = vinsertps_avx(auVar1,auVar17._0_16_,0x30);
        *(undefined1 (*) [16])(local_90 + 4) = auVar1;
        *(undefined1 *)(local_90 + 6) = 1;
        return;
      }
    }
  }
  *(undefined1 *)(local_90 + 6) = 0;
  return;
}



