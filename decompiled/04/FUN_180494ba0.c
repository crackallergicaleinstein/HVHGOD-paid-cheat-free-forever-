// FUN_180494ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180494ba0 */

void FUN_180494ba0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 uVar17;
  undefined4 uVar19;
  undefined ***pppuVar18;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined4 uVar22;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined1 local_88;
  
  iVar10 = *(int *)((longlong)param_3 + 0x24);
  uVar11 = 0;
  ppuVar1 = param_3 + 5;
  if (iVar10 < 0) {
    iVar10 = 0;
    ppuVar9 = param_3 + 5;
  }
  else {
    if (0xb < iVar10) {
      iVar10 = 0xb;
    }
    ppuVar9 = param_3 + ((longlong)iVar10 + 1) * 5;
    if ((iVar10 != 0) && (*(char *)((longlong)ppuVar9 + 0x26) == '\0')) {
      puVar3 = param_3[6];
      puVar4 = param_3[7];
      puVar5 = param_3[8];
      *ppuVar9 = *ppuVar1;
      ppuVar9[1] = puVar3;
      ppuVar9[2] = puVar4;
      ppuVar9[3] = puVar5;
      ppuVar9[4] = param_3[9];
      *(undefined1 *)((longlong)ppuVar9 + 0x26) = 0;
    }
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  uVar20 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff00 >> 0x20),6);
  uVar13 = 1;
  uVar17 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffee8 >> 0x20),0x436e0000);
  uVar16 = 0x425d70a4;
  local_98 = ppuVar9;
  local_90 = ppuVar1;
  local_88 = iVar10 != 0;
  FUN_180485630(&local_d8,param_2,0,param_4,uVar17,0x425d70a4,&DAT_1808584f4,uVar20);
  uVar19 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar24 = (undefined4)((ulonglong)uVar17 >> 0x20);
  FUN_180486500(&local_d8,"Enabled",param_3);
  FUN_180486500(&local_d8,"Silent Aim",(longlong)param_3 + 1);
  FUN_180486500(&local_d8,"Automatic Fire",(longlong)param_3 + 2);
  local_e8 = param_3;
  FUN_180497420(&local_d8);
  FUN_180486500(&local_d8,"Refine Shot",(longlong)param_3 + 0x1e);
  uVar12 = 1;
  uVar14 = 0;
  FUN_180487560(&local_d8,"Field of View",param_3 + 4,0,CONCAT44(uVar24,0x43340000),&DAT_1808585a0,
                CONCAT44(uVar13,0x3dcccccd));
  fVar15 = (float)(int)local_b8._8_4_ * 30.855553 + 0.6 + uStack_c8._4_4_ + 21.0;
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  if ((iVar10 == 0) || (pcVar7 = "SELECTION (GLOBAL)", *(char *)((longlong)ppuVar9 + 0x26) != '\0'))
  {
    pcVar7 = "SELECTION";
  }
  uVar20 = CONCAT44(uVar19,6);
  uVar17 = CONCAT44(uVar12,fVar15);
  FUN_180485630(&local_d8,param_2,0);
  local_e8 = &PTR_DAT_1807b7aa8;
  local_e0 = 6;
  uVar24 = 1;
  FUN_180486f50(&local_d8,"Hitboxes",&local_e8,ppuVar9,&DAT_1808007b0,uVar17,pcVar7,uVar20);
  uVar13 = 0x3f800000;
  uVar20 = CONCAT44((int)((ulonglong)pcVar7 >> 0x20),0x3f800000);
  uVar12 = 0x42c80000;
  uVar17 = CONCAT44(uVar24,0x42c80000);
  FUN_180487560(&local_d8,"Extrapolation",ppuVar9 + 1,0,uVar17,"%.0f%%",uVar20);
  pppuVar18 = &local_e8;
  uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
  uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar24 = uVar14;
  local_e8 = ppuVar9;
  FUN_180497870(&local_d8);
  uVar21 = 1;
  uVar17 = CONCAT44(uVar19,uVar12);
  FUN_180487560(&local_d8,"Min Damage",ppuVar9 + 3,0,uVar17,&DAT_180829c34,CONCAT44(uVar22,uVar13),
                pppuVar18,uVar24);
  uVar24 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar12 = (undefined4)((ulonglong)pppuVar18 >> 0x20);
  local_e8 = ppuVar9;
  FUN_180497c80(&local_d8);
  FUN_180486500(&local_d8,"Quick Scope",(longlong)ppuVar9 + 0x25);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  uVar23 = CONCAT44(uVar12,7);
  pcVar7 = "OTHER";
  uVar20 = CONCAT44(uVar21,uVar16);
  uVar17 = CONCAT44(uVar24,0x436a199a);
  uVar16 = 0x436a199a;
  FUN_180485630(&local_d8,param_2,1);
  local_e8 = &PTR_s_Disabled_1807b79d8;
  local_e0 = 3;
  FUN_180487250(&local_d8,"History",param_3 + 0x41,&local_e8,uVar17,uVar20,pcVar7,uVar23);
  uVar13 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_a8 = &PTR_s_On_Peek_1807b7b60;
  local_a0 = 3;
  pppuVar18 = &local_e8;
  local_e8 = param_3;
  FUN_1804980d0(&local_d8);
  local_a8 = &PTR_s_Disabled_1807b7c00;
  local_a0 = 3;
  FUN_180487250(&local_d8,"Remove Spread",(longlong)param_3 + 0x214,&local_a8,pppuVar18);
  uVar24 = (undefined4)((ulonglong)pppuVar18 >> 0x20);
  FUN_180486500(&local_d8,"Duck Peek Assist",param_3 + 0x43);
  local_e8 = param_3;
  FUN_180498510(&local_d8);
  FUN_180486500(&local_d8,"Double Precision",(longlong)param_3 + 0x22e);
  FUN_180486500(&local_d8,"Double Tap",(longlong)param_3 + 0x22f);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  uVar23 = CONCAT44(uVar13,5);
  pcVar7 = "ANTI-AIM";
  uVar17 = CONCAT44(uVar24,uVar16);
  FUN_180485630(&local_d8,param_2,1);
  uVar20 = CONCAT44(uVar12,uVar14);
  local_e8 = param_3;
  FUN_180498960(&local_d8);
  local_a8 = &PTR_s_Local_View_1807b7b38;
  local_a0 = 2;
  FUN_180487250(&local_d8,"Yaw Base",(longlong)param_3 + 0x234,&local_a8,uVar17,uVar20,pcVar7,uVar23
               );
  if (DAT_180bbecdb == '\0') {
    local_e8 = param_3;
    FUN_1804c2800("Pitch");
    cVar6 = FUN_180486160(&local_d8,"Pitch");
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings","Pitch",0);
      if (cVar6 != '\0') {
        FUN_180495c50(&local_e8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Pitch");
      FUN_180495c50(&local_e8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar2 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
    }
  }
  else {
    local_e8 = param_3;
    FUN_180493f00();
    FUN_180495c50(&local_e8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_e8 = param_3;
    FUN_1804c2800(&DAT_180858658);
    cVar6 = FUN_180486160(&local_d8,&DAT_180858658);
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings",&DAT_180858658,0);
      if (cVar6 != '\0') {
        FUN_180495d00(&local_e8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00(&DAT_180858658);
      FUN_180495d00(&local_e8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar2 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
    }
  }
  else {
    local_e8 = param_3;
    FUN_180493f00();
    FUN_180495d00(&local_e8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_e8 = param_3;
    FUN_1804c2800("Mouse Override");
    cVar6 = FUN_180486160(&local_d8,"Mouse Override");
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings","Mouse Override",0);
      if (cVar6 != '\0') {
        FUN_180495e40(&local_e8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Mouse Override");
      FUN_180495e40(&local_e8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar2 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
    }
  }
  else {
    local_e8 = param_3;
    FUN_180493f00();
    FUN_180495e40(&local_e8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  if (iVar10 != 0) {
    ppuVar8 = ppuVar1;
    do {
      if (*(char *)((longlong)ppuVar8 + ((longlong)ppuVar9 - (longlong)ppuVar1)) != *(char *)ppuVar8
         ) goto LAB_1804956c6;
      ppuVar8 = (undefined **)((longlong)ppuVar8 + 1);
    } while ((longlong)ppuVar8 - (longlong)ppuVar1 < 6);
    pcVar7 = (char *)((longlong)param_3 + 0x49);
    do {
      if (pcVar7[(longlong)ppuVar9 - (longlong)ppuVar1] != *pcVar7) goto LAB_1804956c6;
      pcVar7 = pcVar7 + 1;
    } while ((longlong)(pcVar7 + (-0x21 - (longlong)ppuVar1)) < 4);
    if (((((*(float *)(ppuVar9 + 1) != *(float *)(param_3 + 6)) ||
          (*(float *)((longlong)ppuVar9 + 0xc) != *(float *)((longlong)param_3 + 0x34))) ||
         (*(float *)(ppuVar9 + 2) != *(float *)(param_3 + 7))) ||
        ((*(char *)((longlong)ppuVar9 + 0x14) != *(char *)((longlong)param_3 + 0x3c) ||
         (*(float *)(ppuVar9 + 3) != *(float *)(param_3 + 8))))) ||
       ((*(float *)((longlong)ppuVar9 + 0x1c) != *(float *)((longlong)param_3 + 0x44) ||
        ((*(char *)(ppuVar9 + 4) != *(char *)(param_3 + 9) ||
         (*(char *)((longlong)ppuVar9 + 0x25) != *(char *)((longlong)param_3 + 0x4d))))))) {
LAB_1804956c6:
      uVar11 = 1;
    }
    *(undefined1 *)((longlong)ppuVar9 + 0x26) = uVar11;
  }
  return;
}



