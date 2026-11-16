// FUN_18044c9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044c9c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044c9c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  ushort uVar9;
  longlong *plVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  int *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStackY_168;
  lVar1 = param_2[1];
  if (lVar1 == 0) {
  }
  lVar5 = *param_2;
  lVar8 = lVar1 * 0x10 + lVar5;
  for (; lVar5 != lVar8; lVar5 = lVar5 + 0x10) {
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  bVar2 = false;
  if (param_1 != 0) {
    local_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    cVar4 = FUN_1804514f0(&local_128,param_1);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      uStack_70 = CONCAT62(uStack_ce,uStack_d0);
      local_88 = local_e8;
      uStack_80 = uStack_e0;
      lStack_78 = lStack_d8;
      bVar2 = true;
    }
  }
  lVar8 = FUN_18017ea70();
  lVar5 = lStack_78;
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (!bVar2) {
  }
  uVar11 = uStack_80._2_2_ & 0x7fff;
  uVar9 = (ushort)uStack_70;
  if ((ushort)uStack_70 != 0xffff) {
    if (lStack_78 == 0) {
    }
    if ((uStack_80 & 0x7fff0000) == 0) {
    }
  }
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  if ((ushort)uStack_70 != 0xffff) {
    FUN_18044d2b0(local_58,uVar11);
    uVar3 = local_58._0_8_;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_1804514f0(uVar3,lVar5);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (cVar4 == '\0') goto LAB_18044cc10;
  }
  uVar12 = 0;
  if (uVar9 != 0xffff) {
    local_130 = (int *)*param_2;
    lVar5 = lVar1;
    do {
      if (((uVar11 <= uVar12) || (lVar5 == 0)) || (uVar11 <= uVar9)) break;
      plVar10 = (longlong *)((ulonglong)uVar9 * 0x10 + local_58._0_8_);
      local_138[0] = 0;
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar4 = FUN_18044c8f0(lVar8,local_138);
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if (cVar4 != '\0') {
          for (piVar7 = local_130; piVar7 != local_130 + lVar1 * 4; piVar7 = piVar7 + 4) {
            if ((*(longlong *)(piVar7 + 2) == 0) && (*piVar7 == local_138[0])) {
              *(longlong *)(piVar7 + 2) = *plVar10;
              lVar5 = lVar5 + -1;
            }
          }
        }
      }
      uVar9 = *(ushort *)((longlong)plVar10 + 10);
      uVar12 = uVar12 + 1;
    } while (uVar9 != 0xffff);
  }
LAB_18044cc10:
  if (local_58._0_8_ != 0) {
    if ((0xfff < (local_48 - local_58._0_8_ & 0xfffffffffffffff0U)) &&
       (0x1f < (local_58._0_8_ - *(longlong *)(local_58._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



