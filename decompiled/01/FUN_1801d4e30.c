// FUN_1801d4e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d4e30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801d4e30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  
  lVar3 = *param_1;
  lVar6 = param_1[1] - lVar3 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar9 = param_1[2] - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar10 = 0x1fffffffffffffff;
  }
  else {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar10 = uVar1;
    if (uVar1 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  plVar7 = (longlong *)FUN_18015bca0(uVar10 * 8);
  plVar2 = plVar7 + ((longlong)param_2 - lVar3 >> 3);
  plVar11 = plVar2 + 1;
  param_3 = (longlong *)*param_3;
  *plVar2 = (longlong)param_3;
  local_68 = param_1;
  local_58 = uVar10;
  local_48 = plVar11;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  plVar4 = (longlong *)param_1[1];
  plVar8 = (longlong *)*param_1;
  plVar5 = plVar7;
  if (param_2 == plVar4) {
    for (; local_50 = plVar2, plVar8 != plVar4; plVar8 = plVar8 + 1) {
      *plVar5 = 0;
      if (plVar5 != plVar8) {
        *plVar5 = *plVar8;
        *plVar8 = 0;
      }
      plVar5 = plVar5 + 1;
    }
  }
  else {
    for (; plVar8 != param_2; plVar8 = plVar8 + 1) {
      *plVar5 = 0;
      if (plVar5 != plVar8) {
        *plVar5 = *plVar8;
        *plVar8 = 0;
      }
      plVar5 = plVar5 + 1;
    }
    plVar4 = (longlong *)param_1[1];
    for (; local_50 = plVar7, param_2 != plVar4; param_2 = param_2 + 1) {
      *plVar11 = 0;
      if (plVar11 != param_2) {
        *plVar11 = *param_2;
        *param_2 = 0;
      }
      plVar11 = plVar11 + 1;
    }
  }
  local_60 = 0;
  FUN_1801d5780(param_1,plVar7,uVar1,uVar10);
  FUN_1801d56d0(&local_68);
  return plVar2;
}



