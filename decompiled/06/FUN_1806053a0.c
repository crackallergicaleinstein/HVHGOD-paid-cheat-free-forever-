// FUN_1806053a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806053a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1806053a0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleW(L"kernel32.dll");
  DAT_180bb1980 = GetProcAddress(hModule,"GetSystemTimePreciseAsFileTime");
  _DAT_180bb1988 = GetProcAddress(hModule,"GetTempPath2W");
  return 0;
}



