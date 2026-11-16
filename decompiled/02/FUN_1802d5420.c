// FUN_1802d5420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d5420 */

char * FUN_1802d5420(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  short sVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 extraout_var [56];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined8 local_e8;
  float local_e0;
  float local_d8 [4];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  
  if (*(char *)(param_2 + 0x13a4) == '\0') {
    if (*(char *)(param_2 + 0x13a9) == '\0') {
      if (*(char *)(param_2 + 0x13a1) == '\0') {
        return "unregistered shot";
      }
      return "event timeout";
    }
    if ((*(char *)(param_2 + 0x13a8) != '\0') &&
       (0.003 < ABS(*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x1c)))) {
      return "prediction error";
    }
    fVar16 = 1.0;
    if (*(char *)(param_2 + 0x13b8) == '\0') {
      pfVar4 = (float *)(param_2 + 0x44);
    }
    else {
      pfVar4 = (float *)(param_2 + 0x13ac);
      fVar2 = *pfVar4 - *(float *)(param_2 + 0x44);
      fVar8 = *(float *)(param_2 + 0x13b0) - *(float *)(param_2 + 0x48);
      fVar14 = *(float *)(param_2 + 0x13b4) - *(float *)(param_2 + 0x4c);
      if (1.0 < fVar8 * fVar8 + fVar2 * fVar2 + fVar14 * fVar14) {
        return "shootpos misprediction";
      }
    }
    local_b8 = *(undefined8 *)pfVar4;
    fVar2 = pfVar4[2];
    if ((*(char *)(param_2 + 0x40) == '\0') || (*(char *)(param_2 + 0x41) == '\0')) {
      fVar8 = *(float *)(param_2 + 0x28) * 0.017453292;
      auVar13 = ZEXT464((uint)fVar8);
      auVar18 = ZEXT464((uint)(*(float *)(param_2 + 0x2c) * 0.017453292));
      fVar14 = (float)FUN_180637540(fVar8);
      fVar8 = (float)FUN_180637540(auVar18._0_8_);
      fVar8 = fVar8 * fVar14;
      local_e8 = CONCAT44(local_e8._4_4_,fVar8);
      fVar7 = (float)FUN_180638e00(auVar18._0_8_);
      auVar18 = ZEXT464((uint)(fVar7 * fVar14));
      local_e8 = CONCAT44(fVar7 * fVar14,(float)local_e8);
      local_e0 = (float)FUN_180638e00(auVar13._0_8_);
      local_e0 = -local_e0;
    }
    else {
      local_e8 = *(ulonglong *)(param_2 + 0x34);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_e8;
      local_e0 = *(float *)(param_2 + 0x3c);
      auVar12 = vshufps_avx(auVar12,auVar12,0x55);
      auVar18 = ZEXT1664(auVar12);
      fVar8 = (float)local_e8;
    }
    fVar17 = auVar18._0_4_;
    fVar7 = *(float *)(param_2 + 0x58) - local_b8._4_4_;
    fVar9 = *(float *)(param_2 + 0x54) - (float)local_b8;
    fVar19 = *(float *)(param_2 + 0x5c) - fVar2;
    fVar14 = fVar7 * fVar7 + fVar9 * fVar9 + fVar19 * fVar19;
    auVar13 = ZEXT864(0);
    if (fVar14 != 0.0) {
      fVar15 = local_e0;
      fVar20 = (float)local_b8;
      if (fVar14 < 0.0) {
        fVar14 = (float)FUN_18061e150(fVar14);
        fVar17 = auVar18._0_4_;
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      if (0.1 < fVar14) {
        local_c0 = fVar16 / fVar14;
        local_c4 = fVar7 * local_c0;
        local_c8 = fVar9 * local_c0;
        local_c0 = fVar19 * local_c0;
        local_d8[1] = local_c4 * fVar17 + local_c8 * fVar8 + local_c0 * fVar15;
        local_d8[2] = fVar16;
        local_d8[0] = -1.0;
        pfVar4 = local_d8;
        if (-1.0 <= local_d8[1]) {
          pfVar4 = local_d8 + 1;
        }
        pfVar5 = local_d8 + 2;
        if (local_d8[1] <= fVar16) {
          pfVar5 = pfVar4;
        }
        fVar8 = (float)FUN_180636820(*pfVar5);
        auVar12 = vmaxss_avx(auVar13._0_16_,ZEXT416(*(uint *)(param_2 + 0x20)));
        lVar6 = 0x24;
        if (*(char *)(param_2 + 0x13a8) == '\0') {
          lVar6 = 0x1c;
        }
        auVar1 = vmaxss_avx(auVar13._0_16_,ZEXT416(*(uint *)(lVar6 + param_2)));
        uVar10 = FUN_1806370a0(auVar1._0_4_ + auVar12._0_4_);
        auVar12 = vmaxss_avx(SUB6416(ZEXT464(0x3d0efa35),0),ZEXT416((uint)((float)uVar10 * 3.0)));
        auVar18 = ZEXT1664(auVar12);
        uVar10 = FUN_1802d72a0(uVar10,param_2);
        uVar11 = FUN_1802d7940(uVar10,param_2,&local_c8);
        fVar19 = (float)uVar10;
        fVar9 = (float)FUN_1802d7940(uVar11,param_2,&local_e8);
        fVar7 = *(float *)(param_2 + 0x74) - local_b8._4_4_;
        fVar20 = *(float *)(param_2 + 0x70) - fVar20;
        fVar2 = *(float *)(param_2 + 0x78) - fVar2;
        fVar2 = fVar7 * fVar7 + fVar20 * fVar20 + fVar2 * fVar2;
        if (fVar2 != auVar13._0_4_) {
          if (fVar2 < 0.0) {
            auVar13._0_8_ = FUN_18061e150(fVar2);
            auVar13._8_56_ = extraout_var;
            auVar13 = ZEXT1664(auVar13._0_16_);
          }
          else {
            auVar13 = ZEXT464((uint)SQRT(fVar2));
          }
        }
        if (((((*(char *)(param_2 + 0x13a4) == '\0') && (0 < *(int *)(param_2 + 0x1070))) &&
             (0 < *(int *)(param_2 + 0x1394))) &&
            ((sVar3 = thunk_FUN_180624430(uVar11), sVar3 < 1 && ((float)uVar11 != 3.4028235e+38))))
           && ((fVar9 != 3.4028235e+38 && (fVar9 <= fVar16)))) {
          if (auVar18._0_4_ < fVar8) {
            if (*(char *)(param_2 + 0x40) == '\0') {
              return "unknown";
            }
            return "trajectory mismatch";
          }
          if ((fVar9 <= fVar16) && (fVar14 < auVar13._0_4_ * 0.85)) {
            return "occlusion";
          }
          if ((fVar16 < (float)uVar11) || ((fVar14 <= auVar13._0_4_ * 1.05 && (16.0 < fVar19)))) {
            if (*(char *)(param_2 + 0x40) == '\0') {
              return "spread";
            }
            return "trajectory mismatch";
          }
        }
      }
    }
  }
  return "unknown";
}



