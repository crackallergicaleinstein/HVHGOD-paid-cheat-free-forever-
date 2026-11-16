// FUN_1805b46f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b46f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b46f0(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
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
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[2];
  piVar2 = (int *)param_1[1];
  local_90[0] = 3;
  iVar9 = -1;
  iVar3 = FUN_1805b4ba0(param_1,local_90,1);
  if (((iVar3 != 1) || ((int)local_88 < 0)) ||
     (*(uint *)(lVar1 + 0x38) = local_88, (uint)(piVar2[4] - *piVar2) / 10 < local_88)) {
switchD_1805b4836_caseD_17:
  }
  if (local_88 != 0) {
    local_a0 = local_98;
    local_a8 = 0;
    uVar6 = FUN_18057ac40(*param_1,0x10,0);
    *(undefined8 *)(lVar1 + 0x30) = uVar6;
    if (local_98[0] != 0) {
    }
  }
  lVar11 = -0x10;
  do {
    plVar10 = (longlong *)param_1[1];
    while( true ) {
      if ((int)plVar10[3] < 2) {
        FUN_1805b4f30(plVar10);
      }
      *(undefined4 *)(plVar10 + 3) = 0;
      uVar7 = FUN_1805b4eb0(plVar10);
      if (uVar7 != 0) break;
      if (2 < (int)plVar10[3]) {
      }
      if ((int)plVar10[3] < 2) {
      }
    }
    iVar3 = FUN_1805b5010(uVar7,~uVar7 + *plVar10);
    switch(iVar3) {
    case 0x14:
    case 0x15:
    case 0x16:
      iVar3 = *(int *)(lVar1 + 0x38);
      iVar9 = iVar9 + 1;
      if (iVar9 != iVar3) {
        *(int *)(lVar1 + 0x38) = iVar9;
        iVar3 = iVar9;
      }
      FUN_1806192c0(*(undefined8 *)(lVar1 + 0x30),iVar3,0x10,FUN_18059bbd0);
    default:
      goto switchD_1805b4836_caseD_17;
    case 0x22:
    case 0x24:
    case 0x25:
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 0x10;
      if (*(int *)(lVar1 + 0x38) <= iVar9) {
      }
      local_78[0] = 5;
      local_68 = 5;
      puVar8 = (undefined4 *)(*(longlong *)(lVar1 + 0x30) + lVar11);
      local_58 = 3;
      local_48 = 3;
      iVar4 = FUN_1805b4ba0(param_1,local_78,4);
      if (iVar4 < 3) {
      }
      *puVar8 = local_70;
      puVar8[1] = local_60;
      if (iVar3 == 0x25) {
        puVar8[2] = 0;
        puVar8[3] = local_50;
      }
      else {
        puVar8[2] = local_50;
        if ((iVar3 != 0x22) || (uVar5 = local_40, iVar4 != 4)) {
          uVar5 = 0;
        }
        puVar8[3] = uVar5;
      }
      break;
    case 0x4b:
      break;
    }
  } while( true );
}



