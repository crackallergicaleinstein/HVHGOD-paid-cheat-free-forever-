// FUN_1801ba060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ba060 */

undefined8 * FUN_1801ba060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
      *param_3 = puVar5[-2];
      uVar2 = puVar5[1];
      puVar5[1] = 0;
      uVar3 = *puVar5;
      *puVar5 = 0;
      uVar4 = puVar5[-1];
      puVar5[-1] = 0;
      *(undefined8 *)(lVar6 + -8 + (longlong)puVar5) = uVar4;
      *(undefined8 *)(lVar6 + (longlong)puVar5) = uVar3;
      *(undefined8 *)(lVar6 + 8 + (longlong)puVar5) = uVar2;
      param_3 = param_3 + 4;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 4;
    } while (puVar1 != param_2);
  }
  return param_3;
}



