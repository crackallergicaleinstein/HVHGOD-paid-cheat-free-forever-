// FUN_1803867d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803867d0 */

ulonglong FUN_1803867d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  float fVar15;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a8 [4];
  float local_98 [8];
  undefined1 local_78 [112];
  
  fVar9 = DAT_1808e69c0 - DAT_1808e69dc;
  fVar15 = 1.0 / DAT_1808e69f0;
  fVar14 = DAT_1808e69bc - DAT_1808e69d8;
  fVar13 = DAT_1808e69c4 - DAT_1808e69e0;
  FUN_180386560(&DAT_1808e69d8,&local_d8);
  local_98[0] = (fVar9 * local_d4 + fVar14 * local_d8 + fVar13 * local_d0) * fVar15;
  local_98[1] = (fVar9 * local_c8 + fVar14 * local_cc + fVar13 * local_c4) * fVar15;
  local_98[2] = (fVar9 * local_bc + fVar14 * local_c0 + fVar13 * local_b8) * fVar15;
  puVar3 = (ulonglong *)FUN_1803866b0(&DAT_1808e6990,local_78,param_2,param_3);
  FUN_180386560(&DAT_1808e69d8,&local_d8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *puVar3;
  auVar1 = vshufps_avx(auVar8,auVar8,0x55);
  fVar9 = (float)*puVar3;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  local_a8[1] = (auVar2._0_4_ * local_c8 + fVar9 * local_cc + *(float *)(puVar3 + 1) * local_c4) *
                fVar15;
  local_a8[0] = (auVar1._0_4_ * local_d4 + fVar9 * local_d8 + *(float *)(puVar3 + 1) * local_d0) *
                fVar15;
  auVar1 = vshufps_avx(auVar8,auVar8,0x55);
  local_a8[2] = (auVar1._0_4_ * local_bc + fVar9 * local_c0 + *(float *)(puVar3 + 1) * local_b8) *
                fVar15;
  auVar12 = ZEXT864(0);
  auVar11 = ZEXT464(0x47c35000);
  iVar5 = 0;
  uVar4 = 0;
  while( true ) {
    fVar9 = *(float *)((longlong)local_a8 + uVar4);
    fVar14 = *(float *)((longlong)local_98 + uVar4);
    if (ABS(fVar9) < 1e-06) {
      if (fVar14 < *(float *)((longlong)&DAT_1808e6a2c + uVar4)) break;
      bVar7 = fVar14 == *(float *)((longlong)&DAT_1808e6a38 + uVar4);
      bVar6 = fVar14 < *(float *)((longlong)&DAT_1808e6a38 + uVar4);
    }
    else {
      auVar10 = ZEXT416((uint)((*(float *)((longlong)&DAT_1808e6a2c + uVar4) - fVar14) / fVar9));
      auVar8 = ZEXT416((uint)((*(float *)((longlong)&DAT_1808e6a38 + uVar4) - fVar14) / fVar9));
      auVar1 = vcmpss_avx(auVar8,auVar10,1);
      auVar1 = vblendvps_avx(auVar10,auVar8,auVar1);
      auVar2 = vmaxss_avx(auVar1,auVar12._0_16_);
      auVar1 = vcmpss_avx(auVar8,auVar10,1);
      auVar1 = vblendvps_avx(auVar8,auVar10,auVar1);
      auVar1 = vminss_avx(auVar1,auVar11._0_16_);
      auVar11 = ZEXT1664(auVar1);
      bVar7 = auVar2._0_4_ == auVar1._0_4_;
      bVar6 = auVar2._0_4_ < auVar1._0_4_;
      auVar12 = ZEXT1664(auVar2);
    }
    if (!bVar6 && !bVar7) break;
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 + 4;
    if (2 < iVar5) {
      return CONCAT71((int7)(uVar4 >> 8),0.0 < auVar11._0_4_);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



