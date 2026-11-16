// FUN_180606ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606ea0 */

void FUN_180606ea0(void)

{
  undefined *puVar1;
  
  if (DAT_1808d70d0 != -1) {
    puVar1 = (undefined *)__vcrt_FlsGetValue();
    __vcrt_FlsSetValue(DAT_1808d70d0,0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180bb1b40)) {
      thunk_FUN_180621380(puVar1);
    }
  }
  return;
}



