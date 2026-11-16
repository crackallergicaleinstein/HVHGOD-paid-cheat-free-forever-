// FUN_180388db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180388db0 */

longlong FUN_180388db0(void)

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
  lVar5 = DAT_180903150;
  lVar2 = DAT_1808da460;
  if ((DAT_180903150 == DAT_1808da460) && (DAT_180c70ea0 != 0)) {
    return DAT_180c70ea0;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70e98)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180903100);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090314c == 0x7fffffff) {
    DAT_18090314c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180903150 == lVar2) {
    if ((DAT_180c70ea0 != 0) || (UVar4 < DAT_180c70e98)) goto LAB_180388f20;
  }
  else {
    DAT_180903098 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01"[lVar1] != '\0');
  local_38 = "resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01";
  local_28 = "patterns::resource_system_load";
  local_20 = 0x1e;
  DAT_180c70ea0 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180903150 = lVar2;
  DAT_180c70e98 = 0xffffffffffffffff;
  if (DAT_180c70ea0 == 0) {
    DAT_180c70e98 = DAT_180903098 + UVar4;
    uVar6 = 60000;
    if (DAT_180903098 < 60000) {
      uVar6 = DAT_180903098 * 2;
    }
  }
  DAT_180903098 = uVar6;
LAB_180388f20:
  lVar2 = DAT_180c70ea0;
  FUN_1805f68fc(&DAT_180903100);
  return lVar2;
}



