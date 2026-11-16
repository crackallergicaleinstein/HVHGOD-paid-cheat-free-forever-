// FUN_180591130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180591130 */

void FUN_180591130(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_18058c4a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x200);
    uVar2 = FUN_18058a170(param_1);
    uVar2 = FUN_180573310(param_3,uVar2);
    *(undefined4 *)(lVar1 + (param_2 & 0xffffffff) * 4) = uVar2;
  }
  return;
}



