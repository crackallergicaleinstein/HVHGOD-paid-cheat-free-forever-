// FUN_180387920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387920 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180387920(undefined8 param_1,byte param_2)

{
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  DAT_180ccaa44 = (uint)param_2;
  if (DAT_180c70a80 != 0) {
    if (DAT_180ccaa36 != '\0') {
      param_2 = 0;
    }
    (*(code *)DAT_180c70a80)(param_1,param_2);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return;
}



