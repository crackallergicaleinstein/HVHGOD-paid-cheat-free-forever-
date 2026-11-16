// FUN_1805734f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805734f0 */

undefined8 FUN_1805734f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + -1;
  if ((int)param_1[0x2e] < 1) {
    lVar1 = *param_1;
    uVar9 = 0;
    uVar7 = 0;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      do {
        puVar2 = (undefined8 *)param_1[(ulonglong)uVar9 + 3];
        pbVar3 = (byte *)*puVar2;
        iVar5 = strcmp(*(char **)(pbVar3 + 8),"type42");
        if ((iVar5 == 0) && ((*pbVar3 & 1) != 0)) {
          lVar4 = puVar2[4];
          while (lVar4 != 0) {
            FUN_180573380(*(undefined8 *)(lVar4 + 0x10));
            lVar4 = puVar2[4];
          }
        }
        uVar7 = *(uint *)((longlong)param_1 + 0x14);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    uVar10 = 0;
    uVar9 = 0;
    if (uVar7 != 0) {
      do {
        puVar2 = (undefined8 *)param_1[(ulonglong)uVar10 + 3];
        if ((*(byte *)*puVar2 & 1) != 0) {
          lVar4 = puVar2[4];
          while (lVar4 != 0) {
            FUN_180573380(*(undefined8 *)(lVar4 + 0x10));
            lVar4 = puVar2[4];
          }
        }
        uVar9 = *(uint *)((longlong)param_1 + 0x14);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
    while (uVar9 != 0) {
      lVar4 = param_1[(ulonglong)(uVar9 - 1) + 3];
      if (lVar4 != 0) {
        plVar11 = param_1 + 3;
        plVar8 = plVar11 + uVar9;
        if (plVar11 < plVar8) {
LAB_180573610:
          if (*plVar11 != lVar4) goto code_r0x000180573615;
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          plVar8 = plVar8 + -1;
          if (plVar11 < plVar8) {
            plVar12 = plVar11;
            for (lVar6 = ((ulonglong)((longlong)plVar8 + (-1 - (longlong)plVar11)) >> 3) + 1;
                plVar11 = plVar11 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
              *plVar12 = *plVar11;
              plVar12 = plVar12 + 1;
            }
          }
          *plVar8 = 0;
          FUN_180572c20(lVar4);
        }
      }
LAB_18057364e:
      uVar9 = *(uint *)((longlong)param_1 + 0x14);
    }
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  }
  return 0;
code_r0x000180573615:
  plVar11 = plVar11 + 1;
  if (plVar8 <= plVar11) goto LAB_18057364e;
  goto LAB_180573610;
}



