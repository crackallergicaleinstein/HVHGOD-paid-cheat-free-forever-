// FUN_18051f6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051f6f0 */

void FUN_18051f6f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  
  FUN_1805117c0(**(undefined8 **)*param_1);
  plVar5 = *(longlong **)param_1[1];
  lVar6 = *plVar5;
  if (*(longlong *)(lVar6 + 8) != *(longlong *)(lVar6 + 0x10)) {
    FUN_180488c60();
    lVar6 = *plVar5;
    puVar1 = *(undefined8 **)(lVar6 + 0x10);
    for (puVar8 = *(undefined8 **)(lVar6 + 8); puVar8 != puVar1; puVar8 = puVar8 + 1) {
      FUN_1805117c0(*puVar8);
    }
    FUN_180488f10();
  }
  if (*(int *)param_1[2] != 0) {
    return;
  }
  if (DAT_180cad2e0 != 1) {
    return;
  }
  lVar6 = **(longlong **)*param_1;
  uVar2 = *(ulonglong *)(lVar6 + 0x50);
  plVar5 = (longlong *)(lVar6 + 0x38);
  lVar3 = *(longlong *)(lVar6 + 0x48);
  plVar4 = plVar5;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*plVar5;
  }
  if (lVar3 == 10) {
    lVar7 = *plVar4 + -0x616d6164206e696d;
    if (lVar7 == 0) {
      lVar7 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x6567;
    }
    if (lVar7 == 0) goto LAB_18051f7f6;
  }
  if (0xf < uVar2) {
    plVar5 = (longlong *)*plVar5;
  }
  if (lVar3 != 10) {
    return;
  }
  lVar7 = *plVar5 + -0x6e61686320746968;
  if (lVar7 == 0) {
    lVar7 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x6563;
  }
  if (lVar7 != 0) {
    return;
  }
LAB_18051f7f6:
  plVar5 = (longlong *)(lVar6 + 0x38);
  if (0xf < uVar2) {
    plVar5 = (longlong *)*plVar5;
  }
  if (lVar3 == 10) {
    lVar6 = *plVar5 + -0x6e61686320746968;
    if (lVar6 == 0) {
      lVar6 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x6563;
    }
    bVar10 = lVar6 == 0;
  }
  else {
    bVar10 = false;
  }
  lVar6 = FUN_180509800(&DAT_180c7e1f0);
  uVar9 = 0x83;
  if (bVar10 != false) {
    uVar9 = 100;
  }
  FUN_18054ce10(lVar6,bVar10,lVar6 + (((ulonglong)bVar10 ^ 1) + 0x149) * 4,uVar9,uVar9);
  return;
}



