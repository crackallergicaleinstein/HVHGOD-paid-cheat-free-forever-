// FUN_18015abc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015abc0 */

int FUN_18015abc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_18015ace0();
  iVar1 = FUN_18060e7a0(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



