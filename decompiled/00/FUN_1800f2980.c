// FUN_1800f2980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f2980 */

undefined4 *
FUN_1800f2980(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar4 = (undefined1 *)*param_2;
  puVar2 = (undefined1 *)param_2[1];
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  for (uVar3 = 0; (puVar4 != puVar2 && ((uint)uVar3 < 5)); uVar3 = (ulonglong)((uint)uVar3 + 1)) {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *(undefined1 *)(uVar3 + (longlong)param_1) = uVar1;
  }
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_1800f2820(param_1,&local_18,&local_28);
  return param_1;
}



