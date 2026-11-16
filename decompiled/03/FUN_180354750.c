// FUN_180354750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354750 */

undefined8
FUN_180354750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  short sVar2;
  undefined1 auVar3 [64];
  float fVar4;
  float fVar5;
  
  sVar2 = thunk_FUN_180624430(param_2);
  fVar5 = (float)param_2;
  if ((sVar2 < 1) && (auVar3 = ZEXT864(0), 0.0 < fVar5)) {
    sVar2 = thunk_FUN_180624430(param_3);
    fVar4 = (float)param_3;
    if ((sVar2 < 1) &&
       (((auVar3._0_4_ <= fVar4 && (sVar2 = thunk_FUN_180624430(param_4), sVar2 < 1)) &&
        (auVar3._0_4_ < (float)param_4)))) {
      auVar1 = vmaxss_avx(ZEXT416((uint)(fVar5 - fVar4 * (float)param_4)),auVar3._0_16_);
      return auVar1._0_8_;
    }
  }
  return param_1;
}



