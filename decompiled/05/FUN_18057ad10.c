// FUN_18057ad10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ad10 */

longlong FUN_18057ad10(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_18057ac40();
  if ((lVar1 != 0) && (param_3 < param_4)) {
    FUN_18063ab10(param_2 * param_3 + lVar1,0,(longlong)((param_4 - param_3) * param_2));
  }
  *param_6 = 0;
  return lVar1;
}



