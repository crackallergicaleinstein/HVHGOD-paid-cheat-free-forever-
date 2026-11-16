// FUN_1805d8810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d8810 */

void FUN_1805d8810(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  uVar2 = param_1[6];
  if (lVar1 != 0) {
    FUN_1805d8230(lVar1);
    FUN_18057abd0(uVar2,lVar1);
    param_1[2] = 0;
  }
  if (param_1[4] == 0) {
    FUN_18057abd0(uVar2,*param_1);
    *param_1 = 0;
  }
  return;
}



