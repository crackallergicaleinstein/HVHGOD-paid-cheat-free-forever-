// FUN_1804b6f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b6f10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804b6f10(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x27c0);
  iVar4 = 0;
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x27c8);
      if (*(int *)(lVar2 + 4 + lVar1) == param_2) {
        (**(code **)(lVar2 + 0x10 + lVar1))(param_1,(longlong)iVar4 * 0x20 + lVar1);
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



