// FUN_1801f4b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f4b70 */

longlong * FUN_1801f4b70(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
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
  plVar10 = param_2 + 2;
  if (7 < (ulonglong)param_2[5]) {
    plVar10 = (longlong *)*plVar10;
  }
  uVar6 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_2[4] * 2 != 0) {
    do {
      uVar6 = (uVar6 ^ *(byte *)((longlong)plVar10 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(param_2[4] * 2));
  }
  plVar11 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10 + lVar2);
  plVar10 = (longlong *)*plVar11;
  plVar9 = (longlong *)plVar11[1];
  plVar7 = param_2;
  do {
    plVar8 = (longlong *)*plVar7;
    FUN_18015b930(plVar7 + 2);
    FUN_1804547d0(plVar7);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar7 == plVar9) {
      if (plVar10 == param_2) {
        *plVar11 = (longlong)puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar4 = puVar3;
      }
      plVar11[1] = (longlong)puVar4;
      while (plVar8 != param_3) {
        plVar10 = plVar8 + 2;
        if (7 < (ulonglong)plVar8[5]) {
          plVar10 = (longlong *)*plVar10;
        }
        uVar5 = 0xcbf29ce484222325;
        uVar6 = 0;
        if (plVar8[4] * 2 != 0) {
          do {
            uVar5 = (uVar5 ^ *(byte *)((longlong)plVar10 + uVar6)) * 0x100000001b3;
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulonglong)(plVar8[4] * 2));
        }
        plVar11 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10 + lVar2);
        plVar10 = (longlong *)plVar11[1];
        plVar9 = plVar8;
        while( true ) {
          plVar8 = (longlong *)*plVar9;
          FUN_18015b930(plVar9 + 2);
          FUN_1804547d0(plVar9);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar10) break;
          plVar9 = plVar8;
          if (plVar8 == param_3) goto LAB_1801f4c54;
        }
        *plVar11 = (longlong)puVar1;
        plVar11[1] = (longlong)puVar1;
      }
      goto LAB_1801f4c58;
    }
    plVar7 = plVar8;
  } while (plVar8 != param_3);
  if (plVar10 == param_2) {
LAB_1801f4c54:
    *plVar11 = (longlong)plVar8;
  }
LAB_1801f4c58:
  *puVar3 = plVar8;
  plVar8[1] = (longlong)puVar3;
  return param_3;
}



