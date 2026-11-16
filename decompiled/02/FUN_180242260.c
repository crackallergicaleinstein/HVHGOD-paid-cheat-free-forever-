// FUN_180242260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180242260 */

ulonglong FUN_180242260(float param_1,ulonglong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_2;
  if ((((uint)ABS(param_3) < 0x7f800000) && ((uint)ABS(param_1) < 0x7f800000)) &&
     ((uint)ABS(fVar2) < 0x7f800000)) {
    if (((0.0 < param_1) || (fVar2 < 0.0)) && ((param_1 < 0.0 || (0.0 < fVar2)))) {
      if (param_3 == 1.0) {
        return param_2;
      }
      fVar1 = param_3 * (fVar2 - param_1) + param_1;
      if (1.0 < param_3 == param_1 < fVar2) {
        if (fVar1 < fVar2) {
          return param_2;
        }
      }
      else if (fVar2 < fVar1) {
        return param_2;
      }
      return (ulonglong)(uint)fVar1;
    }
  }
  else {
    if ((0x7f800000 < (uint)ABS(param_1)) || (0x7f800000 < (uint)ABS(fVar2))) {
      return (ulonglong)(uint)(param_1 + fVar2 + param_3);
    }
    if (0x7f800000 < (uint)ABS(param_3)) {
      return (ulonglong)(uint)(param_3 + param_3);
    }
    if (0x7f7fffff < (uint)ABS(param_3)) {
      return (ulonglong)(uint)((fVar2 - param_1) * param_3);
    }
    if (param_3 < 0.0) {
      return (ulonglong)(uint)(param_1 - fVar2);
    }
    if (1.0 < param_3) {
      return (ulonglong)(uint)(fVar2 - param_1);
    }
  }
  return (ulonglong)(uint)((1.0 - param_3) * param_1 + fVar2 * param_3);
}



