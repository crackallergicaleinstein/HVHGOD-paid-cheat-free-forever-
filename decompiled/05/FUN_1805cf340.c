// FUN_1805cf340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cf340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cf340(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [5] [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  puVar2 = (ushort *)param_2[1];
  piVar3 = (int *)*param_2;
  if (param_1 == 0) {
  }
  if ((*(uint *)(param_2 + 2) & 1) == 0) {
  }
  if (puVar2 == (ushort *)0x0) {
  }
  if ((puVar2[1] != 0) && (*puVar2 != 0)) {
    if (*(longlong *)(puVar2 + 0xc) == 0) {
    }
    if (*(longlong *)(puVar2 + 4) == 0) {
    }
    if ((uint)puVar2[1] !=
        *(ushort *)(*(longlong *)(puVar2 + 0xc) + -2 + (ulonglong)*puVar2 * 2) + 1) {
    }
    local_68 = *(undefined8 *)puVar2;
    uStack_60 = *(undefined8 *)(puVar2 + 4);
    local_58 = *(undefined4 *)(puVar2 + 8);
    uStack_54 = *(undefined4 *)(puVar2 + 10);
    uStack_50 = *(undefined4 *)(puVar2 + 0xc);
    uStack_4c = *(undefined4 *)(puVar2 + 0xe);
    local_48 = *(undefined8 *)(puVar2 + 0x10);
    if ((*(uint *)(param_2 + 2) & 2) == 0) {
      if (piVar3 == (int *)0x0) {
      }
      if (piVar3[1] == 0) {
      }
      if (*piVar3 == 0) {
      }
      local_40 = *(longlong *)(piVar3 + 4);
      if (local_40 == 0) {
      }
      if (-1 < piVar3[2]) {
        local_40 = (ulonglong)(uint)(piVar3[2] * (*piVar3 + -1)) + local_40;
      }
      local_38 = piVar3[2];
      iVar4 = 0;
      local_30 = 0;
      iVar6 = 0;
      local_28 = 0;
      iVar1 = piVar3[1];
      iVar5 = *piVar3;
      local_b8[0]._4_4_ = iVar5;
      local_b8[0]._0_4_ = iVar1;
      local_b8[0]._8_8_ = 0;
      local_b8[0] = local_b8[0] << 0x40;
    }
    else {
      local_30 = param_2[3];
      if (local_30 == 0) {
      }
      local_b8[0] = *(undefined1 (*) [16])(param_2 + 8);
      iVar6 = local_b8[0]._0_4_;
      iVar4 = local_b8[0]._4_4_;
      iVar5 = local_b8[0]._12_4_;
      local_28 = param_2[7];
      iVar1 = *(int *)(param_2 + 9);
    }
    if ((iVar6 < iVar1) && (iVar4 < iVar5)) {
      FUN_1805cfe40(local_b8);
    }
  }
}



