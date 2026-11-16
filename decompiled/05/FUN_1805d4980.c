// FUN_1805d4980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d4980 */

undefined1 FUN_1805d4980(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((byte)(*(char *)(param_1 + 0xc) - 1U) < 0xfe) {
      return 1;
    }
    if (((-1 < param_2) && (param_2 < param_4)) &&
       (((-1 < param_3 + -1 &&
         ((param_3 + -1 < param_5 &&
          (iVar3 = 1, *(char *)(param_1 + (longlong)param_4 * -0x10 + 0xc) == '\0')))) ||
        ((-1 < param_3 + 1 &&
         ((param_3 + 1 < param_5 &&
          (iVar3 = iVar3 + 1, *(char *)(param_1 + 0xc + (longlong)param_4 * 0x10) == '\0')))))))) {
      return 1;
    }
    iVar1 = param_2 + -1;
    if ((((((iVar1 < 0) || (param_4 <= iVar1)) || (param_3 < 0)) ||
         ((param_5 <= param_3 || (iVar3 = iVar3 + 1, *(char *)(param_1 + -4) != '\0')))) &&
        ((((param_2 = param_2 + 1, param_2 < 0 || ((param_4 <= param_2 || (param_3 < 0)))) ||
          (param_5 <= param_3)) || (iVar3 = iVar3 + 1, *(char *)(param_1 + 0x1c) != '\0')))) &&
       (((((((iVar1 < 0 || (param_4 <= iVar1)) || (param_3 + -1 < 0)) ||
           ((param_5 <= param_3 + -1 ||
            (iVar3 = iVar3 + 1, *(char *)(param_1 + (longlong)param_4 * -0x10 + -4) != '\0')))) &&
          (((param_2 < 0 || ((param_4 <= param_2 || (param_3 + -1 < 0)))) ||
           ((param_5 <= param_3 + -1 ||
            (iVar3 = iVar3 + 1, *(char *)(param_1 + (longlong)param_4 * -0x10 + 0x1c) != '\0'))))))
         && ((((iVar1 < 0 || (param_4 <= iVar1)) || (param_3 + 1 < 0)) ||
             ((param_5 <= param_3 + 1 ||
              (iVar3 = iVar3 + 1, *(char *)(param_1 + -4 + (longlong)param_4 * 0x10) != '\0'))))))
        && (((param_2 < 0 || ((param_4 <= param_2 || (param_3 + 1 < 0)))) ||
            ((param_5 <= param_3 + 1 ||
             (iVar3 = iVar3 + 1, *(char *)(param_1 + 0x1c + (longlong)param_4 * 0x10) != '\0')))))))
       ) {
      uVar2 = 0;
      if (iVar3 != 8) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



