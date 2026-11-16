// FUN_18027d6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027d6e0 */

ulonglong FUN_18027d6e0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    return (ulonglong)*(byte *)(param_1 + 4);
  }
  if (*param_1 == 1) {
    for (piVar1 = param_1 + 0xa6; piVar1 != param_1 + 0x514; piVar1 = piVar1 + 0xa2) {
      if ((char)*piVar1 != '\0') goto LAB_18027d743;
    }
  }
  else {
    piVar1 = param_1 + 0x514;
    if (piVar1 != param_1 + 0x20ec) {
      while ((char)*piVar1 == '\0') {
        piVar1 = piVar1 + 0xa2;
        if (piVar1 == param_1 + 0x20ec) {
          return (ulonglong)piVar1 & 0xffffffffffffff00;
        }
      }
LAB_18027d743:
      return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



