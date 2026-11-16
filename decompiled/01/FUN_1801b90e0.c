// FUN_1801b90e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b90e0 */

undefined1 (*) [16] FUN_1801b90e0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 8) = uVar3;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_1[2] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined8 *)param_1[2] = param_2[4];
  *(undefined8 *)(param_1[2] + 8) = uVar1;
  *(undefined8 *)param_1[3] = uVar2;
  *(undefined8 *)(param_1[3] + 8) = uVar3;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_1[4] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined8 *)param_1[4] = param_2[8];
  *(undefined8 *)(param_1[4] + 8) = uVar1;
  *(undefined8 *)param_1[5] = uVar2;
  *(undefined8 *)(param_1[5] + 8) = uVar3;
  param_2[0xb] = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  param_1[6] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined8 *)param_1[6] = param_2[0xc];
  *(undefined8 *)(param_1[6] + 8) = uVar1;
  *(undefined8 *)param_1[7] = uVar2;
  *(undefined8 *)(param_1[7] + 8) = uVar3;
  param_2[0xf] = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0;
  param_1[8] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[9] = 0;
  *(undefined8 *)(param_1[9] + 8) = 0;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(undefined8 *)param_1[8] = param_2[0x10];
  *(undefined8 *)(param_1[8] + 8) = uVar1;
  *(undefined8 *)param_1[9] = uVar2;
  *(undefined8 *)(param_1[9] + 8) = uVar3;
  param_2[0x13] = 7;
  *(undefined2 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0;
  param_1[10] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0xb] = 0;
  *(undefined8 *)(param_1[0xb] + 8) = 0;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  *(undefined8 *)param_1[10] = param_2[0x14];
  *(undefined8 *)(param_1[10] + 8) = uVar1;
  *(undefined8 *)param_1[0xb] = uVar2;
  *(undefined8 *)(param_1[0xb] + 8) = uVar3;
  *(undefined2 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 7;
  param_1[0xc][0] = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(param_1[0xc] + 8) = param_2[0x19];
  *(undefined8 *)param_1[0xd] = param_2[0x1a];
  return param_1;
}



