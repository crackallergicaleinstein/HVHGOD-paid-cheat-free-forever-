// FUN_18053fee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053fee0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053fee0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined **local_a0;
  char *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  code *local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_88 = (undefined1  [16])0x0;
  local_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = (undefined1  [16])0x0;
  local_90 = 1;
  local_98 = "Configure";
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x425c0000);
  local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x43f00000);
  FUN_180485630(&local_60,param_1,0);
  local_a0 = &PTR_DAT_18086c408;
  local_a8 = local_88;
  FUN_180556e00(&local_60,"##view_section",&DAT_180c62938,&PTR_s_Camera_18086c300);
  auVar7 = ZEXT464((uint)((float)(int)local_40._8_4_ * 30.855553 + 0.6 + uStack_50._4_4_ + 21.0));
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  auVar6 = auVar7._0_16_;
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
    auVar6 = auVar7._0_16_;
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = (undefined1  [16])0x0;
  uVar4 = auVar6._0_4_;
  local_a0._0_4_ = uVar4;
  if (DAT_180c62938 == 0) {
    local_90 = 4;
    local_98 = "Camera";
    local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x436e0000);
    auVar7 = ZEXT1664(auVar6);
    FUN_180485630(&local_60,param_1,0);
    cVar2 = DAT_180b0cba0;
    local_70 = (code *)&DAT_180b0cba0;
    local_88._0_8_ = &local_70;
    local_88._8_8_ = &DAT_180b0cba0;
    uVar4 = 0x43af0000;
    local_a0._0_4_ = 0x43af0000;
    FUN_180564b10(&local_60);
    cVar3 = DAT_180b0cc10;
    if (cVar2 != DAT_180b0cba0) {
      DAT_180b0cbb0 = DAT_180b0cba0;
    }
    local_70 = (code *)&DAT_180b0cba0;
    local_88._0_8_ = &local_70;
    local_88._8_8_ = &DAT_180b0cc10;
    local_a0._0_4_ = uVar4;
    FUN_180564f60(&local_60);
    cVar2 = DAT_180b0cc88;
    if (cVar3 != DAT_180b0cc10) {
      DAT_180b0cc20 = DAT_180b0cc10;
    }
    local_70 = (code *)&DAT_180b0cba0;
    local_88._0_8_ = &local_70;
    local_88._8_8_ = &DAT_180b0cc88;
    local_a0._0_4_ = uVar4;
    FUN_1805653b0(&local_60);
    cVar3 = DAT_180b0ccf8;
    if (cVar2 != DAT_180b0cc88) {
      DAT_180b0cc98 = DAT_180b0cc88;
    }
    local_70 = (code *)&DAT_180b0cba0;
    local_88._8_8_ = &DAT_180b0ccf8;
    local_88._0_8_ = &local_70;
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
    FUN_180565800(&local_60);
    if (cVar3 != DAT_180b0ccf8) {
      DAT_180b0cd08 = DAT_180b0ccf8;
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    uVar5 = auVar7._0_4_;
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      uVar5 = auVar7._0_4_;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
    local_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    local_40 = (undefined1  [16])0x0;
    local_90 = 1;
    local_98 = "First-Person Camera";
    local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x436a199a);
    local_a0._0_4_ = uVar5;
    FUN_180485630(&local_60,param_1,1);
    cVar2 = DAT_180b0cd68;
    local_70 = (code *)&DAT_180b0b320;
    local_88._8_8_ = &DAT_180b0cd68;
    local_88._0_8_ = &local_70;
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
    FUN_180565c50(&local_60);
    if (cVar2 != DAT_180b0cd68) {
      DAT_180b0cd78 = DAT_180b0cd68;
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (1 < iVar1) {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_90 = 3;
    if (DAT_180c62938 == 1) {
      local_98 = "Reticle Overlays";
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_60,param_1,0);
      cVar2 = DAT_180b0cde0;
      local_70 = FUN_18053f130;
      local_88._0_8_ = &local_70;
      local_88._8_8_ = &DAT_180b0cde0;
      uVar4 = 0x43af0000;
      local_a0._0_4_ = 0x43af0000;
      local_a8._0_1_ = 1;
      FUN_180563a20(&local_60,"Crosshair Overlay",&DAT_180b0cde0,local_88);
      cVar3 = DAT_180b0d018;
      if (cVar2 != DAT_180b0cde0) {
        DAT_180b0cdf0 = DAT_180b0cde0;
      }
      local_70 = FUN_18053f6c0;
      local_88._0_8_ = &local_70;
      local_88._8_8_ = &DAT_180b0d018;
      local_a8._0_1_ = 1;
      local_a0._0_4_ = uVar4;
      FUN_180563a20(&local_60,"Scope Overlay",&DAT_180b0d018,local_88);
      cVar2 = DAT_180cadbf0;
      if (cVar3 != DAT_180b0d018) {
        DAT_180b0d028 = DAT_180b0d018;
      }
      local_70 = FUN_18053fc20;
      local_88._8_8_ = &DAT_180cadbf0;
      local_88._0_8_ = &local_70;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_60,"Penetration Marker",&DAT_180cadbf0,local_88);
      if (cVar2 != DAT_180cadbf0) {
        DAT_180cadc00 = DAT_180cadbf0;
      }
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      uVar5 = auVar7._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        uVar5 = auVar7._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_90 = 1;
      local_98 = "Native Scope";
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_60,param_1,1);
      cVar2 = DAT_180b0c858;
      local_68[0] = 0;
      local_88._8_8_ = &DAT_180b0c858;
      local_88._0_8_ = local_68;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_1805660a0(&local_60);
      if (cVar2 != DAT_180b0c858) {
        DAT_180b0c868 = DAT_180b0c858;
      }
    }
    else {
      local_98 = "Local Model";
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_60,param_1,0);
      cVar2 = DAT_180b0c990;
      local_68[0] = 0;
      local_88._0_8_ = local_68;
      local_88._8_8_ = &DAT_180b0c990;
      uVar4 = 0x43af0000;
      local_a0._0_4_ = 0x43af0000;
      FUN_1805664d0(&local_60);
      cVar3 = DAT_180cb3528;
      if (cVar2 != DAT_180b0c990) {
        DAT_180b0c9a0 = DAT_180b0c990;
      }
      local_68[0] = 0;
      local_88._0_8_ = local_68;
      local_88._8_8_ = &DAT_180cb3528;
      local_a0._0_4_ = uVar4;
      FUN_180566900(&local_60);
      cVar2 = DAT_180b0c928;
      if (cVar3 != DAT_180cb3528) {
        DAT_180cb3538 = DAT_180cb3528;
      }
      local_68[0] = 0;
      local_88._8_8_ = &DAT_180b0c928;
      local_88._0_8_ = local_68;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_180566d30(&local_60);
      if (cVar2 != DAT_180b0c928) {
        DAT_180b0c938 = DAT_180b0c928;
      }
      if (DAT_180bbecdb != '\0') {
        if (DAT_180c62d18 != DAT_180c62d20) {
          FUN_18015c010(DAT_180c62d20 + -0x20);
          DAT_180c62d20 = DAT_180c62d20 + -0x20;
        }
        DAT_1808e4e38 = 0xffffffff;
      }
      uVar5 = auVar7._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        uVar5 = auVar7._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = (undefined1  [16])0x0;
      local_90 = 3;
      local_98 = "Visual Distractions";
      local_a8._0_4_ = 0x436a199a;
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_60,param_1,1);
      cVar2 = DAT_180b0ca60;
      local_68[0] = 0;
      local_88._8_8_ = &DAT_180b0ca60;
      local_88._0_8_ = local_68;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_180567160(&local_60);
      if (cVar2 != DAT_180b0ca60) {
        DAT_180b0ca70 = DAT_180b0ca60;
      }
      uVar4 = 0x43a70000;
      local_a8._0_4_ = 0x43a70000;
      FUN_18055b1e0(&local_60);
      local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,uVar4);
      FUN_18055b6a0(&local_60);
    }
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (1 < iVar1) {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  FUN_1804c5a40("Calling PopID() too many times!");
}



