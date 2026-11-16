// FUN_1804aeff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aeff0 */

int FUN_1804aeff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_18015ace0();
  iVar1 = FUN_18060e7a0(*puVar2 | 1,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



