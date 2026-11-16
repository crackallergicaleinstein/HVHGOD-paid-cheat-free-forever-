// FUN_18054ca50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054ca50 */

undefined1 (*) [16] FUN_18054ca50(undefined1 (*param_1) [16],longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  FUN_18015ba30();
  uVar1 = *(undefined8 *)(param_3 + 6);
  uVar2 = *(undefined8 *)(param_3 + 4);
  *(undefined4 *)param_1[2] = *param_3;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_1[2] + 4) = param_3[1];
  uVar3 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_1[2] + 8) = uVar3;
  *(undefined8 *)param_1[3] = uVar2;
  *(undefined8 *)(param_1[3] + 8) = uVar1;
  return param_1;
}



