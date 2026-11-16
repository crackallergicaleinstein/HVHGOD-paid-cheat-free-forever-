// FUN_18043ec00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ec00 */

undefined4 * FUN_18043ec00(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_1803d24b0(param_1 + 2);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}



