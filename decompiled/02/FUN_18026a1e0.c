// FUN_18026a1e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a1e0 */

undefined8 FUN_18026a1e0(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD local_res20 [2];
  
  DVar1 = TlsAlloc();
  if (DVar1 == 0xffffffff) {
    return 0;
  }
  local_res20[0] = DVar1;
  iVar2 = FUN_1805f68d0(&DAT_1808d9bf0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d9c3c == 0x7fffffff) {
    DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1801bc660(&DAT_180b0b300,local_res20);
  FUN_1805f68fc(&DAT_1808d9bf0);
  DAT_1808e392c = DVar1;
  return 1;
}



