// FUN_1801fa180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fa180 */

undefined8 * FUN_1801fa180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + 5;
  *param_1 = *param_2;
  puVar2 = param_1 + 5;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    uVar5 = param_2[8];
    *puVar2 = *puVar1;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    param_1[8] = uVar5;
    param_2[7] = 0;
    param_2[8] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 9;
  puVar2 = param_1 + 9;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[10];
    uVar4 = param_2[0xb];
    uVar5 = param_2[0xc];
    *puVar2 = *puVar1;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar5;
    param_2[0xb] = 0;
    param_2[0xc] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  uVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar3;
  uVar3 = param_2[0x12];
  puVar1 = param_2 + 0x13;
  puVar2 = param_1 + 0x13;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar3;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x14];
    uVar4 = param_2[0x15];
    uVar5 = param_2[0x16];
    *puVar2 = *puVar1;
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar4;
    param_1[0x16] = uVar5;
    param_2[0x15] = 0;
    param_2[0x16] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0xe1) = *(undefined1 *)((longlong)param_2 + 0xe1);
  return param_1;
}



