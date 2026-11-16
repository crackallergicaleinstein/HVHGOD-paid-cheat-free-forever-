// FUN_18017dfa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017dfa0 */

void FUN_18017dfa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar1 = FUN_1805fbbd8(param_1,param_2);
  *param_3 = CONCAT44(uStack_14,uVar1);
  param_3[1] = &PTR_vftable_1808d7db8;
  return;
}



