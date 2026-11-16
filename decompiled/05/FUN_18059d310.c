// FUN_18059d310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059d310 */

undefined8 FUN_18059d310(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_180577980(*param_1);
  puVar4 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
  lVar9 = FUN_180573a00(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
  if (((lVar9 == 0) || (puVar4 == (undefined8 *)0x0)) ||
     (pcVar5 = (code *)*puVar4, pcVar5 == (code *)0x0)) {
    return 0;
  }
  lVar9 = (*pcVar5)(lVar9);
  if (lVar9 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(*param_1 + 0x3e0);
  iVar1 = *(int *)(lVar6 + 0x620);
  puVar4 = *(undefined8 **)param_1[7];
  (**(code **)(lVar9 + 8))(*puVar4,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
  uVar2 = *(uint *)(lVar6 + 0x8a8);
  while (uVar2 != 0) {
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar2 = uVar2 - 1;
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x8b0 + (ulonglong)uVar2 * 8) + 0x40);
    if (iVar1 == iVar3) {
      uVar8 = (undefined4)param_1[4];
    }
    else {
      uVar7 = FUN_1805753e0(uVar7,iVar1,iVar3);
      uVar8 = FUN_1805753e0((int)param_1[4],iVar1,iVar3);
    }
    (**(code **)(lVar9 + 8))(puVar4[(ulonglong)uVar2 + 1],uVar7,uVar8,0,0);
  }
  return 0;
}



