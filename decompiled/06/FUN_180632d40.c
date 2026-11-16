// FUN_180632d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180632d40 */

bool FUN_180632d40(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 & 0x1f) == 0) {
    return false;
  }
  uVar1 = FUN_180632eb0(param_2 & 0x1f);
  uVar2 = FUN_180632eb0(0x3f);
  uVar4 = *param_1;
  uVar3 = FUN_180632ec0();
  uVar1 = uVar3 & ~uVar1 | uVar2 & uVar4 & uVar1;
  FUN_180633050(uVar1);
  uVar1 = uVar1 & 0x1f;
  uVar4 = FUN_1806358e0(uVar1);
  return uVar4 != uVar1;
}



