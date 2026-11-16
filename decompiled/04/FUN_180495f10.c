// FUN_180495f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180495f10 */

void FUN_180495f10(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined **local_98;
  undefined8 local_90;
  longlong local_88 [4];
  undefined1 local_68 [16];
  
  ppuVar1 = (undefined **)(param_3 + 0x25c);
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_68 = (undefined1  [16])0x0;
  uVar7 = 1;
  FUN_180485630(local_88,param_2,0,param_4,0x436e0000,0x425d70a4,"AIMBOT",0xb);
  FUN_180486500(local_88,"Enabled",ppuVar1);
  uVar6 = 0x3f800000;
  uVar9 = 0;
  FUN_180487560(local_88,"Field of View",param_3 + 0x260,0,0x41f00000,&DAT_180829cdc,
                CONCAT44(uVar7,0x3f800000));
  uVar5 = 0x42c80000;
  FUN_180487560(local_88,"Smoothing",param_3 + 0x264,0,0x42c80000,"%.0f%%",uVar6);
  uVar8 = 1;
  uVar7 = uVar5;
  FUN_180487560(local_88,"Humanize",param_3 + 0x268,0,uVar5,"%.0f%%",uVar6);
  uVar4 = CONCAT44(uVar8,uVar9);
  local_98 = ppuVar1;
  FUN_180498db0(local_88);
  local_98 = &PTR_DAT_1807b7a18;
  local_90 = 4;
  uVar4 = FUN_180487250(local_88,"Target",param_3 + 0x278,&local_98,uVar7,uVar4);
  if (DAT_180bbecdb == '\0') {
    local_98 = ppuVar1;
    FUN_1804c2800("Hitboxes");
    cVar3 = FUN_180486160(local_88,"Hitboxes");
    if (DAT_180bbecdb == '\0') {
      if (cVar3 != '\0') {
        FUN_180488320("##settings");
      }
      cVar3 = FUN_180488630("##settings","Hitboxes",0);
      if (cVar3 != '\0') {
        FUN_180488c60();
        local_98 = &PTR_DAT_1807b7aa8;
        local_90 = 6;
        FUN_18048dbc0(&local_98,param_3 + 0x294);
        FUN_180488f10();
        FUN_1804aeac0();
      }
    }
    else {
      FUN_18049afe0(extraout_XMM0_Qa,&local_98);
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
    local_98 = ppuVar1;
    FUN_18049afe0(uVar4,&local_98);
  }
  if (DAT_180bbecdb == '\0') {
    local_98 = ppuVar1;
    FUN_1804c2800("Limits");
    cVar3 = FUN_180486160(local_88,"Limits");
    if (DAT_180bbecdb == '\0') {
      if (cVar3 != '\0') {
        FUN_180488320("##settings");
      }
      cVar3 = FUN_180488630("##settings","Limits",0);
      if (cVar3 != '\0') {
        FUN_180496790(&local_98);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Limits");
      FUN_180496790(&local_98);
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
    local_98 = ppuVar1;
    FUN_180493f00();
    FUN_180496790(&local_98);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  FUN_180486500(local_88,"Visible Only",param_3 + 0x27c);
  FUN_180486500(local_88,"Smoke Check",param_3 + 0x27d);
  FUN_180486500(local_88,"Flash Check",param_3 + 0x27e);
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
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_68 = (undefined1  [16])0x0;
  uVar9 = 5;
  uVar7 = 1;
  FUN_180485630(local_88,param_2,1);
  FUN_180486500(local_88,"Enabled",param_3 + 0x29a);
  FUN_180487560(local_88,"Delay",param_3 + 0x29c,0,0x437a0000,"%.0f ms",CONCAT44(uVar7,uVar6),uVar9)
  ;
  FUN_180487560(local_88,"Hit Chance",param_3 + 0x2a0,0,uVar5,"%.0f%%",uVar6);
  FUN_180486500(local_88,"Magnet",param_3 + 0x2a4);
  if (DAT_180bbecdb == '\0') {
    local_98 = ppuVar1;
    FUN_1804c2800("Checks");
    cVar3 = FUN_180486160(local_88,"Checks");
    if (DAT_180bbecdb == '\0') {
      if (cVar3 != '\0') {
        FUN_180488320("##settings");
      }
      cVar3 = FUN_180488630("##settings","Checks",0);
      if (cVar3 != '\0') {
        FUN_180496990(&local_98);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Checks");
      FUN_180496990(&local_98);
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
    local_98 = ppuVar1;
    FUN_180493f00();
    FUN_180496990(&local_98);
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
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_68 = (undefined1  [16])0x0;
  uVar9 = 2;
  uVar7 = 1;
  FUN_180485630(local_88,param_2,1);
  FUN_180486500(local_88,"Enabled",param_3 + 0x2b8);
  FUN_180487560(local_88,&DAT_1808581fc,param_3 + 700,0,0x43c80000,"%.0f ms",CONCAT44(uVar7,uVar6),
                uVar9);
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
  return;
}



