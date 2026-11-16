// FUN_18037efa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037efa0 */

longlong FUN_18037efa0(void)

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
  lVar5 = DAT_1809028f0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809028f0 == DAT_1808da460) && (DAT_180c70d68 != 0)) {
    return DAT_180c70d68;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70d60)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1809028a0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809028ec == 0x7fffffff) {
    DAT_1809028ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809028f0 == lVar2) {
    if ((DAT_180c70d68 != 0) || (UVar4 < DAT_180c70d60)) goto LAB_18037f110;
  }
  else {
    DAT_180902900 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:4C8BDC535556574881ECD8000000488D05????????48C7442448????????"[lVar1] != '\0')
  ;
  local_38 = "client.dll:4C8BDC535556574881ECD8000000488D05????????48C7442448????????";
  local_28 = "patterns::render_view";
  local_20 = 0x15;
  DAT_180c70d68 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809028f0 = lVar2;
  DAT_180c70d60 = 0xffffffffffffffff;
  if (DAT_180c70d68 == 0) {
    DAT_180c70d60 = DAT_180902900 + UVar4;
    uVar6 = 60000;
    if (DAT_180902900 < 60000) {
      uVar6 = DAT_180902900 * 2;
    }
  }
  DAT_180902900 = uVar6;
LAB_18037f110:
  lVar2 = DAT_180c70d68;
  FUN_1805f68fc(&DAT_1809028a0);
  return lVar2;
}



