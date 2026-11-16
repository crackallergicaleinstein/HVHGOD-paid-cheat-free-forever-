// FUN_1806069b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806069b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806069b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_180606998();
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



