// FUN_1805316c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805316c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805316c0(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined ***local_120;
  undefined1 local_118;
  undefined *local_110;
  undefined1 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 local_c8;
  uint7 uStack_c7;
  undefined8 uStack_c0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  bVar4 = 0;
  if (DAT_180b0d338 < 4) {
    bVar4 = DAT_180b0d338;
  }
  local_68 = (uint)bVar4;
  FUN_180488c60();
  local_120 = (undefined ***)0x0;
  local_128 = (undefined *)((ulonglong)local_128 & 0xffffffffffffff00);
  cVar5 = FUN_1804898a0("Show Hat",&DAT_180b0d2d0,&DAT_180829dc0,1);
  if (cVar5 != '\0') {
    DAT_180b0d2e0 = DAT_180b0d2d0;
  }
  uStack_e0 = 4;
  local_e8 = &PTR_DAT_18086b718;
  local_f8 = &PTR_s_Crown_18086c318;
  local_120 = &local_a8;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  local_128 = (&PTR_DAT_18086b718)[(int)local_68];
  auStack_d8 = ZEXT816(0);
  local_a8 = &PTR_DAT_18086b718;
  uStack_a0 = 4;
  uStack_98 = 0;
  uStack_90 = 0;
  auVar2 = vunpcklps_avx(auVar2 << 0x20,auVar2 << 0x20);
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = (ulonglong)uStack_c7 << 8;
  uStack_80 = 0;
  local_78 = auVar2._0_8_;
  local_f0 = 4;
  auVar10 = ZEXT1264(ZEXT812(0)) << 0x20;
  cVar5 = FUN_18048d220("Hat Model",&local_68,&local_f8,1);
  if (cVar5 != '\0') {
    DAT_180b0d338 = (byte)local_68;
  }
  FUN_180488f10();
  FUN_1805302b0((&PTR_s_A_royal_band_with_adjustable_cro_18086bc28)[(int)local_68]);
  uVar8 = 0x3dcccccd;
  auVar11 = ZEXT464(0x3f800000);
  if (local_68 != 2) {
    FUN_180488c60();
    if (local_68 == 1) {
      local_120 = (undefined ***)0x0;
      local_128 = (undefined *)((ulonglong)local_128 & 0xffffffffffffff00);
      cVar5 = FUN_1804898a0("Light Beams",&DAT_180b0d448,&DAT_180829fa0,1);
      if (cVar5 != '\0') {
        DAT_180b0d458 = DAT_180b0d448;
      }
      local_100 = 1;
      local_110 = &DAT_18082a254;
      local_118 = DAT_180b0d448;
      local_120 = (undefined ***)CONCAT44(local_120._4_4_,uVar8);
      local_128 = &DAT_180829c18;
      FUN_18048a250("Beam Length",&DAT_180b0d4b8,0x40000000,0x41800000);
    }
    else {
      local_100 = 0;
      local_110 = &DAT_18082a25c;
      local_64 = (float)DAT_180b0d4c0;
      local_118 = 1;
      local_120 = (undefined ***)CONCAT44(local_120._4_4_,auVar11._0_4_);
      pcVar6 = "Spike Count";
      local_128 = &DAT_180829c34;
      if (local_68 == 0) {
        pcVar6 = "Crown Points";
      }
      cVar5 = FUN_18048a250(pcVar6,&local_64,0x40a00000,0x41400000);
      if (cVar5 != '\0') {
        DAT_180b0d4c0 = (int)local_64;
      }
    }
    FUN_180488f10();
  }
  FUN_180488c60();
  cVar5 = FUN_18048b0e0("Appearance",&DAT_18082a268,1);
  auVar9 = ZEXT464(0x43a70000);
  if (cVar5 != '\0') {
    FUN_1805303d0("##hat_appearance",auVar9._0_8_);
  }
  FUN_180488f10();
  cVar5 = FUN_180488630("##hat_appearance",(&PTR_s_Crown_Appearance_18086bef0)[(int)local_68],
                        auVar9._0_8_);
  if (cVar5 != '\0') {
    FUN_1805302b0("Colors are saved separately for each hat model.");
    bVar4 = 0;
    if (DAT_180b0d338 < 4) {
      bVar4 = DAT_180b0d338;
    }
    lVar1 = (ulonglong)bVar4 * 0xc;
    uVar7 = FUN_180488c60();
    local_128._0_1_ = 1;
    uVar7 = FUN_180531d00(uVar7,"Outline Color",&DAT_180b0d33c + lVar1,&DAT_18082a288);
    local_128._0_1_ = DAT_180b0d3e0;
    uVar7 = FUN_180531d00(uVar7,"Mesh Color",&DAT_180b0d340 + lVar1,&DAT_180829e04);
    local_128._0_1_ = 1;
    FUN_180531d00(uVar7,"Fill Color",&DAT_180b0d344 + lVar1,&DAT_18082a268);
    cVar5 = FUN_18048b0e0("Reset Model Colors",&DAT_180829a4c,1);
    if (cVar5 != '\0') {
      bVar4 = 0;
      if (DAT_180b0d338 < 4) {
        bVar4 = DAT_180b0d338;
      }
      local_64 = (float)CONCAT13(0xff,*(undefined3 *)(&DAT_1806ff1f0 + (ulonglong)bVar4 * 3));
      uVar3 = local_64;
      *(float *)(&DAT_180b0d340 + (ulonglong)bVar4 * 0xc) = local_64;
      local_64 = -1.9012648e+38;
      bVar4 = 0;
      if (DAT_180b0d338 < 4) {
        bVar4 = DAT_180b0d338;
      }
      *(undefined4 *)(&DAT_180b0d33c + (ulonglong)bVar4 * 0xc) = uVar3;
      bVar4 = 0;
      if (DAT_180b0d338 < 4) {
        bVar4 = DAT_180b0d338;
      }
      *(undefined4 *)(&DAT_180b0d344 + (ulonglong)bVar4 * 0xc) = 0xff0f0907;
    }
    FUN_180488f10();
    FUN_180488c60();
    local_120 = (undefined ***)0x0;
    local_128 = (undefined *)((ulonglong)local_128._1_7_ << 8);
    cVar5 = FUN_1804898a0("Wireframe",&DAT_180b0d3e0,&DAT_180829e04,1);
    if (cVar5 != '\0') {
      DAT_180b0d3f0 = DAT_180b0d3e0;
    }
    local_f8 = &PTR_DAT_18086bb00;
    local_120 = &local_a8;
    auStack_d8 = ZEXT816(0);
    local_e8 = (undefined **)0x0;
    uStack_e0 = 0;
    local_a8 = (undefined **)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auVar2 = vunpcklps_avx(auVar10._0_16_,auVar10._0_16_);
    local_c8 = 1;
    uStack_c0 = 0;
    local_88 = CONCAT71(uStack_c7,1);
    local_78 = auVar2._0_8_;
    uStack_80 = 0;
    local_f0 = 3;
    local_128 = &DAT_18082a240;
    auVar10 = ZEXT1664(auVar11._0_16_);
    FUN_18048d220("Mesh Detail",&DAT_180b0d4bc,&local_f8,1);
    local_100 = 1;
    local_110 = &DAT_18082a254;
    local_118 = 1;
    local_128 = &DAT_180829c18;
    local_120._0_4_ = uVar8;
    FUN_18048a250("Line Width",&DAT_180b0d4b0,0x3f000000,0x40400000);
    uVar8 = 0x3c23d70a;
    local_100 = 1;
    local_110 = &DAT_18082a260;
    local_118 = 1;
    local_120 = (undefined ***)CONCAT44(local_120._4_4_,0x3c23d70a);
    local_128 = &DAT_1807c6e40;
    FUN_18048a250("Fill Opacity",&DAT_180b0d4b4,0,auVar10._0_8_);
    FUN_180488f10();
    FUN_180488c60();
    local_120 = (undefined ***)0x0;
    local_128 = (undefined *)((ulonglong)local_128 & 0xffffffffffffff00);
    cVar5 = FUN_1804898a0(&DAT_1806bd384,&DAT_180b0d370,&DAT_180858a0c,1);
    if (cVar5 != '\0') {
      DAT_180b0d380 = DAT_180b0d370;
    }
    local_100 = 1;
    local_110 = &DAT_180830b60;
    local_118 = DAT_180b0d370;
    local_120 = (undefined ***)CONCAT44(local_120._4_4_,uVar8);
    local_128 = &DAT_1807c6e40;
    FUN_18048a250("Glow Strength",&DAT_180b0d3d8,0,auVar10._0_8_);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



