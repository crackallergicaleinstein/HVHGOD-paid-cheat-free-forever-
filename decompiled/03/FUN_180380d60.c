// FUN_180380d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380d60 */

longlong FUN_180380d60(void)

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
  lVar5 = DAT_180901e90;
  lVar2 = DAT_1808da460;
  if ((DAT_180901e90 == DAT_1808da460) && (DAT_180c70bc0 != 0)) {
    return DAT_180c70bc0;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70bb8)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180901e40);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180901e8c == 0x7fffffff) {
    DAT_180901e8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180901e90 == lVar2) {
    if ((DAT_180c70bc0 != 0) || (UVar4 < DAT_180c70bb8)) goto LAB_180380ed0;
  }
  else {
    DAT_180901ea0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:498BF0488BEA488BF9E8????????488BD8450F57C04885C00F84-18" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180826420;
  local_28 = "patterns::get_inaccuracy";
  local_20 = 0x18;
  DAT_180c70bc0 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180901e90 = lVar2;
  DAT_180c70bb8 = 0xffffffffffffffff;
  if (DAT_180c70bc0 == 0) {
    DAT_180c70bb8 = DAT_180901ea0 + UVar4;
    uVar6 = 60000;
    if (DAT_180901ea0 < 60000) {
      uVar6 = DAT_180901ea0 * 2;
    }
  }
  DAT_180901ea0 = uVar6;
LAB_180380ed0:
  lVar2 = DAT_180c70bc0;
  FUN_1805f68fc(&DAT_180901e40);
  return lVar2;
}



