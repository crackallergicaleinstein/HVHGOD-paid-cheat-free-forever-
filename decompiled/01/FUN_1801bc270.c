// FUN_1801bc270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bc270 */

void FUN_1801bc270(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    puVar5 = param_1 + 3;
    do {
      *param_3 = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)puVar5 + lVar6 + -8) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6) = 0;
      uVar2 = puVar5[-2];
      uVar3 = puVar5[-1];
      uVar4 = *puVar5;
      *(undefined8 *)*param_3 = puVar5[-3];
      *(undefined8 *)(*param_3 + 8) = uVar2;
      *(undefined8 *)param_3[1] = uVar3;
      *(undefined8 *)(param_3[1] + 8) = uVar4;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -3) = 0;
      puVar5[-1] = 0;
      *(undefined1 (*) [16])((longlong)puVar5 + lVar6 + 8) = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)puVar5 + lVar6 + 0x18) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6 + 0x20) = 0;
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      uVar4 = puVar5[4];
      puVar1 = (undefined8 *)((longlong)puVar5 + lVar6 + 8);
      *puVar1 = puVar5[1];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(undefined2 *)(puVar5 + 1) = 0;
      puVar5[3] = 0;
      puVar5[4] = 7;
      *(undefined4 *)((longlong)puVar5 + lVar6 + 0x28) = *(undefined4 *)(puVar5 + 5);
      *(undefined4 *)((longlong)puVar5 + lVar6 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 0x2c);
      *(undefined8 *)((longlong)puVar5 + lVar6 + 0x30) = puVar5[6];
      param_3 = param_3 + 5;
      puVar1 = puVar5 + 7;
      puVar5 = puVar5 + 10;
    } while (puVar1 != param_2);
  }
  return;
}



