// FUN_18033c2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033c2b0 */

undefined8 FUN_18033c2b0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar8;
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined1 local_3c [52];
  
  bVar1 = *(byte *)(param_1[1] + 0x44);
  sVar5 = thunk_FUN_180624430(param_2);
  fVar12 = (float)param_2;
  if (sVar5 < 1) {
    fVar10 = *(float *)*param_1;
    sVar5 = thunk_FUN_180624430(fVar10);
    if (sVar5 < 1) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = ZEXT812(0);
      auVar9 = ZEXT1264(ZEXT812(0)) << 0x20;
      if ((0.0 <= fVar12) && (0.0 <= fVar10)) {
        auVar13 = ZEXT464(0x3c800000);
        auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar12 * 64.0 - 0.001)),2);
        local_48 = auVar4._0_4_ * 0.015625;
        auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 * 64.0 - 0.001)),2);
        local_44 = auVar4._0_4_ * 0.015625;
        puVar7 = (uint *)0x0;
        auVar4 = vpcmpeqd_avx(ZEXT116(bVar1),SUB6416(ZEXT464(0),0));
        auVar3 = vblendvps_avx(auVar13._0_16_,auVar3 << 0x20,auVar4);
        local_40 = auVar3._0_4_;
        puVar6 = (uint *)FUN_1805f9dd0(&local_48,local_3c,0);
        auVar11 = ZEXT464(*puVar6);
        sVar5 = thunk_FUN_180624430(*puVar6);
        if ((sVar5 < 1) && (auVar11._0_4_ <= 0.984375)) {
          if (bVar1 != 0) {
            auVar9 = ZEXT464((uint)(auVar11._0_4_ - auVar13._0_4_));
          }
          uVar2 = *(undefined4 *)(*(longlong *)param_1[2] + 8);
          uVar8 = extraout_XMM0_Qa;
          if ((((bVar1 != 0) &&
               (puVar7 = (uint *)FUN_1803dfb00(), uVar8 = extraout_XMM0_Qa_00, puVar7 == (uint *)0x0
               )) || ((puVar6 = (uint *)FUN_1803dfb00(uVar8,*(undefined8 *)param_1[2]), bVar1 != 0
                      && (puVar7 == (uint *)0x0)))) || (puVar6 == (uint *)0x0)) {
            *(undefined4 *)(*(longlong *)param_1[2] + 8) = uVar2;
            return 0;
          }
          if (puVar7 != (uint *)0x0) {
            *puVar7 = *puVar7 | 7;
            puVar7[5] = auVar9._0_4_;
            puVar7[2] = 2;
            puVar7[3] = 0;
            *(undefined1 *)(puVar7 + 4) = 0;
          }
          *puVar6 = *puVar6 | 7;
          puVar6[5] = auVar11._0_4_;
          puVar6[2] = 2;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 1;
          *(undefined1 *)(param_1[3] + 1) = 1;
          *(undefined8 *)param_1[4] = *(undefined8 *)param_1[5];
          *(uint *)(param_1[4] + 8) = auVar11._0_4_;
          *(undefined1 *)(param_1[4] + 0x18) = 1;
          *(undefined8 *)(param_1[4] + 0x10) = *(undefined8 *)param_1[5];
          *(undefined4 *)(param_1[4] + 0x2c) = *(undefined4 *)(param_1[1] + 0x20);
          FUN_18033b950(param_1[6],"press_written",auVar11._0_8_);
          return 1;
        }
      }
    }
  }
  return 0;
}



