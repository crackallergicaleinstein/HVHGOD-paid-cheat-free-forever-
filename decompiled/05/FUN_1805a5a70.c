// FUN_1805a5a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5a70 */

void FUN_1805a5a70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x208));
    puVar2 = *(undefined8 **)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar2;
      FUN_18057abd0(uVar1);
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



