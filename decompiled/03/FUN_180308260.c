// FUN_180308260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308260 */

float * FUN_180308260(float *param_1,float param_2,float param_3,float param_4)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 extraout_var [56];
  float fVar3;
  undefined1 auVar4 [64];
  
  fVar3 = param_2 * param_2 + param_3 * param_3 + param_4 * param_4;
  if (fVar3 < 0.0) {
    auVar4._0_8_ = FUN_18061e150(fVar3);
    auVar4._8_56_ = extraout_var;
    auVar2 = auVar4._0_16_;
  }
  else {
    auVar2 = ZEXT416((uint)SQRT(fVar3));
  }
  auVar4 = ZEXT1664(auVar2);
  sVar1 = thunk_FUN_180624430(auVar2._0_8_);
  if ((0 < sVar1) || (fVar3 = auVar4._0_4_, fVar3 < 1e-06)) {
    param_1[2] = 1.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
  }
  else {
    *param_1 = param_2 / fVar3;
    param_1[2] = param_4 / fVar3;
    param_1[1] = param_3 / fVar3;
  }
  return param_1;
}



