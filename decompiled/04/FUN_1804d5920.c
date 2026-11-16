// FUN_1804d5920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d5920 */

void FUN_1804d5920(longlong param_1,int param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  
  if (((param_5 != param_7) && (fVar2 = *(float *)(param_3 + 0x1c), param_5 <= fVar2)) &&
     (fVar1 = *(float *)(param_3 + 0x18), fVar1 <= param_7)) {
    if (param_5 < fVar1) {
      param_4 = param_4 + ((fVar1 - param_5) * (param_6 - param_4)) / (param_7 - param_5);
      param_5 = fVar1;
    }
    if (fVar2 < param_7) {
      param_6 = param_6 + ((fVar2 - param_7) * (param_6 - param_4)) / (param_7 - param_5);
      param_7 = fVar2;
    }
    fVar2 = (float)param_2;
    if ((fVar2 < param_4) || (fVar2 < param_6)) {
      if ((param_4 < (float)(param_2 + 1)) || (param_6 < (float)(param_2 + 1))) {
        *(float *)(param_1 + (longlong)param_2 * 4) =
             (1.0 - ((param_4 - fVar2) + (param_6 - fVar2)) * 0.5) *
             (param_7 - param_5) * *(float *)(param_3 + 0x14) +
             *(float *)(param_1 + (longlong)param_2 * 4);
      }
    }
    else {
      *(float *)(param_1 + (longlong)param_2 * 4) =
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (longlong)param_2 * 4);
    }
  }
  return;
}



