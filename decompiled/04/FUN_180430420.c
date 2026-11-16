// FUN_180430420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430420 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180430420(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  if (param_1[3] != param_1[4]) {
    param_1[4] = param_1[3];
  }
  if (param_1[6] != param_1[7]) {
    param_1[7] = param_1[6];
  }
  plVar1 = (longlong *)param_1[10];
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        *plVar3 = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    param_1[10] = param_1[9];
  }
  if (param_1[0xc] != param_1[0xd]) {
    param_1[0xd] = param_1[0xc];
  }
  if (param_1[0xf] != param_1[0x10]) {
    param_1[0x10] = param_1[0xf];
  }
  return;
}



