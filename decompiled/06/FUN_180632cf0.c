// FUN_180632cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180632cf0 */

undefined8 FUN_180632cf0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 & 0x1f) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_180632ec0();
  uVar2 = FUN_180632eb0(param_2 & 0x1f);
  *param_1 = uVar2 & uVar1;
  return 0;
}



