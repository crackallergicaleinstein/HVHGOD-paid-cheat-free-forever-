// FUN_1800cfaf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cfaf0 */

longlong FUN_1800cfaf0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1 - (longlong)param_2;
  lVar5 = 2;
  do {
    puVar1 = (undefined8 *)(lVar6 + (longlong)param_2);
    if (puVar1 != param_2) {
      FUN_18015c010(puVar1);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined1 *)param_2 = 0;
    }
    param_2 = param_2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



