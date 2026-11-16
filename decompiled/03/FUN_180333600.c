// FUN_180333600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180333600 */

undefined8 * FUN_180333600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = 2;
  puVar5 = param_1;
  if (*(char *)(param_1 + 0x21) == '\0') {
    do {
      puVar1 = puVar5 + 0x10;
      uVar3 = param_2[1];
      puVar2 = param_2 + 0x10;
      *puVar5 = *param_2;
      puVar5[1] = uVar3;
      uVar3 = param_2[3];
      puVar5[2] = param_2[2];
      puVar5[3] = uVar3;
      uVar3 = param_2[5];
      puVar5[4] = param_2[4];
      puVar5[5] = uVar3;
      uVar3 = param_2[7];
      puVar5[6] = param_2[6];
      puVar5[7] = uVar3;
      uVar3 = param_2[9];
      puVar5[8] = param_2[8];
      puVar5[9] = uVar3;
      uVar3 = param_2[0xb];
      puVar5[10] = param_2[10];
      puVar5[0xb] = uVar3;
      uVar3 = param_2[0xd];
      puVar5[0xc] = param_2[0xc];
      puVar5[0xd] = uVar3;
      uVar3 = param_2[0xf];
      puVar5[0xe] = param_2[0xe];
      puVar5[0xf] = uVar3;
      lVar4 = lVar4 + -1;
      puVar5 = puVar1;
      param_2 = puVar2;
    } while (lVar4 != 0);
    *puVar1 = *puVar2;
    *(undefined1 *)(param_1 + 0x21) = 1;
    return param_1;
  }
  do {
    puVar1 = puVar5 + 0x10;
    uVar3 = param_2[1];
    puVar2 = param_2 + 0x10;
    *puVar5 = *param_2;
    puVar5[1] = uVar3;
    uVar3 = param_2[3];
    puVar5[2] = param_2[2];
    puVar5[3] = uVar3;
    uVar3 = param_2[5];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar3;
    uVar3 = param_2[7];
    puVar5[6] = param_2[6];
    puVar5[7] = uVar3;
    uVar3 = param_2[9];
    puVar5[8] = param_2[8];
    puVar5[9] = uVar3;
    uVar3 = param_2[0xb];
    puVar5[10] = param_2[10];
    puVar5[0xb] = uVar3;
    uVar3 = param_2[0xd];
    puVar5[0xc] = param_2[0xc];
    puVar5[0xd] = uVar3;
    uVar3 = param_2[0xf];
    puVar5[0xe] = param_2[0xe];
    puVar5[0xf] = uVar3;
    lVar4 = lVar4 + -1;
    param_2 = puVar2;
    puVar5 = puVar1;
  } while (lVar4 != 0);
  *puVar1 = *puVar2;
  return param_1;
}



