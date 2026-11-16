// FUN_1804dc420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dc420 */

void FUN_1804dc420(longlong param_1,float *param_2,float *param_3,undefined8 param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 in_ZMM3 [64];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [64];
  float local_res8;
  float local_resc;
  
  fVar11 = 0.25;
  fVar8 = *(float *)(param_1 + 0xe0) * 0.25;
  if (fVar8 <= in_ZMM3._0_4_) {
    uVar6 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar6 = param_5;
    }
    bVar4 = (byte)uVar6;
    auVar2 = vpcmpeqd_avx(ZEXT116((bVar4 & 0xc0) != 0xc0 && (bVar4 & 0x30) != 0x30),
                          SUB6416(ZEXT464(0),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar2);
    auVar1 = vminss_avx(in_ZMM3._0_16_,
                        ZEXT416((uint)(ABS(*param_3 - *param_2) * auVar2._0_4_ - 1.0)));
    auVar2 = vpcmpeqd_avx(ZEXT116((bVar4 & 0xa0) != 0xa0 && (bVar4 & 0x50) != 0x50),
                          SUB6416(ZEXT464(0),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar2);
    auVar2 = vminss_avx(auVar1,ZEXT416((uint)(ABS(param_3[1] - param_2[1]) * auVar2._0_4_ - 1.0)));
    if ((uVar6 & 0x1f0) != 0x100) {
      auVar5 = ZEXT816(0);
      auVar1 = vpcmpeqd_avx(ZEXT416(uVar6 & 0x10),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(auVar2,auVar5,auVar1);
      auVar3 = vpcmpeqd_avx(ZEXT416(uVar6 & 0x20),SUB6416(ZEXT464(0),0));
      fVar7 = auVar1._0_4_;
      auVar3 = vblendvps_avx(auVar2,auVar5,auVar3);
      auVar13 = ZEXT1664(auVar3);
      auVar3 = vpcmpeqd_avx(ZEXT416(uVar6 & 0x80),SUB6416(ZEXT464(0),0));
      auVar3 = vblendvps_avx(auVar2,auVar5,auVar3);
      auVar10 = ZEXT1664(auVar3);
      auVar3 = vpcmpeqd_avx(ZEXT416(uVar6 & 0x40),SUB6416(ZEXT464(0),0));
      local_res8 = fVar7 + *param_2;
      local_resc = fVar7 + param_2[1];
      auVar2 = vblendvps_avx(auVar2,auVar5,auVar3);
      auVar9 = ZEXT1664(auVar2);
      if (fVar8 <= fVar7) {
        FUN_1804dbc10(param_1,&local_res8,auVar1._0_8_,0x18,0x24,0);
        uVar12 = auVar13._0_8_;
      }
      else {
        FUN_1804d0c90(param_1 + 0x50);
        uVar12 = auVar13._0_8_;
      }
      fVar8 = (float)uVar12;
      local_res8 = *param_3 - fVar8;
      local_resc = fVar8 + param_2[1];
      if (fVar11 * *(float *)(param_1 + 0xe0) <= fVar8) {
        FUN_1804dbc10(param_1,&local_res8,uVar12,0x24,0x30,0);
        uVar12 = auVar10._0_8_;
      }
      else {
        FUN_1804d0c90(param_1 + 0x50);
        uVar12 = auVar10._0_8_;
      }
      fVar8 = (float)uVar12;
      local_res8 = *param_3 - fVar8;
      local_resc = param_3[1] - fVar8;
      if (fVar11 * *(float *)(param_1 + 0xe0) <= fVar8) {
        FUN_1804dbc10(param_1,&local_res8,uVar12,0,0xc,0);
        uVar12 = auVar9._0_8_;
      }
      else {
        FUN_1804d0c90(param_1 + 0x50);
        uVar12 = auVar9._0_8_;
      }
      fVar8 = (float)uVar12;
      local_res8 = fVar8 + *param_2;
      local_resc = param_3[1] - fVar8;
      if (fVar8 < fVar11 * *(float *)(param_1 + 0xe0)) {
        FUN_1804d0c90(param_1 + 0x50);
        return;
      }
      FUN_1804dbc10(param_1,&local_res8,uVar12,0xc,0x18,0);
      return;
    }
  }
  param_1 = param_1 + 0x50;
  FUN_1804d0c90(param_1,param_2);
  local_res8 = *param_3;
  local_resc = param_2[1];
  FUN_1804d0c90(param_1,&local_res8);
  FUN_1804d0c90(param_1,param_3);
  local_res8 = *param_2;
  local_resc = param_3[1];
  FUN_1804d0c90(param_1,&local_res8);
  return;
}



