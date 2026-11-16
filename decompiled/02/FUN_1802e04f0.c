// FUN_1802e04f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e04f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e04f0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [64];
  undefined1 auStack_508 [32];
  char *local_4e8;
  longlong local_4e0;
  char *local_4d8;
  undefined8 local_4d0;
  undefined *local_4c8;
  undefined1 local_4b8 [1080];
  undefined4 local_80;
  char **local_78;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_508;
  auVar8 = ZEXT1664(in_XMM1);
  FUN_18063ab10(local_4b8,0,0x448);
  FUN_18015abc0(local_50,0x10,&DAT_1807c6e40,(double)(auVar8._0_4_ / 100.0));
  local_68 = "playvol";
  local_58 = local_50;
  local_80 = 3;
  local_78 = &local_68;
  local_60 = param_1;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fc518;
  lVar2 = DAT_1808da460;
  if ((DAT_1808fc518 == DAT_1808da460) && (pcVar6 = (code *)DAT_180c6e920, DAT_180c6e920 != 0))
  goto LAB_1802e0706;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c6e908)) {
  }
  local_4c8 = &DAT_1808fc520;
  iVar3 = FUN_1805f68d0(&DAT_1808fc520);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fc56c == 0x7fffffff) {
    DAT_1808fc56c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar7 = 1000;
  if (DAT_1808fc518 == lVar2) {
    if ((DAT_180c6e920 == 0) && (DAT_180c6e908 <= UVar4)) goto LAB_1802e0669;
  }
  else {
    DAT_1808fc570 = 1000;
LAB_1802e0669:
    lVar5 = -1;
    do {
      local_4e0 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = local_4e0;
    } while ("soundsystem.dll:4C8BDC55415541564157"[lVar1] != '\0');
    local_4e8 = "soundsystem.dll:4C8BDC55415541564157";
    local_4d8 = "patterns::play_sound";
    local_4d0 = 0x14;
    DAT_180c6e920 = FUN_1800e5d20(&local_4d8,&local_4e8);
    DAT_1808fc518 = lVar2;
    DAT_180c6e908 = 0xffffffffffffffff;
    if (DAT_180c6e920 == 0) {
      DAT_180c6e908 = DAT_1808fc570 + UVar4;
      uVar7 = 60000;
      if (DAT_1808fc570 < 60000) {
        uVar7 = DAT_1808fc570 * 2;
      }
    }
    DAT_1808fc570 = uVar7;
  }
  pcVar6 = (code *)DAT_180c6e920;
  FUN_1805f68fc(&DAT_1808fc520);
  if (pcVar6 == (code *)0x0) {
  }
LAB_1802e0706:
  (*pcVar6)(0,local_4b8);
}



