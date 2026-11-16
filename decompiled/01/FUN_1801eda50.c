// FUN_1801eda50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801eda50 */

undefined1 (*) [16] FUN_1801eda50(undefined1 (*param_1) [16],undefined8 *param_2)

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
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  param_2[2] = 0;
  uVar1 = param_2[6];
  param_2[6] = 0;
  uVar2 = param_2[5];
  param_2[5] = 0;
  uVar3 = param_2[4];
  param_2[4] = 0;
  *(undefined8 *)param_1[2] = uVar3;
  *(undefined8 *)(param_1[2] + 8) = uVar2;
  *(undefined8 *)param_1[3] = uVar1;
  uVar1 = param_2[9];
  param_2[9] = 0;
  uVar2 = param_2[8];
  param_2[8] = 0;
  uVar3 = param_2[7];
  param_2[7] = 0;
  *(undefined8 *)(param_1[3] + 8) = uVar3;
  *(undefined8 *)param_1[4] = uVar2;
  *(undefined8 *)(param_1[4] + 8) = uVar1;
  *(undefined4 *)param_1[5] = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[6] = 0;
  FUN_1801bb4f0(param_1[5] + 8);
  *(undefined8 *)(param_1[6] + 8) = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  FUN_1801406e0(param_1[6] + 8,0x10,*(undefined8 *)(param_1[5] + 8));
  uVar1 = *(undefined8 *)(param_1[5] + 8);
  *(undefined8 *)(param_1[5] + 8) = param_2[0xb];
  param_2[0xb] = uVar1;
  uVar1 = *(undefined8 *)param_1[6];
  *(undefined8 *)param_1[6] = param_2[0xc];
  param_2[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_1[6] + 8);
  *(undefined8 *)(param_1[6] + 8) = param_2[0xd];
  param_2[0xd] = uVar1;
  uVar1 = *(undefined8 *)param_1[7];
  *(undefined8 *)param_1[7] = param_2[0xe];
  param_2[0xe] = uVar1;
  uVar1 = *(undefined8 *)(param_1[7] + 8);
  *(undefined8 *)(param_1[7] + 8) = param_2[0xf];
  param_2[0xf] = uVar1;
  uVar1 = param_2[0x10];
  param_2[0x10] = 7;
  *(undefined8 *)param_1[8] = uVar1;
  uVar1 = param_2[0x11];
  param_2[0x11] = 8;
  *(undefined8 *)(param_1[8] + 8) = uVar1;
  *(undefined8 *)param_1[9] = param_2[0x12];
  *(undefined8 *)(param_1[9] + 8) = param_2[0x13];
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
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0xf;
  param_1[0xc][0] = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



