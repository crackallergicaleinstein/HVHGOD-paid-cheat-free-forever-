// FUN_18015acf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015acf0 */

int FUN_18015acf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18015ace0();
  iVar1 = FUN_18060e5dc(*puVar2,param_1,param_2,param_3,param_4,0,param_6);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



