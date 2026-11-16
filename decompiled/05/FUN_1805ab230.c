// FUN_1805ab230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ab230 */

undefined8 FUN_1805ab230(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(lVar1 + 0xc);
  *param_2 = *(undefined8 *)(lVar1 + 4);
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x1c);
  param_2[2] = *(undefined8 *)(lVar1 + 0x14);
  param_2[3] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  param_2[4] = *(undefined8 *)(lVar1 + 0x24);
  param_2[5] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x3c);
  param_2[6] = *(undefined8 *)(lVar1 + 0x34);
  param_2[7] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x4c);
  param_2[8] = *(undefined8 *)(lVar1 + 0x44);
  param_2[9] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x5c);
  param_2[10] = *(undefined8 *)(lVar1 + 0x54);
  param_2[0xb] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x6c);
  param_2[0xc] = *(undefined8 *)(lVar1 + 100);
  param_2[0xd] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x7c);
  param_2[0xe] = *(undefined8 *)(lVar1 + 0x74);
  param_2[0xf] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x8c);
  param_2[0x10] = *(undefined8 *)(lVar1 + 0x84);
  param_2[0x11] = uVar2;
  param_2[0x12] = *(undefined8 *)(lVar1 + 0x94);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(lVar1 + 0x9c);
  return 0;
}



