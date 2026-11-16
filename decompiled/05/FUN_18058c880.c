// FUN_18058c880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c880 */

undefined8 FUN_18058c880(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_1805788b0(lVar1,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_180577bf0(lVar1,param_4);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = 0;
    }
  }
  return uVar2;
}



