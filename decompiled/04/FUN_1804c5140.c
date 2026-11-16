// FUN_1804c5140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c5140 */

bool FUN_1804c5140(int param_1,int param_2)

{
  int *piVar1;
  
  if ((((param_1 - 0x200U < 0x9b) || (param_1 == 0x1000)) || (param_1 == 0x2000)) ||
     ((param_1 == 0x4000 || (param_1 == 0x8000)))) {
    if ((*(char *)(DAT_180bb8ae8 + 0x1e74) == '\0') ||
       ((param_2 == *(int *)(DAT_180bb8ae8 + 0x1550) || (param_2 == 0)))) {
      piVar1 = (int *)FUN_1804af210(DAT_180bb8ae8,param_1);
      if (param_2 == 0) {
        return (char)piVar1[2] == '\0';
      }
    }
    else {
      if (param_1 - 0x200U < 0x78) {
        return false;
      }
      piVar1 = (int *)FUN_1804af210(DAT_180bb8ae8,param_1);
    }
    if (*piVar1 != param_2) {
      if ((char)piVar1[2] == '\0') {
        return *piVar1 == -1;
      }
      return false;
    }
  }
  return true;
}



