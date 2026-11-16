// FUN_180508390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180508390 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180508390(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (DAT_180bb8ae8 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(DAT_180bb8ae8 + 0xd0);
  }
  if (*plVar3 != 0) {
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0xc70);
    plVar1 = plVar2 + *(int *)(DAT_180bb8ae8 + 0xc68);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*(short *)(*plVar2 + 0x5c) == 1) {
        FUN_180507d10();
      }
    }
    if ((longlong *)plVar3[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[9] + 0x10))();
      plVar3[9] = 0;
    }
    if ((longlong *)plVar3[10] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[10] + 0x10))();
      plVar3[10] = 0;
    }
    if ((longlong *)plVar3[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[4] + 0x10))();
      plVar3[4] = 0;
    }
    if ((longlong *)plVar3[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[3] + 0x10))();
      plVar3[3] = 0;
    }
    if ((longlong *)plVar3[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[0xc] + 0x10))();
      plVar3[0xc] = 0;
    }
    if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[0xd] + 0x10))();
      plVar3[0xd] = 0;
    }
    if ((longlong *)plVar3[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[0xb] + 0x10))();
      plVar3[0xb] = 0;
    }
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[8] + 0x10))();
      plVar3[8] = 0;
    }
    if ((longlong *)plVar3[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[7] + 0x10))();
      plVar3[7] = 0;
    }
    if ((longlong *)plVar3[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[6] + 0x10))();
      plVar3[6] = 0;
    }
    if ((longlong *)plVar3[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[5] + 0x10))();
      plVar3[5] = 0;
    }
  }
  return;
}



