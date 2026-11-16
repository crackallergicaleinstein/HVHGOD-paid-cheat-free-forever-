// FUN_1801cb530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cb530 */

undefined1 FUN_1801cb530(longlong param_1)

{
  undefined1 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  local_18 = param_1 + 0x60;
  if (0xf < *(ulonglong *)(param_1 + 0x78)) {
    local_18 = *(longlong *)(param_1 + 0x60);
  }
  local_10 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = FUN_18003b110(*(undefined8 *)(param_1 + 0x80),&local_18);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  return uVar1;
}



