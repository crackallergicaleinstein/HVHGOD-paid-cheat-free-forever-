// FUN_1801a7860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a7860 */

longlong * FUN_1801a7860(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  *param_1 = 0;
  lVar3 = *param_2;
  *param_1 = lVar3;
  lVar1 = param_2[1];
  if (lVar3 == lVar1) {
    *param_1 = lVar3;
    return param_1;
  }
  do {
    cVar2 = FUN_180195d90(lVar3,param_3);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 0x48;
  } while (lVar3 != lVar1);
  *param_1 = lVar3;
  return param_1;
}



