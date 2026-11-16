// FUN_18053d610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053d610 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053d610(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined *local_60;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  cVar2 = FUN_18048b0e0("Animation Timing",&DAT_18082a278,1);
  auVar4 = ZEXT464(0x43af0000);
  if (cVar2 != '\0') {
    FUN_1805303d0("##tracer_animation",auVar4._0_8_);
  }
  cVar2 = FUN_180488630("##tracer_animation","Animation Timing",auVar4._0_8_);
  auVar5 = ZEXT464(0x3d4ccccd);
  auVar6 = ZEXT464(0x3c23d70a);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_50 = 0;
    local_60 = &DAT_180859278;
    local_68 = 1;
    local_70 = CONCAT44(local_70._4_4_,auVar5._0_4_);
    local_78 = "%.2fx";
    FUN_18048a250("Fade Curve",lVar1 + 0x8d4,0x3e800000,0x40800000);
    if (*(int *)(lVar1 + 0x8c0) == 1) {
      local_50 = 0;
      local_60 = &DAT_18082a278;
      local_68 = 1;
      local_70 = CONCAT44(local_70._4_4_,0x3a83126f);
      local_78 = "%.3f s";
      FUN_18048a250("Draw Time",lVar1 + 0x8cc,auVar6._0_8_,auVar5._0_8_);
    }
    if (*(int *)(lVar1 + 0x8c0) == 2) {
      local_50 = 0;
      local_60 = &DAT_18082a254;
      local_68 = 1;
      local_70 = CONCAT44(local_70._4_4_,auVar6._0_4_);
      local_78 = "%.2fx";
      FUN_18048a250("Tail Length",lVar1 + 0x8d0,auVar5._0_8_,0x3f800000);
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  cVar2 = FUN_18048b0e0("Glow & Bloom",&DAT_180858a0c,1);
  uVar3 = auVar4._0_8_;
  if (cVar2 != '\0') {
    FUN_1805303d0("##tracer_lighting",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar2 = FUN_180488630("##tracer_lighting","Glow & Bloom",uVar3);
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_70 = 0;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
    FUN_1804898a0(&DAT_1806bd384,&DAT_180b0c750,&DAT_180858a0c,1);
    local_50 = 0;
    local_60 = &DAT_180830b60;
    local_68 = DAT_180b0c750;
    local_78 = "%.2fx";
    local_70._0_4_ = auVar6._0_4_;
    FUN_18048a250("Glow Strength",&DAT_180b0c754,0,0x3fc00000);
    local_50 = 0;
    local_60 = &DAT_18082a254;
    local_68 = DAT_180b0c750;
    local_70 = CONCAT44(local_70._4_4_,auVar5._0_4_);
    local_78 = "%.2f px";
    FUN_18048a250("Glow Radius",&DAT_180b0c758,0x3f000000,0x40400000);
    FUN_180488f10();
    FUN_180488c60();
    local_70 = 0;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
    FUN_1804898a0("Bloom",&DAT_180b0c75c,&DAT_180830b60,1);
    local_50 = 0;
    local_60 = &DAT_180830b60;
    local_68 = DAT_180b0c75c;
    local_78 = "%.2fx";
    local_70._0_4_ = auVar6._0_4_;
    FUN_18048a250("Bloom Strength",&DAT_180b0c760,0,0x3fc00000);
    local_50 = 0;
    local_60 = &DAT_18082a254;
    local_68 = DAT_180b0c75c;
    local_70 = CONCAT44(local_70._4_4_,0x3dcccccd);
    local_78 = "%.1f px";
    FUN_18048a250("Bloom Radius",&DAT_180b0c764,0x3f800000,0x41000000);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



