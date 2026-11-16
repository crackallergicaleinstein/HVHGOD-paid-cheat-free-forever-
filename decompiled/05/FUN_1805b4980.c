// FUN_1805b4980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4980 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b4980(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  int local_98 [2];
  undefined4 local_90 [2];
  uint local_88;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[2];
  piVar2 = (int *)param_1[1];
  local_90[0] = 3;
  iVar9 = -1;
  iVar3 = FUN_1805b4ba0(param_1,local_90,1);
  if (((iVar3 == 1) && (-1 < (int)local_88)) &&
     (*(uint *)(lVar1 + 0x28) = local_88, local_88 <= (uint)(piVar2[4] - *piVar2) / 0x14)) {
    if (local_88 != 0) {
      local_a0 = local_98;
      local_a8 = 0;
      uVar4 = FUN_18057ac40(*param_1,0x14,0);
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      if (local_98[0] != 0) {
      }
    }
    lVar8 = -0x14;
LAB_1805b4a50:
    do {
      plVar10 = (longlong *)param_1[1];
      do {
        if ((int)plVar10[3] < 2) {
          FUN_1805b4f30(plVar10);
        }
        *(undefined4 *)(plVar10 + 3) = 0;
        uVar5 = FUN_1805b4eb0(plVar10);
        if (uVar5 != 0) {
          lVar6 = ~uVar5 + *plVar10;
          goto LAB_1805b4a95;
        }
      } while (((int)plVar10[3] < 3) && (1 < (int)plVar10[3]));
      lVar6 = 0;
LAB_1805b4a95:
      if (uVar5 == 0) {
      }
      iVar3 = FUN_1805b5010(uVar5,lVar6);
      if (((iVar3 == 0x14) || (iVar3 == 0x15)) || (iVar3 == 0x17)) {
        if (iVar9 + 1 == *(int *)(lVar1 + 0x28)) {
        }
        *(int *)(lVar1 + 0x28) = iVar9 + 1;
      }
      if (iVar3 == 0x38) {
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 0x14;
        if (*(int *)(lVar1 + 0x28) <= iVar9) {
        }
        local_78[0] = 3;
        local_68 = 2;
        puVar7 = (undefined4 *)(*(longlong *)(lVar1 + 0x20) + lVar8);
        local_58 = 2;
        local_48 = 2;
        local_38 = 2;
        iVar3 = FUN_1805b4ba0(param_1,local_78,5);
        if (iVar3 != 5) {
        }
        *puVar7 = local_70;
        puVar7[1] = local_60;
        puVar7[2] = local_50;
        puVar7[3] = local_40;
        puVar7[4] = local_30;
        goto LAB_1805b4a50;
      }
    } while (iVar3 == 0x4b);
  }
}



