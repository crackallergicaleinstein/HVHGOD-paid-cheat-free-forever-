// FUN_18031ddb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031ddb0 */

undefined1 * FUN_18031ddb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  puVar1 = (undefined8 *)(param_2 + 0x20);
  param_1[0x18] = param_2[0x18];
  if ((undefined8 *)(param_1 + 0x20) != puVar1) {
    if (0xf < *(ulonglong *)(param_2 + 0x38)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180113930(param_1 + 0x20,puVar1,*(undefined8 *)(param_2 + 0x30));
  }
  return param_1;
}



