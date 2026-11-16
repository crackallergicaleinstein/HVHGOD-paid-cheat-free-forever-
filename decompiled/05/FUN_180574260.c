// FUN_180574260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180574260 */

void FUN_180574260(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_180573c80();
  if (*(longlong *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    return;
  }
  *(ulonglong *)(param_1 + 0xa0) =
       (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
  return;
}



