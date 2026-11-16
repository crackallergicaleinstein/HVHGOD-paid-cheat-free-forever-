// FUN_180474b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474b60 */

byte FUN_180474b60(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  byte bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 local_res18 [8];
  
  plVar8 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  iVar5 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar8[0x22] + -4 + (longlong)(int)plVar8[0x21] * 4));
  if (*(int *)(*plVar8 + 0x1534) == iVar5) {
    FUN_1804cf810(iVar5,0xb,param_2);
  }
  pbVar7 = (byte *)FUN_1804aad60(local_res18,iVar5,param_3,param_4,1);
  auVar12 = ZEXT464(0x3f800000);
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  auVar11 = ZEXT1264(ZEXT812(0)) << 0x20;
  bVar1 = pbVar7[2];
  auVar4 = vpcmpeqd_avx(ZEXT116(*pbVar7),SUB6416(ZEXT464(0),0));
  auVar4 = vblendvps_avx(auVar12._0_16_,auVar2 << 0x20,auVar4);
  fVar9 = (float)FUN_1804aaa10(iVar5 + 1,auVar4._0_8_,0x41800000);
  fVar13 = DAT_180b0a41c * 5.0;
  uVar6 = FUN_180462ad0(DAT_180b0a488,DAT_180b0a494);
  FUN_1804df870(param_1,param_3,param_4,uVar6,fVar13,0);
  fVar10 = auVar11._0_4_;
  if (fVar10 < fVar9) {
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar4 = vmaxss_avx(auVar12._0_16_,auVar4);
    fVar3 = ((float)(DAT_180b0a490 >> 0x18) / 255.0) * fVar9;
    if (fVar10 <= fVar3) {
      auVar2 = vminss_avx(auVar12._0_16_,ZEXT416((uint)fVar3));
      fVar10 = auVar2._0_4_;
    }
    FUN_180463090(param_1,param_3,param_4,
                  (int)(longlong)(fVar10 * 255.0 + 0.5) << 0x18 | DAT_180b0a490 & 0xffffff,fVar13,
                  auVar4._0_4_);
  }
  fVar9 = DAT_180b0a41c * 2.0 * fVar9;
  fVar13 = *(float *)CONCAT44(param_7._4_4_,(float)param_7);
  fVar10 = ((float *)CONCAT44(param_7._4_4_,(float)param_7))[1];
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 2.4 + 0.5)),1);
  auVar11 = ZEXT1664(auVar4);
  auVar2 = vunpcklps_avx(ZEXT416((uint)((fVar13 + *param_3) - fVar9)),
                         ZEXT416((uint)((fVar10 + param_3[1]) - fVar9)));
  auVar4 = vunpcklps_avx(ZEXT416((uint)((*param_4 - fVar13) + fVar9)),
                         ZEXT416((uint)(((param_4[1] - auVar4._0_4_) - fVar10) + fVar9)));
  FUN_180473f60(param_1,param_5,auVar2._0_8_,auVar4._0_8_);
  param_7._0_4_ = *param_3;
  param_7._4_4_ = param_4[1] - auVar11._0_4_;
  FUN_1804df870(param_1,&param_7,param_4,param_6,DAT_180b0a41c,0);
  if (param_8 != '\0') {
    param_7._0_4_ = *param_4 - DAT_180b0a41c * 10.0;
    param_7._4_4_ = DAT_180b0a41c * 10.0 + param_3[1];
    FUN_1804dff40(param_1,&param_7,DAT_180b0a41c * 4.6,DAT_180b0a484,0x18,DAT_180b0a41c * 1.2);
    FUN_1804e01c0(param_1,&param_7,DAT_180b0a41c * 2.3,DAT_180b0a484,0x10);
  }
  return bVar1;
}



