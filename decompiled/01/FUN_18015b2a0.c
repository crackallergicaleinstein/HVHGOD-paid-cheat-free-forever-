// FUN_18015b2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b2a0 */

undefined8 * FUN_18015b2a0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    puVar2 = (undefined8 *)FUN_18015b150(param_1,param_3,local_res8,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_3;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_18063aed0((longlong)puVar2 + lVar1,param_2,param_3);
  *(undefined1 *)((longlong)puVar2 + lVar1 + param_3) = 0;
  return param_1;
}



