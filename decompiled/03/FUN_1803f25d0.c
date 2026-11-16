// FUN_1803f25d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f25d0 */

void FUN_1803f25d0(longlong param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  
  iVar1 = FUN_1805f68d0(param_1 + 0x30);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x7c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x7c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 1;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x10) = 0;
  UNLOCK();
  local_18 = (undefined1  [16])0x0;
  FUN_1803c9920(param_1 + 0x400,local_18);
  DAT_180c70e22 = 1;
  FUN_1805f68fc(param_1 + 0x30);
  return;
}



