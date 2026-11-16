// FUN_180464e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180464e20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180464e20(float *param_1,longlong *param_2,longlong param_3,float *param_4,float *param_5,
                  float param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  float local_a8 [2];
  undefined8 ***local_a0 [3];
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_3 + 1) == '\0') || (*(char *)(param_3 + 1) == '\x02')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  auVar15 = ZEXT864(0);
  auVar14 = ZEXT464(0x3f000000);
  auVar12 = ZEXT464((uint)param_6);
  if (param_6 <= 0.0) {
    if (0.5 <= *(float *)(param_3 + 0x20)) {
      auVar2 = vminss_avx(SUB6416(ZEXT464(0x40200000),0),ZEXT416((uint)*(float *)(param_3 + 0x20)));
      auVar12 = ZEXT1664(auVar2);
    }
    else {
      auVar12 = ZEXT1664(auVar14._0_16_);
    }
  }
  bVar1 = *(byte *)((longlong)param_2 + 0xc);
  fVar11 = auVar12._0_4_;
  if (bVar1 == 3) {
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar11 + fVar11) * DAT_180b0a41c + 0.5)),1);
    fVar11 = auVar2._0_4_;
    auVar13 = ZEXT1664(auVar2);
    if (*(char *)(param_3 + 0x54) != '\0') {
      fVar10 = DAT_180b0a41c;
      iVar5 = strcmp((char *)*param_2,"Health Bar");
      fVar11 = auVar13._0_4_;
      if (iVar5 == 0) {
        fVar11 = (float)FUN_18029b6b0(*(undefined4 *)(param_3 + 0x7c));
        if (bVar4) {
          auVar2 = vroundss_avx(ZEXT816(0),
                                ZEXT416((uint)(fVar10 * fVar11 * auVar12._0_4_ + auVar14._0_4_)),1);
          auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
          local_b8 = 0;
          local_c8 = 0;
          local_d0 = 0;
          local_d8 = 0;
          local_e0 = &DAT_1807d1404;
          local_e8 = auVar15._0_4_;
          FUN_1804ea040(local_a8,DAT_180c62ca8,auVar2._0_8_,0x7f7fffff);
        }
        else {
          fVar10 = fVar10 * 2.0;
          local_a8[0] = (float)FUN_180463350(DAT_180c62ca8);
          local_a8[0] = local_a8[0] + fVar10;
        }
        fVar11 = (float)FUN_18029b730(*(undefined4 *)(param_3 + 0x80));
        fVar11 = auVar13._0_4_ + fVar11 * auVar12._0_4_ * DAT_180b0a41c + local_a8[0];
      }
    }
    if (bVar4) {
      fVar10 = fVar11;
      fVar11 = param_5[1] - param_4[1];
    }
    else {
      fVar10 = *param_5 - *param_4;
    }
    *param_1 = fVar10;
    param_1[1] = fVar11;
  }
  else if (bVar1 == 5) {
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar11 * 13.0 * DAT_180b0a41c + 0.5)),1);
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 1;
      if (*(char *)(*param_2 + lVar6) != (&DAT_18082a0a0)[lVar6]) goto LAB_180465097;
      lVar6 = lVar7;
    } while (lVar7 != 5);
    if (*(char *)(param_3 + 0x85) == '\0') {
LAB_180465097:
      fVar10 = 13.0;
    }
    else {
      fVar10 = 27.0;
    }
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 * fVar11 * DAT_180b0a41c + 0.5)),1);
    *param_1 = auVar3._0_4_;
    param_1[1] = auVar2._0_4_;
  }
  else {
    uVar8 = DAT_180c62ca8;
    if (*(int *)(param_3 + 0x3c) != 0) {
      if (*(int *)(param_3 + 0x3c) == 2) {
        uVar8 = DAT_180c62cb8;
      }
      else if (bVar1 == 4) {
        uVar8 = DAT_180c62cb0;
      }
    }
    auVar2 = vpcmpeqd_avx(ZEXT116(bVar1),SUB6416(ZEXT464(4),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x41300000),0),SUB6416(ZEXT464(0x4119999a),0),auVar2);
    auVar12 = ZEXT464((uint)(auVar2._0_4_ * fVar11));
    FUN_180464a20(auVar2._0_8_);
    if (*(char *)(param_3 + 0x98) == '\0') {
LAB_180464f7e:
      auVar13 = ZEXT1664(auVar15._0_16_);
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        if (*(char *)(*param_2 + lVar6) != (&DAT_1807c6a98)[lVar6]) goto LAB_180464f7e;
        lVar6 = lVar7;
      } while (lVar7 != 5);
      auVar13 = ZEXT464((uint)(DAT_180b0a41c * 16.0));
    }
    fVar11 = DAT_180b0a41c * 5.0;
    fVar10 = (float)FUN_180463350(uVar8,auVar12._0_8_);
    auVar2 = vmaxss_avx(ZEXT416((uint)(fVar10 + fVar11)),auVar13._0_16_);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar2._0_4_ + auVar14._0_4_)),1);
    auVar13 = ZEXT1664(auVar2);
    if (*(char *)(param_3 + 0x98) != '\0') {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        if (*(char *)(*param_2 + lVar6) != (&DAT_1807c6a98)[lVar6]) goto LAB_180464fde;
        lVar6 = lVar7;
      } while (lVar7 != 5);
      auVar15 = ZEXT464((uint)(DAT_180b0a41c * 17.0));
    }
LAB_180464fde:
    pppuVar9 = local_a0;
    if (0xf < local_88) {
      pppuVar9 = local_a0[0];
    }
    fVar11 = DAT_180b0a41c * 2.0;
    fVar10 = (float)FUN_1804633e0(uVar8,auVar12._0_8_,pppuVar9,0);
    auVar2 = vroundss_avx(ZEXT416(0),
                          ZEXT416((uint)(fVar10 + fVar11 + auVar15._0_4_ + auVar14._0_4_)),1);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar13._0_4_;
    FUN_18015c010(local_a0);
  }
}



