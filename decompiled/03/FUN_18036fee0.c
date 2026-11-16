// FUN_18036fee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036fee0 */

undefined8 * FUN_18036fee0(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



