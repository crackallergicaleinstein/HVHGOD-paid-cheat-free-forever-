// FUN_180573460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573460 */

void FUN_180573460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
    lVar3 = *(longlong *)(lVar1 + 0x78);
    lVar5 = 0;
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      while (lVar4 = lVar3, lVar4 != param_1) {
        lVar3 = *(longlong *)(lVar4 + 0x10);
        lVar5 = lVar4;
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          return;
        }
      }
      if (lVar5 == 0) {
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar4 + 0x10);
      }
      else {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))();
      }
      FUN_180579d30(param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,param_1);
    }
  }
  return;
}



