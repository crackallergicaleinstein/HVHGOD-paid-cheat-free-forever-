// FUN_1802a6a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a6a40 */

undefined8 * FUN_1802a6a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)((longlong)param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_2[0xb] = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  lVar8 = 6;
  puVar4 = param_1 + 0xc;
  puVar5 = param_2 + 0xc;
  do {
    puVar7 = puVar5;
    puVar6 = puVar4;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    uVar1 = puVar7[3];
    puVar6[2] = puVar7[2];
    puVar6[3] = uVar1;
    uVar1 = puVar7[5];
    puVar6[4] = puVar7[4];
    puVar6[5] = uVar1;
    uVar1 = puVar7[7];
    puVar6[6] = puVar7[6];
    puVar6[7] = uVar1;
    uVar1 = puVar7[9];
    puVar6[8] = puVar7[8];
    puVar6[9] = uVar1;
    uVar1 = puVar7[0xb];
    puVar6[10] = puVar7[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar7[0xd];
    puVar6[0xc] = puVar7[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar7[0xf];
    puVar6[0xe] = puVar7[0xe];
    puVar6[0xf] = uVar1;
    lVar8 = lVar8 + -1;
    puVar4 = puVar6 + 0x10;
    puVar5 = puVar7 + 0x10;
  } while (lVar8 != 0);
  uVar1 = puVar7[0x11];
  puVar6[0x10] = puVar7[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar7[0x13];
  puVar6[0x12] = puVar7[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar7[0x15];
  puVar6[0x14] = puVar7[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar7[0x17];
  puVar6[0x16] = puVar7[0x16];
  puVar6[0x17] = uVar1;
  uVar1 = puVar7[0x19];
  puVar6[0x18] = puVar7[0x18];
  puVar6[0x19] = uVar1;
  uVar1 = puVar7[0x1b];
  puVar6[0x1a] = puVar7[0x1a];
  puVar6[0x1b] = uVar1;
  param_1[0x78] = param_2[0x78];
  *(undefined4 *)(param_1 + 0x79) = *(undefined4 *)(param_2 + 0x79);
  param_1[0x7a] = param_2[0x7a];
  param_1[0x7b] = param_2[0x7b];
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x3e4) = *(undefined4 *)((longlong)param_2 + 0x3e4);
  *(undefined1 (*) [16])(param_1 + 0x7d) = (undefined1  [16])0x0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  uVar1 = param_2[0x7e];
  uVar2 = param_2[0x7f];
  uVar3 = param_2[0x80];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7e] = uVar1;
  param_1[0x7f] = uVar2;
  param_1[0x80] = uVar3;
  *(undefined1 *)(param_2 + 0x7d) = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0xf;
  return param_1;
}



