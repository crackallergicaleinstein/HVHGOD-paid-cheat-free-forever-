// FUN_18049d600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049d600 */

void FUN_18049d600(longlong param_1,undefined8 param_2,undefined **param_3)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined **local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  
  lVar4 = DAT_180bb8ae8;
  if ((*(int *)(param_1 + 0x2c) == 1) && (DAT_180bbecdb == '\0')) {
    bVar3 = true;
    uVar8 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 0x40;
    *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar8;
    piVar1 = (int *)(lVar4 + 0x1fd8);
    iVar6 = *(int *)(lVar4 + 0x1fdc);
    if (*piVar1 == iVar6) {
      iVar7 = *piVar1 + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_1804d14d0(piVar1,iVar7);
    }
    *(uint *)(*(longlong *)(lVar4 + 0x1fe0) + (longlong)*piVar1 * 4) = uVar8;
    *piVar1 = *piVar1 + 1;
  }
  else {
    bVar3 = false;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  uVar10 = 0x425d70a4;
  FUN_180485630(&local_b8,param_2,0);
  local_c8 = param_3;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("View Options");
    cVar5 = FUN_180486160(&local_b8,"View Options");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","View Options",0);
      if (cVar5 != '\0') {
        FUN_18049eb20(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("View Options");
      FUN_18049eb20(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    FUN_180493f00();
    FUN_18049eb20(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Scope Options");
    cVar5 = FUN_180486160(&local_b8,"Scope Options");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Scope Options",0);
      if (cVar5 != '\0') {
        FUN_18049ed40(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Scope Options");
      FUN_18049ed40(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049ed40(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Viewmodel Options");
    cVar5 = FUN_180486160(&local_b8,"Viewmodel Options");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Viewmodel Options",0);
      if (cVar5 != '\0') {
        FUN_18049ee90(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Viewmodel Options");
      FUN_18049ee90(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049ee90(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Perspective Options");
    cVar5 = FUN_180486160(&local_b8,"Perspective Options");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Perspective Options",0);
      if (cVar5 != '\0') {
        FUN_18049f060(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Perspective Options");
      FUN_18049f060(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f060(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  local_c8 = &PTR_s_Enemies_1807b7ce0;
  local_c0 = 3;
  FUN_180486f50(&local_b8,"Unlock Spectating",&local_c8,(longlong)param_3 + 0xd22,"Select");
  local_c8 = &PTR_s_Remove_Punch_1807b7d68;
  local_c0 = 3;
  uVar12 = 1;
  FUN_180486f50(&local_b8,"Visual Recoil",&local_c8,(longlong)param_3 + 0xd25,"Select");
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  uVar15 = 6;
  puVar13 = &DAT_180811f20;
  uVar9 = CONCAT44(uVar12,0x436a199a);
  uVar12 = 0x436a199a;
  FUN_180485630(&local_b8,param_2,1);
  FUN_180486500(&local_b8,"Radar",param_3 + 0x1a5);
  FUN_180486500(&local_b8,"Preserve Killfeed",(longlong)param_3 + 0xd29);
  FUN_1804867d0(&local_b8);
  local_c8 = &PTR_s_Default_1807b7cc8;
  local_c0 = 3;
  FUN_180487250(&local_b8,"Scope Overlay",param_3 + 0x1a8,&local_c8,uVar9,uVar10,puVar13,uVar15);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Scoreboard");
    cVar5 = FUN_180486160(&local_b8,"Scoreboard");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Scoreboard",0);
      if (cVar5 != '\0') {
        FUN_18049f170(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Scoreboard");
      FUN_18049f170(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f170(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Crosshairs");
    cVar5 = FUN_180486160(&local_b8,"Crosshairs");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Crosshairs",0);
      if (cVar5 != '\0') {
        FUN_18049f200(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Crosshairs");
      FUN_18049f200(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f200(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  fVar11 = (float)(int)local_98._8_4_ * 30.855553 + 0.6 + uStack_a8._4_4_ + 21.0;
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  uVar15 = 1;
  pcVar14 = "EFFECTS";
  uVar9 = CONCAT44(uVar10,uVar12);
  FUN_180485630(&local_b8,param_2,1);
  cVar5 = FUN_180486160(&local_b8,"Ambience");
  if (cVar5 != '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  fVar2 = (float)(int)local_98._8_4_ * 30.855553 + 0.6;
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20,(float)(int)local_98._8_4_ * 30.855553,fVar2,
                    fVar2 + uStack_a8._4_4_,uVar9,fVar11,pcVar14,uVar15);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  FUN_180485630(&local_b8,param_2,0);
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800(&DAT_18082a048);
    cVar5 = FUN_180486160(&local_b8,&DAT_18082a048);
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings",&DAT_18082a048,0);
      if (cVar5 != '\0') {
        FUN_18049f290(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00(&DAT_18082a048);
      FUN_18049f290(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f290(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Weapons");
    cVar5 = FUN_180486160(&local_b8,"Weapons");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Weapons",0);
      if (cVar5 != '\0') {
        FUN_18049f550(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Weapons");
      FUN_18049f550(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f550(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Hostages");
    cVar5 = FUN_180486160(&local_b8,"Hostages");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Hostages",0);
      if (cVar5 != '\0') {
        FUN_18049f5f0(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Hostages");
      FUN_18049f5f0(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f5f0(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Grenades");
    cVar5 = FUN_180486160(&local_b8,"Grenades");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Grenades",0);
      if (cVar5 != '\0') {
        FUN_18049f660(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Grenades");
      FUN_18049f660(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f660(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  local_c8 = param_3;
  FUN_1804a0e10(&local_b8);
  FUN_180486500(&local_b8,"Grenade Proximity Warnings",(longlong)param_3 + 0xeb4);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  FUN_180485630(&local_b8,param_2,1);
  local_c0 = param_1;
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Windows");
    cVar5 = FUN_180486160(&local_b8,"Windows");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Windows",0);
      if (cVar5 != '\0') {
        FUN_18049f840(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Windows");
      FUN_18049f840(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049f840(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Hit Marker");
    cVar5 = FUN_180486160(&local_b8,"Hit Marker");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Hit Marker",0);
      if (cVar5 != '\0') {
        FUN_18049fa10(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Hit Marker");
      FUN_18049fa10(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049fa10(&local_c8);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  if (DAT_180bbecdb == '\0') {
    local_c8 = param_3;
    FUN_1804c2800("Bullet Tracers");
    cVar5 = FUN_180486160(&local_b8,"Bullet Tracers");
    if (DAT_180bbecdb == '\0') {
      if (cVar5 != '\0') {
        FUN_180488320("##settings");
      }
      cVar5 = FUN_180488630("##settings","Bullet Tracers",0);
      if (cVar5 != '\0') {
        FUN_18049faf0(&local_c8);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Bullet Tracers");
      FUN_18049faf0(&local_c8);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
    }
  }
  else {
    local_c8 = param_3;
    FUN_180493f00();
    FUN_18049faf0(&local_c8);
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
  iVar6 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar6 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar6 + -1;
  }
  lVar4 = DAT_180bb8ae8;
  if (DAT_180bbecdb == '\0') {
    if (bVar3) {
      iVar6 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
      if (iVar6 < 2) {
        FUN_1804c5a40("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar6 + -1;
        *(undefined4 *)(lVar4 + 0x1e80) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x1fe0) + -8 + (longlong)iVar6 * 4);
      }
      FUN_180456190(param_1,param_2,param_3);
    }
  }
  else {
    uVar9 = FUN_180493f00("Ambience");
    FUN_180459d20(uVar9,param_2,param_3);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}



