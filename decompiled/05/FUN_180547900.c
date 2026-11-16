// FUN_180547900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180547900 */

void FUN_180547900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_38 [4];
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  local_28 = (float)param_4;
  local_20 = (float)param_3;
  **(undefined1 **)(param_1 + 8) = 1;
  if (local_28 <= local_20) {
    fVar3 = 0.0;
  }
  else {
    local_18 = (float)param_2;
    local_38[1] = local_18 / (local_28 - local_20);
    pfVar2 = local_38;
    if (0.0 <= local_38[1]) {
      pfVar2 = local_38 + 1;
    }
    local_38[2] = 1.0;
    pfVar1 = local_38 + 2;
    if (local_38[1] <= 1.0) {
      pfVar1 = pfVar2;
    }
    local_38[0] = 0.0;
    fVar3 = *pfVar1;
  }
  fStack_24 = (float)((ulonglong)param_4 >> 0x20);
  fStack_1c = (float)((ulonglong)param_3 >> 0x20);
  **(float **)(param_1 + 0x10) = fVar3;
  if (fStack_1c < fStack_24) {
    fStack_14 = (float)((ulonglong)param_2 >> 0x20);
    local_38[1] = fStack_14 / (fStack_24 - fStack_1c);
    pfVar2 = local_38 + 2;
    if (0.0 <= local_38[1]) {
      pfVar2 = local_38 + 1;
    }
    local_38[0] = 1.0;
    pfVar1 = local_38;
    if (local_38[1] <= 1.0) {
      pfVar1 = pfVar2;
    }
    local_38[2] = 0.0;
    **(float **)(param_1 + 0x18) = *pfVar1;
    return;
  }
  **(undefined4 **)(param_1 + 0x18) = 0;
  return;
}



