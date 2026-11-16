// FUN_1801ac600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ac600 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801ac600(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = param_1[1];
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x30) {
      plVar3 = *(longlong **)(lVar4 + 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    lVar4 = *param_1;
    lVar5 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x30) * 0x30)) &&
       (lVar5 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



