// FUN_1801d6360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6360 */

int FUN_1801d6360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_18015ace0();
  iVar1 = FUN_18060e7a0(*puVar2 | 2,0,0,param_1,0,&local_res10);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



