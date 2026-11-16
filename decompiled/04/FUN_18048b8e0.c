// FUN_18048b8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048b8e0 */

void FUN_18048b8e0(longlong param_1,float param_2,byte param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  
  auVar9 = ZEXT464(0x3f000000);
  fVar10 = DAT_180b0a41c * 3.5;
  fVar8 = 255.0;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.0 + 0.5)),1);
  fVar5 = auVar3._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((*(float *)(param_1 + 0x10) - fVar5 * 0.5) + 0.5))
                        ,1);
  auVar3 = vunpcklps_avx(ZEXT416(*(uint *)(param_1 + 0x14)),ZEXT416((uint)(auVar3._0_4_ + fVar5)));
  *param_5 = auVar3._0_8_;
  lVar4 = DAT_180bb8ae8;
  auVar7 = ZEXT464(0x3f800000);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((*(float *)(param_1 + 0x14) - param_2) + 0.5)),1);
  auVar3 = vunpcklps_avx(auVar3,ZEXT416((uint)(*(float *)((longlong)param_5 + 4) - fVar5)));
  *param_4 = auVar3._0_8_;
  fVar6 = 0.0;
  *(undefined1 *)(*(longlong *)(lVar4 + 0x14d0) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14d0) + 0x2c8);
  auVar3 = vpcmpeqd_avx(ZEXT116(param_3),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar7._0_16_,auVar9._0_16_,auVar3);
  auVar11 = ZEXT1664(auVar3);
  fVar5 = ((float)(DAT_1808da480 >> 0x18) / 255.0) * auVar3._0_4_;
  if (0.0 <= fVar5) {
    auVar3 = vminss_avx(auVar7._0_16_,ZEXT416((uint)fVar5));
    fVar5 = auVar3._0_4_;
  }
  else {
    fVar5 = 0.0;
  }
  FUN_1804df870(uVar1,param_4,param_5,
                (int)(longlong)(fVar5 * 255.0 + 0.5) << 0x18 | DAT_1808da480 & 0xffffff,fVar10,0);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar3 = vmaxss_avx(auVar7._0_16_,auVar3);
  fVar5 = ((float)(DAT_1808da468 >> 0x18) / fVar8) * auVar11._0_4_;
  if (fVar6 <= fVar5) {
    auVar2 = vminss_avx(auVar7._0_16_,ZEXT416((uint)fVar5));
    fVar6 = auVar2._0_4_;
  }
  FUN_180463090(uVar1,param_4,param_5,
                (int)(longlong)(fVar6 * fVar8 + auVar9._0_4_) << 0x18 | DAT_1808da468 & 0xffffff,
                fVar10,auVar3._0_4_);
  return;
}



