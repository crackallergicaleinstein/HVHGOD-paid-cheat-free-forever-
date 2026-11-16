// FUN_18026c5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026c5d0 */

longlong FUN_18026c5d0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *local_38;
  longlong local_30;
  char *local_28;
  undefined8 local_20;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808f1cc8;
  lVar2 = DAT_1808da460;
  if ((DAT_1808f1cc8 == DAT_1808da460) && (DAT_180c65120 != 0)) {
    return DAT_180c65120;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c65128)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1808f1c70);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f1cbc == 0x7fffffff) {
    DAT_1808f1cbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1808f1cc8 == lVar2) {
    if ((DAT_180c65120 != 0) || (UVar4 < DAT_180c65128)) goto LAB_18026c740;
  }
  else {
    DAT_1808f1c60 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000"[lVar1] !=
           '\0');
  local_38 = "client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000";
  local_28 = "patterns::trace_ray";
  local_20 = 0x13;
  DAT_180c65120 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1808f1cc8 = lVar2;
  DAT_180c65128 = 0xffffffffffffffff;
  if (DAT_180c65120 == 0) {
    DAT_180c65128 = DAT_1808f1c60 + UVar4;
    uVar6 = 60000;
    if (DAT_1808f1c60 < 60000) {
      uVar6 = DAT_1808f1c60 * 2;
    }
  }
  DAT_1808f1c60 = uVar6;
LAB_18026c740:
  lVar2 = DAT_180c65120;
  FUN_1805f68fc(&DAT_1808f1c70);
  return lVar2;
}



