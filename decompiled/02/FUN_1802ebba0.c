// FUN_1802ebba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ebba0 */

void FUN_1802ebba0(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    puVar5 = param_1 + 2;
    do {
      *param_3 = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)puVar5 + lVar6) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6 + 8) = 0;
      uVar2 = puVar5[-1];
      uVar3 = *puVar5;
      uVar4 = puVar5[1];
      *(undefined8 *)*param_3 = puVar5[-2];
      *(undefined8 *)(*param_3 + 8) = uVar2;
      *(undefined8 *)param_3[1] = uVar3;
      *(undefined8 *)(param_3[1] + 8) = uVar4;
      *(undefined1 *)(puVar5 + -2) = 0;
      *puVar5 = 0;
      puVar5[1] = 0xf;
      *(undefined4 *)((longlong)puVar5 + lVar6 + 0x10) = *(undefined4 *)(puVar5 + 2);
      *(undefined4 *)((longlong)puVar5 + lVar6 + 0x14) = *(undefined4 *)((longlong)puVar5 + 0x14);
      param_3 = (undefined1 (*) [16])(param_3[2] + 8);
      puVar1 = puVar5 + 3;
      puVar5 = puVar5 + 5;
    } while (puVar1 != param_2);
  }
  return;
}



