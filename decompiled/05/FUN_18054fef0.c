// FUN_18054fef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054fef0 */

undefined1 FUN_18054fef0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 local_18 [2];
  
  puVar1 = (undefined8 *)param_1[1];
  param_1 = (undefined8 *)*param_1;
  local_18[0] = param_2;
  while( true ) {
    if (param_1 == puVar1) {
      return 0;
    }
    cVar2 = FUN_18051eb20(local_18,*param_1);
    if (cVar2 != '\0') break;
    param_1 = param_1 + 1;
  }
  return 1;
}



