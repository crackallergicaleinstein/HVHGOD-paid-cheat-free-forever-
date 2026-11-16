// FUN_18022fdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022fdb0 */

undefined4 * FUN_18022fdb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_180150e80(param_1 + 2);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 8;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return param_1;
}



