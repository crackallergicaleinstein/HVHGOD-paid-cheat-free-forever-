// FUN_180152d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152d60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180152d60(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

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
  undefined1 auVar13 [16];
  char cVar14;
  undefined1 auStack_98 [48];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
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
    local_58 = ZEXT816(0);
    FUN_1801409d0(local_58 + 8,0);
    local_58[0] = 3;
    FUN_180111c50(&local_48,param_3);
    local_58._8_8_ = local_48;
    local_68[0] = 5;
    local_48 = CONCAT44(local_48._4_4_,(int)((longlong)(param_1[2] - param_1[1]) >> 3));
    plVar6 = (longlong *)param_1[0x15];
    if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    cVar14 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_48,local_68,local_58);
    auVar13 = local_58;
    uVar12 = local_58[0];
    if (cVar14 == '\0') {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      FUN_1801409d0(local_58 + 8,local_58[0]);
    }
    else {
      uVar8 = local_58._8_8_;
      if (param_1[1] == param_1[2]) {
        local_58._0_8_ = local_58._1_8_ << 8;
        local_58._8_8_ = 0;
        puVar7 = (undefined1 *)*param_1;
        uVar3 = *puVar7;
        *puVar7 = uVar12;
        local_48._1_7_ = auVar13._1_7_;
        local_48 = CONCAT71(local_48._1_7_,uVar3);
        uStack_40 = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(puVar7 + 8) = uVar8;
        FUN_1801409d0(&uStack_40);
        uVar8 = *param_1;
        *param_2 = 1;
        *(undefined8 *)(param_2 + 8) = uVar8;
        FUN_1801409d0(local_58 + 8,local_58[0]);
      }
      else {
        pcVar9 = *(char **)(param_1[2] + -8);
        if (pcVar9 == (char *)0x0) {
          *param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          FUN_1801409d0(local_58 + 8,uVar12);
        }
        else if (*pcVar9 == '\x02') {
          lVar10 = *(longlong *)(pcVar9 + 8);
          puVar11 = *(undefined8 **)(lVar10 + 8);
          if (puVar11 == *(undefined8 **)(lVar10 + 0x10)) {
            FUN_18014fc20(lVar10,puVar11,local_58);
          }
          else {
            *puVar11 = local_58._0_8_;
            puVar11[1] = local_58._8_8_;
            local_58._0_8_ = local_58._1_8_ << 8;
            local_58._8_8_ = 0;
            *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 0x10;
          }
          lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8);
          *param_2 = 1;
          *(longlong *)(param_2 + 8) = lVar10 + -0x10;
          FUN_1801409d0(local_58 + 8,local_58[0]);
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
          auVar13 = local_58;
          uVar12 = local_58[0];
          if ((1 << ((uint)uVar1 & 0x1f) & uVar4) == 0) {
            *param_2 = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            FUN_1801409d0(local_58 + 8,local_58[0]);
          }
          else {
            uVar8 = local_58._8_8_;
            local_58._0_8_ = local_58._1_8_ << 8;
            local_58._8_8_ = 0;
            puVar7 = (undefined1 *)param_1[0xc];
            uVar3 = *puVar7;
            *puVar7 = uVar12;
            local_48._1_7_ = auVar13._1_7_;
            local_48 = CONCAT71(local_48._1_7_,uVar3);
            uStack_40 = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(puVar7 + 8) = uVar8;
            FUN_1801409d0(&uStack_40);
            *param_2 = 1;
            *(undefined8 *)(param_2 + 8) = param_1[0xc];
            FUN_1801409d0(local_58 + 8,local_58[0]);
          }
        }
      }
    }
  }
}



