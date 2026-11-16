// FUN_1802af360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802af360 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802af360(undefined8 param_1,float param_2,float param_3,int param_4,float param_5,
                  longlong param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_198 [32];
  float local_178;
  uint local_170;
  undefined1 *local_168;
  undefined4 local_160;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined1 local_108 [32];
  float local_e8 [4];
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  
  lVar4 = param_6;
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  iVar12 = 0;
  if (param_6 == 0) {
  }
  fVar13 = 0.0;
  if (0.0 < param_5) {
    if (param_4 < 1) {
    }
    fVar17 = param_5;
    uVar5 = FUN_18015bea0(local_108,param_4);
    pauVar6 = (undefined1 (*) [16])FUN_180141490(uVar5,0,&DAT_180701178,1);
    local_128 = *pauVar6;
    auStack_118 = pauVar6[1];
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_128,&DAT_1807d150c,3);
    local_b8 = *pauVar6;
    uStack_a8 = *(undefined8 *)pauVar6[1];
    uStack_a0 = *(ulonglong *)(pauVar6[1] + 8);
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    FUN_18015c010(local_128);
    FUN_18015c010(local_108);
    local_d8 = (undefined1  [8])local_b8;
    if (0xf < uStack_a0) {
      local_d8 = (undefined1  [8])local_b8._0_8_;
    }
    uStack_d0 = uStack_a8;
    FUN_180430010(lVar4,&local_148,local_d8);
    _local_d8 = (undefined1  [16])0x0;
    local_c8 = 0;
    local_e8[0] = 1.4013e-45;
    if (((DAT_180bbab78 != 0) &&
        ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_e8,local_d8),
        local_e8[0] == 0.0)) || ((float)uStack_d0 <= fVar13)) {
      iVar11 = 0;
    }
    else {
      iVar12 = (int)(float)uStack_d0;
      iVar11 = (int)uStack_d0._4_4_;
    }
    fVar1 = local_148 + 12.0;
    auVar19 = ZEXT464((uint)fVar1);
    fVar18 = local_144 + 6.0;
    fVar3 = ((param_3 - 22.0) - 7.0) - fVar18;
    if (fVar3 < 4.0) {
      fVar3 = param_3 + 22.0 + 7.0;
    }
    local_140 = ((float)iVar12 - fVar1) - 4.0;
    local_13c = 4.0;
    pfVar10 = &local_140;
    if (local_140 <= 4.0) {
      pfVar10 = &local_13c;
    }
    local_e8[0] = 4.0;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 - fVar1 * 0.5)),1);
    local_148 = auVar2._0_4_;
    pfVar7 = local_e8;
    if (4.0 <= local_148) {
      pfVar7 = &local_148;
    }
    if (*pfVar10 < local_148) {
      pfVar7 = pfVar10;
    }
    auVar16 = ZEXT464((uint)*pfVar7);
    local_138 = ((float)iVar11 - fVar18) - 4.0;
    local_134 = 4.0;
    pfVar10 = &local_138;
    if (local_138 <= 4.0) {
      pfVar10 = &local_134;
    }
    local_148 = 4.0;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar3),1);
    local_e8[0] = auVar2._0_4_;
    pfVar8 = &local_148;
    if (4.0 <= local_e8[0]) {
      pfVar8 = local_e8;
    }
    if (*pfVar10 < local_e8[0]) {
      pfVar8 = pfVar10;
    }
    auVar15 = ZEXT464((uint)*pfVar8);
    uVar14 = 0x3f800000;
    local_12c = 1.0;
    local_130 = fVar13;
    pfVar10 = &local_130;
    if (fVar13 <= fVar17) {
      pfVar10 = &param_5;
    }
    pfVar9 = &local_12c;
    if (fVar17 <= 1.0) {
      pfVar9 = pfVar10;
    }
    fVar13 = *pfVar9;
    local_170 = (int)(fVar13 * 235.0) << 0x18 | 0x121010;
    local_d8 = (undefined1  [8])0x4080000040800000;
    uStack_d0 = 0x4080000040800000;
    local_168 = local_d8;
    local_178 = fVar18;
    FUN_180430970(param_1,*pfVar7,*pfVar8,fVar1);
    local_170 = (int)(fVar13 * 32.0) << 0x18 | 0xffffff;
    local_d8 = (undefined1  [8])0x4080000040800000;
    uStack_d0 = 0x4080000040800000;
    local_168 = local_d8;
    local_178 = fVar18;
    local_160 = uVar14;
    FUN_1804330f0(param_1,auVar16._0_8_,auVar15._0_8_,auVar19._0_8_);
    local_178 = (float)((int)(fVar13 * 255.0) << 0x18 | 0xf8f8f8);
    local_d8 = (undefined1  [8])local_b8;
    if (0xf < uStack_a0) {
      local_d8 = (undefined1  [8])local_b8._0_8_;
    }
    uStack_d0 = uStack_a8;
    local_168 = (undefined1 *)lVar4;
    local_170 = 1;
    FUN_180434550(param_1,auVar16._0_4_ + 6.0,auVar15._0_4_ + 3.0,local_d8);
    FUN_18015c010(local_b8);
  }
}



