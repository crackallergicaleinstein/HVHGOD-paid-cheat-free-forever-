// FUN_1805f3310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3310 */

undefined8 FUN_1805f3310(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805f46d0(param_1 + 0x5448);
  if ((*(int *)(param_1 + 0x5454) != 0) &&
     (*(int *)(param_1 + 0x54d0) != *(int *)(param_1 + 0x5454))) {
    return 0xffffffffffffffe0;
  }
  if (*(int *)(param_1 + 0x5458) != 0) {
    FUN_1805e4150(param_1 + 0x5470,0);
  }
  return uVar1;
}



