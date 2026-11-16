// FUN_1805d0f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d0f00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d0f00(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int *local_c0;
  int local_b8 [4];
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  lVar3 = param_2 + 0x98;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = (int *)(param_2 + 0x68);
  iVar7 = 0;
  local_b8[0] = 0;
  iVar8 = 0;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 2) {
    }
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_18057abd0(uVar4,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar2 = *puVar2 & 0xfffffffe;
    }
    cVar5 = FUN_180579ef0(param_2,2,param_4);
    if (cVar5 == '\0') {
      local_c0 = local_b8;
      local_c8 = 0;
      uVar6 = FUN_18057ad10(uVar4,*(undefined4 *)(param_2 + 0x70),0,*piVar1);
      *(undefined8 *)(param_2 + 0x78) = uVar6;
      if (local_b8[0] == 0) {
        puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar2 = *puVar2 | 1;
        iVar7 = *(int *)(param_2 + 0x90) * -0x40;
        iVar8 = (*piVar1 - *(int *)(param_2 + 0x94)) * 0x40;
        if (param_4 != (int *)0x0) {
          iVar7 = iVar7 + *param_4;
          iVar8 = iVar8 + param_4[1];
        }
        if ((iVar7 != 0) || (iVar8 != 0)) {
          FUN_180576690(lVar3,iVar7,iVar8);
        }
        local_98 = 0;
        local_a8 = piVar1;
        local_a0 = lVar3;
        local_b8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
        if (local_b8[0] == 0) {
          *(undefined4 *)(param_2 + 0x60) = 0x62697473;
          goto LAB_1805d0f86;
        }
      }
    }
    else {
      local_b8[0] = 0x62;
    }
  }
  else {
    local_b8[0] = 6;
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_18057abd0(uVar4,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
LAB_1805d0f86:
  if ((iVar7 != 0) || (iVar8 != 0)) {
    FUN_180576690(lVar3,-iVar7,-iVar8);
  }
}



