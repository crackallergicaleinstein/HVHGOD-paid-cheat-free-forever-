// FUN_1801d63c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d63c0 */

int FUN_1801d63c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_18015ace0();
  iVar1 = FUN_18060e9f4(*puVar2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



