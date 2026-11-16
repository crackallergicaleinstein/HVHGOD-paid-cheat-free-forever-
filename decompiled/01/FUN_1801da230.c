// FUN_1801da230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da230 */

undefined1 (*) [16]
FUN_1801da230(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

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
      FUN_1801d8a70(lVar6 + 0x10 + (longlong)puVar5,puVar5 + 2);
      param_3 = param_3 + 0x13;
      puVar1 = puVar5 + 0x24;
      puVar5 = puVar5 + 0x26;
    } while (puVar1 != param_2);
  }
  FUN_1801d9fe0(param_3,param_3);
  return param_3;
}



