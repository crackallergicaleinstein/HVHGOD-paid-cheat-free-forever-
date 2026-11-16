// FUN_1803b0e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0e70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_1803b0e70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180b0da70 == '\0') {
LAB_1803b0ead:
    if (DAT_180c719d0 != 0) {
      uVar2 = (*(code *)DAT_180c719d0)(param_1,param_2,param_3,param_4,param_5,param_6);
      goto LAB_1803b0ee5;
    }
  }
  else {
    pcVar1 = (char *)FUN_1803b0a60();
    if (*pcVar1 != '\0') goto LAB_1803b0ead;
  }
  uVar2 = 0;
LAB_1803b0ee5:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return uVar2;
}



