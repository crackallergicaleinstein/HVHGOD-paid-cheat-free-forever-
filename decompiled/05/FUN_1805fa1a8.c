// FUN_1805fa1a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa1a8 */

LONGLONG FUN_1805fa1a8(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return local_res8[0].QuadPart;
}



