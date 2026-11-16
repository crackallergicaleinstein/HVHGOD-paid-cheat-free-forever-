// FUN_18053b180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053b180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053b180(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auVar3 [64];
  undefined4 uVar4;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined ***local_100;
  undefined1 local_f8;
  undefined *local_f0;
  undefined1 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 local_a8;
  uint7 uStack_a7;
  undefined8 uStack_a0;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_48 [4];
  float local_44;
  uint local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  FUN_1805302b0("Layout");
  FUN_180488c60();
  local_e0 = 0;
  local_f0 = &DAT_180829db8;
  local_44 = (float)DAT_180b0b3a8;
  local_f8 = 1;
  local_100 = (undefined ***)CONCAT44(local_100._4_4_,0x3f800000);
  local_108 = "%.0f";
  cVar2 = FUN_18048a250("Visible Messages",&local_44,0x3f800000,0x41000000);
  if (cVar2 != '\0') {
    DAT_180b0b3a8 = (int)local_44;
  }
  uStack_c0 = 2;
  local_c8 = &PTR_DAT_18086c2f0;
  auStack_b8 = ZEXT816(0);
  local_d8 = &PTR_s_Newest_First_18086bd90;
  local_100 = &local_88;
  local_a8 = 0;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = ZEXT812(0);
  local_88 = &PTR_DAT_18086c2f0;
  uStack_80 = 2;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar1 = vunpcklps_avx(auVar1 << 0x20,auVar1 << 0x20);
  uStack_a0 = 0;
  local_68 = (ulonglong)uStack_a7 << 8;
  local_108 = &DAT_18082a28c;
  uStack_60 = 0;
  local_58 = auVar1._0_8_;
  local_d0 = 2;
  auVar3 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220("Message Order",&DAT_180b0b3ac,&local_d8,1);
  local_c8 = (undefined **)0x0;
  uStack_c0 = 0;
  local_40[0] = (uint)(DAT_180b0b3b0 != '\0');
  local_d8 = &PTR_s_Up_to_Two_Lines_18086bf88;
  local_100 = &local_88;
  auStack_b8 = ZEXT816(0);
  local_88 = (undefined **)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar1 = vunpcklps_avx(auVar3._0_16_,auVar3._0_16_);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = (ulonglong)uStack_a7 << 8;
  local_108 = &DAT_180830b44;
  uStack_60 = 0;
  local_58 = auVar1._0_8_;
  local_d0 = 2;
  cVar2 = FUN_18048d220("Text Layout",local_40,&local_d8,1);
  if (cVar2 != '\0') {
    DAT_180b0b3b0 = local_40[0] == 1;
  }
  FUN_180488f10();
  FUN_1805302b0("Time fully visible, followed by a short fade");
  FUN_180488c60();
  uVar4 = 0x3dcccccd;
  local_e0 = 0;
  local_f0 = &DAT_18082a278;
  local_f8 = 1;
  local_100._0_4_ = 0x3dcccccd;
  local_108 = "%.1f s";
  FUN_18048a250("Default Duration",&DAT_180b0bee0,0x3f000000,0x41200000);
  local_e0 = 0;
  local_f0 = &DAT_18082a244;
  local_f8 = 1;
  local_100 = (undefined ***)CONCAT44(local_100._4_4_,uVar4);
  local_108 = "%.1f s";
  FUN_18048a250("Miss Duration",&DAT_180b0c0f0,0x3f000000,0x41200000);
  FUN_180488f10();
  FUN_180488c60();
  cVar2 = FUN_18048b0e0("Appearance",&DAT_18082a268,1);
  auVar3 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##log_screen_appearance",auVar3._0_8_);
  }
  FUN_18053b0f0(&DAT_180b0b340);
  FUN_180488f10();
  cVar2 = FUN_180488630("##log_screen_appearance","On-Screen Appearance",auVar3._0_8_);
  if (cVar2 != '\0') {
    FUN_1805302b0("Text & highlights");
    FUN_180488c60();
    local_108._0_1_ = 1;
    FUN_1805367d0("Message Text",&DAT_180b0b3b4,&DAT_18082a258,1);
    local_108._0_1_ = 1;
    FUN_1805367d0("Player Names",&DAT_180b0b338,&DAT_18082a250,1);
    local_108._0_1_ = 1;
    FUN_1805367d0("Low Health Below 30 HP",0x180b0b334,&DAT_180829fa0,1);
    FUN_180488f10();
    FUN_1805302b0("Panel");
    FUN_180488c60();
    local_48[0] = DAT_180b0b3b1 == '\0';
    local_100 = (undefined ***)0x0;
    local_108 = (char *)((ulonglong)local_108._1_7_ << 8);
    cVar2 = FUN_1804898a0("Panel Background",local_48,&DAT_18082a240,1);
    if (cVar2 != '\0') {
      DAT_180b0b3b1 = local_48[0] == '\0';
    }
    local_108._0_1_ = 1;
    FUN_1805367d0("Background Color",0x180b0b3c0,&DAT_18082a268);
    local_108 = (char *)CONCAT71(local_108._1_7_,1);
    FUN_1805367d0("Border Color",&DAT_180b0b3c4,&DAT_18082a288,local_48[0]);
    FUN_180488f10();
    FUN_1805302b0("Change each event\'s highlight in its event settings.");
    FUN_1804aeac0();
  }
}



