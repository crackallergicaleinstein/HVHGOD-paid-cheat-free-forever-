// FUN_180636a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636a80 */

undefined8 FUN_180636a80(undefined8 param_1)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar5 = 0.0;
  uVar1 = (uint)fVar2 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(fVar2)) {
    uVar3 = FUN_1806226c0();
    return uVar3;
  }
  if (uVar1 < 0x71) {
    FUN_1806281c0(0x20);
    return param_1;
  }
  if (uVar1 < 0x7f) {
    fVar7 = fVar2;
    if ((int)fVar2 < 0) {
      fVar7 = -fVar2;
      uVar8 = uVar8 ^ 0x80000000;
    }
    if (uVar1 < 0x7e) {
      fVar4 = fVar7 * fVar7;
    }
    else {
      fVar4 = (1.0 - fVar7) * 0.5;
      fVar5 = SQRT(fVar4);
      uVar8 = 0;
      fVar7 = fVar5;
    }
    fVar6 = ((((-0.013381929 - fVar4 * 0.0039613745) * fVar4 - 0.05652987) * fVar4 + 0.1841616) *
            fVar4) / (1.1049696 - fVar4 * 0.8364113);
    if (uVar1 < 0x7e) {
      fVar7 = fVar7 * fVar6 + fVar7;
    }
    else {
      fVar7 = (float)((uint)fVar5 & 0xffff0000);
      fVar4 = (fVar4 - fVar7 * fVar7) / (fVar7 + fVar5);
      uVar8 = 0;
      fVar7 = 0.7853981 -
              (((fVar5 + fVar5) * fVar6 - (7.5497894e-08 - (fVar4 + fVar4))) -
              (0.7853981 - (fVar7 + fVar7)));
    }
    if ((int)fVar2 < 0) {
      fVar7 = -fVar7;
      uVar8 = uVar8 ^ 0x80000000;
    }
    return CONCAT44(uVar8,fVar7);
  }
  if (fVar2 == 1.0) {
    FUN_1806281c0(0x20);
    return 0x3fc90fdb;
  }
  if (fVar2 == -1.0) {
    FUN_1806281c0(0x20);
    return 0xbfc90fdb;
  }
  uVar3 = FUN_180622560("asinf",0xe,0xffc00000,1,8,0x21,fVar2,0,1);
  return uVar3;
}



