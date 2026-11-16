// FUN_1803ad0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ad0d0 */

void FUN_1803ad0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  FUN_1803ad110(&DAT_180c70380,1,param_1,param_2,param_3,param_4);
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return;
}



