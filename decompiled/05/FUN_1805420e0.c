// FUN_1805420e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805420e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805420e0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_d8 [32];
  code ***local_b8;
  undefined **local_b0;
  char *local_a8;
  int local_a0;
  code **local_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_98 = (code **)0x0;
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_a0 = 1;
  local_a8 = "Configure";
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0x425c0000);
  local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x43f00000);
  FUN_180485630(&local_68,param_1,0);
  local_b0 = &PTR_DAT_18086bb48;
  local_b8 = &local_98;
  FUN_18055a480(&local_68,"##world_section",&DAT_180c62728,&PTR_s_Sky___Lighting_18086c060);
  auVar7 = ZEXT464((uint)((float)(int)local_48._8_4_ * 30.855553 + 0.6 + uStack_58._4_4_ + 21.0));
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
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = (undefined1  [16])0x0;
  uVar4 = auVar6._0_4_;
  local_b0._0_4_ = uVar4;
  if (DAT_180c62728 == 0) {
    local_a0 = 2;
    local_a8 = "Sky";
    local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436e0000);
    auVar7 = ZEXT1664(auVar6);
    FUN_180485630(&local_68,param_1,0);
    cVar2 = DAT_180cc8de0;
    local_78 = FUN_180541c90;
    local_98 = &local_78;
    puStack_90 = &DAT_180cc8de0;
    uVar4 = 0x43af0000;
    local_b0._0_4_ = 0x43af0000;
    FUN_180567590(&local_68);
    cVar3 = DAT_180cc8e70;
    if (cVar2 != DAT_180cc8de0) {
      DAT_180cc8df0 = DAT_180cc8de0;
    }
    local_78 = FUN_180540800;
    local_98 = &local_78;
    puStack_90 = &DAT_180cc8e70;
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
    local_b8 = (code ***)CONCAT71(local_b8._1_7_,1);
    FUN_180563a20(&local_68,"Sky Colors",&DAT_180cc8e70,&local_98);
    if (cVar3 != DAT_180cc8e70) {
      DAT_180cc8e80 = DAT_180cc8e70;
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
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_a0 = 3;
    local_a8 = "Surface & Light";
    local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436a199a);
    local_b0._0_4_ = uVar5;
    FUN_180485630(&local_68,param_1,1);
    cVar3 = DAT_180cc8f70;
    local_78 = (code *)&DAT_180cc8de0;
    local_98 = &local_78;
    puStack_90 = &DAT_180cc8f70;
    local_b0._0_4_ = uVar4;
    FUN_1805679c0(&local_68);
    cVar2 = DAT_180cc8ef0;
    if (cVar3 != DAT_180cc8f70) {
      DAT_180cc8f80 = DAT_180cc8f70;
    }
    local_78 = (code *)&DAT_180cc8de0;
    local_98 = &local_78;
    puStack_90 = &DAT_180cc8ef0;
    local_b0._0_4_ = uVar4;
    FUN_180567e10(&local_68);
    cVar3 = DAT_180cc8fe8;
    if (cVar2 != DAT_180cc8ef0) {
      DAT_180cc8f00 = DAT_180cc8ef0;
    }
    local_78 = (code *)&DAT_180cc8de0;
    local_98 = &local_78;
    puStack_90 = &DAT_180cc8fe8;
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
    FUN_180568260(&local_68);
    if (cVar3 != DAT_180cc8fe8) {
      DAT_180cc8ff8 = DAT_180cc8fe8;
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
    if (DAT_180c62728 == 1) {
      local_a0 = 2;
      local_a8 = "Weather & Motion";
      local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_68,param_1,0);
      cVar2 = DAT_180cc8be0;
      local_78 = FUN_1805408e0;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc8be0;
      uVar4 = 0x43af0000;
      local_b0._0_4_ = 0x43af0000;
      local_b8._0_1_ = 1;
      FUN_180563a20(&local_68,"Weather Particles",&DAT_180cc8be0,&local_98);
      cVar3 = DAT_180cc8d58;
      if (cVar2 != DAT_180cc8be0) {
        DAT_180cc8bf0 = DAT_180cc8be0;
      }
      local_78 = FUN_180540c80;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc8d58;
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
      local_b8 = (code ***)CONCAT71(local_b8._1_7_,1);
      FUN_180563a20(&local_68,&DAT_180829c4c,&DAT_180cc8d58,&local_98);
      if (cVar3 != DAT_180cc8d58) {
        DAT_180cc8d68 = DAT_180cc8d58;
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
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_a0 = 2;
      local_a8 = "Fog & Surfaces";
      local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436a199a);
      local_b0._0_4_ = uVar5;
      FUN_180485630(&local_68,param_1,1);
      cVar2 = DAT_180cc8c68;
      local_78 = FUN_180540e30;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc8c68;
      local_b8 = (code ***)CONCAT71(local_b8._1_7_,1);
      local_b0._0_4_ = uVar4;
      FUN_180563a20(&local_68,"Custom Fog",&DAT_180cc8c68,&local_98);
      cVar3 = DAT_180cc8ce8;
      if (cVar2 != DAT_180cc8c68) {
        DAT_180cc8c78 = DAT_180cc8c68;
      }
      local_78 = (code *)&DAT_180cc8be0;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc8ce8;
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
      FUN_1805686b0(&local_68);
      if (cVar3 != DAT_180cc8ce8) {
        DAT_180cc8cf8 = DAT_180cc8ce8;
      }
    }
    else if (DAT_180c62728 == 2) {
      local_a0 = DAT_180c62728;
      local_a8 = "Light Processing";
      local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_68,param_1,0);
      cVar2 = DAT_180cc9058;
      local_78 = FUN_180541080;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc9058;
      uVar4 = 0x43af0000;
      local_b0._0_4_ = 0x43af0000;
      local_b8 = (code ***)CONCAT71(local_b8._1_7_,1);
      FUN_180563a20(&local_68,"Bloom",&DAT_180cc9058,&local_98);
      cVar3 = DAT_180cc90d8;
      if (cVar2 != DAT_180cc9058) {
        DAT_180cc9068 = DAT_180cc9058;
      }
      local_78 = (code *)&DAT_180cc8de0;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc90d8;
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
      FUN_180568b00(&local_68);
      if (cVar3 != DAT_180cc90d8) {
        DAT_180cc90e8 = DAT_180cc90d8;
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
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_48 = (undefined1  [16])0x0;
      local_a0 = 1;
      local_a8 = "Focus";
      local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436a199a);
      local_b0._0_4_ = uVar5;
      FUN_180485630(&local_68,param_1,1);
      cVar2 = DAT_180cc9148;
      local_78 = FUN_180541290;
      local_98 = &local_78;
      puStack_90 = &DAT_180cc9148;
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
      local_b8 = (code ***)CONCAT71(local_b8._1_7_,1);
      FUN_180563a20(&local_68,"Depth of Field",&DAT_180cc9148,&local_98);
      if (cVar2 != DAT_180cc9148) {
        DAT_180cc9158 = DAT_180cc9148;
      }
    }
    else {
      local_a0 = 3;
      local_a8 = "Map Layers";
      local_b8 = (code ***)CONCAT44(local_b8._4_4_,0x436e0000);
      FUN_180485630(&local_68,param_1,0);
      cVar2 = DAT_180b0c8c0;
      local_70[0] = 0;
      local_98 = (code **)local_70;
      puStack_90 = &DAT_180b0c8c0;
      uVar4 = 0x43af0000;
      local_b0._0_4_ = 0x43af0000;
      FUN_180568f50(&local_68);
      cVar3 = DAT_180b0c9f8;
      if (cVar2 != DAT_180b0c8c0) {
        DAT_180b0c8d0 = DAT_180b0c8c0;
      }
      local_70[0] = 0;
      local_98 = (code **)local_70;
      puStack_90 = &DAT_180b0c9f8;
      local_b0._0_4_ = uVar4;
      FUN_180569380(&local_68);
      cVar2 = DAT_180b0cac8;
      if (cVar3 != DAT_180b0c9f8) {
        DAT_180b0ca08 = DAT_180b0c9f8;
      }
      local_70[0] = 0;
      local_98 = (code **)local_70;
      puStack_90 = &DAT_180b0cac8;
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar4);
      FUN_1805697b0(&local_68);
      if (cVar2 != DAT_180b0cac8) {
        DAT_180b0cad8 = DAT_180b0cac8;
      }
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



