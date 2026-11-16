// FUN_1801795a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801795a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_1801795a0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  return uVar1 & 0xffffffffffffff00;
}



