// FUN_180636840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636840 */

float FUN_180636840(float param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  uVar2 = (uint)param_1 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(param_1)) {
    fVar5 = (float)FUN_1806226c0();
    return fVar5;
  }
  if (uVar2 < 0x65) {
    FUN_1806281c0(0x20);
    return 1.5707964;
  }
  if (uVar2 < 0x7f) {
    fVar3 = param_1;
    if ((int)param_1 < 0) {
      fVar3 = -param_1;
    }
    if (uVar2 < 0x7e) {
      fVar4 = fVar3 * fVar3;
    }
    else {
      fVar4 = (1.0 - fVar3) * 0.5;
      fVar5 = SQRT(fVar4);
      fVar3 = fVar5;
    }
    fVar6 = ((((-0.013381929 - fVar4 * 0.0039613745) * fVar4 - 0.05652987) * fVar4 + 0.1841616) *
            fVar4) / (1.1049696 - fVar4 * 0.8364113);
    if (uVar2 < 0x7e) {
      return 1.5707964 - (param_1 - (6.123234e-17 - fVar6 * param_1));
    }
    if ((int)param_1 < 0) {
      fVar5 = (fVar3 * fVar6 - 6.123234e-17) + fVar5;
      return 3.1415927 - (fVar5 + fVar5);
    }
    fVar1 = (float)((uint)fVar5 & 0xffff0000);
    fVar5 = (fVar4 - fVar1 * fVar1) / (fVar1 + fVar5);
    return (fVar3 + fVar3) * fVar6 + fVar5 + fVar5 + fVar1 + fVar1;
  }
  if (param_1 == 1.0) {
    return 0.0;
  }
  if (param_1 == -1.0) {
    FUN_1806281c0(0x20);
    return 3.1415927;
  }
  fVar5 = (float)FUN_180622560("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar5;
}



