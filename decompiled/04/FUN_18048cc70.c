// FUN_18048cc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048cc70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048cc70(undefined8 param_1,float *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  undefined2 *puVar7;
  undefined **ppuVar8;
  longlong *plVar9;
  char cVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auStack_128 [32];
  float local_108;
  undefined4 local_100;
  undefined2 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e4 [4];
  float local_e0;
  float local_dc;
  ulonglong local_d0;
  
  lVar4 = DAT_180bb8ae8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  if (DAT_180bbecdb == '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    plVar9 = *(longlong **)(lVar4 + 0x14d0);
    lVar2 = plVar9[0x59];
    fVar11 = *(float *)(plVar9 + 0x23);
    fVar14 = *(float *)((longlong)plVar9 + 0x11c);
    if ((plVar9[0x39] != 0) ||
       (pfVar6 = (float *)(plVar9 + 0x50), *(longlong *)(lVar4 + 0x2338) != 0)) {
      pfVar6 = (float *)(plVar9 + 0x4a);
    }
    fVar21 = 0.5;
    fVar23 = *pfVar6 - fVar11;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 22.0 + 0.5)),1);
    auVar19 = ZEXT1664(auVar3);
    local_f0 = auVar3._0_4_;
    local_f4 = fVar23;
    FUN_1804c6420(&local_f4,0xbf800000);
    fVar15 = 4.0;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 14.8 + fVar11 + fVar21)),1);
    auVar22 = ZEXT1664(auVar3);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((fVar23 + fVar11) - DAT_180b0a41c * 16.2) + fVar21)),1);
    auVar26 = ZEXT1664(auVar3);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.0 + fVar21)),1);
    auVar3 = vmaxss_avx(SUB6416(ZEXT464(0x40400000),0),auVar3);
    auVar25 = ZEXT1664(auVar3);
    fVar11 = auVar19._0_4_ + fVar14;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((fVar11 - DAT_180b0a41c * 7.0) - auVar3._0_4_) + fVar21)),
                          1);
    auVar19 = ZEXT1664(auVar3);
    fVar23 = DAT_180b0a41c;
    iVar5 = FUN_1804b0a90("##wear_bar",0,
                          *(undefined4 *)(plVar9[0x22] + -4 + (longlong)(int)plVar9[0x21] * 4));
    if (*(int *)(*plVar9 + 0x1534) == iVar5) {
      FUN_1804cf810(iVar5,0xb,"##wear_bar");
      fVar23 = DAT_180b0a41c;
    }
    local_f4 = fVar23 * fVar15 + auVar26._0_4_;
    local_ec = auVar22._0_4_ - fVar23 * fVar15;
    local_108 = (float)CONCAT31(local_108._1_3_,1);
    local_f0 = fVar11;
    local_e8 = fVar14;
    puVar7 = (undefined2 *)FUN_1804aad60(local_e4,iVar5,&local_ec,&local_f4);
    lVar4 = DAT_180bb8ae8;
    auVar24 = ZEXT464(0x3f800000);
    auVar18 = ZEXT864(0);
    uVar1 = *puVar7;
    local_f8._1_1_ = (char)((ushort)uVar1 >> 8);
    fVar11 = auVar22._0_4_;
    if (local_f8._1_1_ != '\0') {
      fVar14 = (*(float *)(DAT_180bb8ae8 + 0x110) - fVar11) / (auVar26._0_4_ - fVar11);
      if (0.0 <= fVar14) {
        auVar3 = vminss_avx(auVar24._0_16_,ZEXT416((uint)fVar14));
        fVar14 = auVar3._0_4_;
      }
      else {
        fVar14 = 0.0;
      }
      *param_2 = fVar14;
    }
    cVar10 = (char)uVar1;
    if ((cVar10 != '\0') && (*(float *)(lVar4 + 0x120) != 0.0)) {
      fVar14 = *(float *)(lVar4 + 0x120) * 0.001 + *param_2;
      if (0.0 <= fVar14) {
        auVar3 = vminss_avx(auVar24._0_16_,ZEXT416((uint)fVar14));
        fVar14 = auVar3._0_4_;
      }
      else {
        fVar14 = 0.0;
      }
      *param_2 = fVar14;
    }
    fVar23 = auVar19._0_4_ + auVar25._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 2.0 + fVar21)),1);
    auVar20 = ZEXT1664(auVar3);
    fVar14 = 0.0;
    ppuVar8 = (undefined **)&DAT_180857ff0;
    fVar11 = auVar26._0_4_ - fVar11;
    fVar15 = auVar25._0_4_ * fVar21;
    local_f8 = uVar1;
    do {
      fVar16 = auVar18._0_4_;
      fVar13 = fVar16;
      if (fVar16 < fVar14) {
        fVar13 = auVar20._0_4_ * fVar21;
      }
      if (*(float *)ppuVar8 < auVar24._0_4_) {
        fVar16 = auVar20._0_4_ * fVar21;
      }
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(((*(float *)ppuVar8 * fVar11 + auVar22._0_4_) - fVar16) +
                                          fVar21)),1);
      local_ec = auVar3._0_4_;
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(fVar11 * fVar14 + auVar22._0_4_ + fVar13 + fVar21)),1);
      local_100 = 0;
      local_f4 = auVar3._0_4_;
      local_f0 = auVar19._0_4_;
      local_108 = fVar15;
      local_e8 = fVar23;
      FUN_1804df870(lVar2,&local_f4,&local_ec,*(float *)((longlong)ppuVar8 + 4));
      fVar14 = *(float *)ppuVar8;
      ppuVar8 = ppuVar8 + 1;
    } while (ppuVar8 != &PTR_DAT_180858018);
    if ((cVar10 == '\0') && (local_f8._1_1_ == '\0')) {
      uVar12 = auVar18._0_8_;
    }
    else {
      uVar12 = auVar24._0_8_;
    }
    uVar12 = FUN_1804aaa10(iVar5 + 1,uVar12,0x41900000);
    if (auVar18._0_4_ <= *param_2) {
      auVar3 = vminss_avx(auVar24._0_16_,ZEXT416((uint)*param_2));
      uVar17 = auVar3._0_8_;
    }
    else {
      uVar17 = auVar18._0_8_;
    }
    fVar11 = (float)FUN_1804aaa10(iVar5 + 2,uVar17,0x41c00000);
    local_e0 = DAT_180b0a41c * 3.6;
    local_ec = fVar11 * (auVar26._0_4_ - auVar22._0_4_) + auVar22._0_4_;
    local_e8 = auVar19._0_4_ - DAT_180b0a41c * 2.5;
    local_f0 = local_e8 - local_e0 * 1.25;
    local_f4 = local_e0 + local_ec;
    local_e0 = local_ec - local_e0;
    local_dc = local_f0;
    local_108 = (float)FUN_180462ad0(DAT_1808da478,0xffffffff,uVar12);
    FUN_1804dfea0(lVar2,&local_e0,&local_f4,&local_ec);
    if ((cVar10 != '\0') || (local_f8._1_1_ != '\0')) {
      FUN_18015abc0(&local_e0,0x10,&DAT_1807c6e68,(double)*param_2);
      FUN_1804ad0d0(&local_e0,auVar18._0_8_);
    }
  }
}



