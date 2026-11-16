// FUN_1802ec7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ec7e0 */

void FUN_1802ec7e0(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)((longlong)param_1 + 0x15) == '\0') {
    fVar2 = DAT_180bbae00 + param_1[4];
    param_1[4] = fVar2;
    if (param_1[3] <= fVar2) {
      param_1[2] = param_1[1];
      *(undefined1 *)((longlong)param_1 + 0x15) = 1;
      return;
    }
    cVar1 = *(char *)(param_1 + 5);
    fVar2 = fVar2 / param_1[3];
    if (cVar1 == '\x01') {
      fVar2 = fVar2 * fVar2;
    }
    else if (cVar1 == '\x02') {
      fVar2 = 1.0 - (1.0 - fVar2) * (1.0 - fVar2);
    }
    else if (cVar1 == '\x03') {
      fVar3 = 0.5;
      if (0.5 <= fVar2) {
        fVar2 = (float)FUN_180637bd0(2.0 - (fVar2 + fVar2));
        fVar2 = 1.0 - fVar2 * fVar3;
      }
      else {
        fVar2 = (fVar2 + fVar2) * fVar2;
      }
    }
    param_1[2] = (param_1[1] - *param_1) * fVar2 + *param_1;
  }
  return;
}



