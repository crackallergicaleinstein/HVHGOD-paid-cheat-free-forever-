// FUN_1804511f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804511f0 */

float * FUN_1804511f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  
  fVar2 = *param_3 - *param_2;
  auVar6 = ZEXT464((uint)fVar2);
  auVar5 = ZEXT464((uint)(param_3[2] - param_2[2]));
  uVar4 = (ulonglong)(uint)(param_3[2] - param_2[2]);
  fVar1 = param_3[1] - param_2[1];
  auVar7 = ZEXT464((uint)fVar1);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2;
  uVar3 = 0;
  if (fVar2 != 0.0) {
    if (fVar2 < 0.0) {
      uVar3 = FUN_18061e150(fVar2);
      uVar4 = auVar5._0_8_;
    }
    else {
      uVar3 = (ulonglong)(uint)SQRT(fVar2);
    }
  }
  fVar2 = (float)FUN_180636c80(uVar4 ^ 0x8000000080000000,uVar3);
  *param_1 = fVar2 * 57.295776;
  fVar2 = (float)FUN_180636c80(auVar7._0_8_,auVar6._0_8_);
  param_1[1] = fVar2 * 57.295776;
  param_1[2] = 0.0;
  return param_1;
}



