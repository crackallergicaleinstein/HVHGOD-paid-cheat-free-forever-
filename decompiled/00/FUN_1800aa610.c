// FUN_1800aa610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa610 */

undefined4 * FUN_1800aa610(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_2 + 0xc) = 0xf;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  return param_1;
}



