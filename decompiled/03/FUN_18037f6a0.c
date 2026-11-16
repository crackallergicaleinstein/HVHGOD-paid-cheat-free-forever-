// FUN_18037f6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037f6a0 */

longlong FUN_18037f6a0(void)

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
  lVar5 = DAT_180902770;
  lVar2 = DAT_1808da460;
  if ((DAT_180902770 == DAT_1808da460) && (DAT_180c70d40 != 0)) {
    return DAT_180c70d40;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70d18)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809026c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090270c == 0x7fffffff) {
    DAT_18090270c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902770 == lVar2) {
    if ((DAT_180c70d40 != 0) || (UVar4 < DAT_180c70d18)) goto LAB_18037f810;
  }
  else {
    DAT_1809026b0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("scenesystem.dll:488D05*????????488907488B7C2448+8~"[lVar1] != '\0');
  local_38 = "scenesystem.dll:488D05*????????488907488B7C2448+8~";
  local_28 = "patterns::draw_scene_object";
  local_20 = 0x1b;
  DAT_180c70d40 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902770 = lVar2;
  DAT_180c70d18 = 0xffffffffffffffff;
  if (DAT_180c70d40 == 0) {
    DAT_180c70d18 = DAT_1809026b0 + UVar4;
    uVar6 = 60000;
    if (DAT_1809026b0 < 60000) {
      uVar6 = DAT_1809026b0 * 2;
    }
  }
  DAT_1809026b0 = uVar6;
LAB_18037f810:
  lVar2 = DAT_180c70d40;
  FUN_1805f68fc(&DAT_1809026c0);
  return lVar2;
}



