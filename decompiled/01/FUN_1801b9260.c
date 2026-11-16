// FUN_1801b9260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b9260 */

undefined8 * FUN_1801b9260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_18015c010();
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  FUN_180176c30(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_1[9] = param_2[9];
  return param_1;
}



