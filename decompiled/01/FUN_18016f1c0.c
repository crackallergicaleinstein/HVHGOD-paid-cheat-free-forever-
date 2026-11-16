// FUN_18016f1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016f1c0 */

undefined8 FUN_18016f1c0(HANDLE param_1)

{
  DAT_180bb904d = FUN_18016e9c0();
  if ((longlong)param_1 - 1U < 0xfffffffffffffffe) {
    CloseHandle(param_1);
  }
  return 0;
}



