// FUN_180175280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175280 */

undefined8 * FUN_180175280(undefined8 *param_1,undefined8 *param_2)

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
  puVar1 = param_2 + 0x14;
  puVar2 = param_1 + 0x14;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x15];
    uVar4 = param_2[0x16];
    uVar5 = param_2[0x17];
    *puVar2 = *puVar1;
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar4;
    param_1[0x17] = uVar5;
    param_2[0x16] = 0;
    param_2[0x17] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x18;
  puVar2 = param_1 + 0x18;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x19];
    uVar4 = param_2[0x1a];
    uVar5 = param_2[0x1b];
    *puVar2 = *puVar1;
    param_1[0x19] = uVar3;
    param_1[0x1a] = uVar4;
    param_1[0x1b] = uVar5;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x1d;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  puVar2 = param_1 + 0x1d;
  *(undefined1 *)((longlong)param_1 + 0xe1) = *(undefined1 *)((longlong)param_2 + 0xe1);
  *(undefined1 *)((longlong)param_1 + 0xe2) = *(undefined1 *)((longlong)param_2 + 0xe2);
  *(undefined1 *)((longlong)param_1 + 0xe3) = *(undefined1 *)((longlong)param_2 + 0xe3);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x1e];
    uVar4 = param_2[0x1f];
    uVar5 = param_2[0x20];
    *puVar2 = *puVar1;
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar4;
    param_1[0x20] = uVar5;
    param_2[0x1f] = 0;
    param_2[0x20] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x21;
  puVar2 = param_1 + 0x21;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x22];
    uVar4 = param_2[0x23];
    uVar5 = param_2[0x24];
    *puVar2 = *puVar1;
    param_1[0x22] = uVar3;
    param_1[0x23] = uVar4;
    param_1[0x24] = uVar5;
    param_2[0x23] = 0;
    param_2[0x24] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x25;
  puVar2 = param_1 + 0x25;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x26];
    uVar4 = param_2[0x27];
    uVar5 = param_2[0x28];
    *puVar2 = *puVar1;
    param_1[0x26] = uVar3;
    param_1[0x27] = uVar4;
    param_1[0x28] = uVar5;
    param_2[0x27] = 0;
    param_2[0x28] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = param_2 + 0x29;
  puVar2 = param_1 + 0x29;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = param_2[0x2a];
    uVar4 = param_2[0x2b];
    uVar5 = param_2[0x2c];
    *puVar2 = *puVar1;
    param_1[0x2a] = uVar3;
    param_1[0x2b] = uVar4;
    param_1[0x2c] = uVar5;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  return param_1;
}



