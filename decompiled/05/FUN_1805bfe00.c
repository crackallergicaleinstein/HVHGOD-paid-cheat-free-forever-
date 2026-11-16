// FUN_1805bfe00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bfe00 */

void FUN_1805bfe00(uint *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  lVar1 = (longlong)param_2 * 9 + 6;
  puVar4 = param_1 + lVar1 * 2;
  lVar6 = *(longlong *)(*(uint **)(param_1 + lVar1 * 2 + 0xe) + 2);
  uVar10 = **(uint **)(param_1 + lVar1 * 2 + 0xe);
  uVar8 = 0xc;
  if (param_2 == 0) {
    uVar8 = 3;
  }
  iVar3 = FUN_180573310(0x20,*(undefined4 *)
                              (((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10)));
  if (0xc < iVar3) {
    iVar3 = 0xc;
  }
  if (1 < uVar10) {
    uVar5 = *param_1;
    if (uVar5 == 0) goto LAB_1805bff3c;
    uVar7 = *(uint *)(lVar6 + 0x10);
    uVar9 = (ulonglong)(uVar10 - 1);
    lVar6 = lVar6 + 0x18;
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    do {
      uVar7 = *(uint *)(lVar6 + 0x10);
      if (*param_1 <= *(uint *)(lVar6 + 0x10)) {
        uVar7 = *param_1;
      }
      if (uVar5 < uVar7) {
        lVar1 = *(longlong *)(param_1 + 2);
        FUN_1805c0c30(puVar4,lVar6);
        FUN_1805c0d30(puVar4,(ulonglong)uVar5 * 0x40 + lVar1,uVar7 - uVar5,iVar3,uVar8);
      }
      uVar10 = uVar10 - 1;
      lVar6 = lVar6 + 0x18;
      uVar9 = uVar9 - 1;
      uVar5 = uVar7;
    } while (uVar9 != 0);
  }
  if (uVar10 == 1) {
    uVar10 = *param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    FUN_1805c0c30(puVar4,*(undefined8 *)(*(longlong *)(puVar4 + 0xe) + 8));
    FUN_1805c0d30(puVar4,uVar2,uVar10,iVar3,uVar8);
  }
LAB_1805bff3c:
  uVar10 = *param_1;
  if (uVar10 != 0) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 2) + 0x1c);
    do {
      if ((*(longlong *)(puVar4 + 3) != 0) && ((*puVar4 & 0x10) == 0)) {
        *puVar4 = *puVar4 | 0x10;
      }
      puVar4 = puVar4 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



