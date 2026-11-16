// FUN_180153e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180153e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180153e00(undefined8 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  char cVar13;
  undefined1 auStack_88 [48];
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar10 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar10 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar2 = -4;
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar10 + lVar2) >> ((uint)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    local_48 = 0;
    FUN_180111d10(&uStack_40,0);
    local_58[0] = 5;
    local_38 = CONCAT44(local_38._4_4_,(int)((longlong)(param_1[2] - param_1[1]) >> 3));
    plVar6 = (longlong *)param_1[0x15];
    if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    cVar13 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_38,local_58,&local_48);
    uVar8 = uStack_40;
    uVar12 = local_48;
    if (cVar13 == '\0') {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      FUN_1801409d0(&uStack_40,local_48);
    }
    else if (param_1[1] == param_1[2]) {
      local_48 = 0;
      uStack_40 = 0;
      puVar7 = (undefined1 *)*param_1;
      uVar3 = *puVar7;
      *puVar7 = uVar12;
      local_38 = CONCAT71(uStack_47,uVar3);
      uStack_30 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar8;
      FUN_1801409d0(&uStack_30);
      uVar8 = *param_1;
      *param_2 = 1;
      *(undefined8 *)(param_2 + 8) = uVar8;
      FUN_1801409d0(&uStack_40,local_48);
    }
    else {
      pcVar9 = *(char **)(param_1[2] + -8);
      if (pcVar9 == (char *)0x0) {
        *param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        FUN_1801409d0(&uStack_40,local_48);
      }
      else if (*pcVar9 == '\x02') {
        lVar10 = *(longlong *)(pcVar9 + 8);
        puVar11 = *(undefined8 **)(lVar10 + 8);
        if (puVar11 == *(undefined8 **)(lVar10 + 0x10)) {
          FUN_18014fc20(lVar10,puVar11,&local_48);
        }
        else {
          *puVar11 = CONCAT71(uStack_47,local_48);
          puVar11[1] = uStack_40;
          local_48 = 0;
          uStack_40 = 0;
          *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 0x10;
        }
        lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8);
        *param_2 = 1;
        *(longlong *)(param_2 + 8) = lVar10 + -0x10;
        FUN_1801409d0(&uStack_40,local_48);
      }
      else {
        uVar5 = param_1[0xb];
        if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
          lVar10 = -((~uVar5 >> 5) * 4 + 4);
        }
        else {
          lVar10 = (uVar5 >> 5) * 4;
        }
        uVar1 = (uVar5 & 0x1f) - 1;
        if ((uVar5 & 0x1f) == 0) {
          lVar2 = -4;
        }
        else {
          lVar2 = (uVar1 >> 5) * 4;
        }
        uVar4 = *(uint *)(param_1[8] + lVar10 + lVar2);
        FUN_180151b00(param_1 + 8);
        uVar8 = uStack_40;
        uVar12 = local_48;
        if ((1 << ((uint)uVar1 & 0x1f) & uVar4) == 0) {
          *param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          FUN_1801409d0(&uStack_40,local_48);
        }
        else {
          local_48 = 0;
          uStack_40 = 0;
          puVar7 = (undefined1 *)param_1[0xc];
          uVar3 = *puVar7;
          *puVar7 = uVar12;
          local_38 = CONCAT71(uStack_47,uVar3);
          uStack_30 = *(undefined8 *)(puVar7 + 8);
          *(undefined8 *)(puVar7 + 8) = uVar8;
          FUN_1801409d0(&uStack_30);
          *param_2 = 1;
          *(undefined8 *)(param_2 + 8) = param_1[0xc];
          FUN_1801409d0(&uStack_40,local_48);
        }
      }
    }
  }
}



