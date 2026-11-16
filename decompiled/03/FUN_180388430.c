// FUN_180388430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180388430 */

ulonglong FUN_180388430(undefined8 param_1,char param_2)

{
  ulonglong in_RAX;
  bool bVar1;
  
  if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd9 == '\0')) && ((byte)(param_2 - 1U) < 2)) {
    LOCK();
    bVar1 = param_2 == DAT_1808d9bd8;
    if (bVar1) {
      DAT_1808d9bd8 = '\x03';
    }
    in_RAX = 0;
    UNLOCK();
    if ((bVar1) && (in_RAX = 0, DAT_1808d9bd8 == '\x03')) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



