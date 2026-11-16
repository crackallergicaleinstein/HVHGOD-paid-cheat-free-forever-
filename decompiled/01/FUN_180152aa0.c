// FUN_180152aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152aa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180152aa0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar9 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar9 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar2 = -4;
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar9 + lVar2) >> ((uint)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    local_38 = *param_3;
    FUN_180111d10(&uStack_30);
    uVar7 = uStack_30;
    uVar11 = local_38;
    if (param_1[1] == param_1[2]) {
      local_38 = 0;
      uStack_30 = 0;
      puVar6 = (undefined1 *)*param_1;
      uVar3 = *puVar6;
      *puVar6 = uVar11;
      _local_48 = CONCAT71(uStack_37,uVar3);
      uStack_40 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_1801409d0(&uStack_40);
      uVar7 = *param_1;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = uVar7;
      FUN_1801409d0(&uStack_30,local_38);
    }
    else {
      pcVar8 = *(char **)(param_1[2] + -8);
      if (pcVar8 == (char *)0x0) {
        *param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        FUN_1801409d0(&uStack_30,local_38);
      }
      else if (*pcVar8 == '\x02') {
        lVar9 = *(longlong *)(pcVar8 + 8);
        puVar10 = *(undefined8 **)(lVar9 + 8);
        if (puVar10 == *(undefined8 **)(lVar9 + 0x10)) {
          FUN_18014fc20(lVar9,puVar10,&local_38);
        }
        else {
          *puVar10 = CONCAT71(uStack_37,local_38);
          puVar10[1] = uStack_30;
          local_38 = 0;
          uStack_30 = 0;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + 0x10;
        }
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8);
        *param_2 = 1;
        *(longlong *)(param_2 + 8) = lVar9 + -0x10;
        FUN_1801409d0(&uStack_30,local_38);
      }
      else {
        uVar5 = param_1[0xb];
        if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
          lVar9 = -((~uVar5 >> 5) * 4 + 4);
        }
        else {
          lVar9 = (uVar5 >> 5) * 4;
        }
        uVar1 = (uVar5 & 0x1f) - 1;
        if ((uVar5 & 0x1f) == 0) {
          lVar2 = -4;
        }
        else {
          lVar2 = (uVar1 >> 5) * 4;
        }
        uVar4 = *(uint *)(param_1[8] + lVar9 + lVar2);
        FUN_180151b00(param_1 + 8);
        uVar7 = uStack_30;
        uVar11 = local_38;
        if ((1 << ((uint)uVar1 & 0x1f) & uVar4) == 0) {
          *param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          FUN_1801409d0(&uStack_30,local_38);
        }
        else {
          local_38 = 0;
          uStack_30 = 0;
          puVar6 = (undefined1 *)param_1[0xc];
          uVar3 = *puVar6;
          *puVar6 = uVar11;
          _local_48 = CONCAT71(uStack_37,uVar3);
          uStack_40 = *(undefined8 *)(puVar6 + 8);
          *(undefined8 *)(puVar6 + 8) = uVar7;
          FUN_1801409d0(&uStack_40);
          *param_2 = 1;
          *(undefined8 *)(param_2 + 8) = param_1[0xc];
          FUN_1801409d0(&uStack_30,local_38);
        }
      }
    }
  }
}



