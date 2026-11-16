// FUN_1802831c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802831c0 */

undefined8 * FUN_1802831c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = param_1 + 9;
  *param_1 = *param_2;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[3] = 0;
  param_2[4] = 0xf;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  puVar5 = param_2 + 9;
  param_1[8] = param_2[8];
  *puVar1 = 0;
  if (puVar1 != puVar5) {
    *puVar1 = *puVar5;
    *puVar5 = 0;
  }
  return param_1;
}



