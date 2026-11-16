// FUN_18029b970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b970 */

ulonglong FUN_18029b970(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [8];
  int local_28 [10];
  
  local_res8[2] = param_1;
  local_res8[4] = 3;
  local_res8[0] = 0;
  piVar2 = local_res8;
  if (-1 < param_1) {
    piVar2 = local_res8 + 2;
  }
  piVar1 = local_res8 + 4;
  if (param_1 < 4) {
    piVar1 = piVar2;
  }
  if (*piVar1 != 0) {
    local_28[0] = 0;
    local_28[2] = param_1;
    local_28[4] = 3;
    piVar2 = local_28;
    if (-1 < param_1) {
      piVar2 = local_28 + 2;
    }
    piVar1 = local_28 + 4;
    if (param_1 < 4) {
      piVar1 = piVar2;
    }
    if (*piVar1 != 3) {
      return (ulonglong)piVar1 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
}



