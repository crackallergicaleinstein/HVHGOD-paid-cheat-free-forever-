// FUN_180380660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380660 */

longlong FUN_180380660(void)

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
  lVar5 = DAT_1809023d0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809023d0 == DAT_1808da460) && (DAT_180c70ca8 != 0)) {
    return DAT_180c70ca8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70c88)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902380);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809023cc == 0x7fffffff) {
    DAT_1809023cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809023d0 == lVar2) {
    if ((DAT_180c70ca8 != 0) || (UVar4 < DAT_180c70c88)) goto LAB_1803807d0;
  }
  else {
    DAT_180902370 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48895C24??48896C24??48897424??574883EC20488BB9????????488BF1" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180824b30;
  local_28 = "patterns::update_fov_sensitivity";
  local_20 = 0x20;
  DAT_180c70ca8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809023d0 = lVar2;
  DAT_180c70c88 = 0xffffffffffffffff;
  if (DAT_180c70ca8 == 0) {
    DAT_180c70c88 = DAT_180902370 + UVar4;
    uVar6 = 60000;
    if (DAT_180902370 < 60000) {
      uVar6 = DAT_180902370 * 2;
    }
  }
  DAT_180902370 = uVar6;
LAB_1803807d0:
  lVar2 = DAT_180c70ca8;
  FUN_1805f68fc(&DAT_180902380);
  return lVar2;
}



