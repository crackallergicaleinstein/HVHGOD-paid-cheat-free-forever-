// FUN_1804d9170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9170 */

void FUN_1804d9170(int *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == -8) && (*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x70) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x70) + 0xc48), lVar1 != 0)
     ) {
    param_2 = lVar1;
  }
  lVar1 = (longlong)*param_1 * 9 + -9;
  lVar2 = *(longlong *)(param_1 + 2) + lVar1 * 8;
  if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + lVar1 * 8) != 0) {
    FUN_1804d90c0();
    lVar2 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
  }
  *(longlong *)(lVar2 + 0x30) = param_2;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined4 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
  FUN_1804d90c0(param_1);
  return;
}



