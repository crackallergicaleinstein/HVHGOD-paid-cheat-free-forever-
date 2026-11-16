// FUN_1801ad700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad700 */

undefined8 * FUN_1801ad700(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = 0;
    cVar1 = FUN_1804514f0(local_res10,param_2,8);
    if (cVar1 != '\0') {
      *param_1 = local_res10[0];
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



