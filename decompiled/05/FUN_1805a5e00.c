// FUN_1805a5e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5e00 */

undefined8 FUN_1805a5e00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  FUN_1805743a0();
  return 0;
}



