// FUN_1801d8a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d8a70 */

undefined4 * FUN_1801d8a70(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_2 + 0x24) = 0xf;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x3a) = uVar3;
  *(undefined1 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0xf;
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)((longlong)param_2 + 0xfa);
  *(undefined1 *)((longlong)param_1 + 0xfb) = *(undefined1 *)((longlong)param_2 + 0xfb);
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  return param_1;
}



