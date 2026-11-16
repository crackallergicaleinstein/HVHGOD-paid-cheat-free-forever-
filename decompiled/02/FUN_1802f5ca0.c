// FUN_1802f5ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f5ca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f5ca0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  longlong local_60;
  undefined *local_58;
  undefined8 local_50;
  char *local_48;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_50 = 0;
  local_48 = "attacker";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808febe0;
  lVar6 = DAT_1808da460;
  if ((DAT_1808febe0 == DAT_1808da460) && (lVar7 = DAT_180c6efb8, DAT_180c6efb8 != 0))
  goto LAB_1802f5e46;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar6) && (UVar4 < DAT_180c6efc0)) {
  }
  local_58 = &DAT_1808febf0;
  iVar3 = FUN_1805f68d0(&DAT_1808febf0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fec3c == 0x7fffffff) {
    DAT_1808fec3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar8 = 1000;
  if (DAT_1808febe0 == lVar6) {
    if ((DAT_180c6efb8 == 0) && (DAT_180c6efc0 <= UVar4)) goto LAB_1802f5dac;
  }
  else {
    DAT_1808feb80 = 1000;
LAB_1802f5dac:
    lVar5 = -1;
    do {
      local_60 = lVar5 + 1;
      pcVar1 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar5;
      lVar5 = local_60;
    } while (*pcVar1 != '\0');
    local_68 = &DAT_1808267c0;
    local_78 = "patterns::game_event_get_controller";
    local_70 = 0x23;
    DAT_180c6efb8 = FUN_1800e5d20(&local_78,&local_68);
    DAT_1808febe0 = lVar6;
    DAT_180c6efc0 = 0xffffffffffffffff;
    if (DAT_180c6efb8 == 0) {
      DAT_180c6efc0 = DAT_1808feb80 + UVar4;
      uVar8 = 60000;
      if (DAT_1808feb80 < 60000) {
        uVar8 = DAT_1808feb80 * 2;
      }
    }
    DAT_1808feb80 = uVar8;
  }
  lVar7 = DAT_180c6efb8;
  FUN_1805f68fc(&DAT_1808febf0);
  if (lVar7 == 0) {
  }
LAB_1802f5e46:
  cVar2 = FUN_1804513c0(lVar7,1,2);
  if (cVar2 != '\0') {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    FUN_180252bd0(&local_78,lVar7,param_2,&local_50);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
  }
}



