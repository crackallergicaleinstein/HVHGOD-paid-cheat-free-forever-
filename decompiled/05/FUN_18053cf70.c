// FUN_18053cf70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053cf70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053cf70(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auStack_138 [32];
  char *local_118;
  undefined8 *local_110;
  undefined1 local_108;
  undefined *local_100;
  undefined1 local_f0;
  int local_e8 [4];
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 local_a8;
  uint7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_e8[0] = DAT_180b0c628;
  local_48[0] = 0;
  local_e8[1] = 2;
  piVar4 = local_48;
  if (-1 < DAT_180b0c628) {
    piVar4 = local_e8;
  }
  piVar3 = local_e8 + 1;
  if (DAT_180b0c628 < 3) {
    piVar3 = piVar4;
  }
  local_48[0] = *piVar3;
  FUN_180488c60();
  auStack_b8 = ZEXT816(0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_d8 = &PTR_s_Impact_Mark_18086bb88;
  local_a8 = 0;
  local_110 = &local_88;
  uStack_a0 = 0;
  local_68 = (ulonglong)uStack_a7 << 8;
  local_58 = auVar1._0_8_;
  uStack_60 = 0;
  local_d0 = 3;
  local_118 = &DAT_18082a25c;
  cVar2 = FUN_18048d220("Impact Style",local_48,&local_d8,1);
  if (cVar2 != '\0') {
    DAT_180b0c628 = local_48[0];
  }
  FUN_18053bd80(&DAT_180b0c650);
  auVar5 = ZEXT464(0x3dcccccd);
  if (local_48[0] != 1) {
    local_f0 = 0;
    local_100 = &DAT_18082a278;
    local_108 = 1;
    local_110 = (undefined8 *)CONCAT44(local_110._4_4_,0x3dcccccd);
    local_118 = "%.1f s";
    FUN_18048a250("Mark Visible Time",&DAT_180b0c64c,auVar5._0_8_,0x40a00000);
  }
  FUN_180488f10();
  if (local_48[0] != 1) {
    FUN_180488c60();
    local_118._0_1_ = 1;
    FUN_1805367d0("Mark Fill Color",&DAT_180b0c62c,&DAT_18082a268,1);
    local_118 = (char *)CONCAT71(local_118._1_7_,1);
    FUN_1805367d0("Mark Edge Color",&DAT_180b0c630,&DAT_18082a288,1);
    FUN_180488f10();
  }
  auVar6 = ZEXT464(0x3f800000);
  if (local_48[0] != 0) {
    FUN_180488c60();
    cVar2 = FUN_18048b0e0("Spark Appearance & Motion",&DAT_18082a25c,1);
    if (cVar2 != '\0') {
      FUN_1805303d0("##impact_sparks",0x43af0000);
    }
    cVar2 = FUN_180488630("##impact_sparks","Spark Appearance & Motion",0x43af0000);
    if (cVar2 != '\0') {
      FUN_180488c60();
      local_118 = (char *)CONCAT71(local_118._1_7_,1);
      FUN_1805367d0("Spark Color",&DAT_180b0c634,&DAT_18082a25c,1);
      local_118 = &DAT_180829db8;
      FUN_18053bcb0("Particle Count",&DAT_180b0c638,8,0x60);
      local_f0 = 0;
      local_100 = &DAT_18082a278;
      local_108 = 1;
      local_110._0_4_ = 0x3d4ccccd;
      local_118 = "%.2f s";
      FUN_18048a250("Visible Time",&DAT_180b0c63c,auVar5._0_8_,0x40000000);
      local_f0 = 0;
      local_100 = &DAT_18082a254;
      local_108 = 1;
      local_110._0_4_ = auVar5._0_4_;
      local_118 = "%.1fx";
      FUN_18048a250("Particle Size",&DAT_180b0c648,0x3f000000,0x40400000);
      FUN_180488f10();
      FUN_180488c60();
      local_f0 = 0;
      local_100 = &DAT_18082a274;
      local_108 = 1;
      local_110._0_4_ = auVar6._0_4_;
      local_118 = "%.0f u/s";
      FUN_18048a250("Launch Speed",&DAT_180b0c640,0x41c80000,0x43c80000);
      local_f0 = 0;
      local_100 = &DAT_18082a26c;
      local_108 = 1;
      local_110 = (undefined8 *)CONCAT44(local_110._4_4_,auVar6._0_4_);
      local_118 = "%.0f";
      FUN_18048a250("Gravity",&DAT_180b0c644,0,0x44480000);
      FUN_180488f10();
      FUN_1804aeac0();
    }
    FUN_180488f10();
  }
  FUN_180488c60();
  local_110 = (undefined8 *)0x0;
  local_118 = (char *)((ulonglong)local_118 & 0xffffffffffffff00);
  cVar2 = FUN_1804898a0("Impact Glow",&DAT_180b0c658,&DAT_180858a0c,1);
  if (cVar2 != '\0') {
    DAT_180b0c668 = DAT_180b0c658;
  }
  local_f0 = 0;
  local_100 = &DAT_180830b60;
  local_108 = DAT_180b0c658;
  local_110 = (undefined8 *)CONCAT44(local_110._4_4_,0x3c23d70a);
  local_118 = "%.2f";
  FUN_18048a250("Glow Strength",&DAT_180b0c6c0,auVar5._0_8_,auVar6._0_8_);
  FUN_180488f10();
}



