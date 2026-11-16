// FUN_1805c88e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c88e0 */

undefined8 FUN_1805c88e0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(longlong *)(param_1 + 0x18) = param_2;
  bVar1 = *(byte *)(param_2 + 7);
  bVar2 = *(byte *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(uint *)(param_1 + 0x30) = (uint)(bVar1 >> 1) | (uint)bVar2 << 7;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 0;
}



