// FUN_1802a2180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a2180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a2180(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auVar33 [64];
  undefined1 auStack_208 [32];
  float local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float local_1c8;
  float local_1c0;
  undefined4 local_1b8;
  byte local_1a8;
  uint local_1a4;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  longlong local_178 [2];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  local_178[0] = param_5;
  local_140 = param_6;
  lVar7 = 0;
  local_1a4 = 0;
  bVar1 = *(byte *)(param_5 + 0x68);
  if ((bVar1 == 1) || (bVar1 == 2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_1a8 = (bVar1 & 0xfd) == 0;
  auVar27 = ZEXT864(0);
  auVar22 = ZEXT864(0);
  plVar15 = (longlong *)(param_4 + 1000);
  plVar5 = plVar15;
  if (0xf < *(ulonglong *)(param_4 + 0x400)) {
    plVar5 = (longlong *)*plVar15;
  }
  local_148 = param_2;
  if ((*(longlong *)(param_4 + 0x3f8) == 8) && (*plVar5 == 0x74635f6566696e6b)) {
LAB_1802a229e:
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    FUN_18015ba30(local_198,"knife",5);
    puVar6 = local_198;
    uVar13 = 2;
  }
  else {
    if (0xf < *(ulonglong *)(param_4 + 0x400)) {
      plVar15 = (longlong *)*plVar15;
    }
    if (*(longlong *)(param_4 + 0x3f8) == 7) {
      iVar11 = *(int *)plVar15 + -0x66696e6b;
      if ((iVar11 == 0) && (iVar11 = *(ushort *)((longlong)plVar15 + 4) - 0x5f65, iVar11 == 0)) {
        iVar11 = *(byte *)((longlong)plVar15 + 6) - 0x74;
      }
      if (iVar11 == 0) goto LAB_1802a229e;
    }
    puVar6 = (undefined1 *)FUN_18015b360(local_138,param_4 + 1000);
    uVar13 = 1;
  }
  local_1a4 = uVar13;
  uVar17 = FUN_18015b360(local_f8,puVar6);
  if ((uVar13 & 2) != 0) {
    uVar13 = uVar13 & 0xfffffffd;
    local_1a4 = uVar13;
    uVar17 = FUN_18015c010(local_198);
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffe;
    local_1a4 = uVar13;
    uVar17 = FUN_18015c010(local_138);
  }
  auVar21 = ZEXT464(0x3eb33333);
  if (bVar4) {
    lVar7 = FUN_1803db750(uVar17,local_f8,auVar21._0_8_);
  }
  local_168 = (undefined1  [8])DAT_180b90858;
  plVar15 = (longlong *)local_168;
  if (DAT_180b90858 == 0) {
    plVar15 = &DAT_180bbade0;
  }
  if (DAT_180bbadd0 == DAT_180bbadd8) {
    FUN_1801b6250(&DAT_180bbadc8);
  }
  else {
    *DAT_180bbadd0 = *plVar15;
    DAT_180bbadd0 = DAT_180bbadd0 + 1;
  }
  lVar16 = param_4 + 1000;
  if (0xf < *(ulonglong *)(param_4 + 0x400)) {
    lVar16 = *(longlong *)(param_4 + 1000);
  }
  lVar8 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar8 = DAT_180bbadd0[-1];
  }
  if (lVar8 == 0) {
    auVar18 = ZEXT816(0);
    local_168._4_4_ = 0.0;
  }
  else {
    local_198._8_8_ = *(undefined8 *)(param_4 + 0x3f8);
    local_198._0_8_ = lVar16;
    FUN_180430010(lVar8,local_168,local_198);
    auVar18 = ZEXT416((uint)local_168._0_4_);
  }
  lVar16 = local_178[0];
  if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
    DAT_180bbadd0 = DAT_180bbadd0 + -1;
  }
  auVar3 = vpcmpeqd_avx(ZEXT116(local_1a8),SUB6416(ZEXT464(0),0));
  auVar18 = vblendvps_avx(auVar18,auVar27._0_16_,auVar3);
  if (lVar7 == 0) {
    auVar18 = vmaxss_avx(auVar18,auVar27._0_16_);
    uVar17 = auVar18._0_8_;
    fVar19 = 0.0;
  }
  else {
    auVar18 = vmaxss_avx(auVar18,ZEXT416((uint)(float)*(int *)(lVar7 + 0x20)));
    uVar17 = auVar18._0_8_;
    fVar19 = (float)*(int *)(lVar7 + 0x24) + 2.0;
  }
  if (local_1a8 == 0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)local_168._4_4_ + 2.0;
  }
  fStack_160 = param_3[2] - *param_3;
  local_168 = (undefined1  [8])*(undefined8 *)param_3;
  fStack_15c = param_3[3] - param_3[1];
  local_1d8 = local_140;
  local_1e0 = CONCAT44(local_1e0._4_4_,*(undefined4 *)(local_178[0] + 0x70));
  local_1e8 = *(float *)(local_178[0] + 0x6c);
  pauVar9 = (undefined1 (*) [16])FUN_18029b9f0(local_198,local_168,uVar17,fVar26 + fVar19);
  auVar18 = *pauVar9;
  auVar29 = ZEXT1664(auVar18);
  auVar3 = vshufps_avx(auVar18,auVar18,0xaa);
  auVar31 = ZEXT1664(auVar3);
  auVar18 = vshufps_avx(auVar18,auVar18,0x55);
  auVar33 = ZEXT1664(auVar18);
  fVar19 = 0.5;
  if (!bVar4) goto LAB_1802a284e;
  plVar15 = (longlong *)(param_4 + 1000);
  uVar2 = *(ulonglong *)(param_4 + 0x3f8);
  uVar14 = *(ulonglong *)(param_4 + 0x400);
  if (0xf < uVar14) {
    plVar15 = (longlong *)*plVar15;
  }
  if ((uVar2 == 8) && (*plVar15 == 0x74635f6566696e6b)) {
LAB_1802a257d:
    _local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    FUN_18015ba30(local_168,"knife",5);
    puVar6 = local_168;
    uVar13 = uVar13 | 8;
  }
  else {
    piVar12 = (int *)(param_4 + 1000);
    if (0xf < uVar14) {
      piVar12 = *(int **)piVar12;
    }
    if (uVar2 == 7) {
      iVar11 = *piVar12 + -0x66696e6b;
      if ((iVar11 == 0) && (iVar11 = *(ushort *)(piVar12 + 1) - 0x5f65, iVar11 == 0)) {
        iVar11 = *(byte *)((longlong)piVar12 + 6) - 0x74;
      }
      if (iVar11 == 0) goto LAB_1802a257d;
    }
    pauVar9 = (undefined1 (*) [16])(param_4 + 1000);
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    if (0xf < uVar14) {
      pauVar9 = *(undefined1 (**) [16])*pauVar9;
    }
    if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar2 < 0x10) {
      local_188._8_8_ = 0xf;
      local_188._0_8_ = uVar2;
      local_198 = *pauVar9;
    }
    else {
      uVar10 = uVar2 | 0xf;
      uVar14 = 0x7fffffffffffffff;
      if ((uVar10 < 0x8000000000000000) && (uVar14 = uVar10, uVar10 < 0x16)) {
        uVar14 = 0x16;
      }
      uVar17 = FUN_18015bca0(uVar14 + 1);
      local_198._0_8_ = uVar17;
      local_188._8_8_ = uVar14;
      local_188._0_8_ = uVar2;
      FUN_18063aed0(uVar17,pauVar9,uVar2 + 1);
    }
    puVar6 = local_198;
    uVar13 = uVar13 | 4;
  }
  local_1a4 = uVar13;
  uVar17 = FUN_18015b360(local_118,puVar6);
  if ((uVar13 & 8) != 0) {
    uVar13 = uVar13 & 0xfffffff7;
    uVar17 = FUN_18015c010(local_168);
  }
  uVar20 = auVar21._0_8_;
  if ((uVar13 & 4) != 0) {
    uVar17 = FUN_18015c010(local_198);
    uVar20 = auVar21._0_8_;
  }
  plVar15 = (longlong *)FUN_1803db750(uVar17,local_118,uVar20);
  uVar17 = local_148;
  if ((plVar15 != (longlong *)0x0) && (*plVar15 != 0)) {
    auVar24._0_4_ = (float)(int)plVar15[4];
    auVar24._4_12_ = SUB1612(ZEXT816(0),4);
    auVar25 = ZEXT1664(auVar24);
    fVar26 = (float)*(int *)((longlong)plVar15 + 0x24);
    auVar18 = vroundss_avx(auVar22._0_16_,
                           ZEXT416((uint)((auVar31._0_4_ - auVar24._0_4_) * fVar19 + auVar29._0_4_))
                           ,1);
    auVar21 = ZEXT1664(auVar18);
    local_1d0 = auVar27._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar33._0_4_ + local_1d0)),1);
    auVar22 = ZEXT1664(auVar3);
    local_1a4 = 0xff000000;
    fVar19 = 1.0;
    local_1b8 = 0xff000000;
    local_1c0 = 1.0;
    local_1c8 = 1.0;
    local_1e8 = fVar26;
    local_1e0 = *plVar15;
    local_1d8._0_4_ = local_1d0;
    FUN_180435220(local_148,auVar18._0_4_ - 1.0,auVar3._0_8_,auVar24._0_8_);
    local_1b8 = 0xff000000;
    local_1d0 = auVar27._0_4_;
    local_1e0 = *plVar15;
    local_1e8 = fVar26;
    local_1c8 = fVar19;
    local_1c0 = fVar19;
    local_1d8._0_4_ = local_1d0;
    FUN_180435220(uVar17,auVar21._0_4_ + fVar19,auVar22._0_8_,auVar25._0_8_);
    local_1b8 = 0xff000000;
    local_1d0 = auVar27._0_4_;
    local_1e0 = *plVar15;
    local_1e8 = fVar26;
    local_1c8 = fVar19;
    local_1c0 = fVar19;
    local_1d8._0_4_ = local_1d0;
    FUN_180435220(uVar17,auVar21._0_8_,auVar22._0_4_ - fVar19,auVar25._0_8_);
    local_1b8 = 0xff000000;
    local_1d0 = auVar27._0_4_;
    local_1e0 = *plVar15;
    local_1e8 = fVar26;
    local_1c8 = fVar19;
    local_1c0 = fVar19;
    local_1d8._0_4_ = local_1d0;
    FUN_180435220(uVar17,auVar21._0_8_,auVar22._0_4_ + fVar19,auVar25._0_8_);
    local_1b8 = *(undefined4 *)(lVar16 + 0x78);
    local_1d0 = auVar27._0_4_;
    local_1d8 = CONCAT44(local_1d8._4_4_,local_1d0);
    local_1e0 = *plVar15;
    local_1e8 = fVar26;
    local_1c8 = fVar19;
    local_1c0 = fVar19;
    FUN_180435220(uVar17,auVar21._0_8_,auVar22._0_8_,auVar25._0_8_);
    auVar22 = ZEXT464((uint)(fVar26 + 2.0 + auVar27._0_4_));
    fVar19 = 0.5;
  }
  FUN_18015c010(local_118);
