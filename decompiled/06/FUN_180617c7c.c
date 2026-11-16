// FUN_180617c7c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180617c7c */

char FUN_180617c7c(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_180617cde:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_180617cd6;
    }
LAB_180617c9c:
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return '\x01';
          }
          if (iVar2 == 2) {
            return '\x02';
          }
          iVar2 = iVar2 + -3;
          goto LAB_180617cb7;
        }
        goto LAB_180617d06;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_180617cb7:
      if (iVar2 == 0) goto LAB_180617d06;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_180617c9c;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_180617cde;
LAB_180617cd6:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_180617c9c;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        return '\b';
      }
      if (iVar2 == 8) {
        return '\b';
      }
      return '\0';
    }
LAB_180617d06:
    cVar1 = '\x04';
  }
  return cVar1;
}



