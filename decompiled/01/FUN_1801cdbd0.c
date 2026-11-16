// FUN_1801cdbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cdbd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1801cdbd0(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar8 = FUN_180439770();
  lVar11 = 4;
  puVar6 = (undefined8 *)(lVar8 + 0x1b8);
  puVar7 = param_1;
  do {
    puVar10 = puVar7;
    puVar9 = puVar6;
    uVar1 = puVar9[1];
    *puVar10 = *puVar9;
    puVar10[1] = uVar1;
    uVar1 = puVar9[3];
    puVar10[2] = puVar9[2];
    puVar10[3] = uVar1;
    uVar1 = puVar9[5];
    puVar10[4] = puVar9[4];
    puVar10[5] = uVar1;
    uVar1 = puVar9[7];
    puVar10[6] = puVar9[6];
    puVar10[7] = uVar1;
    uVar1 = puVar9[9];
    puVar10[8] = puVar9[8];
    puVar10[9] = uVar1;
    uVar1 = puVar9[0xb];
    puVar10[10] = puVar9[10];
    puVar10[0xb] = uVar1;
    uVar1 = puVar9[0xd];
    puVar10[0xc] = puVar9[0xc];
    puVar10[0xd] = uVar1;
    uVar1 = puVar9[0xf];
    puVar10[0xe] = puVar9[0xe];
    puVar10[0xf] = uVar1;
    uVar5 = DAT_1808da48c;
    uVar4 = DAT_1808da488;
    uVar3 = DAT_1808da484;
    bVar2 = DAT_1808da47c;
    DAT_180bb8a60 = DAT_1808da478;
    DAT_180bb8a64 = DAT_1808da474;
    DAT_180bb8a74 = DAT_1808da470;
    lVar11 = lVar11 + -1;
    puVar6 = puVar9 + 0x10;
    puVar7 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar1 = puVar9[0x11];
  puVar10[0x10] = puVar9[0x10];
  puVar10[0x11] = uVar1;
  uVar1 = puVar9[0x13];
  puVar10[0x12] = puVar9[0x12];
  puVar10[0x13] = uVar1;
  uVar1 = puVar9[0x15];
  puVar10[0x14] = puVar9[0x14];
  puVar10[0x15] = uVar1;
  uVar1 = puVar9[0x17];
  puVar10[0x16] = puVar9[0x16];
  puVar10[0x17] = uVar1;
  uVar1 = puVar9[0x19];
  puVar10[0x18] = puVar9[0x18];
  puVar10[0x19] = uVar1;
  if (bVar2 < 0x81) {
    DAT_180bb8a7c._2_1_ = 0x54;
    DAT_180bb8a7c._1_1_ = 0xb2;
    DAT_180bb8a7c._0_1_ = 0xff;
  }
  else {
    DAT_180bb8a7c._2_1_ = 0;
    DAT_180bb8a7c._1_1_ = 0x48;
    DAT_180bb8a7c._0_1_ = 0x9b;
  }
  DAT_180bb8a70 = CONCAT13(0xff,(int3)uVar3);
  DAT_180bb8a6c = CONCAT13(0xff,(int3)uVar5);
  DAT_180bb8a68 = CONCAT13(0xff,(int3)uVar4);
  _DAT_180bb8a78 = DAT_180bb8a60;
  DAT_180bb8a7c._3_1_ = 0xff;
  lVar8 = FUN_180439770();
  *(undefined4 *)(lVar8 + 0x230) = DAT_1808da488;
  *(undefined4 *)(lVar8 + 0x234) = DAT_1808da484;
  *(undefined1 *)(lVar8 + 0x233) = 0xff;
  *(undefined4 *)(lVar8 + 0x2b0) = DAT_180bb8a60;
  *(undefined4 *)(lVar8 + 0x2b4) = DAT_180bb8a64;
  *(undefined4 *)(lVar8 + 0x2b8) = DAT_180bb8a60;
  *(undefined4 *)(lVar8 + 0x2a4) = DAT_1808da480;
  *(undefined4 *)(lVar8 + 0x2a8) = DAT_1808da468;
  *(undefined4 *)(lVar8 + 0x228) = DAT_1808da494;
  *(undefined4 *)(lVar8 + 0x22c) = DAT_1808da490;
  *(undefined4 *)(lVar8 + 0x248) = DAT_1808da46c;
  *(undefined4 *)(lVar8 + 0x24c) = DAT_180bb8a64;
  return param_1;
}



