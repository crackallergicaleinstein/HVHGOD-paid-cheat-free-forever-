// FUN_18060ab3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060ab3c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18060ab3c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18061f698();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



