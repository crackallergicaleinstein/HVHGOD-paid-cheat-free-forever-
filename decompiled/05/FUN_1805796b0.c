// FUN_1805796b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805796b0 */

void FUN_1805796b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x40));
        lVar2 = *(longlong *)(*plVar1 + 0x98);
        if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
          (**(code **)(plVar1[2] + 0x10))(plVar1);
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,plVar1);
        }
        iVar3 = iVar3 + 1;
        *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x40)) = 0;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



