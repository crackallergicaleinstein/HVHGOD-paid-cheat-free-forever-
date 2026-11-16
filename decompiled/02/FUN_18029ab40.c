// FUN_18029ab40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029ab40 */

undefined8 * FUN_18029ab40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = param_2[7];
  param_2[7] = 0;
  uVar2 = param_2[6];
  uVar3 = param_2[5];
  param_2[6] = 0;
  param_2[5] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  param_1[5] = uVar3;
  param_1[8] = param_2[8];
  uVar1 = param_2[9];
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_2[10] = 0;
  param_2[0xb] = 0;
  FUN_18063aed0(param_1 + 0xc,param_2 + 0xc,0x1020);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  *(undefined4 *)((longlong)param_1 + 0x1084) = *(undefined4 *)((longlong)param_2 + 0x1084);
  return param_1;
}



