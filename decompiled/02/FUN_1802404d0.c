// FUN_1802404d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802404d0 */

ulonglong FUN_1802404d0(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_18 [6];
  
  switch(param_2) {
  case 1:
  case 8:
    iVar4 = 0;
    break;
  case 2:
    iVar4 = 1;
    break;
  case 3:
    iVar4 = 2;
    break;
  case 4:
  case 5:
    iVar4 = 3;
    break;
  case 6:
  case 7:
    iVar4 = 4;
    break;
  default:
    iVar4 = -1;
  }
  local_18[1] = 3;
  iVar1 = *(int *)(param_1 + 0x90);
  local_18[0] = 0;
  piVar3 = local_18;
  if (-1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x90);
  }
  piVar2 = local_18 + 1;
  if (iVar1 < 4) {
    piVar2 = piVar3;
  }
  iVar1 = *piVar2;
  if (iVar4 < 0) {
LAB_1802405c4:
    return (ulonglong)piVar2 & 0xffffffffffffff00;
  }
  if (iVar1 == 1) {
    return CONCAT71((int7)((ulonglong)piVar2 >> 8),param_2 == 1);
  }
  if (iVar1 == 2) {
    return (ulonglong)CONCAT31((int3)(param_2 - 2U >> 8),param_2 - 2U < 2);
  }
  if (((iVar1 != 3) || (piVar2 = (int *)(ulonglong)(param_2 - 2U), 1 < param_2 - 2U)) &&
     (piVar2 = (int *)(longlong)iVar4, *(char *)((longlong)piVar2 + param_1 + 0x9d) == '\0')) {
    if (iVar4 != 0) goto LAB_1802405c4;
    for (piVar2 = (int *)(param_1 + 0x9d); piVar2 != (int *)(param_1 + 0xa2);
        piVar2 = (int *)((longlong)piVar2 + 1)) {
      if ((char)*piVar2 != '\0') goto LAB_1802405c4;
    }
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
}



