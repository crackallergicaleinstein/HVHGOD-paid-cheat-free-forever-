// FUN_18062da50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062da50 */

undefined4 FUN_18062da50(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 2) {
    uVar1 = 4;
    uVar2 = 0x12;
  }
  else {
    if (param_3 != 3) {
      return param_2;
    }
    uVar2 = 0x11;
    uVar1 = 3;
  }
  FUN_180622560(&DAT_1806b23e0,0x14,param_2,uVar1,uVar2,0x22,param_1,0,1);
  return param_2;
}



