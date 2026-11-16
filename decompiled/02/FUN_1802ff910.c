// FUN_1802ff910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff910 */

void FUN_1802ff910(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [64];
  
  auVar5 = ZEXT464((uint)(param_3 * 0.017453292));
  fVar1 = (float)FUN_180637540(param_3 * 0.017453292);
  fVar2 = (float)FUN_180638e00(auVar5._0_8_);
  fVar3 = (float)FUN_1806156a0(param_6,param_8);
  if (0.0 < fVar3 - (fVar2 * *param_2 + fVar1 * *param_1)) {
    fVar4 = (float)FUN_1806156a0(param_6 * param_7 * param_5 * param_4);
    fVar3 = *param_1;
    *param_2 = fVar4 * fVar2 + *param_2;
    *param_1 = fVar4 * fVar1 + fVar3;
  }
  return;
}



