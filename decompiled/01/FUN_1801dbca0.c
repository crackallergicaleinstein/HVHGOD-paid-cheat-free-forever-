// FUN_1801dbca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dbca0 */

void FUN_1801dbca0(longlong *param_1,char param_2)

{
  int iVar1;
  
  if (param_2 < '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Invalid type specification.");
  }
  iVar1 = 0;
  switch(param_2) {
  case '\0':
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Invalid presentation type specifier");
  case '?':
    iVar1 = 6;
    break;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    iVar1 = 2;
    break;
  case 'B':
  case 'X':
  case 'b':
  case 'd':
  case 'o':
  case 'x':
    iVar1 = 1;
    break;
  case 'P':
  case 'p':
    iVar1 = 4;
    break;
  case 'c':
    iVar1 = 5;
    break;
  case 's':
    iVar1 = 3;
  }
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else if ((iVar1 - 1U & 0xfffffffb) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Invalid presentation type for integer");
    }
    break;
  case '\x05':
    if (iVar1 != 0) {
      if ((iVar1 - 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Invalid presentation type for bool");
      }
      break;
    }
    goto LAB_1801dbdd8;
  case '\x06':
    if (iVar1 == 0) {
      iVar1 = 5;
    }
    else if (((iVar1 - 1U & 0xfffffffa) != 0) || (iVar1 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Invalid presentation type for char");
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    if (iVar1 == 0) {
      iVar1 = 2;
    }
    else if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Invalid presentation type for floating-point");
    }
    break;
  case '\n':
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    else if (iVar1 != 4) {
                    /* WARNING: Subroutine does not return */
      FUN_1801e6400("Invalid presentation type for pointer");
    }
    break;
  case '\v':
  case '\f':
    if (iVar1 != 0) {
      if ((iVar1 != 3) && (iVar1 != 6)) {
                    /* WARNING: Subroutine does not return */
        FUN_1801e6400("Invalid presentation type for string");
      }
      break;
    }
LAB_1801dbdd8:
    iVar1 = 3;
  }
  if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (1 < iVar1 - 1U)) {
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Hash/sign modifier requires an arithmetic presentation type");
  }
  if ((*(char *)((longlong)param_1 + 0x1a) != '\0') &&
     (((iVar1 - 1U & 0xfffffffc) != 0 || (iVar1 == 3)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1801e6400("Zero modifier requires an arithmetic or pointer presentation type");
  }
  *(char *)(*param_1 + 8) = param_2;
  return;
}



