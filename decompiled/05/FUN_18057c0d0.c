// FUN_18057c0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c0d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18057c0d0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint unaff_R13D;
  uint *puVar10;
  int *piVar11;
  undefined **ppuVar12;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  int local_138;
  uint local_134;
  longlong *local_130;
  uint local_128;
  undefined4 local_124;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined4 *local_108;
  longlong local_100;
  uint local_f8 [10];
  undefined4 local_d0 [10];
  longlong local_a8 [10];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  puVar10 = local_f8;
  local_128 = unaff_R13D & 0xffffff00;
  lVar9 = 9;
  local_100 = *param_1;
  ppuVar12 = &PTR_FUN_18066a430;
  plVar7 = local_a8;
  puVar8 = local_d0;
  local_138 = 2;
  local_110 = param_5;
  local_118 = 9;
  local_124 = param_3;
  local_120 = param_1;
  local_108 = param_4;
  do {
    *plVar7 = 0;
    if (param_2 == 0) {
LAB_18057c1a0:
      local_148 = puVar8;
      uVar6 = (*(code *)*ppuVar12)();
      *puVar10 = uVar6;
    }
    else {
      uVar6 = 0;
      if (*(code **)(param_2 + 0x20) == (code *)0x0) {
LAB_18057c192:
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      else {
        iVar3 = (**(code **)(param_2 + 0x20))(param_2,0,0,0);
        uVar6 = -(uint)(iVar3 != 0) & 0x55;
        if (iVar3 == 0) goto LAB_18057c192;
      }
      *puVar10 = uVar6;
      if (uVar6 == 0) goto LAB_18057c1a0;
    }
    puVar8 = puVar8 + 1;
    plVar7 = plVar7 + 1;
    ppuVar12 = ppuVar12 + 2;
    puVar10 = puVar10 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_130 = local_a8;
  piVar11 = &DAT_18066a438;
  local_134 = 0;
  lVar9 = 0;
  iVar3 = local_138;
  uVar6 = local_128;
  do {
    if ((*piVar11 == 3) || (*piVar11 == 4)) {
      bVar2 = true;
      if ((char)uVar6 == '\0') goto LAB_18057c20f;
    }
    else {
      bVar2 = false;
LAB_18057c20f:
      if (*(int *)((longlong)local_f8 + lVar9) == 0) {
        lVar5 = *local_130;
        if (lVar5 == 0) {
          lVar5 = *(longlong *)(local_110 + 0x18);
        }
        lVar1 = *local_120;
        puVar4 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
        if (puVar4 == (undefined8 *)0x0) {
          iVar3 = 0x40;
          puVar4 = (undefined8 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[6] = lVar1;
          iVar3 = FUN_18057d3a0(puVar4,lVar5);
          if (iVar3 != 0) {
            (**(code **)(lVar1 + 0x10))(lVar1,puVar4);
            puVar4 = (undefined8 *)0x0;
          }
        }
        if ((bVar2) && (uVar6 = uVar6 & 0xff, (char)iVar3 == 'Q')) {
          uVar6 = 1;
        }
        if (iVar3 == 0) {
          local_148 = local_108;
          iVar3 = FUN_180578e10(local_120,puVar4,*(undefined4 *)((longlong)local_d0 + lVar9),
                                local_124);
          if (puVar4 != (undefined8 *)0x0) {
            lVar5 = puVar4[6];
            if ((code *)puVar4[5] != (code *)0x0) {
              (*(code *)puVar4[5])(puVar4);
            }
            (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
          }
          if (iVar3 == 0) break;
          uVar6 = uVar6 & 0xff;
          if (bVar2) {
            uVar6 = 1;
          }
        }
      }
    }
    local_130 = local_130 + 1;
    local_134 = local_134 + 1;
    piVar11 = piVar11 + 4;
    lVar9 = lVar9 + 4;
  } while (local_134 < 9);
  lVar9 = local_100;
  plVar7 = local_a8;
  lVar5 = 9;
  local_138 = iVar3;
  do {
    if (*plVar7 != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
      *plVar7 = 0;
      lVar5 = local_118;
    }
    plVar7 = plVar7 + 1;
    lVar5 = lVar5 + -1;
    local_118 = lVar5;
  } while (lVar5 != 0);
}



