// FUN_1804c2c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2c30 */

int FUN_1804c2c30(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0.0) {
    return 1;
  }
  if (param_1 < param_2) {
    if (0.0 < param_4) {
      iVar1 = -1;
      if (param_3 <= param_1) {
        iVar2 = (int)((param_1 - param_3) / param_4);
      }
      else {
        iVar2 = -1;
      }
      if (param_3 <= param_2) {
        iVar1 = (int)((param_2 - param_3) / param_4);
      }
      return iVar1 - iVar2;
    }
    if ((param_1 < param_3) && (param_3 <= param_2)) {
      return 1;
    }
  }
  return 0;
}



