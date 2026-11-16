// FUN_180289660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180289660 */

undefined8 * FUN_180289660(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  while (param_1 != param_2) {
    puVar4 = param_2 + -5;
    puVar5 = param_3 + -5;
    if (puVar5 != puVar4) {
      FUN_18015c010(puVar5);
      uVar1 = param_2[-4];
      uVar2 = param_2[-3];
      uVar3 = param_2[-2];
      *puVar5 = *puVar4;
      param_3[-4] = uVar1;
      param_3[-3] = uVar2;
      param_3[-2] = uVar3;
      param_2[-3] = 0;
      param_2[-2] = 0xf;
      *(undefined1 *)puVar4 = 0;
    }
    param_3[-1] = param_2[-1];
    param_3 = puVar5;
    param_2 = puVar4;
  }
  return param_3;
}



