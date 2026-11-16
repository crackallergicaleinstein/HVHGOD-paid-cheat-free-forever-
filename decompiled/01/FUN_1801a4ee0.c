// FUN_1801a4ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a4ee0 */

undefined4 * FUN_1801a4ee0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
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
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0xf;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(param_2 + 0x26);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x26) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  uVar2 = *(undefined8 *)(param_2 + 0x2e);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x2e) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  param_1[0x34] = param_2[0x34];
  uVar1 = *(undefined8 *)(param_2 + 0x37);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x37) = uVar1;
  *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  return param_1;
}



