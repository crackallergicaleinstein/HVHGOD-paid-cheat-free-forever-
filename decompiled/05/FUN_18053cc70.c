// FUN_18053cc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053cc70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053cc70(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined1 local_d0;
  int local_c8 [4];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_c8[0] = DAT_180b0c7d8;
  local_28[0] = 0;
  local_c8[1] = 2;
  piVar4 = local_28;
  if (-1 < DAT_180b0c7d8) {
    piVar4 = local_c8;
  }
  piVar3 = local_c8 + 1;
  if (DAT_180b0c7d8 < 3) {
    piVar3 = piVar4;
  }
  local_28[0] = *piVar3;
  FUN_180488c60();
  local_b8 = &PTR_s_Cross_18086c1b8;
  local_f0 = &local_68;
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_88 = 0;
  uStack_80 = 0;
  local_48 = (ulonglong)uStack_87 << 8;
  local_38 = auVar1._0_8_;
  uStack_40 = 0;
  local_b0 = 3;
  local_f8 = &DAT_18082a244;
  cVar2 = FUN_18048d220("Marker Style",local_28,&local_b8,1);
  if (cVar2 != '\0') {
    DAT_180b0c7d8 = local_28[0];
  }
  auVar5 = ZEXT464(0x3dcccccd);
  local_d0 = 0;
  local_e0 = &DAT_18082a278;
  local_e8 = 1;
  local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,0x3dcccccd);
  local_f8 = "%.1f s";
  FUN_18048a250("Visible Time",&DAT_180b0c7dc,auVar5._0_8_,0x40a00000);
  local_f8._0_1_ = 1;
  FUN_1805367d0("Marker Color",&DAT_180b0c7e0,&DAT_18082a268,1);
  FUN_180488f10();
  FUN_180488c60();
  local_f0 = (undefined8 *)0x0;
  local_f8 = (char *)((ulonglong)local_f8._1_7_ << 8);
  cVar2 = FUN_1804898a0("Marker Glow",&DAT_180b0c7e8,&DAT_180858a0c,1);
  if (cVar2 != '\0') {
    DAT_180b0c7f8 = DAT_180b0c7e8;
  }
  local_d0 = 0;
  local_e0 = &DAT_180830b60;
  local_e8 = DAT_180b0c7e8;
  local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,0x3c23d70a);
  local_f8 = "%.2f";
  FUN_18048a250("Glow Strength",&DAT_180b0c850,auVar5._0_8_,0x3f800000);
  FUN_180488f10();
}



