// FUN_180619128 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619128 */

longlong FUN_180619128(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((byte)(param_3 - 1U) < 2) {
    lVar2 = 0;
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      lVar1 = lVar2 + 1;
      if (*param_1 != 10) {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
    }
    return lVar2 * 2;
  }
  lVar2 = 0;
  for (; param_1 != param_2; param_1 = (short *)((longlong)param_1 + 1)) {
    lVar1 = lVar2 + 1;
    if ((char)*param_1 != '\n') {
      lVar1 = lVar2;
    }
    lVar2 = lVar1;
  }
  return lVar2;
}



