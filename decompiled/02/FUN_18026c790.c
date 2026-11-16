// FUN_18026c790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026c790 */

longlong FUN_18026c790(void)

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
  lVar5 = DAT_1808f1c00;
  lVar2 = DAT_1808da460;
  if ((DAT_1808f1c00 == DAT_1808da460) && (DAT_180c65118 != 0)) {
    return DAT_180c65118;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c65110)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1808f1c10);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f1c5c == 0x7fffffff) {
    DAT_1808f1c5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1808f1c00 == lVar2) {
    if ((DAT_180c65118 != 0) || (UVar4 < DAT_180c65110)) goto LAB_18026c900;
  }
  else {
    DAT_1808f1c08 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    pcVar1 = "lient.dll:48895C24??48896C24??48897424??57415641574883EC40F20F10024D8D7108" + lVar5;
    lVar5 = local_30;
  } while (*pcVar1 != '\0');
  local_38 = &DAT_180824ce0;
  local_28 = "patterns::trace_bullet_data_init";
  local_20 = 0x20;
  DAT_180c65118 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1808f1c00 = lVar2;
  DAT_180c65110 = 0xffffffffffffffff;
  if (DAT_180c65118 == 0) {
    DAT_180c65110 = DAT_1808f1c08 + UVar4;
    uVar6 = 60000;
    if (DAT_1808f1c08 < 60000) {
      uVar6 = DAT_1808f1c08 * 2;
    }
  }
  DAT_1808f1c08 = uVar6;
LAB_18026c900:
  lVar2 = DAT_180c65118;
  FUN_1805f68fc(&DAT_1808f1c10);
  return lVar2;
}



