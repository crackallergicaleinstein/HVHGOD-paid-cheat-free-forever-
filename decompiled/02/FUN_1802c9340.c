// FUN_1802c9340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9340 */

float * FUN_1802c9340(float *param_1,int param_2,int param_3,float param_4,float param_5,
                     float param_6,float param_7)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [64];
  
  fVar3 = 16777215.0;
  uVar2 = param_3 * 0x2c9277b5 + param_2;
  uVar1 = (uVar2 >> 0x10 ^ uVar2) * 0x7feb352d;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
  auVar6 = ZEXT464((uint)(((float)((uVar1 >> 0x10 ^ uVar1) & 0xffffff) / 16777215.0) * 6.2831855));
  uVar1 = (uVar2 + 1 >> 0x10 ^ uVar2 + 1) * 0x7feb352d;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
  fVar5 = ((float)((uVar1 ^ uVar1 >> 0x10) & 0xffffff) / 16777215.0) * 0.85 + 0.15;
  fVar4 = 1.0 - fVar5 * fVar5;
  if (fVar4 < 0.0) {
    fVar3 = 16777215.0;
    fVar4 = (float)FUN_18061e150();
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  uVar1 = (uVar2 + 2 >> 0x10 ^ uVar2 + 2) * 0x7feb352d;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
  param_5 = (((float)((uVar1 ^ uVar1 >> 0x10) & 0xffffff) / fVar3) * 0.65 + 0.35) * param_5;
  fVar3 = (float)FUN_180637540(auVar6._0_8_);
  *param_1 = fVar3 * fVar4 * param_5 * param_4 * param_6;
  fVar3 = (float)FUN_180638e00(auVar6._0_8_);
  param_1[1] = fVar3 * fVar4 * param_5 * param_4 * param_6;
  param_1[2] = param_5 * fVar5 * param_4 - param_7 * 0.5 * param_4 * param_4;
  return param_1;
}



