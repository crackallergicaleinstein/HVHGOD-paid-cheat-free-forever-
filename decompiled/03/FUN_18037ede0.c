// FUN_18037ede0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037ede0 */

longlong FUN_18037ede0(void)

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
  lVar5 = DAT_180902908;
  lVar2 = DAT_1808da460;
  if ((DAT_180902908 == DAT_1808da460) && (DAT_180c70d78 != 0)) {
    return DAT_180c70d78;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70d80)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902920);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090296c == 0x7fffffff) {
    DAT_18090296c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902908 == lVar2) {
    if ((DAT_180c70d78 != 0) || (UVar4 < DAT_180c70d80)) goto LAB_18037ef50;
  }
  else {
    DAT_180902918 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48895C2408574883EC20833D????????00488BFA488BD975??803D" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180826010;
  local_28 = "patterns::get_pawn_eye_angles";
  local_20 = 0x1d;
  DAT_180c70d78 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902908 = lVar2;
  DAT_180c70d80 = 0xffffffffffffffff;
  if (DAT_180c70d78 == 0) {
    DAT_180c70d80 = DAT_180902918 + UVar4;
    uVar6 = 60000;
    if (DAT_180902918 < 60000) {
      uVar6 = DAT_180902918 * 2;
    }
  }
  DAT_180902918 = uVar6;
LAB_18037ef50:
  lVar2 = DAT_180c70d78;
  FUN_1805f68fc(&DAT_180902920);
  return lVar2;
}



