// FUN_1801aeb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aeb70 */

undefined4 * FUN_1801aeb70(undefined4 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res10 [6];
  
  if (param_2 != 0) {
    local_res10[0] = 0;
    cVar1 = FUN_1804514f0(local_res10,param_2,4);
    if (cVar1 != '\0') {
      *param_1 = local_res10[0];
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



