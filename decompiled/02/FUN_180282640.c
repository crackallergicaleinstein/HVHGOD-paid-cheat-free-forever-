// FUN_180282640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180282640 */

ulonglong FUN_180282640(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    return (ulonglong)*(byte *)(param_1 + 4);
  }
  if (*param_1 == 1) {
    for (piVar1 = param_1 + 0x98; piVar1 != param_1 + 0x4a4; piVar1 = piVar1 + 0x94) {
      if ((char)*piVar1 != '\0') goto LAB_1802826a3;
    }
  }
  else {
    piVar1 = param_1 + 0x4a4;
    if (piVar1 != param_1 + 0x1e14) {
      while ((char)*piVar1 == '\0') {
        piVar1 = piVar1 + 0x94;
        if (piVar1 == param_1 + 0x1e14) {
          return (ulonglong)piVar1 & 0xffffffffffffff00;
        }
      }
LAB_1802826a3:
      return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



