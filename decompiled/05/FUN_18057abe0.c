// FUN_18057abe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057abe0 */

longlong FUN_18057abe0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 < 1) {
    uVar1 = 0;
    if (param_2 < 0) {
      uVar1 = 6;
    }
    *param_3 = uVar1;
    return 0;
  }
  lVar2 = (**(code **)(param_1 + 8))();
  uVar1 = 0x40;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  return lVar2;
}



