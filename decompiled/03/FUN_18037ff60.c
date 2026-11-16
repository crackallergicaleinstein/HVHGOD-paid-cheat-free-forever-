// FUN_18037ff60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037ff60 */

longlong FUN_18037ff60(void)

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
  lVar5 = DAT_180902518;
  lVar2 = DAT_1808da460;
  if ((DAT_180902518 == DAT_1808da460) && (DAT_180c70cd0 != 0)) {
    return DAT_180c70cd0;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70ce0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902530);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090257c == 0x7fffffff) {
    DAT_18090257c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902518 == lVar2) {
    if ((DAT_180c70cd0 != 0) || (UVar4 < DAT_180c70ce0)) goto LAB_1803800d0;
  }
  else {
    DAT_180902528 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48895C24??48896C24??48897424??48894C24??5741544155415641574883EC20486302" +
             lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180824e10;
  local_28 = "patterns::setup_fog";
  local_20 = 0x13;
  DAT_180c70cd0 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902518 = lVar2;
  DAT_180c70ce0 = 0xffffffffffffffff;
  if (DAT_180c70cd0 == 0) {
    DAT_180c70ce0 = DAT_180902528 + UVar4;
    uVar6 = 60000;
    if (DAT_180902528 < 60000) {
      uVar6 = DAT_180902528 * 2;
    }
  }
  DAT_180902528 = uVar6;
LAB_1803800d0:
  lVar2 = DAT_180c70cd0;
  FUN_1805f68fc(&DAT_180902530);
  return lVar2;
}



