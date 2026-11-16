// FUN_1805745c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805745c0 */

undefined8 FUN_1805745c0(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if ((param_1 == (longlong *)0x0) || (param_2 == (code *)0x0)) {
    uVar2 = 6;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      do {
        lVar1 = *(longlong *)(lVar3 + 8);
        uVar2 = (*param_2)(lVar3,param_3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar3 = lVar1;
      } while (lVar1 != 0);
      return uVar2;
    }
  }
  return uVar2;
}



