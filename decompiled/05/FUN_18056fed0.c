// FUN_18056fed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056fed0 */

undefined4 * FUN_18056fed0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    puVar5 = param_1 + 7;
    do {
      *param_3 = *(undefined4 *)(puVar5 + -7);
      *(undefined4 *)(lVar6 + -0x34 + (longlong)puVar5) = *(undefined4 *)((longlong)puVar5 + -0x34);
      *(undefined1 (*) [16])(lVar6 + -0x30 + (longlong)puVar5) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar6 + -0x20 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar6 + -0x18 + (longlong)puVar5) = 0;
      uVar2 = puVar5[-5];
      uVar3 = puVar5[-4];
      uVar4 = puVar5[-3];
      puVar1 = (undefined8 *)(lVar6 + -0x30 + (longlong)puVar5);
      *puVar1 = puVar5[-6];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      puVar5[-3] = 0xf;
      *(undefined1 *)(puVar5 + -6) = 0;
      puVar5[-4] = 0;
      *(undefined1 (*) [16])(lVar6 + -0x10 + (longlong)puVar5) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar6 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar6 + 8 + (longlong)puVar5) = 0;
      uVar2 = puVar5[-1];
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      puVar1 = (undefined8 *)(lVar6 + -0x10 + (longlong)puVar5);
      *puVar1 = puVar5[-2];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      puVar5[1] = 0xf;
      *(undefined1 *)(puVar5 + -2) = 0;
      *puVar5 = 0;
      *(undefined1 (*) [16])(lVar6 + 0x10 + (longlong)puVar5) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar6 + 0x20 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar6 + 0x28 + (longlong)puVar5) = 0;
      uVar2 = puVar5[3];
      uVar3 = puVar5[4];
      uVar4 = puVar5[5];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)puVar5);
      *puVar1 = puVar5[2];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(undefined1 *)(puVar5 + 2) = 0;
      puVar5[4] = 0;
      puVar5[5] = 0xf;
      param_3 = param_3 + 0x1a;
      puVar1 = puVar5 + 6;
      puVar5 = puVar5 + 0xd;
    } while (puVar1 != param_2);
  }
  return param_3;
}



