// FUN_180421a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421a20 */

void FUN_180421a20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x9c00);
  if (iVar1 < 0x7f) {
    *(int *)(param_1 + 0x9c00) = iVar1 + 1;
    lVar6 = 2;
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x138 + param_1);
    puVar4 = (undefined8 *)(((longlong)iVar1 + 1) * 0x138 + param_1);
    do {
      puVar7 = puVar4;
      puVar5 = puVar3;
      uVar2 = puVar5[1];
      *puVar7 = *puVar5;
      puVar7[1] = uVar2;
      uVar2 = puVar5[3];
      puVar7[2] = puVar5[2];
      puVar7[3] = uVar2;
      uVar2 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar2;
      uVar2 = puVar5[7];
      puVar7[6] = puVar5[6];
      puVar7[7] = uVar2;
      uVar2 = puVar5[9];
      puVar7[8] = puVar5[8];
      puVar7[9] = uVar2;
      uVar2 = puVar5[0xb];
      puVar7[10] = puVar5[10];
      puVar7[0xb] = uVar2;
      uVar2 = puVar5[0xd];
      puVar7[0xc] = puVar5[0xc];
      puVar7[0xd] = uVar2;
      uVar2 = puVar5[0xf];
      puVar7[0xe] = puVar5[0xe];
      puVar7[0xf] = uVar2;
      lVar6 = lVar6 + -1;
      puVar3 = puVar5 + 0x10;
      puVar4 = puVar7 + 0x10;
    } while (lVar6 != 0);
    uVar2 = puVar5[0x11];
    puVar7[0x10] = puVar5[0x10];
    puVar7[0x11] = uVar2;
    uVar2 = puVar5[0x13];
    puVar7[0x12] = puVar5[0x12];
    puVar7[0x13] = uVar2;
    uVar2 = puVar5[0x15];
    puVar7[0x14] = puVar5[0x14];
    puVar7[0x15] = uVar2;
    puVar7[0x16] = puVar5[0x16];
  }
  return;
}



