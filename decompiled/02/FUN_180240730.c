// FUN_180240730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180240730 */

ulonglong FUN_180240730(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int local_28 [8];
  
  piVar2 = (int *)FUN_1802404d0();
  if (((((char)piVar2 == '\0') || (piVar2 = (int *)thunk_FUN_180624430(param_3), 0 < (short)piVar2))
      || ((float)param_3 <= 0.0)) || (param_4 < 1)) goto switchD_180240849_caseD_1;
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 3) || (piVar2 = (int *)(ulonglong)(param_2 - 2U), 1 < param_2 - 2U)) ||
     ((float)param_3 < (float)param_4)) {
    local_28[1] = 3;
    local_28[0] = 0;
    piVar3 = local_28;
    if (-1 < iVar1) {
      piVar3 = (int *)(param_1 + 0x90);
    }
    piVar2 = local_28 + 1;
    if (iVar1 < 4) {
      piVar2 = piVar3;
    }
    if ((*piVar2 != 1) && (*piVar2 != 2)) {
      uVar4 = param_2 - 1;
      switch(uVar4) {
      case 0:
      case 7:
        piVar2 = (int *)0x9d;
        break;
      case 1:
        piVar2 = (int *)0x9e;
        break;
      case 2:
        piVar2 = (int *)0x9f;
        break;
      case 3:
      case 4:
        piVar2 = (int *)0xa0;
        break;
      case 5:
      case 6:
        piVar2 = (int *)0xa1;
        break;
      default:
        piVar2 = (int *)0x9c;
      }
      if (*(char *)(param_1 + (longlong)piVar2) == '\0') {
        if (uVar4 < 8) {
          piVar2 = (int *)(longlong)(int)uVar4;
          switch(uVar4) {
          case 0:
          case 7:
            piVar2 = (int *)(param_1 + 0x9d);
            if (piVar2 == (int *)(param_1 + 0xa2)) goto LAB_1802407ab;
            while ((char)*piVar2 == '\0') {
              piVar2 = (int *)((longlong)piVar2 + 1);
              if (piVar2 == (int *)(param_1 + 0xa2)) {
                return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
              }
            }
          }
        }
switchD_180240849_caseD_1:
        return (ulonglong)piVar2 & 0xffffffffffffff00;
      }
    }
  }
LAB_1802407ab:
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
}



