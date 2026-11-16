// FUN_180538f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180538f20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180538f20(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [64];
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  undefined1 local_40;
  undefined1 *local_38;
  char local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  FUN_1805302b0("Content");
  FUN_180488c60();
  local_60 = 0;
  local_68 = (undefined *)((ulonglong)local_68 & 0xffffffffffffff00);
  cVar1 = FUN_1804898a0("Speed Counter",&DAT_180b0d4c8,&DAT_18082a274,1);
  if (cVar1 != '\0') {
    DAT_180b0d4d8 = DAT_180b0d4c8;
  }
  local_60 = 0;
  local_68 = (undefined *)((ulonglong)local_68 & 0xffffffffffffff00);
  cVar1 = FUN_1804898a0("Speed Graph",&DAT_180b0d530,&DAT_180859278,1);
  if (cVar1 != '\0') {
    DAT_180b0d540 = DAT_180b0d530;
  }
  FUN_180488f10();
  local_38 = &DAT_180b0d4c8;
  FUN_180488c60();
  FUN_180539320(&local_38);
  FUN_180488f10();
  FUN_180488c60();
  cVar1 = FUN_18048b0e0("Speed Counter Key",&DAT_180829dc4,1);
  auVar3 = ZEXT464(0x43960000);
  if (cVar1 != '\0') {
    FUN_1805303d0("##hud_counter_key",auVar3._0_8_);
  }
  cVar1 = FUN_180488630("##hud_counter_key","Speed Counter Key",auVar3._0_8_);
  if (cVar1 != '\0') {
    FUN_1805302b0("Choose a shortcut and how it activates this overlay.");
    FUN_180488c60();
    FUN_18050e290(&DAT_180b0d4c8);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  cVar1 = FUN_18048b0e0("Speed Graph Key",&DAT_180829dc4,1);
  uVar2 = auVar3._0_8_;
  if (cVar1 != '\0') {
    FUN_1805303d0("##hud_chart_key",uVar2);
    uVar2 = auVar3._0_8_;
  }
  cVar1 = FUN_180488630("##hud_chart_key","Speed Graph Key",uVar2);
  if (cVar1 != '\0') {
    FUN_1805302b0("Choose a shortcut and how it activates this overlay.");
    FUN_180488c60();
    FUN_18050e290(&DAT_180b0d530);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
  auVar3 = ZEXT464(0x43af0000);
  cVar1 = FUN_180488630("##hud_graph","Velocity Graph",auVar3._0_8_);
  uVar2 = auVar3._0_8_;
  if (cVar1 != '\0') {
    FUN_180538b50();
    FUN_1804aeac0();
    uVar2 = auVar3._0_8_;
  }
  cVar1 = FUN_180488630("##hud_appearance","Velocity Appearance",uVar2);
  if (cVar1 != '\0') {
    FUN_180488c60();
    local_68._0_1_ = 1;
    FUN_1805367d0("Speed & Line Color",&DAT_180b0d598,&DAT_18082a274,1);
    local_68._0_1_ = 1;
    FUN_1805367d0("Title Color",&DAT_180b0d5ac,&DAT_18082a288,1);
    FUN_180488f10();
    FUN_1805302b0("Graph gradient");
    FUN_180488c60();
    local_60 = 0;
    local_68 = (undefined *)((ulonglong)local_68._1_7_ << 8);
    FUN_1804898a0("Use Gradient",&DAT_180b0d5c4,&DAT_18082a268,1);
    local_68._0_1_ = 1;
    FUN_1805367d0("Gradient End Color",&DAT_180b0d5a8,&DAT_18082a260,DAT_180b0d5c4);
    local_60 = 0;
    local_68 = (undefined *)((ulonglong)local_68._1_7_ << 8);
    FUN_1804898a0("Animate Gradient",&DAT_180b0d5c5,&DAT_180829a4c,DAT_180b0d5c4);
    if ((DAT_180b0d5c4 == '\0') || (DAT_180b0d5c5 == '\0')) {
      local_58 = 0;
    }
    else {
      local_58 = 1;
    }
    local_40 = 0;
    local_50 = &DAT_18082a278;
    local_60 = CONCAT44(local_60._4_4_,0x3c23d70a);
    local_68 = &DAT_1807c6e40;
    FUN_18048a250("Animation Speed",&DAT_180b0d5c8,0x3d4ccccd,0x40000000);
    FUN_180488f10();
    FUN_180488c60();
    local_30[0] = DAT_180b0d5dd == '\0';
    local_60 = 0;
    local_68 = (undefined *)((ulonglong)local_68 & 0xffffffffffffff00);
    cVar1 = FUN_1804898a0("Panel Background",local_30,&DAT_18082a240,1);
    if (cVar1 != '\0') {
      DAT_180b0d5dd = local_30[0] == '\0';
    }
    local_68._0_1_ = 1;
    FUN_1805367d0("Background Color",&DAT_180b0d5b0,&DAT_18082a268);
    local_68 = (undefined *)CONCAT71(local_68._1_7_,1);
    FUN_1805367d0("Border Color",&DAT_180b0d5b4,&DAT_18082a288,local_30[0]);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



