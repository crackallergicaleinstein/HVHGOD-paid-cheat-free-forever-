// FUN_18041d110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041d110 */

undefined4 FUN_18041d110(void)

{
  BOOLEAN BVar1;
  ULONG UVar2;
  
  if ((DAT_180c7d890 != (PVOID)0x0) &&
     (UVar2 = RemoveVectoredExceptionHandler(DAT_180c7d890), UVar2 == 0)) {
    return 0;
  }
  DAT_180c7d890 = (PVOID)0x0;
  if ((DAT_180c7d8a0 == (PRUNTIME_FUNCTION)0x0) ||
     (BVar1 = RtlDeleteFunctionTable(DAT_180c7d8a0), BVar1 != '\0')) {
    DAT_180c7d8a0 = (PRUNTIME_FUNCTION)0x0;
    DAT_180c7d8a8 = 0;
    DAT_180c7d898 = 0;
    DAT_180c7d8b0 = 0;
    return 1;
  }
  return 0;
}



