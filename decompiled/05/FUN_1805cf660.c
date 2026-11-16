// FUN_1805cf660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cf660 */

undefined8 FUN_1805cf660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x15c) = 0;
  *(undefined4 *)(lVar1 + 0x164) = 0;
  *(undefined4 *)(lVar1 + 0x158) = 0xffffffeb;
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}



