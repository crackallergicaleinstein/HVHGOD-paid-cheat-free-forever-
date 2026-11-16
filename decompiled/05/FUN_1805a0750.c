// FUN_1805a0750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a0750 */

void FUN_1805a0750(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1805a07c0(*(longlong *)(param_1 + 0x3e0) + 0x4f0);
    return;
  }
  (**(code **)*puVar1)(puVar1[1],param_2,&local_18);
  *param_3 = local_18;
  *param_4 = local_10;
  return;
}



