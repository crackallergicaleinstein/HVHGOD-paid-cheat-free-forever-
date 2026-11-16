// FUN_1804d0a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d0a80 */

void FUN_1804d0a80(int *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1[1] < param_2) {
    uVar4 = FUN_1804b8110((longlong)param_2 << 3);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_18063aed0(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
      lVar3 = DAT_180bb8ae8;
      lVar2 = *(longlong *)(param_1 + 2);
      if ((lVar2 != 0) && (DAT_180bb8ae8 != 0)) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar7 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar7 != *piVar1) {
          iVar6 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
          piVar7 = (int *)(lVar3 + ((longlong)sVar5 + 0x533) * 8);
          *piVar7 = *piVar1;
          piVar7[1] = 0;
        }
        *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
        piVar1 = (int *)(lVar3 + 0x2990);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_180621380(lVar2);
    }
    *(undefined8 *)(param_1 + 2) = uVar4;
    param_1[1] = param_2;
  }
  return;
}



