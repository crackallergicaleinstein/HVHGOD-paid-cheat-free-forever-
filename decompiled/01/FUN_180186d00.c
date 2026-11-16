// FUN_180186d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180186d00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180186d00(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_e8._0_8_ = param_1;
  FUN_180186af0(local_48);
  cVar9 = FUN_18017f370(param_2);
  if ((cVar9 == '\0') || (local_38 == 0)) {
    uStack_d8 = 0;
    uStack_d0 = 7;
    local_e8._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar3._14_2_ = 0;
    auVar3._0_14_ = local_e8._2_14_;
    local_e8 = auVar3 << 0x10;
    puVar12 = (undefined8 *)local_e8;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_c8 = (undefined1  [16])0x0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_180159e60(local_c8,L"content_dir.vpk",0xf);
    local_f8 = 0xc1;
    uVar11 = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar10 = __std_fs_code_page();
    local_e8._8_8_ = uVar11;
    local_e8._0_8_ = param_2;
    FUN_1801628d0(local_a8,uVar10,local_e8);
    local_f8 = 0x3c3;
    uVar11 = FUN_1800a7e60(local_68,local_48,local_a8);
    local_f8 = 0x3c7;
    puVar12 = (undefined8 *)FUN_1800a7e60(local_88,uVar11,local_c8);
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar11 = puVar12[1];
  uVar1 = puVar12[2];
  uVar2 = puVar12[3];
  *(undefined8 *)*param_1 = *puVar12;
  *(undefined8 *)(*param_1 + 8) = uVar11;
  *(undefined8 *)param_1[1] = uVar1;
  *(undefined8 *)(param_1[1] + 8) = uVar2;
  *(undefined2 *)puVar12 = 0;
  puVar12[2] = 0;
  puVar12[3] = 7;
  if (bVar4) {
    FUN_18015b930(local_e8);
  }
  if (bVar5) {
    FUN_18015b930(local_88);
  }
  if (bVar6) {
    FUN_18015b930(local_68);
  }
  if (bVar7) {
    FUN_18015b930(local_a8);
  }
  if (bVar8) {
    FUN_18015b930(local_c8);
  }
  FUN_18015b930(local_48);
}



