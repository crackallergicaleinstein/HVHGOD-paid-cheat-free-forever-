// FUN_1803cf010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cf010 */

undefined1 (*) [16] FUN_1803cf010(undefined1 (*param_1) [16],undefined8 *param_2)

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
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined4 *)param_1[4] = *(undefined4 *)(param_2 + 8);
  param_1[4][4] = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined8 *)(param_1[4] + 8) = param_2[9];
  *(undefined8 *)param_1[5] = param_2[10];
  return param_1;
}



