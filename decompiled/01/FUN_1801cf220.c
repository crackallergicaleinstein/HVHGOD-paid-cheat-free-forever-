// FUN_1801cf220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cf220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cf220(undefined1 (*param_1) [16],float param_2,undefined4 param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 in_RDX;
  ulonglong uVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auStack_178 [32];
  uint local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_128 [16];
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [48];
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  auVar19 = ZEXT864(0);
  pauVar4 = (undefined1 (*) [16])FUN_18043b290(local_128,in_RDX,0x42080000,0);
  local_128 = *pauVar4;
  auVar17 = ZEXT1664(local_128);
  uVar5 = FUN_180439770();
  FUN_180439770();
  cVar3 = FUN_18043b5c0();
  if ((cVar3 == '\0') && (cVar3 = FUN_18043b8e0(uVar5,local_128), cVar3 != '\0')) {
    bVar12 = 1;
  }
  else {
    bVar12 = 0;
  }
  local_128 = *param_1;
  uVar10 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (*(ulonglong *)(*param_1 + 8) != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar8 + local_128._0_8_)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)(*param_1 + 8));
  }
  lVar6 = FUN_180439770();
  for (puVar9 = *(ulonglong **)(lVar6 + 0x490); puVar9 != *(ulonglong **)(lVar6 + 0x498);
      puVar9 = puVar9 + 1) {
    uVar10 = (uVar10 ^ *puVar9) * 0x100000001b3;
  }
  auVar1 = vpcmpeqd_avx(ZEXT116(bVar12),SUB6416(ZEXT464(0),0));
  auVar26 = ZEXT464(0x3f800000);
  auVar1 = vblendvps_avx(auVar26._0_16_,auVar19._0_16_,auVar1);
  fVar15 = (float)FUN_18043a910(uVar10,auVar1._0_8_,0x41600000,auVar19._0_8_);
  lVar6 = FUN_180439770();
  if (*(longlong *)(lVar6 + 0x4a8) == *(longlong *)(lVar6 + 0x4b0)) {
    puVar11 = &DAT_180bbac80;
  }
  else {
    puVar11 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar6 + 0x4b0) + -4) * 0x13;
  }
  auVar16 = auVar17._0_16_;
  auVar1 = vshufps_avx(auVar16,auVar16,0xff);
  auVar21 = ZEXT1664(auVar1);
  auVar2 = vshufps_avx(auVar16,auVar16,0x55);
  auVar23 = ZEXT1664(auVar2);
  if ((param_4 != '\0') || (auVar19._0_4_ < fVar15)) {
    if (param_4 == '\0') {
      uVar13 = ((((int)(fVar15 * 15.0) & 0xffU) << 8 | DAT_180bb8a64 >> 0x10 & 0xff) << 8 |
               DAT_180bb8a64 >> 8 & 0xff) << 8 | DAT_180bb8a64 & 0xff;
    }
    else {
      uVar14 = DAT_180bb8a68 >> 8 & 0xff;
      uVar13 = DAT_180bb8a68 >> 0x10 & 0xff;
      uVar13 = ((((int)((float)(int)((DAT_180bb8a6c >> 0x18) - (DAT_180bb8a68 >> 0x18)) * fVar15 +
                       (float)(DAT_180bb8a68 >> 0x18)) & 0xffU) << 8 |
                (int)((float)(int)((DAT_180bb8a6c >> 0x10 & 0xff) - uVar13) * fVar15 + (float)uVar13
                     ) & 0xffU) << 8 |
               (int)((float)(int)((DAT_180bb8a6c >> 8 & 0xff) - uVar14) * fVar15 + (float)uVar14) &
               0xffU) << 8 |
               (int)((float)(int)((DAT_180bb8a6c & 0xff) - (DAT_180bb8a68 & 0xff)) * fVar15 +
                    (float)(DAT_180bb8a68 & 0xff)) & 0xffU;
    }
    local_128._8_8_ = 0x40c0000040c00000;
    local_128._0_8_ = 0x40c0000040c00000;
    local_148 = local_128;
    local_150 = CONCAT44(local_150._4_4_,uVar13);
    local_158 = auVar1._0_4_;
    auVar1 = vshufps_avx(auVar16,auVar16,0xaa);
    auVar24 = ZEXT1664(auVar1);
    FUN_180430970(puVar11,auVar17._0_8_,auVar2._0_8_,auVar1._0_8_);
    if (param_4 != '\0') {
      local_128._8_8_ = 0x40c0000040c00000;
      local_128._0_8_ = 0x40c0000040c00000;
      local_140 = auVar26._0_4_;
      local_148 = local_128;
      local_150 = CONCAT44(local_150._4_4_,DAT_180bb8a70);
      local_158 = auVar21._0_4_;
      FUN_1804330f0(puVar11,auVar17._0_8_,auVar23._0_8_,auVar24._0_8_);
    }
  }
  local_128 = *param_1;
  pauVar4 = (undefined1 (*) [16])FUN_18043a0a0(local_108,local_128);
  local_d8 = *pauVar4;
  uStack_c8 = *(undefined8 *)pauVar4[1];
  uStack_c0 = *(ulonglong *)(pauVar4[1] + 8);
  (*pauVar4)[0] = 0;
  *(undefined8 *)pauVar4[1] = 0;
  *(undefined8 *)(pauVar4[1] + 8) = 0xf;
  auVar17 = ZEXT1664(auVar17._0_16_);
  auVar19 = ZEXT1664(auVar19._0_16_);
  auVar26 = ZEXT1664(auVar21._0_16_);
  auVar21 = ZEXT1664(auVar23._0_16_);
  FUN_18015c010(local_108);
  fVar22 = auVar21._0_4_;
  fVar20 = auVar26._0_4_;
  fVar15 = auVar17._0_4_;
  puVar7 = local_d8;
  if (0xf < uStack_c0) {
    puVar7 = (undefined1 *)local_d8._0_8_;
  }
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar6 = DAT_180bbade0;
  }
  else {
    lVar6 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar6 == 0) {
    auVar17 = ZEXT1664(auVar19._0_16_);
    local_118 = auVar19._0_4_;
  }
  else {
    local_128._8_8_ = uStack_c8;
    local_128._0_8_ = puVar7;
    FUN_180430010(lVar6,&local_118,local_128);
    fVar22 = auVar21._0_4_;
    fVar20 = auVar26._0_4_;
    fVar15 = auVar17._0_4_;
    auVar17 = ZEXT464((uint)local_114);
  }
  fVar25 = 22.0;
  fVar18 = 0.5;
  fVar15 = ((param_2 - local_118) - 22.0) * 0.5 + fVar15;
  if ((param_4 != '\0') || (uVar13 = DAT_180bb8a64, bVar12 != 0)) {
    uVar13 = DAT_180bb8a60;
  }
  fVar22 = fVar20 * 0.5 + fVar22;
  local_114 = fVar22 - 8.0;
  local_110 = 0x41800000;
  local_10c = 0x41800000;
  local_118 = fVar15;
  FUN_1801ce330(puVar11,&local_118,param_3,uVar13);
  local_128._0_8_ = local_d8;
  if (0xf < uStack_c0) {
    local_128._0_8_ = local_d8._0_8_;
  }
  local_128._8_8_ = uStack_c8;
  local_150 = 0;
  local_158 = uVar13;
  FUN_1804340b0(puVar11,fVar15 + fVar25,fVar22 - auVar17._0_4_ * fVar18,local_128);
  FUN_18015c010(local_d8);
}



