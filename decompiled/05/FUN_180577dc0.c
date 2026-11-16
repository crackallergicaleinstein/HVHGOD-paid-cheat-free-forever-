// FUN_180577dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577dc0 */

void FUN_180577dc0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))();
    }
    if (param_2 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    }
  }
  return;
}



