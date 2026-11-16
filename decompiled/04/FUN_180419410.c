// FUN_180419410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419410 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180419410(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 *local_68;
  longlong local_60;
  char *local_58;
  undefined8 local_50;
  undefined *local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1809c0d68;
  lVar2 = DAT_1808da460;
  if ((DAT_1809c0d68 == DAT_1808da460) && (pcVar6 = (code *)DAT_180c7d7c0, DAT_180c7d7c0 != 0))
  goto LAB_1804195a6;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c7d7c8)) {
    return param_2;
  }
  local_48 = &DAT_1809c0d80;
  iVar3 = FUN_1805f68d0(&DAT_1809c0d80);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809c0dcc == 0x7fffffff) {
    DAT_1809c0dcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar7 = 1000;
  if (DAT_1809c0d68 == lVar2) {
    if ((DAT_180c7d7c0 == 0) && (DAT_180c7d7c8 <= UVar4)) goto LAB_180419509;
  }
  else {
    DAT_1809c0d70 = 1000;
LAB_180419509:
    lVar5 = -1;
    do {
      local_60 = lVar5 + 1;
      pcVar1 = "lient.dll:48895C24??48897424??574883EC??0FB641??33FF24" + lVar5;
      lVar5 = local_60;
    } while (*pcVar1 != '\0');
    local_68 = &DAT_180824bf8;
    local_58 = "patterns::trace_filter_init";
    local_50 = 0x1b;
    DAT_180c7d7c0 = FUN_1800e5d20(&local_58,&local_68);
    DAT_1809c0d68 = lVar2;
    DAT_180c7d7c8 = 0xffffffffffffffff;
    if (DAT_180c7d7c0 == 0) {
      DAT_180c7d7c8 = DAT_1809c0d70 + UVar4;
      uVar7 = 60000;
      if (DAT_1809c0d70 < 60000) {
        uVar7 = DAT_1809c0d70 * 2;
      }
    }
    DAT_1809c0d70 = uVar7;
  }
  pcVar6 = (code *)DAT_180c7d7c0;
  FUN_1805f68fc(&DAT_1809c0d80);
  if (pcVar6 == (code *)0x0) {
    return param_2;
  }
LAB_1804195a6:
  (*pcVar6)(param_2,param_3,0x1c3003,4,7);
  return param_2;
}



