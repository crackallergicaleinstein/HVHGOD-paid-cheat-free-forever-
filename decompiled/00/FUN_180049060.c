// FUN_180049060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180049060 */

void FUN_180049060(undefined8 *param_1)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar3 = param_1[1];
    uVar4 = uVar1 + 1;
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((lVar3 + -8) - *(longlong *)(lVar3 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar1 + 0x28;
      lVar3 = *(longlong *)(lVar3 + -8);
    }
    FUN_1804547d0(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_1804547d0(piVar2,0x20);
    }
  }
  FUN_1804547d0(param_1,0x28);
  return;
}



