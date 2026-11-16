// FUN_1805d6b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d6b80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d6b80(longlong param_1,undefined1 (*param_2) [16],uint param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
  }
  if (param_4 == (undefined8 *)0x0) {
  }
  local_60 = *param_2;
  iVar2 = local_60._4_4_;
  local_50 = param_2[1];
  iVar1 = local_50._12_4_;
  iVar6 = local_60._0_4_;
  iVar7 = (int)*(undefined8 *)(param_2[1] + 8);
  iVar5 = iVar6 * 2 + *(int *)(*param_2 + 8) * -3 + iVar7;
  if (iVar5 < 0) {
    iVar5 = (*(int *)(*param_2 + 8) * 3 + iVar6 * -2) - iVar7;
  }
  if (iVar5 < 0x10) {
    iVar5 = iVar2 * 2 + local_60._12_4_ * -3 + iVar1;
    if (iVar5 < 0) {
      iVar5 = (local_60._12_4_ * 3 - iVar1) + iVar2 * -2;
    }
    if (iVar5 < 0x10) {
      iVar5 = iVar7 * 2 + local_50._0_4_ * -3 + iVar6;
      if (iVar5 < 0) {
        iVar5 = (local_50._0_4_ * 3 + iVar7 * -2) - iVar6;
      }
      if (iVar5 < 0x10) {
        iVar6 = iVar1 * 2 + local_50._4_4_ * -3 + iVar2;
        if (iVar6 < 0) {
          iVar6 = (local_50._4_4_ * 3 + iVar1 * -2) - iVar2;
        }
        if (iVar6 < 0x10) {
          FUN_1805d68c0(local_60);
          goto LAB_1805d6cad;
        }
      }
    }
  }
  FUN_1805d68c0(local_60);
  if (2 < param_3) {
    iVar2 = FUN_1805d6b80(param_1,local_60,param_3 >> 1,param_4);
    if (iVar2 == 0) {
      FUN_1805d6b80(param_1,local_50 + 8,param_3 >> 1,param_4);
    }
  }
LAB_1805d6cad:
  local_68[0] = 0;
  puVar3 = (undefined8 *)FUN_18057abe0(param_1,0x30,local_68);
  if (local_68[0] == 0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    local_68[0] = 0;
    puVar4 = (undefined8 *)FUN_18057abe0(param_1,0x30,local_68);
    if (local_68[0] == 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *puVar3 = local_60._0_8_;
      puVar3[1] = local_50._8_8_;
      *(undefined4 *)(puVar3 + 4) = 1;
      *puVar4 = local_50._8_8_;
      puVar4[1] = local_30;
      *(undefined4 *)(puVar4 + 4) = 1;
      puVar3[5] = puVar4;
      puVar4[5] = *param_4;
      *param_4 = puVar3;
    }
  }
}



