// FUN_180384040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180384040 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180384040(void)

{
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c6fba0 != 0) {
    (*(code *)DAT_180c6fba0)();
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return;
}



