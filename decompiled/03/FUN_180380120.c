// FUN_180380120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180380120 */

longlong FUN_180380120(void)

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
  lVar5 = DAT_1809024b0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809024b0 == DAT_1808da460) && (DAT_180c70cd8 != 0)) {
    return DAT_180c70cd8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70cb8)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902460);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809024ac == 0x7fffffff) {
    DAT_1809024ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809024b0 == lVar2) {
    if ((DAT_180c70cd8 != 0) || (UVar4 < DAT_180c70cb8)) goto LAB_180380290;
  }
  else {
    DAT_180902450 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:BA870A4724F30F1040??0FC6C0000F1145??660F7F45??>E8????????" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180825080;
  local_28 = "patterns::set_shader_param";
  local_20 = 0x1a;
  DAT_180c70cd8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809024b0 = lVar2;
  DAT_180c70cb8 = 0xffffffffffffffff;
  if (DAT_180c70cd8 == 0) {
    DAT_180c70cb8 = DAT_180902450 + UVar4;
    uVar6 = 60000;
    if (DAT_180902450 < 60000) {
      uVar6 = DAT_180902450 * 2;
    }
  }
  DAT_180902450 = uVar6;
LAB_180380290:
  lVar2 = DAT_180c70cd8;
  FUN_1805f68fc(&DAT_180902460);
  return lVar2;
}



