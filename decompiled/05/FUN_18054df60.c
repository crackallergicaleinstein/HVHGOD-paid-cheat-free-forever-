// FUN_18054df60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054df60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054df60(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 *local_d0;
  char **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_38 = "Closest";
  local_30 = "Crosshair";
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  local_c0 = 0x10;
  auStack_a8 = ZEXT816(0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  auVar5 = ZEXT864(0);
  local_c8 = (char **)0x180866f18;
  local_d8 = FUN_180515fb0(&local_c8);
  local_58 = CONCAT71(uStack_97,local_98);
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  uStack_68 = auStack_a8._0_8_;
  uStack_60 = auStack_a8._8_8_;
  local_c8 = &local_38;
  local_c0 = 2;
  local_d0 = &local_78;
  auVar3 = vunpcklps_avx(auVar5._0_16_,auVar5._0_16_);
  local_48 = auVar3._0_8_;
  uStack_50 = uStack_90;
  cVar4 = FUN_18048d220("Target Selection",lVar1 + 0x68,&local_c8,1);
  if (cVar4 != '\0') {
    FUN_18050cd00();
  }
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar2);
  FUN_180488f10();
}



