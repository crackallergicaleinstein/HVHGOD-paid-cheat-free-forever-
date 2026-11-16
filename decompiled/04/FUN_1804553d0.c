// FUN_1804553d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804553d0 */

longlong * FUN_1804553d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 local_68 [8];
  undefined8 *local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  
  lVar9 = (longlong)param_2 - (longlong)DAT_180c62c38;
  lVar4 = (longlong)DAT_180c62c40 - (longlong)DAT_180c62c38 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar8 = lVar4 + 1;
  uVar6 = DAT_180c62c48 - (longlong)DAT_180c62c38 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar8 = 0x1fffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  plVar5 = (longlong *)FUN_18015bca0(uVar8 * 8);
  plVar1 = plVar5 + (lVar9 >> 3);
  plVar7 = plVar1 + 1;
  local_60 = &DAT_180c62c38;
  lVar4 = *param_3;
  *plVar1 = lVar4;
  local_58 = plVar5;
  local_50 = uVar8;
  local_48 = plVar7;
  local_40 = plVar7;
  if (lVar4 != 0) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_1804551e0(local_68,lVar4,1);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
  plVar3 = DAT_180c62c40;
  plVar2 = DAT_180c62c38;
  if (param_2 == DAT_180c62c40) {
    for (; plVar7 = plVar5, plVar2 != plVar3; plVar2 = plVar2 + 1) {
      *plVar7 = *plVar2;
      *plVar2 = 0;
      plVar5 = plVar7 + 1;
    }
  }
  else {
    for (; plVar2 != param_2; plVar2 = plVar2 + 1) {
      *plVar5 = *plVar2;
      *plVar2 = 0;
      plVar5 = plVar5 + 1;
    }
    FUN_1804555b0(plVar5,plVar5);
    plVar5 = DAT_180c62c40;
    for (; param_2 != plVar5; param_2 = param_2 + 1) {
      *plVar7 = *param_2;
      *param_2 = 0;
      plVar7 = plVar7 + 1;
    }
  }
  FUN_1804555b0(plVar7,plVar7);
  FUN_180455620();
  return plVar1;
}



