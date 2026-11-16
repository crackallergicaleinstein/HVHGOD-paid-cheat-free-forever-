// FUN_1801958e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801958e0 */

void FUN_1801958e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8U)) &&
       (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar4);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    FUN_1801bcc10(puVar2 + 3);
    FUN_1804547d0(puVar2,0x30);
    puVar2 = puVar3;
  }
  FUN_1804547d0(*(undefined8 *)(param_1 + 8),0x30);
  return;
}



