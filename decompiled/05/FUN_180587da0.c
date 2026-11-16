// FUN_180587da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587da0 */

undefined8 FUN_180587da0(undefined8 param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_180595230();
  if (((int)uVar1 == 0) && (uVar2 = 0, param_2 != 0)) {
    while (*param_3 == 0) {
      uVar2 = uVar2 + 1;
      param_3 = param_3 + 1;
      if (param_2 <= uVar2) {
        return uVar1;
      }
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



