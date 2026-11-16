// FUN_1801cfc40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cfc40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cfc40(undefined1 (*param_1) [16],undefined4 param_2,char param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_108 [16];
  float local_f8 [2];
  undefined1 local_f0 [48];
  undefined1 local_c0 [16];
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 *******local_a0 [2];
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_108 = *param_1;
  pauVar5 = (undefined1 (*) [16])FUN_18043a0a0(local_f0,local_108);
  local_c0 = *pauVar5;
  uStack_b0 = *(undefined8 *)pauVar5[1];
  uStack_a8 = *(ulonglong *)(pauVar5[1] + 8);
  (*pauVar5)[0] = 0;
  *(undefined8 *)pauVar5[1] = 0;
  *(undefined8 *)(pauVar5[1] + 8) = 0xf;
  FUN_18015c010(local_f0);
  FUN_18015bea0(local_a0,param_2);
  puVar10 = local_c0;
  if (0xf < uStack_a8) {
    puVar10 = (undefined1 *)local_c0._0_8_;
  }
  lVar8 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar8 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar8 == 0) {
    fVar18 = 0.0;
  }
  else {
    local_108._8_8_ = uStack_b0;
    local_108._0_8_ = puVar10;
    FUN_180430010(lVar8,local_f8,local_108);
    fVar18 = local_f8[0];
  }
  pppppppuVar11 = local_a0;
  if (0xf < local_88) {
    pppppppuVar11 = local_a0[0];
  }
  lVar8 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar8 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar8 == 0) {
    local_f8[0] = 0.0;
  }
  else {
    local_108._8_8_ = local_90;
    local_108._0_8_ = pppppppuVar11;
    FUN_180430010(lVar8,local_f8,local_108);
  }
  pauVar5 = (undefined1 (*) [16])FUN_18043b290(local_108,local_f8[0] + fVar18 + 30.0,0x42080000,0);
  local_108 = *pauVar5;
  auVar15 = ZEXT1664(local_108);
  uVar6 = FUN_180439770();
  uVar7 = FUN_180439770();
  cVar4 = FUN_18043b5c0(uVar7);
  if ((cVar4 == '\0') && (cVar4 = FUN_18043b8e0(uVar6,local_108), cVar4 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar8 = FUN_180439770();
  if (*(longlong *)(lVar8 + 0x4a8) == *(longlong *)(lVar8 + 0x4b0)) {
    puVar12 = &DAT_180bbac80;
  }
  else {
    puVar12 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar8 + 0x4b0) + -4) * 0x13;
  }
  auVar14 = auVar15._0_16_;
  auVar2 = vshufps_avx(auVar14,auVar14,0xaa);
  auVar17 = ZEXT1664(auVar2);
  auVar14 = vshufps_avx(auVar14,auVar14,0x55);
  auVar16 = ZEXT1664(auVar14);
  if (bVar3) {
    local_108._8_8_ = 0x40a0000040a00000;
    local_108._0_8_ = 0x40a0000040a00000;
    local_118 = local_108;
    local_120 = CONCAT44(local_120._4_4_,
                         ((DAT_180bb8a64 >> 0x10 & 0xff | 0xc00) << 8 | DAT_180bb8a64 >> 8 & 0xff)
                         << 8 | DAT_180bb8a64 & 0xff);
    local_128 = 0x41d80000;
    FUN_180430970(puVar12,auVar15._0_8_,auVar14._0_4_ + 3.0,auVar2._0_8_);
  }
  local_128 = DAT_180bb8a64;
  if (param_3 != '\0') {
    local_128 = DAT_180bb8a60;
  }
  local_108._0_8_ = local_c0;
  if (0xf < uStack_a8) {
    local_108._0_8_ = local_c0._0_8_;
  }
  local_108._8_8_ = uStack_b0;
  fVar19 = auVar16._0_4_ + 8.0;
  auVar13 = ZEXT464((uint)fVar19);
  fVar1 = auVar15._0_4_ + 8.0;
  auVar20 = ZEXT464((uint)fVar1);
  local_120 = 0;
  FUN_1804340b0(puVar12,fVar1,fVar19,local_108);
  iVar9 = 0xb4;
  if (param_3 != '\0') {
    iVar9 = 0xff;
  }
  local_128 = ((iVar9 << 8 | DAT_180bb8a64 >> 0x10 & 0xff) << 8 | DAT_180bb8a64 >> 8 & 0xff) << 8 |
              DAT_180bb8a64 & 0xff;
  local_108._0_8_ = local_a0;
  if (0xf < local_88) {
    local_108._0_8_ = local_a0[0];
  }
  local_108._8_8_ = local_90;
  fVar19 = 16.0;
  local_120 = 0;
  FUN_1804340b0(puVar12,fVar18 + auVar15._0_4_ + 16.0,auVar13._0_8_,local_108);
  if (param_3 != '\0') {
    local_108._0_8_ = (undefined8 *******)0x3f8000003f800000;
    local_108._8_8_ = 0x3f8000003f800000;
    auVar2 = vshufps_avx(auVar15._0_16_,auVar15._0_16_,0xff);
    local_118 = local_108;
    local_120 = CONCAT44(local_120._4_4_,DAT_180bb8a60);
    local_128 = 0x40000000;
    FUN_180430970(puVar12,auVar20._0_8_,(auVar2._0_4_ + auVar16._0_4_) - 2.0,auVar17._0_4_ - fVar19)
    ;
  }
  FUN_18015c010(local_a0);
  FUN_18015c010(local_c0);
}