LAB_1802a284e:
  fVar26 = auVar27._0_4_;
  if (local_1a8 != 0) {
    local_178[0] = DAT_180b90858;
    plVar15 = local_178;
    if (DAT_180b90858 == 0) {
      plVar15 = &DAT_180bbade0;
    }
    if (DAT_180bbadd0 == DAT_180bbadd8) {
      FUN_1801b6250(&DAT_180bbadc8);
      fVar26 = auVar27._0_4_;
    }
    else {
      *DAT_180bbadd0 = *plVar15;
      DAT_180bbadd0 = DAT_180bbadd0 + 1;
    }
    fVar32 = auVar33._0_4_;
    fVar23 = auVar22._0_4_;
    fVar28 = auVar29._0_4_;
    fVar30 = auVar31._0_4_;
    local_198._0_8_ = param_4 + 1000;
    if (0xf < *(ulonglong *)(param_4 + 0x400)) {
      local_198._0_8_ = *(longlong *)(param_4 + 1000);
    }
    lVar7 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar7 = DAT_180bbadd0[-1];
    }
    if (lVar7 != 0) {
      local_198._8_8_ = *(undefined8 *)(param_4 + 0x3f8);
      FUN_180430010(lVar7,local_178,local_198);
      fVar32 = auVar33._0_4_;
      fVar23 = auVar22._0_4_;
      fVar28 = auVar29._0_4_;
      fVar30 = auVar31._0_4_;
      fVar26 = (float)local_178[0];
    }
    auVar18 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar30 - fVar26) * fVar19 + fVar28)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar32 + fVar23)),1);
    local_1e8 = *(float *)(lVar16 + 0x74);
    local_198._0_8_ = param_4 + 1000;
    if (0xf < *(ulonglong *)(param_4 + 0x400)) {
      local_198._0_8_ = *(longlong *)(param_4 + 1000);
    }
    local_198._8_8_ = *(undefined8 *)(param_4 + 0x3f8);
    local_1d8 = 0;
    local_1e0 = CONCAT44(local_1e0._4_4_,1);
    FUN_180434550(local_148,auVar18._0_8_,auVar3._0_8_,local_198);
    if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
      DAT_180bbadd0 = DAT_180bbadd0 + -1;
    }
  }
  FUN_18015c010(local_f8);
}



