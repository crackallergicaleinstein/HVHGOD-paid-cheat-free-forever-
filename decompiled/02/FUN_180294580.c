// FUN_180294580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180294580 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180294580(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar10 = (undefined8 *)FUN_180299df0(*(undefined8 *)(param_1 + 0x10),puVar3);
  if (puVar10 != puVar3) {
    puVar12 = *(undefined8 **)(param_1 + 0x18);
    if (puVar3 != puVar12) {
      plVar13 = puVar10 + 5;
      lVar11 = (longlong)puVar3 - (longlong)puVar10;
      do {
        puVar3 = (undefined8 *)((longlong)plVar13 + lVar11 + -0x28);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        *puVar10 = *puVar3;
        puVar10[1] = uVar7;
        puVar10[2] = uVar8;
        puVar10[3] = uVar9;
        lVar4 = *(longlong *)((longlong)plVar13 + lVar11 + -8);
        lVar5 = *(longlong *)((longlong)plVar13 + lVar11);
        *(undefined8 *)((longlong)plVar13 + lVar11 + -8) = 0;
        *(undefined8 *)((longlong)plVar13 + lVar11) = 0;
        plVar13[-1] = lVar4;
        plVar6 = (longlong *)*plVar13;
        *plVar13 = lVar5;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        puVar10 = puVar10 + 6;
        plVar13 = plVar13 + 6;
      } while ((undefined8 *)(lVar11 + -0x28 + (longlong)plVar13) != puVar12);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    for (puVar12 = puVar10; puVar12 != puVar3; puVar12 = puVar12 + 6) {
      plVar13 = (longlong *)puVar12[5];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    *(undefined8 **)(param_1 + 0x18) = puVar10;
  }
  return;
}



