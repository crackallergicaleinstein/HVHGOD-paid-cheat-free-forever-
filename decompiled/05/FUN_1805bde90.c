// FUN_1805bde90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bde90 */

int FUN_1805bde90(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = uVar1 & 0x7fffffff;
  uVar4 = uVar2 & 0x7fffffff;
  if (uVar3 == uVar4) {
    if (uVar1 <= uVar2) {
      if (uVar1 < uVar2) {
        return -1;
      }
      return 0;
    }
  }
  else if (uVar3 <= uVar4) {
    return -(uint)(uVar3 < uVar4);
  }
  return 1;
}



