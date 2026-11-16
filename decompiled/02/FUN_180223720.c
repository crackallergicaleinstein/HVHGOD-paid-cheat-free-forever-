// FUN_180223720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180223720 */

bool FUN_180223720(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong local_28 [2];
  
  lVar9 = DAT_180cca0d0;
  bVar1 = true;
  if (DAT_180cca0d8 != 0) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    bVar2 = false;
    if (lVar9 + 0x528d0 != 0) {
      local_28[0] = 0;
      cVar5 = FUN_1804514f0(local_28,lVar9 + 0x528d0,8);
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    lVar9 = local_28[0];
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    lVar8 = 0;
    if (bVar2) {
      lVar8 = lVar9;
    }
    if (lVar8 == DAT_180cca0d8) {
      lVar9 = DAT_180cca0d8 + 0x10;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      bVar2 = false;
      if (lVar9 != 0) {
        local_28[0] = 0;
        cVar5 = FUN_1804514f0(local_28,lVar9,8);
        if (cVar5 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar7 = (int)local_28[0];
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      piVar4 = DAT_180cca028;
      iVar6 = 0;
      if (bVar2) {
        iVar6 = iVar7;
      }
      if (iVar6 == DAT_180cca110) {
        if (DAT_180cca020 != DAT_180cca028) {
          piVar10 = DAT_180cca020;
          lVar9 = local_28[0];
          do {
            iVar7 = *piVar10;
            if (((iVar7 == 2) || (iVar7 == 3)) && ((uint)piVar10[1] < 0x3a)) {
              lVar11 = DAT_180cca0d8 + 0x90 + (longlong)((iVar7 * 0x3a + piVar10[1]) * 0x10);
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              if (lVar11 == 0) {
                bVar2 = false;
              }
              else {
                local_28[0] = 0;
                cVar5 = FUN_1804514f0(local_28,lVar11,8);
                if (cVar5 == '\0') {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                  lVar9 = local_28[0];
                }
              }
            }
            else {
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              bVar2 = false;
            }
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            lVar8 = 0;
            if (bVar2) {
              lVar8 = lVar9;
            }
            iVar7 = FUN_1805f68d0(&DAT_180cc9e50);
            if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            plVar3 = DAT_180cca000;
            if (DAT_180cc9e9c == 0x7fffffff) {
              DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            for (; plVar3 != DAT_180cca008; plVar3 = plVar3 + 0x25) {
              if (*plVar3 == lVar8) {
                FUN_1805f68fc(&DAT_180cc9e50);
                cVar5 = FUN_18021b9b0();
                if (cVar5 == '\0') {
                  bVar1 = false;
                }
                goto LAB_18022392c;
              }
            }
            FUN_1805f68fc(&DAT_180cc9e50);
LAB_18022392c:
            piVar10 = piVar10 + 6;
          } while (piVar10 != piVar4);
          if ((bVar1) && (DAT_180cca020 != DAT_180cca028)) {
            DAT_180cca028 = DAT_180cca020;
          }
        }
        return bVar1;
      }
    }
  }
  return true;
}



