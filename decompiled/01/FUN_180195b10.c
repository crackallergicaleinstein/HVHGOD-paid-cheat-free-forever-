// FUN_180195b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195b10 */

undefined8 * FUN_180195b10(undefined8 *param_1,undefined8 *param_2)

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
  FUN_180176c30(param_1 + 0x10,param_2 + 0x10);
  FUN_180176c30(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  return param_1;
}



