// FUN_1801f4250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f4250 */

longlong * FUN_1801f4250(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong local_38;
  longlong lStack_30;
  undefined8 *local_28;
  longlong *local_20;
  
  puVar6 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] * 2 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar6 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(param_3[2] * 2));
  }
  FUN_1801f3be0(uVar5,&local_38,param_3,uVar7);
  if (lStack_30 != 0) {
    *param_2 = lStack_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180bbead0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_28 = &DAT_180bbeac8;
  local_20 = (longlong *)0x0;
  FUN_1801b7740(&local_28);
  plVar3 = local_20;
  FUN_1800f5370(local_20 + 2,param_3);
  *(undefined1 *)(plVar3 + 6) = 0;
  if (DAT_180bbeac0 < (float)(DAT_180bbead0 + 1) / (float)DAT_180bbeaf8) {
    uVar8 = FUN_1801f4ac0();
    plVar4 = (longlong *)FUN_1801f3be0(uVar8,&local_38,plVar3 + 2,uVar7);
    local_38 = *plVar4;
  }
  puVar6 = *(undefined8 **)(local_38 + 8);
  DAT_180bbead0 = DAT_180bbead0 + 1;
  *plVar3 = local_38;
  plVar3[1] = (longlong)puVar6;
  *puVar6 = plVar3;
  *(longlong **)(local_38 + 8) = plVar3;
  lVar2 = DAT_180bbead8;
  uVar7 = DAT_180bbeaf0 & uVar7;
  lVar1 = *(longlong *)(DAT_180bbead8 + uVar7 * 0x10);
  if (lVar1 == DAT_180bbeac8) {
    *(longlong **)(DAT_180bbead8 + uVar7 * 0x10) = plVar3;
  }
  else {
    if (lVar1 == local_38) {
      *(longlong **)(DAT_180bbead8 + uVar7 * 0x10) = plVar3;
      goto LAB_1801f4414;
    }
    if (*(undefined8 **)(DAT_180bbead8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1801f4414;
  }
  *(longlong **)(lVar2 + 8 + uVar7 * 0x10) = plVar3;
LAB_1801f4414:
  *param_2 = (longlong)plVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



