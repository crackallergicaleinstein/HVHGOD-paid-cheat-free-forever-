// FUN_18009a6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009a6d0 */

void FUN_18009a6d0(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_180b92fe0 + uVar1) = 0;
    *(undefined8 *)((longlong)&DAT_180b92fe8 + uVar1) = 0;
    *(undefined8 *)((longlong)&DAT_180b92ff0 + uVar1) = 0;
    *(undefined8 *)((longlong)&DAT_180b92ff8 + uVar1) = 0;
    *(undefined8 *)((longlong)&DAT_180b93000 + uVar1) = 0;
    *(undefined2 *)((longlong)&DAT_180b93008 + uVar1) = 0;
    *(undefined8 *)((longlong)&DAT_180b93010 + uVar1) = 0;
    *(undefined2 *)((longlong)&DAT_180b93018 + uVar1) = 0;
    uVar1 = uVar1 + 0x40;
  } while (uVar1 < 0x10000);
  return;
}



