// FUN_180439200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180439200 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180439200(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != (longlong *)0x0) {
        *plVar5 = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    lVar3 = *param_1;
    lVar4 = lVar3;
    if ((0xfff < (param_1[2] - lVar3 & 0xfffffffffffffff8U)) &&
       (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



