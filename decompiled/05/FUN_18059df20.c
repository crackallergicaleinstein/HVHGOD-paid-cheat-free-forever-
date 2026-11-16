// FUN_18059df20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059df20 */

void FUN_18059df20(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))();
    }
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      FUN_18059fd20();
      FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))(param_1);
    }
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}



