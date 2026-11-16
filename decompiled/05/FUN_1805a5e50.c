// FUN_1805a5e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5e50 */

void FUN_1805a5e50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x120);
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}



