// FUN_180475640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180475640 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180475640(float *param_1,byte param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  float *pfVar3;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auStack_108 [32];
  undefined *local_e8;
  undefined8 *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  FUN_180488c60();
  if (param_2 != 5) {
    FUN_18048bb10(&DAT_1807c6a98,param_1 + 4,0x81,0);
  }
  local_c0 = 1;
  local_28[0] = (float)(int)param_1[1];
  local_d0 = 0;
  local_d8 = 1;
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,0x3f800000);
  local_e8 = &DAT_180829c34;
  auVar5 = ZEXT864(0);
  cVar2 = FUN_18048a250(&DAT_1807c6e54,local_28,0,0x447a0000);
  if (cVar2 != '\0') {
    param_1[1] = (float)(int)local_28[0];
  }
  if (param_2 != 5) {
    local_e8 = (undefined *)CONCAT71(local_e8._1_7_,1);
    FUN_180489c50("Finish Tint",param_1 + 0x25,(longlong)param_1 + 0x91,&DAT_18082a268);
  }
  FUN_180488f10();
  FUN_180488c60();
  local_28[0] = 0.0;
  pfVar3 = (float *)&DAT_18077f720;
  do {
    if (*param_1 < *pfVar3) goto LAB_18047576a;
    local_28[0] = (float)((int)local_28[0] + 1);
    pfVar3 = pfVar3 + 1;
  } while ((longlong)pfVar3 < 0x18077f730);
  local_28[0] = 5.60519e-45;
LAB_18047576a:
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar4 = auVar5._0_16_;
  auVar1 = vunpcklps_avx(auVar4,auVar4);
  local_b8 = &PTR_s_Factory_New_18077f7e0;
  local_e0 = &local_68;
  local_88 = 1;
  uStack_80 = 0;
  local_48 = CONCAT71(uStack_87,1);
  local_38 = auVar1._0_8_;
  uStack_40 = 0;
  local_b0 = 5;
  local_e8 = (undefined *)0x0;
  auVar5 = ZEXT1664(auVar4);
  cVar2 = FUN_18048d220(&DAT_1807c6e60,local_28,&local_b8,1);
  if (cVar2 != '\0') {
    *param_1 = *(float *)(&DAT_18077f778 + (longlong)(int)local_28[0] * 4);
  }
  FUN_18048cc70(extraout_XMM0_Qa,param_1);
  FUN_180488f10();
  if (param_2 < 4) {
    FUN_180488c60();
    local_a8 = 0;
    uStack_a0 = 0;
    local_28[0] = (float)(uint)(*(char *)(param_1 + 2) != '\0');
    auStack_98 = ZEXT816(0);
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar4 = auVar5._0_16_;
    auVar1 = vunpcklps_avx(auVar4,auVar4);
    local_b8 = &PTR_s_Disabled_18077f768;
    local_e0 = &local_68;
    local_88 = 1;
    uStack_80 = 0;
    local_48 = CONCAT71(uStack_87,1);
    local_e8 = (undefined *)0x0;
    uStack_40 = 0;
    local_38 = auVar1._0_8_;
    local_b0 = 2;
    auVar5 = ZEXT1664(auVar4);
    cVar2 = FUN_18048d220(&DAT_18082ac90,local_28,&local_b8,1);
    if (cVar2 != '\0') {
      *(bool *)(param_1 + 2) = local_28[0] == 1.4013e-45;
    }
    local_e8 = (undefined *)CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 2));
    FUN_18048bce0("Value",param_1 + 3,0,999999);
    FUN_180488f10();
  }
  if (param_2 != 5) {
    FUN_180488c60();
    local_b8 = &PTR_s_Disabled_18082b000;
    local_e0 = &local_68;
    auStack_98 = ZEXT816(0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar1 = vunpcklps_avx(auVar5._0_16_,auVar5._0_16_);
    local_88 = 1;
    uStack_80 = 0;
    local_48 = CONCAT71(uStack_87,1);
    local_38 = auVar1._0_8_;
    uStack_40 = 0;
    local_b0 = 0xc;
    local_e8 = &DAT_18082a240;
    FUN_18048d220("Material",param_1 + 0x29,&local_b8,1);
    local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,1);
    FUN_180489fc0("Color",param_1 + 0x2a,1,&DAT_18082a268);
    FUN_180488f10();
  }
}



