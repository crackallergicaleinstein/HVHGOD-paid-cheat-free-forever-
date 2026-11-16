// FUN_180364c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364c80 */

undefined8 FUN_180364c80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  cVar7 = FUN_180363d10();
  if ((cVar7 != '\0') && (cVar7 = FUN_180364060(param_2), cVar7 != '\0')) {
    return 1;
  }
  iVar10 = 0;
  iVar8 = *(int *)*param_3;
  if (0 < iVar8) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      puVar1 = (undefined8 *)(param_3[2] + lVar12);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar2 = *(undefined8 *)(param_3[2] + 0x20 + lVar12);
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)param_3[1] + 0x18) + 8 + lVar11);
      puVar9 = (undefined8 *)0x0;
      if (lVar3 != 0) {
        puVar9 = (undefined8 *)(lVar3 + 0x10);
      }
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar9[4] = uVar2;
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 0x28;
      lVar11 = lVar11 + 8;
      iVar8 = *(int *)*param_3;
    } while (iVar10 < iVar8);
  }
  *(int *)(*(longlong *)param_3[3] + 8) = iVar8;
  return 0;
}



