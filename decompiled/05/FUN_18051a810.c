// FUN_18051a810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051a810 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051a810(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  char **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_58;
  char *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  FUN_180488c60();
  local_e0 = 8;
  local_d8 = 0;
  local_58 = "Crosshair";
  uStack_d0 = 0;
  local_50 = "Highest Damage";
  local_b8 = 0;
  local_48 = &DAT_180866d1c;
  local_40 = &DAT_180858228;
  local_38 = &DAT_180857e78;
  local_30 = "Lethal Body";
  auStack_c8 = ZEXT816(0);
  uStack_b0 = 0;
  auVar5 = ZEXT864(0);
  local_e8 = (char **)0x180867348;
  local_f8 = FUN_180515fb0(&local_e8);
  local_78 = CONCAT71(uStack_b7,local_b8);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  uStack_88 = auStack_c8._0_8_;
  uStack_80 = auStack_c8._8_8_;
  local_e8 = &local_58;
  local_e0 = 2;
  local_f0 = &local_98;
  auVar4 = auVar5._0_16_;
  auVar2 = vunpcklps_avx(auVar4,auVar4);
  local_68 = auVar2._0_8_;
  uStack_70 = uStack_b0;
  auVar5 = ZEXT1664(auVar4);
  cVar3 = FUN_18048d220("Priority",lVar1 + 0x8c,&local_e8,1);
  if (cVar3 != '\0') {
    FUN_18050cd00();
  }
  auStack_c8 = ZEXT816(0);
  local_d8 = 0;
  uStack_d0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_e8 = (char **)0x180867338;
  local_e0 = 8;
  local_f8 = FUN_180515fb0(&local_e8);
  local_78 = CONCAT71(uStack_b7,local_b8);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  uStack_88 = auStack_c8._0_8_;
  uStack_80 = auStack_c8._8_8_;
  local_e8 = &local_48;
  local_e0 = 4;
  local_f0 = &local_98;
  auVar2 = vunpcklps_avx(auVar5._0_16_,auVar5._0_16_);
  local_68 = auVar2._0_8_;
  uStack_70 = uStack_b0;
  cVar3 = FUN_18048d220("Override",lVar1 + 0x90,&local_e8,1);
  if (cVar3 != '\0') {
    FUN_18050cd00();
  }
  FUN_180488f10();
}



