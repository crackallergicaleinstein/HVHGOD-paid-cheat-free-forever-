// FUN_18036b9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036b9d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036b9d0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined **local_c0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 (*local_88) [16];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_88 = param_1;
  FUN_1801d8420(local_40);
  if (local_20 == '\0') {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    local_f0 = (undefined1  [16])0x0;
    local_e0 = 0;
    uStack_d8 = 0;
    FUN_180159e60(local_f0,L"skybox",6);
    local_f8 = 0x18;
    local_a8 = (undefined1  [16])0x0;
    local_98 = 0;
    local_90 = 0;
    FUN_180159e60(local_a8,L"materials",9);
    local_f8 = 0x78;
    uVar2 = FUN_1800a7e60(local_80,local_40,local_a8);
    FUN_1800a7e60(local_60,uVar2,local_f0);
    FUN_18015b930(local_80);
    FUN_18015b930(local_a8);
    FUN_18015b930(local_f0);
    local_c8 = 0;
    local_c0 = &PTR_vftable_1808d7db8;
    piVar3 = (int *)FUN_1800a80b0(local_d0,local_60,&local_c8);
    if (*piVar3 == 3) {
      FUN_1800f5370(&local_c8,local_60);
      puVar4 = &local_c8;
      uVar5 = 0x7a;
    }
    else {
      local_e0 = 0;
      uStack_d8 = 7;
      local_f0._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar1._14_2_ = 0;
      auVar1._0_14_ = local_f0._2_14_;
      local_f0 = auVar1 << 0x10;
      puVar4 = (undefined8 *)local_f0;
      uVar5 = 0x7c;
    }
    local_f8 = uVar5;
    FUN_1800f5370(param_1,puVar4);
    if ((uVar5 & 4) != 0) {
      uVar5 = uVar5 & 0xfffffffb;
      FUN_18015b930(local_f0);
    }
    if ((uVar5 & 2) != 0) {
      FUN_18015b930(&local_c8);
    }
    FUN_18015b930(local_60);
    if (local_20 != '\0') {
      FUN_18015b930(local_40);
    }
  }
}



