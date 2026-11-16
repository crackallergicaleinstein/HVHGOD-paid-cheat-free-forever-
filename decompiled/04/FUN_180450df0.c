// FUN_180450df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450df0 */

ulonglong FUN_180450df0(float *param_1)

{
  float fVar1;
  ulonglong uVar2;
  
  fVar1 = param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar1 == 0.0) {
    return 0;
  }
  if (fVar1 < 0.0) {
    uVar2 = FUN_18061e150(fVar1);
    return uVar2;
  }
  return (ulonglong)(uint)SQRT(fVar1);
}



