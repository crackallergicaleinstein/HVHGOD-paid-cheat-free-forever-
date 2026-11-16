// FUN_1805f5980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5980 */

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1808d5f00) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_1805f5d70(_StackCookie);
  return;
}



