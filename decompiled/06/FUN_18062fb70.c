// FUN_18062fb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062fb70 */

short * FUN_18062fb70(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_1;
  while( true ) {
    if (sVar1 == 0) {
      return (short *)0x0;
    }
    lVar2 = FUN_18063639c(param_2,sVar1);
    if (lVar2 != 0) break;
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}



