// FUN_180354ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354ae0 */

undefined2 FUN_180354ae0(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  short sVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_14;
  
  uVar1 = *param_1;
  sVar3 = thunk_FUN_180624430(uVar1);
  if (sVar3 < 1) {
    uStack_14 = (undefined4)(uVar1 >> 0x20);
    sVar3 = thunk_FUN_180624430(uStack_14);
    if (sVar3 < 1) {
      sVar3 = thunk_FUN_180624430((int)param_1[1]);
      if (((sVar3 < 1) && (0.0 < *(float *)(param_1 + 1))) && (*(float *)(param_1 + 1) < 0.9999)) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *param_1;
        auVar2 = vshufps_avx(auVar5,auVar5,0x55);
        auVar5 = vshufps_avx(auVar5,auVar5,0x55);
        fVar4 = (float)*param_1;
        if (ABS((auVar2._0_4_ * auVar5._0_4_ + fVar4 * fVar4 +
                *(float *)(param_1 + 1) * *(float *)(param_1 + 1)) - 1.0) < 0.01) {
          return 1;
        }
      }
    }
  }
  return 0;
}



