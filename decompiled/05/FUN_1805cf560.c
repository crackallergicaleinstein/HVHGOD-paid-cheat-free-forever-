// FUN_1805cf560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cf560 */

int FUN_1805cf560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int local_res8 [2];
  
  puVar1 = (undefined8 *)FUN_18057aad0(param_1,8,local_res8);
  if (local_res8[0] == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
    return 0;
  }
  *param_2 = puVar1;
  return local_res8[0];
}



