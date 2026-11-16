// FUN_1801bc880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bc880 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bc880(void)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == 0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = FUN_180451750(&local_18);
  }
  lVar1 = (**(code **)(**(longlong **)DAT_180c7df28 + 8))();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  *(longlong *)((lVar1 + 0x27U & 0xffffffffffffffe0) - 8) = lVar1;
  return;
}



