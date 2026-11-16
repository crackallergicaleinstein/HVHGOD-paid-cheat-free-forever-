// FUN_1805d2ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d2ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d2ed0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int local_d8 [2];
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined5 uStack_b5;
  undefined8 local_b0;
  int *local_a8;
  int *local_a0;
  undefined4 local_98;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_d8[0] = 0;
  piVar1 = (int *)(param_2 + 0x68);
  iVar4 = 0;
  FUN_1805dc0f0(&local_d0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 5) {
      if (param_4 == 0) {
        if ((*piVar1 != 0) && (*(int *)(param_2 + 0x70) != 0)) {
          if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) == 0) {
            local_d8[0] = 6;
            goto LAB_1805d2f31;
          }
          FUN_1805dc0f0(&local_d0);
          iVar4 = *(int *)(param_1 + 0x78);
          uStack_b8 = 0xff;
          local_e0 = local_d8;
          iStack_cc = *(int *)(param_2 + 0x6c) + iVar4 * 2;
          uStack_b6 = 2;
          local_d0 = *piVar1 + iVar4 * 2;
          local_e8 = 0;
          iStack_c8 = iStack_cc;
          local_c0 = FUN_18057ad10(uVar3,iStack_cc,0);
          if (local_d8[0] != 0) goto LAB_1805d2f31;
          local_a8 = &local_d0;
          local_58 = *(undefined4 *)(param_1 + 0x78);
          local_54 = *(undefined1 *)(param_1 + 0x7c);
          local_53 = *(undefined1 *)(param_1 + 0x7d);
          local_98 = 8;
          local_a0 = piVar1;
          local_d8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
        }
        if (local_d8[0] == 0) {
          if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
            FUN_18057abd0(uVar3,*(undefined8 *)(param_2 + 0x78));
          }
          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + iVar4;
          *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) - iVar4;
          *(ulonglong *)piVar1 = CONCAT44(iStack_cc,local_d0);
          *(ulonglong *)(param_2 + 0x70) = CONCAT44(uStack_c4,iStack_c8);
          *(longlong *)(param_2 + 0x78) = local_c0;
          *(ulonglong *)(param_2 + 0x80) = CONCAT53(uStack_b5,CONCAT12(uStack_b6,uStack_b8));
          *(undefined8 *)(param_2 + 0x88) = local_b0;
          if (local_c0 == 0) {
          }
          puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar2 = *puVar2 | 1;
        }
      }
      else {
        local_d8[0] = 7;
      }
    }
    else {
      local_d8[0] = 0x13;
    }
  }
  else {
    local_d8[0] = 0x12;
  }
LAB_1805d2f31:
  if (local_c0 != 0) {
    FUN_18057abd0(uVar3);
  }
}



