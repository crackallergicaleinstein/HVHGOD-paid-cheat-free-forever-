// FUN_18059e6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e6b0 */

undefined8 FUN_18059e6b0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 0x660) == 0xffff) {
    uVar2 = 6;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      lVar3 = *(longlong *)(lVar1 + 0x10f0);
      if (lVar3 == 0) {
        lVar3 = FUN_1805a0c60(lVar1);
        *(longlong *)(lVar1 + 0x10f0) = lVar3;
      }
      *param_2 = lVar3;
    }
    if (param_3 != (longlong *)0x0) {
      lVar3 = *(longlong *)(lVar1 + 0x10f8);
      if (lVar3 == 0) {
        lVar3 = FUN_1805a0c60(lVar1,*(undefined4 *)(lVar1 + 0x664));
        *(longlong *)(lVar1 + 0x10f8) = lVar3;
      }
      *param_3 = lVar3;
    }
    uVar2 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0x668);
    }
  }
  return uVar2;
}



