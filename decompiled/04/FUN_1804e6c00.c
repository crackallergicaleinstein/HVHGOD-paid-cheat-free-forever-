// FUN_1804e6c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6c00 */

void FUN_1804e6c00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  lVar8 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x38) = param_2;
  iVar3 = *(int *)(param_2 + 0x24);
  iVar4 = *(int *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = param_2;
  *(float *)(param_1 + 0x54) = 1.0 / (float)iVar3;
  *(float *)(param_1 + 0x58) = 1.0 / (float)iVar4;
  plVar14 = *(longlong **)(param_1 + 0x98);
  lVar9 = *(longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x30);
  plVar1 = plVar14 + *(int *)(param_1 + 0x90);
  lVar15 = lVar9;
  lVar16 = lVar10;
  for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    lVar5 = *plVar14;
    if ((*(longlong *)(lVar5 + 0x70) == 0) || (*(char *)(*(longlong *)(lVar5 + 0x70) + 1) != '\0'))
    {
      puVar13 = *(undefined8 **)(lVar5 + 0x68);
      puVar2 = puVar13 + *(int *)(lVar5 + 0x60);
      for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
        piVar6 = (int *)*puVar13;
        if ((((0 < *piVar6) && (*(longlong *)(piVar6 + 0x1e) == lVar8)) &&
            (*(longlong *)(piVar6 + 0x1c) == lVar7)) &&
           ((*(longlong *)(piVar6 + 0x1e) != lVar10 || (*(longlong *)(piVar6 + 0x1c) != lVar9)))) {
          *(longlong *)(piVar6 + 0x1c) = lVar15;
          *(longlong *)(piVar6 + 0x1e) = lVar16;
          plVar11 = (longlong *)
                    (*(longlong *)(piVar6 + 0x2e) + -0x10 + (longlong)piVar6[0x2c] * 0x10);
          *plVar11 = lVar15;
          plVar11[1] = lVar16;
          FUN_1804d92c0(piVar6);
        }
        plVar11 = *(longlong **)(piVar6 + 0x2e);
        plVar12 = plVar11 + (longlong)piVar6[0x2c] * 2;
        for (; plVar11 != plVar12; plVar11 = plVar11 + 2) {
          if ((plVar11[1] == lVar8) && (*plVar11 == lVar7)) {
            *plVar11 = lVar15;
            plVar11[1] = lVar16;
          }
        }
      }
    }
  }
  return;
}



