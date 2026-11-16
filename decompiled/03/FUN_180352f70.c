// FUN_180352f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180352f70 */

undefined1 (*) [16]
FUN_180352f70(undefined1 (*param_1) [16],float *param_2,undefined8 param_3,float param_4,
             undefined1 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  float fVar8;
  undefined1 in_ZMM2 [64];
  float fVar9;
  float local_a8;
  float local_a4 [2];
  undefined1 auStack_9c [12];
  undefined4 local_90;
  
  pfVar7 = &local_a8;
  fVar8 = param_2[1];
  if (((fVar8 <= 0.0) || (fVar1 = *param_2, fVar1 <= 0.0)) || (2.0 / fVar8 + 1.0 <= fVar1)) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0x17;
    }
  }
  else {
    auVar3 = vmaxss_avx(ZEXT816(0),in_ZMM2._0_16_);
    fVar5 = (fVar1 + 131072.0) - 131072.0;
    fVar9 = fVar1 - 1.0 / fVar8;
    if (fVar9 <= 0.0) {
      local_a8 = 0.0;
    }
    else {
      auVar4 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(fVar9 * 64.0)),1);
      local_a8 = auVar4._0_4_ * 0.015625;
    }
    if (0.96875 < local_a8) {
      pfVar7 = (float *)&DAT_180701e40;
    }
    auVar4 = vmaxss_avx(ZEXT416((uint)(auVar3._0_4_ + 0.015625)),ZEXT416((uint)*pfVar7));
    fVar9 = auVar4._0_4_;
    if ((fVar5 <= fVar9) || (0.984375 < fVar9)) {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0x18;
      }
    }
    else if (2.0 < (fVar1 - auVar3._0_4_) * fVar8) {
      fVar8 = (fVar1 - fVar9) * fVar8;
      if ((fVar8 <= 0.0) || (2.0 <= fVar8)) {
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 0x1a;
        }
      }
      else {
        auVar2 = vcmpss_avx(ZEXT416((uint)fVar1),SUB6416(ZEXT464(0x3f800000),0),1);
        auVar2 = vblendvps_avx(auVar4,ZEXT416((uint)fVar5),auVar2);
        local_a4[0] = (auVar2._0_4_ + 0.046875 + 131072.0) - 131072.0;
        pfVar7 = local_a4;
        if (0.96875 < local_a4[0]) {
          pfVar7 = (float *)&DAT_180701e40;
        }
        auVar2 = vmaxss_avx(ZEXT416((uint)(auVar2._0_4_ + 0.015625)),ZEXT416((uint)*pfVar7));
        fVar8 = auVar2._0_4_;
        if ((fVar9 < fVar8) && (fVar8 <= 0.984375)) {
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          auVar6._12_4_ = 0;
          auVar6._0_12_ = auStack_9c;
          auVar3 = vinsertps_avx(auVar6 << 0x20,auVar3,0x10);
          auVar3 = vinsertps_avx(auVar3,auVar4,0x20);
          auVar3 = vinsertps_avx(auVar3,auVar2,0x30);
          local_90 = CONCAT31(local_90._1_3_,param_4 < (fVar8 - fVar9) * 0.015625);
          param_1[1][4] = 1;
          *param_1 = auVar3;
          *(undefined4 *)param_1[1] = local_90;
          return param_1;
        }
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 0x1b;
        }
      }
    }
    else if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0x19;
    }
  }
  param_1[1][4] = 0;
  return param_1;
}



