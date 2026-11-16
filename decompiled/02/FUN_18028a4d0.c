// FUN_18028a4d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a4d0 */

undefined8 * FUN_18028a4d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != param_1) {
      FUN_18015c010(param_3);
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    param_3[4] = param_1[4];
    param_3 = param_3 + 5;
  }
  return param_3;
}



