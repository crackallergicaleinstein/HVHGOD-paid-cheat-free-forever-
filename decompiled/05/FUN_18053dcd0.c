// FUN_18053dcd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053dcd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053dcd0(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 auVar6 [64];
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
  local_c8[0] = 5;
  local_28[0] = 0;
  piVar4 = local_28;
  if (-1 < DAT_180b0c2fc) {
    piVar4 = &DAT_180b0c2fc;
  }
  piVar3 = local_c8;
  if (DAT_180b0c2fc < 6) {
    piVar3 = piVar4;
  }
  local_28[0] = *piVar3;
  FUN_180488c60();
  local_b8 = &PTR_s_Dissolve_18086bf48;
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
  local_b0 = 6;
  local_f8 = &DAT_18082a25c;
  cVar2 = FUN_18048d220("Effect Style",local_28,&local_b8,1);
  if (cVar2 != '\0') {
    DAT_180b0c2fc = local_28[0];
  }
  if (local_28[0] != 3) {
    local_d0 = 0;
    local_e0 = &DAT_18082a278;
    local_e8 = 1;
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,0x3dcccccd);
    local_f8 = "%.1f s";
    FUN_18048a250("Visible Time",&DAT_180b0c418 + (longlong)local_28[0] * 0x38,0x3e4ccccd,0x40c00000
                 );
  }
  if (local_28[0] == 4) {
    local_f8 = (char *)CONCAT71(local_f8._1_7_,1);
    FUN_1805367d0("Vaporize Color",&DAT_180b0c4f0,&DAT_18082a268,1);
  }
  FUN_180488f10();
  if (local_28[0] == 3) {
    FUN_1805302b0("Main particles are off. Shockwave and Thunder remain available as add-ons.");
  }
  else if (local_28[0] != 4) {
    FUN_180488c60();
    cVar2 = FUN_18048b0e0("Particle Appearance",&DAT_18082a268,1);
    auVar6 = ZEXT464(0x43af0000);
    if (cVar2 != '\0') {
      FUN_1805303d0("##death_appearance",auVar6._0_8_);
    }
    cVar2 = FUN_180488630("##death_appearance","Particle Appearance",auVar6._0_8_);
    if (cVar2 != '\0') {
      FUN_18053d9a0(&DAT_180b0c410 + (longlong)local_28[0] * 0x38);
      FUN_1804aeac0();
    }
    cVar2 = FUN_18048b0e0("Particle Motion",&DAT_18082a27c,1);
    uVar5 = auVar6._0_8_;
    if (cVar2 != '\0') {
      FUN_1805303d0("##death_motion",uVar5);
      uVar5 = auVar6._0_8_;
    }
    cVar2 = FUN_180488630("##death_motion","Particle Motion",uVar5);
    if (cVar2 != '\0') {
      FUN_18053db20(&DAT_180b0c410 + (longlong)local_28[0] * 0x38);
      FUN_1804aeac0();
    }
    FUN_180488f10();
  }
}



