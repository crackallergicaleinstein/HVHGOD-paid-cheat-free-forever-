// FUN_18049d430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049d430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18049d430(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_50;
  undefined1 local_40;
  char **local_38;
  char **local_30;
  longlong local_28;
  char *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_18 = &DAT_180829dc0;
  local_20 = "Visible";
  local_38 = &local_20;
  local_30 = &local_18;
  local_28 = *(longlong *)(param_1 + 8);
  FUN_180493f00();
  FUN_18049d1c0(&local_38);
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  if (**(longlong **)(param_1 + 0x10) != 0) {
    local_20 = &DAT_18082a240;
    local_18 = "Behind Walls";
    local_38 = &local_18;
    local_30 = &local_20;
    local_28 = **(longlong **)(param_1 + 0x10);
    FUN_180493f00();
    FUN_18049d1c0(&local_38);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
  }
  DAT_1808e4e38 = 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) == lVar1 + 0x35e0) {
    FUN_180488c60();
    FUN_180488a80("Trigger",&DAT_18082a244);
    local_60 = 0;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
    FUN_1804898a0("Only on Kill",lVar1 + 0x36d8,&DAT_18082a284,1);
    local_40 = 1;
    local_50 = &DAT_18082a278;
    local_58 = 1;
    local_60 = CONCAT44(local_60._4_4_,0x3dcccccd);
    local_68 = "%.1f s";
    FUN_18048a250("Display Time",lVar1 + 0x36dc,0x3e4ccccd,0x40000000);
    FUN_180488f10();
  }
}



