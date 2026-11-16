// FUN_1803804a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803804a0 */

longlong FUN_1803804a0(void)

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
  lVar5 = DAT_1809023e0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809023e0 == DAT_1808da460) && (DAT_180c70ca0 != 0)) {
    return DAT_180c70ca0;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70cb0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902400);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_18090244c == 0x7fffffff) {
    DAT_18090244c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809023e0 == lVar2) {
    if ((DAT_180c70ca0 != 0) || (UVar4 < DAT_180c70cb0)) goto LAB_180380610;
  }
  else {
    DAT_1809023f0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:A8000000488D05*????????4C89742420+78~"[lVar1] != '\0');
  local_38 = "client.dll:A8000000488D05*????????4C89742420+78~";
  local_28 = "patterns::override_view";
  local_20 = 0x17;
  DAT_180c70ca0 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809023e0 = lVar2;
  DAT_180c70cb0 = 0xffffffffffffffff;
  if (DAT_180c70ca0 == 0) {
    DAT_180c70cb0 = DAT_1809023f0 + UVar4;
    uVar6 = 60000;
    if (DAT_1809023f0 < 60000) {
      uVar6 = DAT_1809023f0 * 2;
    }
  }
  DAT_1809023f0 = uVar6;
LAB_180380610:
  lVar2 = DAT_180c70ca0;
  FUN_1805f68fc(&DAT_180902400);
  return lVar2;
}



