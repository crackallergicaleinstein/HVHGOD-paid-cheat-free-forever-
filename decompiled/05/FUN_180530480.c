// FUN_180530480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180530480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180530480(void)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong extraout_XMM0_Qa;
  ulonglong uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  undefined1 local_40;
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  FUN_180488c60();
  uVar2 = FUN_180488a80("Surface",&DAT_18082a240);
  uVar2 = FUN_180530940(uVar2,"Panel Tint",&DAT_180b0deb0,&DAT_18082a268);
  uVar2 = FUN_180530940(uVar2,"Text Color",&DAT_180b0de20,&DAT_18082a258);
  FUN_180530940(uVar2,"Accent Color",&DAT_180b0de24,&DAT_180858a0c);
  auVar5 = ZEXT464(0x3f800000);
  local_38[0] = (float)FUN_1802c3a60(DAT_180b0debc,0,auVar5._0_8_,auVar5._0_8_);
  auVar4 = ZEXT464(0x42c80000);
  local_40 = 0;
  local_50 = &DAT_180829a44;
  local_58 = 1;
  local_38[0] = local_38[0] * 100.0;
  local_60._0_4_ = auVar5._0_4_;
  local_68 = "%.0f%%";
  cVar1 = FUN_18048a250("Backdrop Blur",local_38,0,auVar4._0_8_);
  uVar3 = extraout_XMM0_Qa;
  if (cVar1 != '\0') {
    uVar3 = (ulonglong)(uint)local_38[0];
    DAT_180b0debc = local_38[0] / auVar4._0_4_;
  }
  FUN_180530940(uVar3,"Shadow Color",&DAT_180b0deb4,&DAT_18082a268);
  local_40 = 1;
  local_50 = &DAT_18082a240;
  local_58 = 1;
  local_60._0_4_ = 0x3d4ccccd;
  local_68 = "%.2f";
  FUN_18048a250("Shadow Strength",&DAT_180b0dec0,0,0x40000000);
  local_40 = 1;
  local_50 = &DAT_18082a254;
  local_58 = 1;
  local_60._0_4_ = 0x3dcccccd;
  local_68 = "%.1f px";
  FUN_18048a250("Shadow Offset",&DAT_180b0dec4,0,0x40a00000);
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Layout",&DAT_18082a254);
  local_40 = 1;
  local_50 = &DAT_18082a298;
  local_58 = 1;
  local_60._0_4_ = auVar5._0_4_;
  local_68 = "%.0f px";
  FUN_18048a250("Bar Height",&DAT_180b0decc,0x41c00000,0x42500000);
  local_40 = 1;
  local_50 = &DAT_180829a3c;
  local_58 = 1;
  local_60._0_4_ = auVar5._0_4_;
  local_68 = "%.0f px";
  FUN_18048a250("Logo Size",&DAT_180b0dec8,0x41200000,0x41e00000);
  local_40 = 1;
  local_50 = &DAT_18082a298;
  local_58 = 1;
  local_60._0_4_ = auVar5._0_4_;
  local_68 = "%.0f px";
  FUN_18048a250("Metric Spacing",&DAT_180b0ded0,0x41000000,0x41f00000);
  local_40 = 1;
  local_50 = &DAT_18082a254;
  local_58 = 1;
  local_60 = CONCAT44(local_60._4_4_,auVar5._0_4_);
  local_68 = "%.0f px";
  FUN_18048a250("Side Padding",&DAT_180b0ded4,0x40c00000,0x41c00000);
  local_60 = 0;
  local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
  cVar1 = FUN_1804898a0("Show Avatar",&DAT_180b0ded8,&DAT_18082a250,1);
  if (cVar1 != '\0') {
    DAT_180b0dee8 = DAT_180b0ded8;
  }
  if (DAT_180b0ded8 != '\0') {
    FUN_180530940(DAT_180b0ded8,"Avatar Ring",&DAT_180b0deb8,&DAT_180858a04);
  }
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Metric Accents",&DAT_180859278);
  local_60 = 0;
  local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
  cVar1 = FUN_1804898a0("Individual Accent Colors",&DAT_180b0de28,&DAT_18082a268,1);
  if (cVar1 != '\0') {
    DAT_180b0de38 = DAT_180b0de28;
  }
  if (DAT_180b0de28 != '\0') {
    uVar2 = FUN_180530940(DAT_180b0de28,&DAT_1808592e4,&DAT_180b0de90,&DAT_180829a3c);
    uVar2 = FUN_180530940(uVar2,"Framerate",&DAT_180b0de94,&DAT_180830b50);
    uVar2 = FUN_180530940(uVar2,&DAT_180867c3c,&DAT_180b0de98,&DAT_18082a270);
    uVar2 = FUN_180530940(uVar2,"Clock",&DAT_180b0de9c,&DAT_18082a278);
    FUN_180530940(uVar2,"Velocity",&DAT_180b0dea0,&DAT_18082a274);
  }
  local_68 = (char *)CONCAT71(local_68._1_7_,1);
  uVar2 = FUN_18048bce0("High Ping Threshold",&DAT_180b0deac,1,300);
  uVar2 = FUN_180530940(uVar2,"High Ping Text",&DAT_180b0dea4,&DAT_18082a258);
  FUN_180530940(uVar2,"High Ping Marker",&DAT_180b0dea8,&DAT_18082a270);
  FUN_180488f10();
}



