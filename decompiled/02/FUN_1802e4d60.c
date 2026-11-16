// FUN_1802e4d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e4d60 */

undefined8 FUN_1802e4d60(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [64];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58 [20];
  
  sVar2 = thunk_FUN_180624430(param_2);
  fVar8 = (float)param_2;
  if ((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x138)), sVar2 < 1)) {
    auVar5 = ZEXT464(*(uint *)(param_1 + 0x13c));
    fVar6 = 0.5;
    fVar7 = 10.0;
    local_58[2] = 10.0;
    local_58[0] = 0.5;
    sVar2 = thunk_FUN_180624430(*(uint *)(param_1 + 0x13c));
    auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar2),SUB6416(ZEXT464(0),0));
    fVar8 = fVar8 - *(float *)(param_1 + 0x138);
    auVar1 = vblendvps_avx(auVar5._0_16_,SUB6416(ZEXT464(0x40600000),0),auVar1);
    local_58[1] = auVar1._0_4_;
    pfVar4 = local_58;
    if (fVar6 <= local_58[1]) {
      pfVar4 = local_58 + 1;
    }
    pfVar3 = local_58 + 2;
    if (local_58[1] <= fVar7) {
      pfVar3 = pfVar4;
    }
    if ((-0.05 <= fVar8) && (fVar8 <= *pfVar3 + 0.35)) {
      if ((*pfVar3 <= fVar8) && (*(char *)(param_1 + 0x171) == '\0')) {
        *(undefined1 *)(param_1 + 0x171) = 1;
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0x3e800000;
        *(undefined2 *)(param_1 + 0x168) = 2;
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      fVar8 = ((*(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x140)) *
               *(float *)(param_1 + 0x14c) -
              *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x150)) * DAT_180bbae00 +
              *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x140) = fVar8 * DAT_180bbae00 + *(float *)(param_1 + 0x140);
      *(float *)(param_1 + 0x144) = fVar8;
      FUN_1802ec7e0(param_1 + 0x154);
      if (((*(char *)(param_1 + 0x170) == '\0') &&
          (ABS(*(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x140)) < 0.001)) &&
         (ABS(*(float *)(param_1 + 0x144)) < 0.001)) {
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined1 *)(param_1 + 0x170) = 1;
      }
      if (((*(char *)(param_1 + 0x171) == '\0') || (*(char *)(param_1 + 0x169) == '\0')) ||
         (0.01 < *(float *)(param_1 + 0x15c))) {
        return 1;
      }
    }
  }
  return 0;
}



