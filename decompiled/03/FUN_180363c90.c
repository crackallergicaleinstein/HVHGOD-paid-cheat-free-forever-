// FUN_180363c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180363c90 */

void FUN_180363c90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar7 = *(int *)*param_1;
  if (0 < iVar7) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar9 = lVar9 + 8;
      puVar1 = (undefined8 *)(lVar10 + param_1[2]);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar2 = *(undefined8 *)(lVar10 + 0x20 + param_1[2]);
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x18) + lVar9);
      puVar8 = (undefined8 *)0x0;
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x10);
      }
      iVar11 = iVar11 + 1;
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8[4] = uVar2;
      iVar7 = *(int *)*param_1;
      lVar10 = lVar10 + 0x28;
    } while (iVar11 < iVar7);
  }
  *(int *)(*(longlong *)param_1[3] + 8) = iVar7;
  return;
}



