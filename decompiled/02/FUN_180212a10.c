// FUN_180212a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212a10 */

undefined4 * FUN_180212a10(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_2 + 8) = 0xf;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x10) = 0xf;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  return param_1;
}



