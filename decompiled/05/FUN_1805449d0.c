// FUN_1805449d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805449d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1805449d0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  DAT_1808e68b0 = *param_2;
  DAT_1808e68b1 = param_2[1];
  DAT_1808e68b4 = *(undefined4 *)(param_2 + 4);
  puVar1 = (undefined8 *)(param_2 + 8);
  if (puVar1 != &DAT_1808e68b8) {
    FUN_1801b3410();
    DAT_1808e68b8 = *puVar1;
    DAT_1808e68c0 = *(undefined8 *)(param_2 + 0x10);
    _DAT_1808e68c8 = *(undefined8 *)(param_2 + 0x18);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x20);
  if (puVar1 != &DAT_1808e68d0) {
    FUN_1801b3620();
    DAT_1808e68d0 = *puVar1;
    DAT_1808e68d8 = *(undefined8 *)(param_2 + 0x28);
    _DAT_1808e68e0 = *(undefined8 *)(param_2 + 0x30);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  _DAT_1808e68e8 = *(undefined8 *)(param_2 + 0x38);
  _DAT_1808e68f0 = *(undefined8 *)(param_2 + 0x40);
  _DAT_1808e68f8 = *(undefined8 *)(param_2 + 0x48);
  _DAT_1808e6900 = *(undefined8 *)(param_2 + 0x50);
  _DAT_1808e6908 = *(undefined4 *)(param_2 + 0x58);
  if (param_2[0x88] == '\0') {
    if (DAT_1808e6938 != '\0') {
      FUN_180159650(&DAT_1808e6920);
      DAT_1808e6938 = '\0';
    }
  }
  else {
    FUN_18056c240(&DAT_1808e6910);
  }
  return &DAT_1808e68b0;
}



