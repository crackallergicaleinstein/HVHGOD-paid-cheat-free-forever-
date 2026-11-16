// FUN_180507d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180507d10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180507d10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)puVar2[1] + 0x10))();
    (**(code **)(*(longlong *)*puVar2 + 0x10))();
    lVar3 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar3 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(puVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  if ((*(char *)(param_1 + 0x5f) == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 4) = 2;
  }
  return;
}



