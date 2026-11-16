// FUN_18037fda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037fda0 */

longlong FUN_18037fda0(void)

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
  lVar5 = DAT_180902640;
  lVar2 = DAT_1808da460;
  if ((DAT_180902640 == DAT_1808da460) && (DAT_180c70cf8 != 0)) {
    return DAT_180c70cf8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70cf0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809025f0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090263c == 0x7fffffff) {
    DAT_18090263c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902640 == lVar2) {
    if ((DAT_180c70cf8 != 0) || (UVar4 < DAT_180c70cf0)) goto LAB_18037ff10;
  }
  else {
    DAT_180902520 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48895C24184889742420574883EC20488D058AE04A01" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180825a00;
  local_28 = "patterns::parse_report_hit";
  local_20 = 0x1a;
  DAT_180c70cf8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902640 = lVar2;
  DAT_180c70cf0 = 0xffffffffffffffff;
  if (DAT_180c70cf8 == 0) {
    DAT_180c70cf0 = DAT_180902520 + UVar4;
    uVar6 = 60000;
    if (DAT_180902520 < 60000) {
      uVar6 = DAT_180902520 * 2;
    }
  }
  DAT_180902520 = uVar6;
LAB_18037ff10:
  lVar2 = DAT_180c70cf8;
  FUN_1805f68fc(&DAT_1809025f0);
  return lVar2;
}



