// FUN_180234370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180234370 */

int * FUN_180234370(longlong param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_28 [10];
  
  local_28[1] = 1000;
  local_28[0] = 0;
  iVar1 = *(int *)(param_1 + 0x27c);
  piVar3 = local_28;
  if (-1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x27c);
  }
  piVar2 = local_28 + 1;
  if (iVar1 < 0x3e9) {
    piVar2 = piVar3;
  }
  local_28[4] = *piVar2;
  local_28[5] = *(int *)(param_1 + 0x294);
  if (local_28[5] < 0) {
    local_28[3] = 500;
    iVar1 = *(int *)(param_1 + 0x288);
    local_28[2] = 0;
    piVar3 = local_28 + 2;
    if (-1 < iVar1) {
      piVar3 = (int *)(param_1 + 0x288);
    }
    piVar2 = local_28 + 3;
    if (iVar1 < 0x1f5) {
      piVar2 = piVar3;
    }
    local_28[5] = *piVar2 + local_28[4];
  }
  local_28[6] = 1000;
  *param_2 = local_28[4];
  piVar3 = local_28 + 4;
  if (local_28[4] <= local_28[5]) {
    piVar3 = local_28 + 5;
  }
  piVar2 = local_28 + 6;
  if (local_28[5] < 0x3e9) {
    piVar2 = piVar3;
  }
  param_2[1] = *piVar2;
  return param_2;
}



