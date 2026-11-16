// FUN_18061f6b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f6b4 */

void FUN_18061f6b4(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_1808d72d0 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1808d72d0);
  }
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
LAB_18061f6f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pvVar1 == (PVOID)0x0) {
    lVar2 = FUN_18061f528();
    if (lVar2 == 0) goto LAB_18061f6f0;
  }
  return;
}



