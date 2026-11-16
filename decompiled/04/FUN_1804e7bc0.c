// FUN_1804e7bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7bc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e7bc0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(param_1 + 0x70);
  puVar2 = puVar9 + *(int *)(param_1 + 0x68);
  for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
    FUN_1804e5a80(param_1,*puVar9);
  }
  if (((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
     (pcVar3 = *(code **)(*(longlong *)(param_1 + 0xa8) + 0x10), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    FUN_180473ca0(lVar4 + 0xd8);
    FUN_1804eb8c0(lVar4 + 0xc0);
    FUN_180473ca0(lVar4 + 0x80);
    FUN_180473ca0(lVar4 + 0x70);
    FUN_180473ca0(lVar4 + 0x60);
    FUN_180473ca0(lVar4 + 0x50);
    lVar5 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar8 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar8 != *piVar1) {
        iVar7 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar6;
        piVar8 = (int *)(lVar5 + ((longlong)sVar6 + 0x533) * 8);
        *piVar8 = *piVar1;
        piVar8[1] = 0;
      }
      *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
      piVar1 = (int *)(lVar5 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar4);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



