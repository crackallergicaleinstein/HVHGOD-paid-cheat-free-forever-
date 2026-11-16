// FUN_1801b6980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6980 */

void FUN_1801b6980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    puVar1 = (undefined8 *)*puVar2;
    FUN_1800efed0(puVar2 + 0xd);
    FUN_1801bd3e0(puVar2 + 8);
    if (0x1f < (ulonglong)((longlong)puVar2 + (-8 - puVar2[-1]))) break;
    FUN_1804547d0();
    puVar2 = puVar1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



