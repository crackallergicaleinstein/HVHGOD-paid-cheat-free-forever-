// FUN_18027e230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027e230 */

ulonglong FUN_18027e230(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    return (ulonglong)*(byte *)(param_1 + 4);
  }
  if (*param_1 == 1) {
    for (piVar1 = param_1 + 0x22; piVar1 != param_1 + 0xf4; piVar1 = piVar1 + 0x1e) {
      if ((char)*piVar1 != '\0') goto LAB_18027e288;
    }
  }
  else {
    piVar1 = param_1 + 0xf4;
    if (piVar1 != param_1 + 0x61c) {
      while ((char)*piVar1 == '\0') {
        piVar1 = piVar1 + 0x1e;
        if (piVar1 == param_1 + 0x61c) {
          return (ulonglong)piVar1 & 0xffffffffffffff00;
        }
      }
LAB_18027e288:
      return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



