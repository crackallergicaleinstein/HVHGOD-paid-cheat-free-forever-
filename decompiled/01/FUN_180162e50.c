// FUN_180162e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162e50 */

bool FUN_180162e50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_18 = (undefined8 *)*param_2;
  }
  local_10 = param_2[2];
  iVar1 = FUN_180162c60(param_1,&local_18);
  return iVar1 == 0;
}



