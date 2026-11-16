// FUN_1806213f4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806213f4 */

BOOL FUN_1806213f4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_180bb20f8 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW(FUN_1806213e0,1);
  DAT_180bb20f8 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}



