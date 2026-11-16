// FUN_1801ad010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad010 */

void FUN_1801ad010(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      FUN_1805fb444(*puVar4);
    }
    lVar2 = *param_1;
    lVar3 = lVar2;
    if ((0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff8U)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



