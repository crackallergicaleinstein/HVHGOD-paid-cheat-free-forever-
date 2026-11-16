// FUN_18057a400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a400 */

void FUN_18057a400(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (*(uint *)(param_1 + 4) != 0) {
      uVar2 = (ulonglong)*(uint *)(param_1 + 4);
      do {
        if (*plVar1 != 0) {
          (**(code **)(param_2 + 0x10))(param_2);
        }
        *plVar1 = 0;
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(longlong *)(param_1 + 0x20) = 0;
  }
  return;
}



