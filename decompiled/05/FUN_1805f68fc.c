// FUN_1805f68fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f68fc */

undefined8 FUN_1805f68fc(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  }
  return 0;
}



