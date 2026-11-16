// FUN_1805fa1c4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa1c4 */

void FUN_1805fa1c4(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_180bad360 == (_struct_19)0x0) {
    QueryPerformanceFrequency(local_res8);
    DAT_180bad360 = local_res8[0].s;
  }
  return;
}



