// FUN_1801cdde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cdde0 */

void FUN_1801cdde0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_258 [74];
  
  lVar9 = 4;
  lVar8 = 4;
  puVar4 = local_258;
  do {
    puVar6 = param_1;
    puVar5 = puVar4;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar5 = *puVar6;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar1 = puVar6[5];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar1;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar1 = puVar6[9];
    uVar2 = puVar6[10];
    uVar3 = puVar6[0xb];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar1;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar1 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar1;
    lVar8 = lVar8 + -1;
    puVar4 = puVar5 + 0x10;
    param_1 = puVar6 + 0x10;
  } while (lVar8 != 0);
  uVar1 = puVar6[0x11];
  uVar2 = puVar6[0x12];
  uVar3 = puVar6[0x13];
  puVar5[0x10] = puVar6[0x10];
  puVar5[0x11] = uVar1;
  puVar5[0x12] = uVar2;
  puVar5[0x13] = uVar3;
  uVar1 = puVar6[0x15];
  uVar2 = puVar6[0x16];
  uVar3 = puVar6[0x17];
  puVar5[0x14] = puVar6[0x14];
  puVar5[0x15] = uVar1;
  puVar5[0x16] = uVar2;
  puVar5[0x17] = uVar3;
  uVar1 = puVar6[0x19];
  puVar5[0x18] = puVar6[0x18];
  puVar5[0x19] = uVar1;
  lVar8 = FUN_180439770();
  puVar4 = local_258;
  puVar5 = (undefined8 *)(lVar8 + 0x1b8);
  do {
    puVar7 = puVar5;
    puVar6 = puVar4;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar1 = puVar6[5];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    puVar7[4] = puVar6[4];
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar1 = puVar6[9];
    uVar2 = puVar6[10];
    uVar3 = puVar6[0xb];
    puVar7[8] = puVar6[8];
    puVar7[9] = uVar1;
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar1 = puVar6[0xd];
    puVar7[0xc] = puVar6[0xc];
    puVar7[0xd] = uVar1;
    uVar1 = puVar6[0xf];
    puVar7[0xe] = puVar6[0xe];
    puVar7[0xf] = uVar1;
    lVar9 = lVar9 + -1;
    puVar4 = puVar6 + 0x10;
    puVar5 = puVar7 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar6[0x11];
  uVar2 = puVar6[0x12];
  uVar3 = puVar6[0x13];
  puVar7[0x10] = puVar6[0x10];
  puVar7[0x11] = uVar1;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  uVar1 = puVar6[0x15];
  uVar2 = puVar6[0x16];
  uVar3 = puVar6[0x17];
  puVar7[0x14] = puVar6[0x14];
  puVar7[0x15] = uVar1;
  puVar7[0x16] = uVar2;
  puVar7[0x17] = uVar3;
  uVar1 = puVar6[0x19];
  puVar7[0x18] = puVar6[0x18];
  puVar7[0x19] = uVar1;
  return;
}



