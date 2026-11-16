// FUN_18021a420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021a420 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021a420(undefined8 param_1,undefined2 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined2 local_138 [4];
  undefined1 local_130 [24];
  undefined1 local_118 [216];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_28 = param_3;
  FUN_1800cb400(param_3);
  local_148 = &DAT_180cc9e50;
  iVar1 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((DAT_180cca116 == '\0') && ((ulonglong)((DAT_180cc9ea8 - DAT_180cc9ea0) / 0x110) < 0x80)) {
    local_138[0] = param_2;
    FUN_18019f170(local_130,param_3);
    local_3c = 0xffffffff;
    local_38 = 0;
    local_30 = 0;
    local_2e = 0;
    local_40 = param_4;
    if (DAT_180cc9ea8 == DAT_180cc9eb0) {
      FUN_1802318f0(&DAT_180cc9ea0,DAT_180cc9ea8,local_138);
    }
    else {
      FUN_1802329a0(DAT_180cc9ea8,local_138);
      DAT_180cc9ea8 = DAT_180cc9ea8 + 0x110;
    }
    FUN_18015c010(local_118);
  }
  FUN_1805f68fc(&DAT_180cc9e50);
  FUN_18015c010(param_3 + 0x18);
}



