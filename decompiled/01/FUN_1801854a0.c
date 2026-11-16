// FUN_1801854a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801854a0 */

longlong FUN_1801854a0(void)

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
  lVar2 = DAT_1808da460;
  lVar5 = DAT_1808d9680;
  if ((DAT_1808d9680 == DAT_1808da460) && (DAT_180bb8790 != 0)) {
    return DAT_180bb8790;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180bb8788)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1808d9630);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d967c == 0x7fffffff) {
    DAT_1808d967c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1808d9680 == lVar2) {
    if ((DAT_180bb8790 != 0) || (UVar4 < DAT_180bb8788)) goto LAB_180185610;
  }
  else {
    DAT_1808d9620 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:488D15????????488BCB>E8????????488BD7488BCB"[lVar1] != '\0');
  local_38 = "client.dll:488D15????????488BCB>E8????????488BD7488BCB";
  local_28 = "patterns::set_player_model";
  local_20 = 0x1a;
  DAT_180bb8790 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1808d9680 = lVar2;
  DAT_180bb8788 = 0xffffffffffffffff;
  if (DAT_180bb8790 == 0) {
    DAT_180bb8788 = DAT_1808d9620 + UVar4;
    uVar6 = 60000;
    if (DAT_1808d9620 < 60000) {
      uVar6 = DAT_1808d9620 * 2;
    }
  }
  DAT_1808d9620 = uVar6;
LAB_180185610:
  lVar5 = DAT_180bb8790;
  FUN_1805f68fc(&DAT_1808d9630);
  return lVar5;
}



