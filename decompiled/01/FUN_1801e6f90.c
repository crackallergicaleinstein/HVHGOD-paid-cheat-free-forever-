// FUN_1801e6f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e6f90 */

longlong FUN_1801e6f90(void)

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
  lVar5 = DAT_1808e6f38;
  lVar2 = DAT_1808da460;
  if ((DAT_1808e6f38 == DAT_1808da460) && (DAT_180c631b0 != 0)) {
    return DAT_180c631b0;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c631a8)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1808e6ee0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e6f2c == 0x7fffffff) {
    DAT_1808e6f2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1808e6f38 == lVar2) {
    if ((DAT_180c631b0 != 0) || (UVar4 < DAT_180c631a8)) goto LAB_1801e7100;
  }
  else {
    DAT_1808e6f30 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:488D8F????????488B5C24384883C4205FE9????????"[lVar1] != '\0');
  local_38 = "client.dll:488D8F????????488B5C24384883C4205FE9????????";
  local_28 = "patterns::weapon_holster_cache_refresh_site";
  local_20 = 0x2b;
  DAT_180c631b0 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1808e6f38 = lVar2;
  DAT_180c631a8 = 0xffffffffffffffff;
  if (DAT_180c631b0 == 0) {
    DAT_180c631a8 = DAT_1808e6f30 + UVar4;
    uVar6 = 60000;
    if (DAT_1808e6f30 < 60000) {
      uVar6 = DAT_1808e6f30 * 2;
    }
  }
  DAT_1808e6f30 = uVar6;
LAB_1801e7100:
  lVar2 = DAT_180c631b0;
  FUN_1805f68fc(&DAT_1808e6ee0);
  return lVar2;
}



