// FUN_180386560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180386560 */

float * FUN_180386560(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  
  fVar1 = *(float *)(param_1 + 0xc) * 0.017453292;
  auVar7 = ZEXT464((uint)fVar1);
  auVar8 = ZEXT464((uint)(*(float *)(param_1 + 0x10) * 0.017453292));
  auVar9 = ZEXT464((uint)(*(float *)(param_1 + 0x14) * 0.017453292));
  fVar1 = (float)FUN_180638e00(fVar1);
  fVar2 = (float)FUN_180637540(auVar7._0_8_);
  fVar3 = (float)FUN_180638e00(auVar8._0_8_);
  fVar4 = (float)FUN_180637540(auVar8._0_8_);
  fVar5 = (float)FUN_180638e00(auVar9._0_8_);
  fVar6 = (float)FUN_180637540(auVar9._0_8_);
  *param_2 = fVar4 * fVar2;
  param_2[2] = -fVar1;
  param_2[1] = fVar3 * fVar2;
  param_2[3] = fVar5 * fVar1 * fVar4 - fVar6 * fVar3;
  param_2[4] = fVar5 * fVar1 * fVar3 + fVar6 * fVar4;
  param_2[5] = fVar5 * fVar2;
  param_2[6] = fVar6 * fVar1 * fVar4 + fVar5 * fVar3;
  param_2[8] = fVar6 * fVar2;
  param_2[7] = fVar6 * fVar1 * fVar3 - fVar5 * fVar4;
  return param_2;
}



