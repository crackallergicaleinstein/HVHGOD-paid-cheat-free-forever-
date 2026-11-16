// FUN_180538b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180538b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180538b50(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [64];
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined ***local_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined1 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 local_98;
  uint7 uStack_97;
  undefined8 uStack_90;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  FUN_1805302b0("Graph shape");
  FUN_180488c60();
  uStack_b0 = 3;
  local_b8 = &PTR_DAT_18086c510;
  auStack_a8 = ZEXT816(0);
  local_c8 = &PTR_DAT_18086c130;
  local_f0 = &local_78;
  local_98 = 0;
  local_78 = &PTR_DAT_18086c510;
  uStack_70 = 3;
  uStack_68 = 0;
  uStack_60 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  uStack_90 = 0;
  local_58 = (ulonglong)uStack_97 << 8;
  local_f8 = &DAT_180859278;
  uStack_50 = 0;
  local_48 = auVar1._0_8_;
  local_c0 = 3;
  FUN_18048d220("Graph Style",&DAT_180b0d5bc,&local_c8,1);
  local_e8 = DAT_180b0d5bc != 2;
  local_d0 = 0;
  local_e0 = &DAT_18082a288;
  local_f0._0_4_ = 0x3dcccccd;
  local_f8 = "%.1f px";
  FUN_18048a250("Line Thickness",&DAT_180b0d5c0,0x3f000000,0x40800000);
  auVar5 = ZEXT464(0x3f800000);
  local_d0 = 0;
  local_e0 = &DAT_18082a298;
  local_e8 = 1;
  local_f0._0_4_ = 0x3f800000;
  local_f8 = "%.0f px";
  FUN_18048a250("Graph Width",&DAT_180b0d5a0,0x42f00000,0x43a00000);
  local_d0 = 0;
  local_e0 = &DAT_18082a254;
  local_e8 = 1;
  local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,auVar5._0_4_);
  local_f8 = "%.0f px";
  FUN_18048a250("Graph Height",&DAT_180b0d5a4,0x41c00000,0x42a00000);
  FUN_180488f10();
  FUN_1805302b0(&DAT_180868b28);
  FUN_180488c60();
  iVar2 = DAT_180b0d5bc;
  bVar4 = DAT_180b0d5bc != 2;
  local_38[0] = DAT_180b0d5cc == '\0';
  local_f0 = (undefined ***)0x0;
  local_f8 = (char *)((ulonglong)local_f8 & 0xffffffffffffff00);
  cVar3 = FUN_1804898a0("Fill Under Graph",local_38,&DAT_18082a268,bVar4);
  if (cVar3 != '\0') {
    DAT_180b0d5cc = local_38[0] == '\0';
  }
  if ((iVar2 == 2) || (local_38[0] == '\0')) {
    local_e8 = 0;
  }
  else {
    local_e8 = 1;
  }
  local_d0 = 0;
  local_e0 = &DAT_18082a260;
  local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,auVar5._0_4_);
  local_f8 = "%.0f%%";
  FUN_18048a250("Fill Opacity",&DAT_180b0d5d0,0,0x42700000);
  local_f0 = (undefined ***)0x0;
  local_f8 = (char *)((ulonglong)local_f8 & 0xffffffffffffff00);
  FUN_1804898a0("Line Glow",&DAT_180b0d5d4,&DAT_180858a0c,bVar4);
  if ((iVar2 == 2) || (DAT_180b0d5d4 == '\0')) {
    local_e8 = 0;
  }
  else {
    local_e8 = 1;
  }
  local_d0 = 0;
  local_e0 = &DAT_180830b60;
  local_f0 = (undefined ***)CONCAT44(local_f0._4_4_,0x3c23d70a);
  local_f8 = "%.2f";
  FUN_18048a250("Glow Strength",&DAT_180b0d5d8,0,auVar5._0_8_);
  FUN_180488f10();
  FUN_180488c60();
  local_f0 = (undefined ***)0x0;
  local_f8 = (char *)((ulonglong)local_f8 & 0xffffffffffffff00);
  FUN_1804898a0("Grid Lines",&DAT_180b0d5dc,&DAT_180829e04,1);
  local_f8 = (char *)CONCAT71(local_f8._1_7_,1);
  FUN_1805367d0("Grid Color",&DAT_180b0d5b8,&DAT_180829e04,DAT_180b0d5dc);
  FUN_180488f10();
}



