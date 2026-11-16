// FUN_180473260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180473260 */

void FUN_180473260(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int *piVar12;
  longlong *local_res8;
  
  plVar7 = DAT_180c62cd8;
  plVar2 = (longlong *)*DAT_180c62cd8;
  plVar3 = DAT_180c62cd8;
  do {
    DAT_180c62cd8 = plVar3;
    if (plVar2 == plVar7) {
      if (DAT_180c62ce0 != 0) {
        if (DAT_180c62ce0 < DAT_180c62d08 >> 3) {
          FUN_1802311d0(&DAT_180c62cd0,*plVar3,plVar3);
        }
        else {
          *(undefined8 *)plVar3[1] = 0;
          puVar5 = (undefined8 *)*plVar3;
          while (puVar5 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)*puVar5;
            FUN_1804547d0(puVar5,0x28);
            puVar5 = puVar4;
          }
          *DAT_180c62cd8 = (longlong)DAT_180c62cd8;
          DAT_180c62cd8[1] = (longlong)DAT_180c62cd8;
          DAT_180c62ce0 = 0;
          local_res8 = DAT_180c62cd8;
          FUN_1801aff60(DAT_180c62ce8,DAT_180c62cf0,&local_res8);
        }
      }
      return;
    }
    lVar9 = plVar2[3];
    if (lVar9 != 0) {
      *(short *)(lVar9 + 0x5c) = *(short *)(lVar9 + 0x5c) + -1;
      lVar6 = DAT_180bb8ae8;
      plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x2770);
      for (plVar8 = plVar3; plVar8 < plVar3 + *(int *)(DAT_180bb8ae8 + 0x2768); plVar8 = plVar8 + 1)
      {
        if (*plVar8 == lVar9) {
          lVar9 = (longlong)plVar8 - (longlong)plVar3 >> 3;
          FUN_18063aed0(plVar3 + lVar9,plVar3 + lVar9 + 1,
                        (*(int *)(DAT_180bb8ae8 + 0x2768) - lVar9) * 8 + -8);
          *(int *)(lVar6 + 0x2768) = *(int *)(lVar6 + 0x2768) + -1;
          break;
        }
      }
      lVar9 = plVar2[3];
      if (lVar9 != 0) {
        FUN_1804e26d0(lVar9);
        FUN_180473ca0(lVar9 + 0x48);
        lVar6 = DAT_180bb8ae8;
        if (DAT_180bb8ae8 != 0) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar12 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar12 != *piVar1) {
            iVar11 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar10 = (short)iVar11 + (short)(iVar11 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar10;
            piVar12 = (int *)(lVar6 + 0x2998 + (longlong)sVar10 * 8);
            *piVar12 = *piVar1;
            *(undefined4 *)(lVar6 + 0x299c + (longlong)sVar10 * 8) = 0;
          }
          *(short *)((longlong)piVar12 + 6) = *(short *)((longlong)piVar12 + 6) + 1;
          *(int *)(lVar6 + 0x2990) = *(int *)(lVar6 + 0x2990) + 1;
        }
        thunk_FUN_180621380(lVar9);
      }
    }
    plVar2 = (longlong *)*plVar2;
    plVar3 = DAT_180c62cd8;
  } while( true );
}



