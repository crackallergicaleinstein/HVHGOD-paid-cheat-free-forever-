// FUN_180211db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211db0 */

void FUN_180211db0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x20);
  local_10 = *(longlong *)(param_1 + 0x28) - local_18;
  cVar1 = FUN_18020d300(*(undefined8 *)(param_1 + 8),&local_18,*(undefined8 *)(param_1 + 0x10));
  uVar2 = 4;
  if (cVar1 != '\0') {
    uVar2 = 2;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar2;
  return;
}



