// FUN_18061fc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061fc10 */

void FUN_18061fc10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_1806160a0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (*(short *)(param_3 + 0x80) != 0) {
    FUN_18062035c(param_1,param_2,2,&DAT_1806b03c8,(short *)(param_3 + 0x80));
  }
  if (*(short *)(param_3 + 0x100) != 0) {
    FUN_18062035c(param_1,param_2,2,&DAT_1807bfe8c,(short *)(param_3 + 0x100));
  }
  return;
}



