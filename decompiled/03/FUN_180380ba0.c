// FUN_180380ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380ba0 */

longlong FUN_180380ba0(void)

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
  lVar5 = DAT_180901ea8;
  lVar2 = DAT_1808da460;
  if ((DAT_180901ea8 == DAT_1808da460) && (DAT_180c70bd8 != 0)) {
    return DAT_180c70bd8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70be0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180901f20);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180901f6c == 0x7fffffff) {
    DAT_180901f6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180901ea8 == lVar2) {
    if ((DAT_180c70bd8 != 0) || (UVar4 < DAT_180c70be0)) goto LAB_180380d10;
  }
  else {
    DAT_180901f10 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:41FFD1448B45??488D55??498BCD0F28F0E8????????+3" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180826fe0;
  local_28 = "patterns::base_fire_guns_get_inaccuracy_alt";
  local_20 = 0x2b;
  DAT_180c70bd8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180901ea8 = lVar2;
  DAT_180c70be0 = 0xffffffffffffffff;
  if (DAT_180c70bd8 == 0) {
    DAT_180c70be0 = DAT_180901f10 + UVar4;
    uVar6 = 60000;
    if (DAT_180901f10 < 60000) {
      uVar6 = DAT_180901f10 * 2;
    }
  }
  DAT_180901f10 = uVar6;
LAB_180380d10:
  lVar2 = DAT_180c70bd8;
  FUN_1805f68fc(&DAT_180901f20);
  return lVar2;
}



