// FUN_18041b730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041b730 */

void FUN_18041b730(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_180bb2750;
  do {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 1));
    if ((HANDLE)*puVar1 != (HANDLE)0x0) {
      FlushFileBuffers((HANDLE)*puVar1);
      CloseHandle((HANDLE)*puVar1);
      *puVar1 = 0;
    }
    *(undefined2 *)(puVar1 + 0x43) = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 1));
    puVar1 = puVar1 + 0x86;
  } while (puVar1 != (undefined8 *)&DAT_180bb8370);
  return;
}



