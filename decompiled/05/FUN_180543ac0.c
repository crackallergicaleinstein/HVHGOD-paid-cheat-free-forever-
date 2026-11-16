// FUN_180543ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180543ac0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180543ac0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined **local_a0;
  char *local_98;
  int local_90;
  code **local_88;
  undefined1 *local_80;
  undefined1 local_78 [8];
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_90 = 1;
  local_98 = "Configure";
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x425c0000);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x43f00000);
  FUN_180485630(&local_68,param_1,0);
  local_a0 = &PTR_DAT_18086c288;
  local_a8 = &DAT_18086b878;
  FUN_180556e00(&local_68,"##movement_section",&DAT_180c6287c,&PTR_s_Jumping___Landing_18086b818);
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
  local_a0._0_4_ = uVar4;
  if (DAT_180c6287c == 0) {
    local_90 = 1;
    local_98 = "Automatic Jumping";
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
    auVar7 = ZEXT1664(auVar6);
    FUN_180485630(&local_68,param_1,0);
    cVar2 = DAT_180cc81b0;
    local_70 = (code *)&DAT_180cc81b0;
    local_88 = &local_70;
    local_80 = &DAT_180cc81b0;
    uVar4 = 0x43af0000;
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x43af0000);
    FUN_180569be0(&local_68);
    if (cVar2 != DAT_180cc81b0) {
      DAT_180cc81c0 = DAT_180cc81b0;
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
    local_90 = 2;
    local_98 = "Landing & Edges";
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
    local_a0._0_4_ = uVar5;
    FUN_180485630(&local_68,param_1,1);
    cVar2 = DAT_180cc8360;
    local_70 = (code *)&DAT_180cc81b0;
    local_88 = &local_70;
    local_80 = &DAT_180cc8360;
    local_a0._0_4_ = uVar4;
    FUN_18056a040(&local_68);
    cVar3 = DAT_180cc8a98;
    if (cVar2 != DAT_180cc8360) {
      DAT_180cc8370 = DAT_180cc8360;
    }
    local_78[0] = 0;
    local_88 = (code **)local_78;
    local_80 = &DAT_180cc8a98;
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
    FUN_18056a490(&local_68);
    if (cVar3 != DAT_180cc8a98) {
      DAT_180cc8aa8 = DAT_180cc8a98;
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
    if (DAT_180c6287c == 1) {
      local_90 = DAT_180c6287c;
      local_98 = "Airborne Steering";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_68,param_1,0);
      cVar2 = DAT_180cc8280;
      local_70 = (code *)&DAT_180cc81b0;
      local_88 = &local_70;
      local_80 = &DAT_180cc8280;
      uVar4 = 0x43af0000;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,0x43af0000);
      FUN_18056a8c0(&local_68);
      if (cVar2 != DAT_180cc8280) {
        DAT_180cc8290 = DAT_180cc8280;
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
      local_90 = 3;
      local_98 = "Ground & Ladders";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_68,param_1,1);
      cVar2 = DAT_180cc82f8;
      local_78[0] = 0;
      local_88 = (code **)local_78;
      local_80 = &DAT_180cc82f8;
      local_a0._0_4_ = uVar4;
      FUN_18056ad10(&local_68);
      cVar3 = DAT_180cc8b68;
      if (cVar2 != DAT_180cc82f8) {
        DAT_180cc8308 = DAT_180cc82f8;
      }
      local_70 = (code *)&DAT_180cc81b0;
      local_88 = &local_70;
      local_80 = &DAT_180cc8b68;
      local_a0._0_4_ = uVar4;
      FUN_18056b140(&local_68);
      cVar2 = DAT_180cc8a30;
      if (cVar3 != DAT_180cc8b68) {
        DAT_180cc8b78 = DAT_180cc8b68;
      }
      local_78[0] = 0;
      local_88 = (code **)local_78;
      local_80 = &DAT_180cc8a30;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_18056b590(&local_68);
      if (cVar2 != DAT_180cc8a30) {
        DAT_180cc8a40 = DAT_180cc8a30;
      }
    }
    else {
      local_90 = 2;
      local_98 = "Surface Routes";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436e0000);
      auVar7 = ZEXT1664(auVar6);
      FUN_180485630(&local_68,param_1,0);
      cVar2 = DAT_180cc8438;
      local_70 = FUN_1805432a0;
      local_88 = &local_70;
      local_80 = &DAT_180cc8438;
      uVar4 = 0x43af0000;
      local_a0._0_4_ = 0x43af0000;
      local_a8._0_1_ = 1;
      FUN_180563a20(&local_68,"Edge Bug",&DAT_180cc8438,&local_88);
      cVar3 = DAT_180cc8600;
      if (cVar2 != DAT_180cc8438) {
        DAT_180cc8448 = DAT_180cc8438;
      }
      local_70 = FUN_180543670;
      local_88 = &local_70;
      local_80 = &DAT_180cc8600;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,1);
      FUN_180563a20(&local_68,"Pixel Surf",&DAT_180cc8600,&local_88);
      if (cVar3 != DAT_180cc8600) {
        DAT_180cc8610 = DAT_180cc8600;
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
      local_90 = 2;
      local_98 = "Surface Utilities";
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x436a199a);
      local_a0._0_4_ = uVar5;
      FUN_180485630(&local_68,param_1,1);
      cVar2 = DAT_180cc8960;
      local_70 = (code *)&DAT_180cc81b0;
      local_88 = &local_70;
      local_80 = &DAT_180cc8960;
      local_a0._0_4_ = uVar4;
      FUN_18056b9c0(&local_68);
      cVar3 = DAT_180cc8b00;
      if (cVar2 != DAT_180cc8960) {
        DAT_180cc8970 = DAT_180cc8960;
      }
      local_78[0] = 0;
      local_88 = (code **)local_78;
      local_80 = &DAT_180cc8b00;
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar4);
      FUN_18056be10(&local_68);
      if (cVar3 != DAT_180cc8b00) {
        DAT_180cc8b10 = DAT_180cc8b00;
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



