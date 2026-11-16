// FUN_180430680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430680 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180430680(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar4 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28 [2];
  float local_20 [2];
  uint local_18 [2];
  ulonglong local_10;
  
  auVar4 = in_ZMM2._0_16_;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28[0] = in_ZMM1._0_4_;
  local_18[0] = in_ZMM2._0_4_;
  auVar3 = in_ZMM1._0_16_;
  local_20[0] = param_4;
  if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x80)) {
    local_48 = &param_5;
    FUN_18042fd30(*(longlong *)(param_1 + 0x80) + -0x2c,local_28,local_18,local_20);
    auVar3 = ZEXT416(local_28[0]);
    auVar4 = ZEXT416(local_18[0]);
  }
  piVar1 = *(int **)(param_1 + 0x68);
  auVar2 = vroundss_avx(ZEXT816(0),auVar3,1);
  local_38 = (int)auVar2._0_4_;
  auVar2 = vroundss_avx(ZEXT816(0),auVar4,1);
  local_34 = (int)auVar2._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(local_20[0] + auVar3._0_4_)),2);
  local_30 = (int)auVar3._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar4._0_4_ + param_5)),2);
  local_2c = (int)auVar3._0_4_;
  if (*(int **)(param_1 + 0x60) != piVar1) {
    if (local_38 < piVar1[-4]) {
      local_38 = piVar1[-4];
    }
    if (local_34 < piVar1[-3]) {
      local_34 = piVar1[-3];
    }
    if (piVar1[-2] < local_30) {
      local_30 = piVar1[-2];
    }
    if (piVar1[-1] < local_2c) {
      local_2c = piVar1[-1];
    }
  }
  if (piVar1 == *(int **)(param_1 + 0x70)) {
    FUN_180178c40((longlong *)(param_1 + 0x60),piVar1,&local_38);
  }
  *piVar1 = local_38;
  piVar1[1] = local_34;
  piVar1[2] = local_30;
  piVar1[3] = local_2c;
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 0x10;
}



