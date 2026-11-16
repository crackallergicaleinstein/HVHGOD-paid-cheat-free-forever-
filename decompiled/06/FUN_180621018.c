// FUN_180621018 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621018 */

uint FUN_180621018(undefined8 param_1,undefined8 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((*(int *)(param_2 + 2) != 0) || (param_2[1] != 4)) ||
     (in_EAX = FUN_1806210a8(*param_2), (char)in_EAX == '\0')) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = FUN_18062f880();
  if ((iVar1 != 0) || (iVar1 = FUN_18062f880(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



