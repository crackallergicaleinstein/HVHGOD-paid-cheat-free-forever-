// FUN_180528620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180528620 */

undefined4 * FUN_180528620(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  param_1[1] = param_2[1];
  if ((undefined8 *)(param_1 + 2) != puVar1) {
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180113930(param_1 + 2,puVar1,*(undefined8 *)(param_2 + 6));
  }
  plVar2 = (longlong *)(param_2 + 10);
  if ((longlong *)(param_1 + 10) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180113930(param_1 + 10,plVar2,*(undefined8 *)(param_2 + 0xe));
  }
  plVar2 = (longlong *)(param_2 + 0x12);
  if ((longlong *)(param_1 + 0x12) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180113930(param_1 + 0x12,plVar2,*(undefined8 *)(param_2 + 0x16));
  }
  return param_1;
}



