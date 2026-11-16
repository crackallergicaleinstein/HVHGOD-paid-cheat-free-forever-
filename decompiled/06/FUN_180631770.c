// FUN_180631770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180631770 */

bool FUN_180631770(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 != 0) {
    if (iVar1 == 0x200) {
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 != 0x2d) {
        return true;
      }
    }
    else {
      if (iVar1 != 0x100) {
        return false;
      }
      if (param_4 != 0) {
        for (; *param_2 == '0'; param_2 = param_2 + 1) {
        }
        if (*param_2 == '\0') {
          return false;
        }
      }
      if (param_3 == 0x2d) {
        return true;
      }
    }
    return false;
  }
  if ('5' < *param_2) {
    return true;
  }
  if (*param_2 < '5') {
    return false;
  }
  pcVar2 = param_2;
  if (param_4 == 0) {
    return true;
  }
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 == '0');
  if (*pcVar2 != '\0') {
    return true;
  }
  if (param_2 == param_1) {
    return false;
  }
  return (bool)(param_2[-1] & 1);
}



