// FUN_1803732a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803732a0 */

longlong FUN_1803732a0(void)

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
  lVar5 = DAT_180901740;
  lVar2 = DAT_1808da460;
  if ((DAT_180901740 == DAT_1808da460) && (DAT_180c6fa18 != 0)) {
    return DAT_180c6fa18;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c6fa20)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809016f0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090173c == 0x7fffffff) {
    DAT_18090173c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180901740 == lVar2) {
    if ((DAT_180c6fa18 != 0) || (UVar4 < DAT_180c6fa20)) goto LAB_180373410;
  }
  else {
    DAT_1809016e0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48896C24??48897424??574883EC20660F6ECA418BF0" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180824f18;
  local_28 = "patterns::set_shader_param_i";
  local_20 = 0x1c;
  DAT_180c6fa18 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180901740 = lVar2;
  DAT_180c6fa20 = 0xffffffffffffffff;
  if (DAT_180c6fa18 == 0) {
    DAT_180c6fa20 = DAT_1809016e0 + UVar4;
    uVar6 = 60000;
    if (DAT_1809016e0 < 60000) {
      uVar6 = DAT_1809016e0 * 2;
    }
  }
  DAT_1809016e0 = uVar6;
LAB_180373410:
  lVar2 = DAT_180c6fa18;
  FUN_1805f68fc(&DAT_1809016f0);
  return lVar2;
}



