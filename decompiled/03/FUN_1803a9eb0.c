// FUN_1803a9eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9eb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803a9eb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (((((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) &&
      (cVar1 = FUN_180373460(param_1,param_1,param_2), cVar1 != '\0')) ||
     ((code *)DAT_180c704b0 == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)DAT_180c704b0)(param_1,param_2);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return uVar2;
}



