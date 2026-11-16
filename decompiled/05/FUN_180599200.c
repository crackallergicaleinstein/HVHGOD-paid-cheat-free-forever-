// FUN_180599200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180599200 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180599200(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  int *local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0 [2];
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8 [16];
  undefined1 local_228 [8];
  undefined8 local_220 [11];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  local_2d4 = 0;
  local_2a8[0] = 0;
  lVar13 = 0;
  local_2c8 = uVar7;
  local_2c0 = param_1;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_2d8);
  if (local_2d8 < 0) {
    local_2d4 = 0xa2;
  }
  else if ((local_2d8 == 0) || (0x10 < local_2d8)) {
LAB_180599489:
    local_2d4 = 3;
  }
  else {
    local_2b8 = *param_2;
    iVar11 = 0;
    local_2b0 = param_2[2];
    if (0 < local_2d8) {
      lVar10 = 0;
      do {
        iVar12 = 0;
        *param_2 = local_1c8[lVar10 * 3];
        param_2[2] = local_1c8[lVar10 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_228,4,local_2d0);
        iVar1 = local_2d0[0];
        if (lVar10 == 0) {
          lVar13 = (longlong)local_2d0[0];
          if (3 < local_2d0[0] - 1U) goto LAB_180599489;
          local_2d4 = FUN_18059c0f0(param_1,local_2d8,local_2d0[0]);
          if (local_2d4 != 0) goto LAB_1805994a1;
          local_2e0 = &local_2d4;
          local_2e8 = 0;
          local_2a8[0] = FUN_18057ac40(uVar7,4,0,local_2d8 * iVar1);
          if (local_2d4 != 0) goto LAB_1805994a1;
          if (1 < local_2d8) {
            plVar4 = local_2a8;
            uVar9 = (ulonglong)(local_2d8 - 1);
            lVar8 = lVar13 * 4;
            do {
              plVar4 = plVar4 + 1;
              lVar3 = local_2a8[0] + lVar8;
              lVar8 = lVar8 + lVar13 * 4;
              *plVar4 = lVar3;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else if (local_2d0[0] != (int)lVar13) goto LAB_180599489;
        if (0 < local_2d0[0]) {
          puVar6 = (undefined4 *)local_2a8[lVar10];
          puVar5 = local_220;
          do {
            *param_2 = puVar5[-1];
            param_2[2] = *puVar5;
            uVar2 = (*(code *)param_2[10])(param_2,0);
            *puVar6 = uVar2;
            puVar5 = puVar5 + 3;
            iVar12 = iVar12 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar12 < local_2d0[0]);
          param_1 = local_2c0;
          uVar7 = local_2c8;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
      } while (iVar11 < local_2d8);
    }
    *param_2 = local_2b8;
    param_2[2] = local_2b0;
    lVar13 = *(longlong *)(param_1 + 0x2e0);
    if (*(longlong *)(lVar13 + 0x28) != 0) {
      FUN_18057abd0(uVar7);
      *(undefined8 *)(lVar13 + 0x28) = 0;
    }
    iVar11 = 0;
    if (0 < local_2d8) {
      plVar4 = local_2a8;
      do {
        iVar11 = iVar11 + 1;
        *(longlong *)((longlong)plVar4 + (lVar13 - (longlong)local_2a8) + 0x28) = *plVar4;
        *plVar4 = 0;
        plVar4 = plVar4 + 1;
      } while (iVar11 < local_2d8);
    }
  }
LAB_1805994a1:
  FUN_18057abd0(uVar7,local_2a8[0]);
  *(int *)(param_2 + 3) = local_2d4;
}



