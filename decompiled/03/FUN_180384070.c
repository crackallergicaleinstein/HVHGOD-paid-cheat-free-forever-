// FUN_180384070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180384070 */

ulonglong FUN_180384070(longlong param_1)

{
  ULONGLONG UVar1;
  
  if ((((param_1 == DAT_180c6e510) && (DAT_180c70e48 != 0)) && (DAT_180c70b40 != '\0')) &&
     (((DAT_180bb8ad0 & 1) == 0 && (DAT_1808d9bd8 == '\x03')))) {
    UVar1 = GetTickCount64();
    if (UVar1 < DAT_180c70e48 >> 8) {
      return DAT_180c70e48 & 0xff;
    }
  }
  return 0;
}



