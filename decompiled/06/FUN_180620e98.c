// FUN_180620e98 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180620e98 */

undefined8 FUN_180620e98(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(param_2 + 2) != 0) || (1 < param_2[1] - 2)) ||
     (cVar1 = FUN_1806210a8(*param_2), cVar1 == '\0')) {
    return 0;
  }
  iVar2 = FUN_18062f9c0();
  if ((iVar2 != 0) || (iVar2 = FUN_18062f9c0(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



