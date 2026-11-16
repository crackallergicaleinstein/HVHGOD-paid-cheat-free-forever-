// FUN_180353de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353de0 */

void FUN_180353de0(char *param_1)

{
  DWORD DVar1;
  
  if ((*param_1 != '\0') && (DAT_180bbeab9 != '\0')) {
    DVar1 = GetCurrentThreadId();
    if (DAT_180bda160 == DVar1) {
      DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
      DAT_180bda15c = 0;
      DAT_180bbeab9 = '\0';
      DAT_180bda160 = 0;
    }
  }
  return;
}



