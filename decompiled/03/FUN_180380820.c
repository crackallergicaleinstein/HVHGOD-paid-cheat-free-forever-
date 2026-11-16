// FUN_180380820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380820 */

longlong FUN_180380820(void)

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
  lVar5 = DAT_180902160;
  lVar2 = DAT_1808da460;
  if ((DAT_180902160 == DAT_1808da460) && (DAT_180c70c38 != 0)) {
    return DAT_180c70c38;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70c30)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902110);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090215c == 0x7fffffff) {
    DAT_18090215c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902160 == lVar2) {
    if ((DAT_180c70c38 != 0) || (UVar4 < DAT_180c70c30)) goto LAB_180380990;
  }
  else {
    DAT_180902170 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D"[lVar1] != '\0');
  local_38 = "client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D";
  local_28 = "patterns::overhead_visibility_return";
  local_20 = 0x24;
  DAT_180c70c38 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902160 = lVar2;
  DAT_180c70c30 = 0xffffffffffffffff;
  if (DAT_180c70c38 == 0) {
    DAT_180c70c30 = DAT_180902170 + UVar4;
    uVar6 = 60000;
    if (DAT_180902170 < 60000) {
      uVar6 = DAT_180902170 * 2;
    }
  }
  DAT_180902170 = uVar6;
LAB_180380990:
  lVar2 = DAT_180c70c38;
  FUN_1805f68fc(&DAT_180902110);
  return lVar2;
}



