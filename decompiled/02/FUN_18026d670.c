// FUN_18026d670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026d670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026d670(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8;
  char local_1c7;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a0 [16];
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [16];
  undefined1 local_178;
  undefined4 local_177;
  undefined2 local_173;
  undefined1 local_171;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114 [32];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac [32];
  undefined1 local_8c [32];
  undefined8 local_6c;
  ulonglong local_50;
  
  uVar1 = DAT_180c64060;
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  local_1b0 = *param_3;
  local_1ac = param_3[1];
  local_1a8 = param_3[2];
  local_1c0 = *param_4;
  uStack_1bc = param_4[1];
  local_1b8 = param_4[2];
  local_1a0._12_4_ = 0;
  local_1a0._0_12_ = ZEXT812(0);
  local_1a0 = local_1a0 << 0x20;
  local_190 = 0;
  local_18c = 0;
  local_178 = 0;
  local_177 = 0;
  local_173 = 0;
  local_171 = 0;
  local_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_130 = (undefined1  [16])0x0;
  local_120 = 0;
  local_118 = 0;
  local_114 = ZEXT1232(ZEXT812(0)) << 0x20;
  local_f4 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_6c = 0;
  local_c0 = 0x7fc0000000000000;
  fVar5 = 0.0;
  local_188 = local_1a0;
  local_168 = local_1a0;
  local_f0 = local_1b0;
  local_ec = local_1ac;
  local_e8 = local_1a8;
  local_e4 = local_1c0;
  local_e0 = uStack_1bc;
  local_dc = local_1b8;
  local_cc = local_1c0;
  local_c8 = uStack_1bc;
  local_c4 = local_1b8;
  local_ac = local_114;
  local_8c = local_114;
  lVar3 = FUN_18026d8b0();
  if (lVar3 != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    local_1d0 = local_168;
    local_1d8 = param_5;
    local_1e0 = &local_1c0;
    local_1e8 = &local_1b0;
    FUN_18027b020(&local_1c8,lVar3,uVar1,local_1a0);
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if (local_1c7 != '\0') {
      sVar2 = thunk_FUN_180624430(local_c0._4_4_);
      if (((sVar2 < 1) && (fVar5 <= local_c0._4_4_)) && (local_c0._4_4_ <= 1.0)) {
        uStack_1bc = CONCAT31(uStack_1bc._1_3_,local_b0._3_1_);
        *param_2 = CONCAT44(uStack_1bc,local_c0._4_4_);
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
}



