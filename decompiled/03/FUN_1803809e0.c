// FUN_1803809e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803809e0 */

longlong FUN_1803809e0(void)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *local_38;
  longlong local_30;
  char *local_28;
  undefined8 local_20;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_180902168;
  lVar2 = DAT_1808da460;
  if ((DAT_180902168 == DAT_1808da460) && (DAT_180c70c40 != 0)) {
    return DAT_180c70c40;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70c20)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902050);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090209c == 0x7fffffff) {
    DAT_18090209c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902168 == lVar2) {
    if ((DAT_180c70c40 != 0) || (UVar4 < DAT_180c70c20)) goto LAB_180380b50;
  }
  else {
    DAT_180902040 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:>E8????????4C8BF048894588E8????????488BF048894580" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180826b78;
  local_28 = "patterns::overhead_view_pawn";
  local_20 = 0x1c;
  DAT_180c70c40 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902168 = lVar2;
  DAT_180c70c20 = 0xffffffffffffffff;
  if (DAT_180c70c40 == 0) {
    DAT_180c70c20 = DAT_180902040 + UVar4;
    uVar6 = 60000;
    if (DAT_180902040 < 60000) {
      uVar6 = DAT_180902040 * 2;
    }
  }
  DAT_180902040 = uVar6;
LAB_180380b50:
  lVar2 = DAT_180c70c40;
  FUN_1805f68fc(&DAT_180902050);
  return lVar2;
}



