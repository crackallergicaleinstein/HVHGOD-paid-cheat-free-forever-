// FUN_18037f160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037f160 */

longlong FUN_18037f160(void)

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
  lVar5 = DAT_1809028f8;
  lVar2 = DAT_1808da460;
  if ((DAT_1809028f8 == DAT_1808da460) && (DAT_180c70d70 != 0)) {
    return DAT_180c70d70;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70d50)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809027e0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090282c == 0x7fffffff) {
    DAT_18090282c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809028f8 == lVar2) {
    if ((DAT_180c70d70 != 0) || (UVar4 < DAT_180c70d50)) goto LAB_18037f2d0;
  }
  else {
    DAT_1809027d0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("scenesystem.dll:4585C90F8E????????4C8BDC"[lVar1] != '\0');
  local_38 = "scenesystem.dll:4585C90F8E????????4C8BDC";
  local_28 = "patterns::draw_skybox_array";
  local_20 = 0x1b;
  DAT_180c70d70 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809028f8 = lVar2;
  DAT_180c70d50 = 0xffffffffffffffff;
  if (DAT_180c70d70 == 0) {
    DAT_180c70d50 = DAT_1809027d0 + UVar4;
    uVar6 = 60000;
    if (DAT_1809027d0 < 60000) {
      uVar6 = DAT_1809027d0 * 2;
    }
  }
  DAT_1809027d0 = uVar6;
LAB_18037f2d0:
  lVar2 = DAT_180c70d70;
  FUN_1805f68fc(&DAT_1809027e0);
  return lVar2;
}



