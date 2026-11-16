// FUN_1801d4920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d4920 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801d4920(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  plVar11 = param_2 + 2;
  if (0xf < (ulonglong)param_2[5]) {
    plVar11 = (longlong *)*plVar11;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_2[4] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)plVar11 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_2[4]);
  }
  plVar12 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar7) * 0x10 + lVar2);
  plVar11 = (longlong *)*plVar12;
  plVar10 = (longlong *)plVar12[1];
  plVar8 = param_2;
  while( true ) {
    plVar9 = (longlong *)*plVar8;
    plVar4 = (longlong *)plVar8[6];
    if (plVar4 != (longlong *)0x0) {
      plVar8[6] = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_18015c010(plVar8 + 2);
    FUN_1804547d0(plVar8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar10) break;
    plVar8 = plVar9;
    if (plVar9 == param_3) {
      if (plVar11 == param_2) {
LAB_1801d4a37:
        *plVar12 = (longlong)plVar9;
      }
LAB_1801d4a3b:
      *puVar3 = plVar9;
      plVar9[1] = (longlong)puVar3;
      return param_3;
    }
  }
  if (plVar11 == param_2) {
    *plVar12 = (longlong)puVar1;
    puVar5 = puVar1;
  }
  else {
    puVar5 = puVar3;
  }
  plVar12[1] = (longlong)puVar5;
  while (plVar9 != param_3) {
    plVar11 = plVar9 + 2;
    if (0xf < (ulonglong)plVar9[5]) {
      plVar11 = (longlong *)*plVar11;
    }
    uVar6 = 0xcbf29ce484222325;
    uVar7 = 0;
    if (plVar9[4] != 0) {
      do {
        uVar6 = (uVar6 ^ *(byte *)((longlong)plVar11 + uVar7)) * 0x100000001b3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulonglong)plVar9[4]);
    }
    plVar12 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10 + lVar2);
    plVar11 = (longlong *)plVar12[1];
    plVar10 = plVar9;
    while( true ) {
      plVar9 = (longlong *)*plVar10;
      plVar8 = (longlong *)plVar10[6];
      if (plVar8 != (longlong *)0x0) {
        plVar10[6] = 0;
        (**(code **)(*plVar8 + 0x10))();
      }
      FUN_18015c010(plVar10 + 2);
      FUN_1804547d0(plVar10);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar10 == plVar11) break;
      plVar10 = plVar9;
      if (plVar9 == param_3) goto LAB_1801d4a37;
    }
    *plVar12 = (longlong)puVar1;
    plVar12[1] = (longlong)puVar1;
  }
  goto LAB_1801d4a3b;
}



