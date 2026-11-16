// FUN_18017c790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c790 */

int FUN_18017c790(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 == 0) || (uVar1 <= **(ulonglong **)(param_1 + 0x18))) ||
     ((param_2 != -1 &&
      (((char)param_2 != *(char *)(uVar1 - 1) && ((*(byte *)(param_1 + 0x70) & 2) != 0)))))) {
    return -1;
  }
  **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
  **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
  }
  return param_2;
}



