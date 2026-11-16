// FUN_1805fd160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd160 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fd160(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x10) == -0x1f928c9d) && (*(int *)(param_1 + 0x28) == 4)) &&
     ((iVar1 = *(int *)(param_1 + 0x30), iVar1 == 0x19930520 ||
      ((iVar1 + 0xe66cfadfU < 2 || (iVar1 == 0x1994000)))))) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (*(int *)(lVar2 + 4) == 0) {
        if (((*(byte *)(*(int *)((longlong)*(int *)(lVar2 + 0xc) + 4 + lVar4) + lVar4) & 8) != 0) &&
           ((longlong *)*plVar3 != (longlong *)0x0)) {
          (**(code **)(*(longlong *)*plVar3 + 0x10))();
        }
      }
      else {
        FUN_1805fd08c(plVar3,*(int *)(lVar2 + 4) + lVar4);
      }
    }
  }
  return;
}



