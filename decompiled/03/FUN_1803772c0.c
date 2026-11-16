// FUN_1803772c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803772c0 */

void FUN_1803772c0(longlong *param_1)

{
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + 0x59) = 0;
  }
  if ((char)param_1[4] != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[3]);
  }
  if ((char)param_1[2] == '\0') {
    return;
  }
  FUN_1805f68fc(param_1[1]);
  return;
}



