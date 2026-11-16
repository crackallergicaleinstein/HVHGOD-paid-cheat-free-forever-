// FUN_18017bc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017bc30 */

undefined8 * FUN_18017bc30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  while (puVar5 = param_2, puVar4 = param_3, param_1 != puVar5) {
    param_2 = puVar5 + -4;
    param_3 = puVar4 + -4;
    if (param_3 != param_2) {
      FUN_18015c010(param_3);
      uVar1 = puVar5[-3];
      uVar2 = puVar5[-2];
      uVar3 = puVar5[-1];
      *param_3 = *param_2;
      puVar4[-3] = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
      puVar5[-2] = 0;
      puVar5[-1] = 0xf;
      *(undefined1 *)param_2 = 0;
    }
  }
  return puVar4;
}



