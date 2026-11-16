// FUN_1802e8910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e8910 */

undefined8 * FUN_1802e8910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    FUN_18015c010();
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  puVar1 = param_2 + 4;
  puVar2 = param_1 + 4;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    *puVar2 = *puVar1;
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 8;
  puVar2 = param_1 + 8;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    uVar5 = param_2[0xb];
    *puVar2 = *puVar1;
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    param_2[10] = 0;
    param_2[0xb] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0xc;
  puVar2 = param_1 + 0xc;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0xd];
    uVar4 = param_2[0xe];
    uVar5 = param_2[0xf];
    *puVar2 = *puVar1;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
    param_2[0xe] = 0;
    param_2[0xf] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x10;
  puVar2 = param_1 + 0x10;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x11];
    uVar4 = param_2[0x12];
    uVar5 = param_2[0x13];
    *puVar2 = *puVar1;
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar4;
    param_1[0x13] = uVar5;
    param_2[0x12] = 0;
    param_2[0x13] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  FUN_1802c8e50(param_1 + 0x14,param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar3 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar3;
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x15c);
  *(undefined8 *)((longlong)param_1 + 0x154) = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x15c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x164) = *(undefined8 *)((longlong)param_2 + 0x164);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x171) = *(undefined1 *)((longlong)param_2 + 0x171);
  *(undefined1 *)((longlong)param_1 + 0x172) = *(undefined1 *)((longlong)param_2 + 0x172);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x17c);
  *(undefined8 *)((longlong)param_1 + 0x174) = *(undefined8 *)((longlong)param_2 + 0x174);
  *(undefined8 *)((longlong)param_1 + 0x17c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  return param_1;
}



