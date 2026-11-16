// FUN_1804354e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804354e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804354e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x80);
  local_30[0] = param_2;
  local_28[0] = param_3;
  if (*(longlong *)(param_1 + 0x78) != lVar1) {
    FUN_18042fa20(lVar1 + -0x2c,local_30,local_28);
    local_54[1] = 0xff;
    local_58 = 0;
    local_54[0] = FUN_18060eb80((float)(param_6 >> 0x18) * *(float *)(lVar1 + -0x18));
    piVar4 = &local_58;
    if (-1 < local_54[0]) {
      piVar4 = local_54;
    }
    piVar3 = local_54 + 1;
    if (local_54[0] < 0x100) {
      piVar3 = piVar4;
    }
    param_6 = CONCAT13((char)*piVar3,(undefined3)param_6);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  local_3c = param_5;
  local_38 = param_6;
  if (puVar2 == *(undefined4 **)(param_1 + 0x10)) {
    local_48 = local_30[0];
    local_44 = local_28[0];
    local_40 = param_4;
    FUN_180268a40(param_1,puVar2,&local_48);
  }
  else {
    *puVar2 = local_30[0];
    puVar2[1] = local_28[0];
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    puVar2[4] = param_6;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x14;
  }
}



