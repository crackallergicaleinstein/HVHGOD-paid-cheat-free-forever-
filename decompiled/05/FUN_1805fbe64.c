// FUN_1805fbe64 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbe64 */

longlong * FUN_1805fbe64(longlong *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  if ((char *)*param_1 != param_2) {
    if ((char *)*param_1 != (char *)0x0) {
      thunk_FUN_180621380();
    }
    *param_1 = 0;
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      pcVar2 = param_2;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      lVar3 = _malloc_base(pcVar2 + (1 - (longlong)param_2));
      *param_1 = lVar3;
      if (lVar3 != 0) {
        FUN_18063aed0(lVar3,param_2,pcVar2 + (1 - (longlong)param_2));
      }
    }
  }
  return param_1;
}



