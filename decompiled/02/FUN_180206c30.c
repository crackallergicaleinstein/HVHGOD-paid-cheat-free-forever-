// FUN_180206c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180206c30 */

undefined4 * FUN_180206c30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  puVar2 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 10);
  puVar2 = (undefined8 *)(param_1 + 10);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0xc) = uVar3;
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(undefined8 *)(param_2 + 0xe) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x12);
  puVar2 = (undefined8 *)(param_1 + 0x12);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x14);
    uVar4 = *(undefined8 *)(param_2 + 0x16);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x14) = uVar3;
    *(undefined8 *)(param_1 + 0x16) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x16) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x1a);
  puVar2 = (undefined8 *)(param_1 + 0x1a);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_2 + 0x1e);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x1c) = uVar3;
    *(undefined8 *)(param_1 + 0x1e) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_2 + 0x1e) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x22);
  puVar2 = (undefined8 *)(param_1 + 0x22);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x24);
    uVar4 = *(undefined8 *)(param_2 + 0x26);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x24) = uVar3;
    *(undefined8 *)(param_1 + 0x26) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_2 + 0x26) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x2a);
  puVar2 = (undefined8 *)(param_1 + 0x2a);
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    uVar4 = *(undefined8 *)(param_2 + 0x2e);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    *(undefined8 *)(param_1 + 0x2e) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *(undefined8 *)(param_2 + 0x2e) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  return param_1;
}



