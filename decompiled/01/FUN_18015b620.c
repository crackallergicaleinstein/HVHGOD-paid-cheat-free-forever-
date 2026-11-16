// FUN_18015b620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b620 */

int * FUN_18015b620(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_1808d7dc8;
    return param_2;
  }
  iVar1 = FUN_1805fac08(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_1808d7db8;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_1808d7dc8;
  return param_2;
}



