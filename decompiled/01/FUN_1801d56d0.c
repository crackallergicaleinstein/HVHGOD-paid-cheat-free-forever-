// FUN_1801d56d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d56d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d56d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != (longlong *)0x0) {
        *plVar5 = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar4 = lVar3;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar4);
  }
  return;
}



