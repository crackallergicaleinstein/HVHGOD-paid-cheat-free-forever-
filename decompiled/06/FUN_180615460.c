// FUN_180615460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615460 */

float FUN_180615460(float param_1)

{
  short sVar1;
  float fVar2;
  
  sVar1 = FUN_180624430();
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      if ((int)param_1 < 0) {
        param_1 = -1.0;
      }
    }
    else if (sVar1 != 2) {
      if ((-0.6931472 < param_1) && (param_1 < 0.4054651)) {
        return ((((param_1 * 0.0024490478 + 0.030527467) * param_1 + 0.15380266) * param_1 +
                0.94831777) / ((param_1 * 0.03265278 - 0.32035613) * param_1 + 0.94831777)) *
               param_1;
      }
      fVar2 = (float)FUN_180627ae0(param_1);
      return fVar2 - 1.0;
    }
  }
  return param_1;
}



