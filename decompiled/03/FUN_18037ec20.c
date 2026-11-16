// FUN_18037ec20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037ec20 */

longlong FUN_18037ec20(void)

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
  lVar5 = DAT_180902a30;
  lVar2 = DAT_1808da460;
  if ((DAT_180902a30 == DAT_1808da460) && (DAT_180c70d98 != 0)) {
    return DAT_180c70d98;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70d90)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809029e0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902a2c == 0x7fffffff) {
    DAT_180902a2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902a30 == lVar2) {
    if ((DAT_180c70d98 != 0) || (UVar4 < DAT_180c70d90)) goto LAB_18037ed90;
  }
  else {
    DAT_180902910 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:488B01488D5424204C8BF1FF9070050000+11"[lVar1] != '\0');
  local_38 = "client.dll:488B01488D5424204C8BF1FF9070050000+11";
  local_28 = "patterns::pawn_eye_update_return";
  local_20 = 0x20;
  DAT_180c70d98 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902a30 = lVar2;
  DAT_180c70d90 = 0xffffffffffffffff;
  if (DAT_180c70d98 == 0) {
    DAT_180c70d90 = DAT_180902910 + UVar4;
    uVar6 = 60000;
    if (DAT_180902910 < 60000) {
      uVar6 = DAT_180902910 * 2;
    }
  }
  DAT_180902910 = uVar6;
LAB_18037ed90:
  lVar2 = DAT_180c70d98;
  FUN_1805f68fc(&DAT_1809029e0);
  return lVar2;
}



