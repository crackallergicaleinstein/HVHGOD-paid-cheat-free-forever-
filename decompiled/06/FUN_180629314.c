// FUN_180629314 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180629314 */

void FUN_180629314(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = (longlong)param_4;
  cVar1 = __crt_time_is_leap_year<>(param_3);
  if (param_2 == 1) {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(&DAT_1806ba634 + lVar3 * 4);
    }
    else {
      iVar2 = *(int *)(&DAT_1806ba66c + lVar3 * 4);
    }
    iVar4 = param_3 + -1;
    iVar5 = (((int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2) + iVar2 + 1 +
             ((param_3 + 299) / 400 - iVar4 / 100) + param_3 * 0x16d + -0x63db) % 7;
    iVar4 = (param_5 * 7 - iVar5) + iVar2 + 1 + param_6;
    iVar2 = iVar4 + -7;
    if (param_6 < iVar5) {
      iVar2 = iVar4;
    }
    if (cVar1 == '\0') {
      iVar4 = *(int *)(&DAT_1806ba638 + lVar3 * 4);
    }
    else {
      iVar4 = (&DAT_1806ba670)[lVar3];
    }
    if ((param_5 == 5) && (iVar4 < iVar2)) {
      iVar2 = iVar2 + -7;
    }
  }
  else {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(&DAT_1806ba634 + lVar3 * 4);
    }
    else {
      iVar2 = *(int *)(&DAT_1806ba66c + lVar3 * 4);
    }
    iVar2 = iVar2 + param_7;
  }
  param_11 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
  if (param_1 == 0) {
    DAT_1808d7760 = param_3;
    DAT_1808d7764 = iVar2;
    DAT_1808d7768 = param_11;
    return;
  }
  DAT_1808d7774 = iVar2;
  DAT_1808d7778 = param_11;
  iVar2 = FUN_180628d28();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (DAT_1808d7778 < 0) {
    DAT_1808d7778 = DAT_1808d7778 + 86400000;
    DAT_1808d7774 = DAT_1808d7774 + -1;
  }
  else {
    if (DAT_1808d7778 < 86400000) {
      DAT_1808d7770 = param_3;
      return;
    }
    DAT_1808d7778 = DAT_1808d7778 + -86400000;
    DAT_1808d7774 = DAT_1808d7774 + 1;
  }
  DAT_1808d7770 = param_3;
  return;
}



