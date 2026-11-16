// FUN_18003b030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003b030 */

undefined8 FUN_18003b030(void)

{
  undefined8 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  uVar1 = DAT_180bacca0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  return uVar1;
}



