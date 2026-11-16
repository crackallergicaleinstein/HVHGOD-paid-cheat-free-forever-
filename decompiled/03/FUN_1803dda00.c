// FUN_1803dda00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dda00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1803dda00(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  uVar6 = FUN_1803dce20(param_1,param_2 + 2);
  plVar11 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10 + lVar2);
  plVar4 = (longlong *)*plVar11;
  plVar10 = (longlong *)plVar11[1];
  plVar8 = param_2;
  while( true ) {
    plVar9 = (longlong *)*plVar8;
    FUN_180113710(plVar8 + 8);
    plVar5 = (longlong *)plVar8[7];
    if (plVar5 != (longlong *)0x0) {
      plVar8[7] = 0;
      (**(code **)(*plVar5 + 0x10))();
    }
    FUN_18015c010(plVar8 + 2);
    FUN_1804547d0(plVar8,0x60);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar10) break;
    plVar8 = plVar9;
    if (plVar9 == param_3) {
      if (plVar4 == param_2) {
LAB_1803ddae2:
        *plVar11 = (longlong)plVar9;
      }
LAB_1803ddae6:
      *puVar3 = plVar9;
      plVar9[1] = (longlong)puVar3;
      return param_3;
    }
  }
  if (plVar4 == param_2) {
    *plVar11 = (longlong)puVar1;
    puVar7 = puVar1;
  }
  else {
    puVar7 = puVar3;
  }
  plVar11[1] = (longlong)puVar7;
  while (plVar9 != param_3) {
    uVar6 = FUN_1803dce20();
    plVar11 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10 + lVar2);
    plVar4 = (longlong *)plVar11[1];
    plVar10 = plVar9;
    while( true ) {
      plVar9 = (longlong *)*plVar10;
      FUN_180113710(plVar10 + 8);
      plVar8 = (longlong *)plVar10[7];
      if (plVar8 != (longlong *)0x0) {
        plVar10[7] = 0;
        (**(code **)(*plVar8 + 0x10))();
      }
      FUN_18015c010(plVar10 + 2);
      FUN_1804547d0(plVar10,0x60);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar10 == plVar4) break;
      plVar10 = plVar9;
      if (plVar9 == param_3) goto LAB_1803ddae2;
    }
    *plVar11 = (longlong)puVar1;
    plVar11[1] = (longlong)puVar1;
  }
  goto LAB_1803ddae6;
}



