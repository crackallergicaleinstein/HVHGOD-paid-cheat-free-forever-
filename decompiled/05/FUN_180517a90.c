// FUN_180517a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517a90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180517a90(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_70;
  undefined4 local_68;
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_58 = &local_48;
  local_48 = DAT_1808e6650;
  uStack_40 = uRam00000001808e6658;
  uStack_38 = DAT_1808e6660;
  uStack_30 = DAT_1808e6668;
  DAT_1808e6660 = 0;
  DAT_1808e6668 = 0xf;
  DAT_1808e6650 = DAT_1808e6650 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_180113930(&DAT_1808e6650,"Ragebot / Limiters",0x12);
  FUN_180488c60();
  local_58 = (ulonglong *)0x180858368;
  local_50 = 7;
  local_80 = FUN_180515fb0(&local_58);
  local_70 = 0;
  local_88 = 1;
  uVar2 = 0x3f800000;
  local_90 = 0x3f800000;
  local_98 = "%.0f deg";
  cVar1 = FUN_18048a250("Aim FOV",&DAT_180cadbd8,0,0x43340000);
  if (cVar1 != '\0') {
    FUN_18050cd00();
  }
  local_58 = (ulonglong *)0x180858428;
  local_50 = 9;
  local_80 = FUN_180515fb0(&local_58);
  local_70 = 0;
  local_88 = 1;
  local_98 = "%.0f%%";
  local_90 = uVar2;
  cVar1 = FUN_18048a250("Aim Speed",&DAT_180cadbdc,0,0x42c80000);
  if (cVar1 != '\0') {
    FUN_18050cd00();
  }
  FUN_180488f10();
  FUN_180488c60();
  local_98 = "%.0f ms";
  FUN_180517040("Reaction Time",&DAT_180cadbe0,0,500);
  local_98 = "%.0f ms";
  FUN_180517040("Kill Delay",&DAT_180cadbe4,0,1000);
  FUN_180488f10();
  FUN_180488c60();
  local_98 = "%.0f";
  FUN_180517040("Max Walls",&DAT_180cadbe8,0,4);
  local_98 = "%.0f ms";
  FUN_180517040("Backtrack",&DAT_180cadbec,0,200);
  FUN_180488f10();
  FUN_18015c010(&DAT_1808e6650);
  DAT_1808e6650 = local_48;
  uRam00000001808e6658 = uStack_40;
  DAT_1808e6660 = uStack_38;
  DAT_1808e6668 = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0xf;
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_18015c010(&local_48);
}



