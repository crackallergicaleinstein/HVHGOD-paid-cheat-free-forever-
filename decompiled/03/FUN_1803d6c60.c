// FUN_1803d6c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6c60 */

undefined8 * FUN_1803d6c60(undefined8 *param_1,float *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  short sVar9;
  undefined1 (*pauVar10) [32];
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  float fVar14;
  float local_c8 [9];
  undefined4 uStack_a4;
  float local_70;
  char cStack_6c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  sVar9 = thunk_FUN_180624430(param_3);
  fVar14 = (float)param_3;
  if (((sVar9 < 1) && (0.01 < fVar14)) && (fVar14 < 100.0)) {
    for (pfVar11 = param_2; pfVar11 != param_2 + 0xc; pfVar11 = pfVar11 + 1) {
      sVar9 = thunk_FUN_180624430(*pfVar11);
      fVar14 = (float)param_3;
      if (0 < sVar9) goto LAB_1803d6ef9;
    }
    if (*(char *)(param_4 + 0x24) == '\0') {
      fVar12 = (float)FUN_1806052cc(param_2[8],param_2[9],param_2[10]);
    }
    else {
      fVar12 = *(float *)(param_4 + 0x1c);
      local_48 = unaff_XMM7_Qa;
      uStack_40 = unaff_XMM7_Qb;
      fVar1 = *(float *)(param_4 + 0x18);
      local_58 = unaff_XMM8_Qa;
      uStack_50 = unaff_XMM8_Qb;
      fVar2 = *(float *)(param_4 + 0x20);
      fVar5 = fVar12 * param_2[1] + fVar1 * *param_2 + fVar2 * param_2[2];
      fVar6 = fVar12 * param_2[5] + fVar1 * param_2[4] + fVar2 * param_2[6];
      fVar12 = fVar12 * param_2[9] + fVar1 * param_2[8] + fVar2 * param_2[10];
      fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar12 * fVar12;
      fVar12 = 0.0;
      if (fVar1 != 0.0) {
        if (fVar1 < 0.0) {
          fVar12 = (float)FUN_18061e150(fVar1);
        }
        else {
          fVar12 = SQRT(fVar1);
        }
      }
    }
    if ((0.001 <= fVar12) && (fVar12 <= 10.0)) {
      fVar12 = fVar12 * fVar14;
      if (*(char *)(param_4 + 0x24) == '\0') {
        local_c8[0] = 1.0;
        local_c8[1] = 0.0;
        local_c8[2] = 0.0;
        local_c8[3] = 0.0;
        local_c8[4] = 1.0;
        local_c8[5] = 0.0;
        local_c8[6] = 0.0;
        local_c8[7] = 0.0;
        local_c8[8] = 1.0;
        uStack_a4 = CONCAT31(uStack_a4._1_3_,1);
        pauVar10 = (undefined1 (*) [32])local_c8;
      }
      else {
        pauVar10 = (undefined1 (*) [32])FUN_1803d6710(local_c8,param_2,param_4);
      }
      auVar4 = *pauVar10;
      cStack_6c = (char)((ulonglong)*(undefined8 *)pauVar10[1] >> 0x20);
      if (cStack_6c != '\0') {
        fVar1 = fVar12 * 0.9;
        local_70 = (float)*(undefined8 *)pauVar10[1];
        auVar13 = auVar4._16_16_;
        auVar7 = vshufps_avx(auVar13,auVar13,0xaa);
        auVar8 = vshufps_avx(auVar13,auVar13,0xff);
        local_c8[1] = fVar1 * auVar8._0_4_ + param_2[7];
        local_c8[0] = fVar1 * auVar7._0_4_ + param_2[3];
        fVar14 = param_2[0xb];
        uVar3 = vmovhpd_avx(auVar13);
        local_c8[3] = (float)uVar3;
        local_c8[4] = (float)((ulonglong)uVar3 >> 0x20);
        *param_1 = local_c8._0_8_;
        param_1[1] = CONCAT44(local_c8[3],fVar1 * local_70 + fVar14);
        param_1[2] = CONCAT44(local_70,local_c8[4]);
        param_1[3] = auVar4._0_8_;
        auVar7 = vunpcklps_avx(ZEXT416((uint)(fVar12 * 0.6)),ZEXT416((uint)(fVar12 * 1.6)));
        param_1[4] = auVar4._8_8_;
        param_1[5] = auVar4._16_8_;
        param_1[6] = auVar7._0_8_;
        *(undefined1 *)(param_1 + 7) = 1;
        return param_1;
      }
    }
  }
LAB_1803d6ef9:
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



