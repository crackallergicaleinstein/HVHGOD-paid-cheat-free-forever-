// FUN_18029f6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029f6f0 */

void FUN_18029f6f0(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  byte param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined8 uVar19;
  undefined1 auVar20 [64];
  undefined8 uVar21;
  undefined1 auVar22 [64];
  undefined8 uVar23;
  undefined1 auVar24 [64];
  float local_d8 [2];
  undefined8 local_d0;
  
  fVar15 = 2.0;
  fVar17 = 1.0;
  fVar16 = 1.0;
  fVar9 = param_3[1];
  auVar20 = ZEXT464((uint)fVar9);
  fVar11 = *param_3;
  auVar24 = ZEXT464((uint)fVar11);
  auVar22 = ZEXT464((uint)(param_3[2] - fVar11));
  auVar18 = ZEXT464((uint)(param_3[3] - fVar9));
  pbVar1 = (byte *)(param_4 + (((ulonglong)param_5 ^ 1) + 0x53) * 4);
  if (*(char *)(param_4 + 0x70) == '\0') {
    fVar14 = 0.5;
  }
  else {
    local_d8[0] = 0.0;
    local_d0 = CONCAT44(local_d0._4_4_,0x3f800000);
    fVar15 = *(float *)(param_4 + 0x148);
    pfVar8 = local_d8;
    if (0.0 <= fVar15) {
      pfVar8 = (float *)(param_4 + 0x148);
    }
    pfVar6 = (float *)&local_d0;
    if (fVar15 <= 1.0) {
      pfVar6 = pfVar8;
    }
    fVar15 = (((float)pbVar1[1] / 255.0 + (float)*pbVar1 / 255.0 + (float)pbVar1[2] / 255.0) / 3.0)
             * 0.3;
    fVar16 = (((float)*pbVar1 / 255.0) * 0.7 + fVar15) * 255.0;
    fVar3 = (((float)pbVar1[1] / 255.0) * 0.7 + fVar15) * 255.0;
    fVar15 = (((float)pbVar1[2] / 255.0) * 0.7 + fVar15) * 255.0;
    fVar4 = (float)CONCAT13((char)(int)(*pfVar6 * 255.0),
                            CONCAT12((char)(int)fVar15,CONCAT11((char)(int)fVar3,(char)(int)fVar16))
                           );
    fVar14 = 0.5;
    local_d0._0_4_ =
         (float)CONCAT13((char)(int)(*pfVar6 * 0.16 * 255.0),
                         CONCAT12((char)(int)(fVar15 * 0.4),
                                  CONCAT11((char)(int)(fVar3 * 0.4),(char)(int)(fVar16 * 0.4))));
    fVar5 = (float)local_d0;
    fVar16 = (param_3[3] - fVar9) * 0.5 + fVar9;
    auVar12 = ZEXT464((uint)fVar16);
    fVar3 = (param_3[2] - fVar11) - 2.0;
    auVar10 = ZEXT464((uint)fVar3);
    auVar13 = ZEXT464((uint)(fVar11 + 1.0));
    fVar15 = 2.0;
    local_d8[0] = fVar4;
    FUN_180430a80(param_2,fVar11 + 1.0,fVar9 + 1.0,fVar3,(fVar16 - fVar9) - 1.0,fVar4,fVar4,
                  (float)local_d0,(float)local_d0);
    fVar16 = fVar17;
    FUN_180430a80(param_2,auVar13._0_8_,auVar12._0_8_,auVar10._0_8_,
                  ((auVar20._0_4_ + auVar18._0_4_) - auVar12._0_4_) - fVar17,fVar5,fVar5,fVar4,fVar4
                 );
  }
  uVar23 = auVar24._0_8_;
  uVar19 = auVar20._0_8_;
  uVar21 = auVar22._0_8_;
  pfVar8 = (float *)(param_4 + 0x144);
  local_d8[0] = fVar14;
  if (*(char *)(param_4 + 0x68) == '\0') {
    local_d0 = CONCAT44(local_d0._4_4_,0x40800000);
    pfVar6 = local_d8;
    if (fVar14 <= *pfVar8) {
      pfVar6 = pfVar8;
    }
    pfVar7 = (float *)&local_d0;
    if (*pfVar8 <= 4.0) {
      pfVar7 = pfVar6;
    }
    fVar9 = *pfVar7;
    local_d0 = param_2;
    if (*(char *)(param_4 + 0xd8) != '\0') {
      local_d8[0] = -0.125;
      FUN_18029fb50(&local_d0,auVar24._0_4_ - fVar16,auVar20._0_4_ - fVar16,auVar22._0_4_ + fVar15,
                    auVar18._0_4_ + fVar15,local_d8,fVar9 + fVar15);
      uVar23 = auVar24._0_8_;
      uVar19 = auVar20._0_8_;
      uVar21 = auVar22._0_8_;
    }
    FUN_18029fb50(&local_d0,uVar23,uVar19,uVar21,auVar18._0_4_,pbVar1,fVar9);
  }
  else {
    auVar2 = vminss_avx(auVar18._0_16_,auVar22._0_16_);
    auVar2 = vminss_avx(ZEXT416((uint)(auVar2._0_4_ * 0.4)),ZEXT416(*(uint *)(param_4 + 0x140)));
    auVar10 = ZEXT1664(auVar2);
    fVar9 = auVar2._0_4_;
    local_d0 = CONCAT44(local_d0._4_4_,0x40800000);
    pfVar6 = local_d8;
    if (fVar14 <= *pfVar8) {
      pfVar6 = pfVar8;
    }
    pfVar7 = (float *)&local_d0;
    if (*pfVar8 <= 4.0) {
      pfVar7 = pfVar6;
    }
    fVar11 = *pfVar7;
    local_d0 = param_2;
    if (*(char *)(param_4 + 0xd8) != '\0') {
      local_d8[0] = -0.125;
      FUN_18029ff00(&local_d0,auVar24._0_4_ - fVar16,auVar20._0_4_ - fVar16,auVar22._0_4_ + fVar15,
                    auVar18._0_4_ + fVar15,local_d8,fVar9 + fVar16,fVar11 + fVar15);
      uVar23 = auVar24._0_8_;
      uVar19 = auVar20._0_8_;
      uVar21 = auVar22._0_8_;
      fVar9 = auVar10._0_4_;
    }
    FUN_18029ff00(&local_d0,uVar23,uVar19,uVar21,auVar18._0_4_,pbVar1,fVar9,fVar11);
  }
  return;
}



