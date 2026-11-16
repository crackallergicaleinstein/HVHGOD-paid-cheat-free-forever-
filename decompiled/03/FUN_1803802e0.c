// FUN_1803802e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803802e0 */

longlong FUN_1803802e0(void)

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
  lVar5 = DAT_180902510;
  lVar2 = DAT_1808da460;
  if ((DAT_180902510 == DAT_1808da460) && (DAT_180c70cc8 != 0)) {
    return DAT_180c70cc8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70cc0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809024c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090250c == 0x7fffffff) {
    DAT_18090250c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902510 == lVar2) {
    if ((DAT_180c70cc8 != 0) || (UVar4 < DAT_180c70cc0)) goto LAB_180380450;
  }
  else {
    DAT_1809023e8 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("engine2.dll:>E8????????440F289424"[lVar1] != '\0');
  local_38 = "engine2.dll:>E8????????440F289424";
  local_28 = "patterns::set_postprocess_vec";
  local_20 = 0x1d;
  DAT_180c70cc8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902510 = lVar2;
  DAT_180c70cc0 = 0xffffffffffffffff;
  if (DAT_180c70cc8 == 0) {
    DAT_180c70cc0 = DAT_1809023e8 + UVar4;
    uVar6 = 60000;
    if (DAT_1809023e8 < 60000) {
      uVar6 = DAT_1809023e8 * 2;
    }
  }
  DAT_1809023e8 = uVar6;
LAB_180380450:
  lVar2 = DAT_180c70cc8;
  FUN_1805f68fc(&DAT_1809024c0);
  return lVar2;
}



