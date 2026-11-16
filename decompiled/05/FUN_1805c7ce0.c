// FUN_1805c7ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7ce0 */

int * FUN_1805c7ce0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  
  switch(param_2) {
  case 0:
    return (int *)(param_1 + 0x100);
  case 1:
    return (int *)(param_1 + 0x170);
  case 2:
    piVar1 = (int *)0x0;
    if (*(short *)(param_1 + 0x208) != -1) {
      piVar1 = (int *)(param_1 + 0x208);
    }
    break;
  case 3:
    return (int *)(param_1 + 0x138);
  case 4:
    piVar1 = (int *)(param_1 + 0x198);
    if (*(char *)(param_1 + 400) == '\0') {
      piVar1 = (int *)0x0;
    }
    return piVar1;
  case 5:
    return (int *)(param_1 + 0x270);
  case 6:
    piVar1 = (int *)(param_1 + 0x310);
    if (*piVar1 == 0) {
      piVar1 = (int *)0x0;
    }
    return piVar1;
  default:
    return (int *)0x0;
  }
  return piVar1;
}



