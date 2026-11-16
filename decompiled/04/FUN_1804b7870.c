// FUN_1804b7870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7870 */

void FUN_1804b7870(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  
  lVar3 = DAT_180bb8ae8;
  iVar2 = *(int *)(DAT_180bb8ae8 + 0x1550);
  if (iVar2 != 0) {
    piVar1 = (int *)(DAT_180bb8ae8 + 0x1ec0);
    *(int *)(DAT_180bb8ae8 + 0x1584) = iVar2;
    iVar8 = *(int *)(lVar3 + 4);
    if (*piVar1 != iVar2) {
      iVar8 = *(int *)(lVar3 + 4) + 1;
    }
    *(int *)(lVar3 + 0x1588) = iVar8;
    *(undefined1 *)(lVar3 + 0x158c) = *(undefined1 *)(lVar3 + 0x1562);
    *(bool *)(lVar3 + 0x158d) = *(int *)(lVar3 + 0x1554) == iVar2;
    if (*(int *)(lVar3 + 0x24fc) == iVar2) {
      FUN_1804fb820();
    }
    if ((*(longlong *)(lVar3 + 0x14f0) != 0) &&
       (*(int *)(lVar3 + 0x1550) == *(int *)(*(longlong *)(lVar3 + 0x14f0) + 0x8c))) {
      if ((*(byte *)(lVar3 + 0x28cc) & 2) != 0) {
        FUN_1804cf3e0("SetActiveID() cancel MovingWindow\n");
      }
      *(undefined8 *)(DAT_180bb8ae8 + 0x14f0) = 0;
    }
  }
  iVar2 = *(int *)(lVar3 + 0x1550);
  *(bool *)(lVar3 + 0x155c) = iVar2 != param_1;
  if (iVar2 != param_1) {
    if ((*(byte *)(lVar3 + 0x28cc) & 2) != 0) {
      if (*(longlong *)(lVar3 + 0x1578) == 0) {
        ppuVar7 = &PTR_180700558;
      }
      else {
        ppuVar7 = *(undefined ***)(*(longlong *)(lVar3 + 0x1578) + 8);
      }
      if (param_2 == 0) {
        iVar8 = 0x14;
        ppuVar6 = &PTR_180700558;
      }
      else {
        ppuVar6 = *(undefined ***)(param_2 + 8);
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (*(char *)((longlong)ppuVar6 + lVar5) != '\0');
        iVar8 = 0x14 - (int)lVar5;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
      }
      FUN_1804cf3e0("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n",param_1,
                    ppuVar6,iVar8,&PTR_180700558,iVar2,ppuVar7);
    }
    *(undefined4 *)(lVar3 + 0x1558) = 0;
    *(undefined2 *)(lVar3 + 0x1561) = 0;
    *(undefined1 *)(lVar3 + 0x1565) = 0xff;
    if (param_1 != 0) {
      *(int *)(lVar3 + 0x1598) = param_1;
      *(undefined4 *)(lVar3 + 0x159c) = 0;
    }
  }
  *(int *)(lVar3 + 0x1550) = param_1;
  *(undefined2 *)(lVar3 + 0x155f) = 0;
  *(longlong *)(lVar3 + 0x1578) = param_2;
  *(undefined2 *)(lVar3 + 0x1563) = 0;
  *(undefined4 *)(lVar3 + 0x1568) = 0;
  if (param_1 != 0) {
    *(int *)(lVar3 + 0x1554) = param_1;
    if ((*(int *)(lVar3 + 0x2054) == param_1) || (uVar4 = 1, *(int *)(lVar3 + 0x220c) == param_1)) {
      uVar4 = *(undefined4 *)(lVar3 + 0x2090);
    }
    *(undefined4 *)(lVar3 + 0x1574) = uVar4;
  }
  *(undefined1 *)(lVar3 + 0x1e74) = 0;
  *(undefined4 *)(lVar3 + 0x1e70) = 0;
  return;
}



