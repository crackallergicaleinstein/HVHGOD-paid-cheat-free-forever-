// FUN_1801b4110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b4110 */

longlong FUN_1801b4110(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar6 = (undefined8 *)(param_2 + 0x10);
  param_2 = param_1 - param_2;
  lVar7 = 4;
  do {
    puVar2 = puVar6 + -2;
    puVar1 = (undefined8 *)((longlong)puVar6 + param_2 + -0x10);
    if (puVar1 != puVar2) {
      FUN_18015c010(puVar1);
      uVar3 = puVar6[-1];
      uVar4 = *puVar6;
      uVar5 = puVar6[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *puVar6 = 0;
      puVar6[1] = 0xf;
      *(undefined1 *)puVar2 = 0;
    }
    uVar3 = puVar6[3];
    puVar2 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar6);
    *puVar2 = puVar6[2];
    puVar2[1] = uVar3;
    *(undefined8 *)(param_2 + 0x20 + (longlong)puVar6) = puVar6[4];
    *(undefined4 *)(param_2 + 0x28 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 5);
    puVar6 = puVar6 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return param_1;
}



