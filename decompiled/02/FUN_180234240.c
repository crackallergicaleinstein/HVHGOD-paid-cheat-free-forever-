// FUN_180234240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180234240 */

ulonglong FUN_180234240(float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_38 [12];
  
  piVar1 = (int *)thunk_FUN_180624430();
  if ((short)piVar1 < 1) {
    local_38[2] = param_2;
    local_38[4] = 100;
    local_38[0] = 0;
    piVar2 = local_38;
    if (-1 < param_2) {
      piVar2 = local_38 + 2;
    }
    piVar1 = local_38 + 4;
    if (param_2 < 0x65) {
      piVar1 = piVar2;
    }
    if ((float)*piVar1 / 100.0 <= param_1) {
      return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



