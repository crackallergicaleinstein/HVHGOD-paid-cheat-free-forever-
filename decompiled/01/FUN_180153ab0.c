// FUN_180153ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180153ab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180153ab0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  char cVar14;
  undefined1 auStack_88 [48];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar6 = param_1[7];
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar11 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar11 = (uVar6 >> 5) * 4;
  }
  uVar1 = (uVar6 & 0x1f) - 1;
  if ((uVar6 & 0x1f) == 0) {
    lVar2 = -4;
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar11 + lVar2) >> ((uint)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    local_48 = ZEXT816(0);
    uVar3 = *param_3;
    FUN_1801409d0(local_48 + 8,0);
    uVar9 = local_38;
    local_48[0] = 4;
    local_38 = CONCAT71(local_38._1_7_,uVar3);
    local_48._8_8_ = local_38;
    local_58[0] = 5;
    local_38 = CONCAT44(SUB84(uVar9,4),(int)((longlong)(param_1[2] - param_1[1]) >> 3));
    plVar7 = (longlong *)param_1[0x15];
    if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    cVar14 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_38,local_58,local_48);
    auVar13 = local_48;
    uVar3 = local_48[0];
    if (cVar14 == '\0') {
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      FUN_1801409d0(local_48 + 8,local_48[0]);
    }
    else {
      uVar9 = local_48._8_8_;
      if (param_1[1] == param_1[2]) {
        local_48._0_8_ = local_48._1_8_ << 8;
        local_48._8_8_ = 0;
        puVar8 = (undefined1 *)*param_1;
        uVar4 = *puVar8;
        *puVar8 = uVar3;
        local_38._1_7_ = auVar13._1_7_;
        local_38 = CONCAT71(local_38._1_7_,uVar4);
        uStack_30 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uVar9;
        FUN_1801409d0(&uStack_30);
        uVar9 = *param_1;
        *param_2 = 1;
        *(undefined8 *)(param_2 + 8) = uVar9;
        FUN_1801409d0(local_48 + 8,local_48[0]);
      }
      else {
        pcVar10 = *(char **)(param_1[2] + -8);
        if (pcVar10 == (char *)0x0) {
          *param_2 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          FUN_1801409d0(local_48 + 8,uVar3);
        }
        else if (*pcVar10 == '\x02') {
          lVar11 = *(longlong *)(pcVar10 + 8);
          puVar12 = *(undefined8 **)(lVar11 + 8);
          if (puVar12 == *(undefined8 **)(lVar11 + 0x10)) {
            FUN_18014fc20(lVar11,puVar12,local_48);
          }
          else {
            *puVar12 = local_48._0_8_;
            puVar12[1] = local_48._8_8_;
            local_48._0_8_ = local_48._1_8_ << 8;
            local_48._8_8_ = 0;
            *(longlong *)(lVar11 + 8) = *(longlong *)(lVar11 + 8) + 0x10;
          }
          lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8);
          *param_2 = 1;
          *(longlong *)(param_2 + 8) = lVar11 + -0x10;
          FUN_1801409d0(local_48 + 8,local_48[0]);
        }
        else {
          uVar6 = param_1[0xb];
          if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
            lVar11 = -((~uVar6 >> 5) * 4 + 4);
          }
          else {
            lVar11 = (uVar6 >> 5) * 4;
          }
          uVar1 = (uVar6 & 0x1f) - 1;
          if ((uVar6 & 0x1f) == 0) {
            lVar2 = -4;
          }
          else {
            lVar2 = (uVar1 >> 5) * 4;
          }
          uVar5 = *(uint *)(param_1[8] + lVar11 + lVar2);
          FUN_180151b00(param_1 + 8);
          auVar13 = local_48;
          uVar3 = local_48[0];
          if ((1 << ((uint)uVar1 & 0x1f) & uVar5) == 0) {
            *param_2 = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            FUN_1801409d0(local_48 + 8,local_48[0]);
          }
          else {
            uVar9 = local_48._8_8_;
            local_48._0_8_ = local_48._1_8_ << 8;
            local_48._8_8_ = 0;
            puVar8 = (undefined1 *)param_1[0xc];
            uVar4 = *puVar8;
            *puVar8 = uVar3;
            local_38._1_7_ = auVar13._1_7_;
            local_38 = CONCAT71(local_38._1_7_,uVar4);
            uStack_30 = *(undefined8 *)(puVar8 + 8);
            *(undefined8 *)(puVar8 + 8) = uVar9;
            FUN_1801409d0(&uStack_30);
            *param_2 = 1;
            *(undefined8 *)(param_2 + 8) = param_1[0xc];
            FUN_1801409d0(local_48 + 8,local_48[0]);
          }
        }
      }
    }
  }
}



