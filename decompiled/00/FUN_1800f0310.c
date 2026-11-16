// FUN_1800f0310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f0310 */

undefined4 * FUN_1800f0310(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_180150e80(param_1 + 2);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}



