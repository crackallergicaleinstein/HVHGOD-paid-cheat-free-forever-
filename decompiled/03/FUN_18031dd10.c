// FUN_18031dd10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031dd10 */

undefined1 * FUN_18031dd10(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x20);
  *param_1 = *param_2;
  puVar2 = (undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x18] = param_2[0x18];
  if (puVar2 != puVar1) {
    FUN_18015c010(puVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  return param_1;
}



