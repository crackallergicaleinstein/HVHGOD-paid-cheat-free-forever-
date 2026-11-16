// FUN_1805926c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805926c0 */

void FUN_1805926c0(longlong param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  longlong lVar10;
  int *piVar9;
  ulonglong uVar11;
  
  puVar2 = *(uint **)(param_1 + 0x408);
  uVar7 = param_2;
  if (*puVar2 < param_2) {
    uVar7 = *puVar2;
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    if ((uVar7 < 4) || ((param_4 <= param_3 + (uVar7 - 1) && (param_3 <= param_4 + (uVar7 - 1))))) {
      uVar11 = (ulonglong)uVar7;
      piVar9 = param_4;
      do {
        *piVar9 = *(int *)((longlong)piVar9 + ((longlong)param_3 - (longlong)param_4));
        piVar9 = piVar9 + 1;
        uVar11 = uVar11 - 1;
        uVar6 = uVar7;
      } while (uVar11 != 0);
    }
    else {
      FUN_18063aed0(param_4,param_3,(ulonglong)uVar7 << 2);
      do {
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
  }
  if (uVar6 < param_2) {
    FUN_18063ab10(param_4 + uVar6,0,(ulonglong)(param_2 - uVar6) << 2);
  }
  if (((*(undefined8 **)(puVar2 + 0xe) == (undefined8 *)0x0) ||
      (puVar8 = (ushort *)**(undefined8 **)(puVar2 + 0xe), puVar8 == (ushort *)0x0)) || (uVar7 == 0)
     ) {
    lVar10 = *(longlong *)(*(longlong *)(puVar2 + 6) + 0x10);
    if (uVar7 == 0) {
      return;
    }
  }
  else {
    uVar11 = (ulonglong)uVar7;
    piVar9 = param_4;
    do {
      uVar6 = 1;
      if (1 < *puVar8) {
        lVar10 = *(longlong *)(puVar8 + 4);
        do {
          iVar3 = *(int *)(lVar10 + 4 + (ulonglong)uVar6 * 8);
          if (*piVar9 < iVar3) {
            lVar1 = (ulonglong)(uVar6 - 1) * 8;
            iVar3 = FUN_1805753e0(*piVar9 - *(int *)(lVar10 + 4 + (ulonglong)(uVar6 - 1) * 8),
                                  *(int *)(lVar10 + (ulonglong)uVar6 * 8) - *(int *)(lVar10 + lVar1)
                                  ,iVar3 - *(int *)(lVar10 + 4 + lVar1));
            *piVar9 = iVar3 + *(int *)(lVar1 + *(longlong *)(puVar8 + 4));
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *puVar8);
      }
      piVar9 = piVar9 + 1;
      puVar8 = puVar8 + 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    lVar10 = *(longlong *)(*(longlong *)(puVar2 + 6) + 0x10);
  }
  piVar9 = (int *)(lVar10 + 0xc);
  uVar11 = (ulonglong)uVar7;
  do {
    iVar3 = *param_4;
    iVar5 = *piVar9;
    if (iVar3 < 0) {
      iVar4 = iVar5 - piVar9[-1];
LAB_18059285b:
      iVar5 = (int)((ulonglong)
                    ((longlong)iVar4 * (longlong)iVar3 + 0x8000 +
                    ((longlong)iVar4 * (longlong)iVar3 >> 0x3f)) >> 0x10) + iVar5;
    }
    else if (0 < iVar3) {
      iVar4 = piVar9[1] - iVar5;
      goto LAB_18059285b;
    }
    *param_4 = iVar5;
    piVar9 = piVar9 + 8;
    param_4 = param_4 + 1;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      return;
    }
  } while( true );
}



