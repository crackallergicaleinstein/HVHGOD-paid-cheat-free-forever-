// FUN_18037e520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037e520 */

longlong FUN_18037e520(void)

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
  lVar5 = DAT_180902bc8;
  lVar2 = DAT_1808da460;
  if ((DAT_180902bc8 == DAT_1808da460) && (DAT_180c70de8 != 0)) {
    return DAT_180c70de8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70df0)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902be0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902c2c == 0x7fffffff) {
    DAT_180902c2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_180902bc8 == lVar2) {
    if ((DAT_180c70de8 != 0) || (UVar4 < DAT_180c70df0)) goto LAB_18037e690;
  }
  else {
    DAT_180902bd0 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:90200000488D05*????????48890733D2+78~"[lVar1] != '\0');
  local_38 = "client.dll:90200000488D05*????????48890733D2+78~";
  local_28 = "patterns::add_entity";
  local_20 = 0x14;
  DAT_180c70de8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_180902bc8 = lVar2;
  DAT_180c70df0 = 0xffffffffffffffff;
  if (DAT_180c70de8 == 0) {
    DAT_180c70df0 = DAT_180902bd0 + UVar4;
    uVar6 = 60000;
    if (DAT_180902bd0 < 60000) {
      uVar6 = DAT_180902bd0 * 2;
    }
  }
  DAT_180902bd0 = uVar6;
LAB_18037e690:
  lVar2 = DAT_180c70de8;
  FUN_1805f68fc(&DAT_180902be0);
  return lVar2;
}



