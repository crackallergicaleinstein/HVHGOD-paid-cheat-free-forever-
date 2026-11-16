// FUN_18050c860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050c860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050c860(int param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  DAT_180c62f48 = 0;
  DAT_180c62fe0 = 0;
  DAT_1808e4f84 = 0xffffffff;
  DAT_180bbecdf = 0;
  DAT_180bbecde = 0;
  lVar1 = FUN_180439770();
  DAT_180bda4dc = param_1;
  *(undefined8 *)(lVar1 + 0x420) = 0;
  if (param_1 == 1) {
    local_28 = CONCAT31(local_28._1_3_,DAT_180b0d670);
    _DAT_1808e4f88 = local_28;
    DAT_1808e4f8c = DAT_180b0d674;
    DAT_1808e4f94 = DAT_180b0d67c;
    DAT_1808e4f90 = DAT_180b0d678;
  }
  else if (param_1 == 2) {
    local_28 = CONCAT31(local_28._1_3_,DAT_180b0d6cc);
    _DAT_1808e4f88 = local_28;
    DAT_1808e4f8c = DAT_180b0d6d0;
    DAT_1808e4f94 = DAT_180b0d6d8;
    DAT_1808e4f90 = DAT_180b0d6d4;
  }
  else if (param_1 == 3) {
    local_28 = CONCAT31(local_28._1_3_,DAT_180b0d698);
    _DAT_1808e4f88 = local_28;
    DAT_1808e4f8c = DAT_180b0d69c;
    DAT_1808e4f94 = DAT_180b0d6a4;
    DAT_1808e4f90 = DAT_180b0d6a0;
  }
  else {
    if (param_1 != 4) {
    }
    local_28 = CONCAT31(local_28._1_3_,DAT_180b0d5de);
    _DAT_1808e4f88 = local_28;
    DAT_1808e4f8c = DAT_180b0d5e0;
    DAT_1808e4f94 = DAT_180b0d5e8;
    DAT_1808e4f90 = DAT_180b0d5e4;
  }
}



